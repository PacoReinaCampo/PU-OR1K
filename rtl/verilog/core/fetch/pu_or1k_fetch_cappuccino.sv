////////////////////////////////////////////////////////////////////////////////
//                                            __ _      _     _               //
//                                           / _(_)    | |   | |              //
//                __ _ _   _  ___  ___ _ __ | |_ _  ___| | __| |              //
//               / _` | | | |/ _ \/ _ \ '_ \|  _| |/ _ \ |/ _` |              //
//              | (_| | |_| |  __/  __/ | | | | | |  __/ | (_| |              //
//               \__, |\__,_|\___|\___|_| |_|_| |_|\___|_|\__,_|              //
//                  | |                                                       //
//                  |_|                                                       //
//                                                                            //
//                                                                            //
//              MPSoC-OR1K CPU                                                //
//              Processing Unit                                               //
//              Wishbone Bus Interface                                        //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

/* Copyright (c) 2015-2016 by the author(s)
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 * =============================================================================
 * Author(s):
 *   Paco Reina Campo <pacoreinacampo@queenfield.tech>
 */

`include "pu_or1k_defines.sv"

module pu_or1k_fetch_cappuccino #(
  parameter OPTION_OPERAND_WIDTH       = 32,
  parameter OPTION_RESET_PC            = {{(OPTION_OPERAND_WIDTH-13){1'b0}}, `OR1K_RESET_VECTOR, 8'd0},
  parameter OPTION_RF_ADDR_WIDTH       = 5,
  parameter FEATURE_INSTRUCTIONCACHE   = "NONE",
  parameter OPTION_ICACHE_BLOCK_WIDTH  = 5,
  parameter OPTION_ICACHE_SET_WIDTH    = 9,
  parameter OPTION_ICACHE_WAYS         = 2,
  parameter OPTION_ICACHE_LIMIT_WIDTH  = 32,
  parameter FEATURE_IMMU               = "NONE",
  parameter FEATURE_IMMU_HW_TLB_RELOAD = "NONE",
  parameter OPTION_IMMU_SET_WIDTH      = 6,
  parameter OPTION_IMMU_WAYS           = 1
)
  (
    input   clk,
    input   rst,

    // SPR interface
    input  [                    15:0] spr_bus_addr_i,
    input                             spr_bus_we_i,
    input                             spr_bus_stb_i,
    input  [OPTION_OPERAND_WIDTH-1:0] spr_bus_dat_i,
    output [OPTION_OPERAND_WIDTH-1:0] spr_bus_dat_ic_o,
    output                            spr_bus_ack_ic_o,
    output [OPTION_OPERAND_WIDTH-1:0] spr_bus_dat_immu_o,
    output                            spr_bus_ack_immu_o,

    input    ic_enable,
    input    immu_enable_i,
    input    supervisor_mode_i,
    output   ic_hit_o,

    // interface to ibus
    input                             ibus_err_i,
    input                             ibus_ack_i,
    input  [`OR1K_INSN_WIDTH    -1:0] ibus_dat_i,
    output                            ibus_req_o,
    output [OPTION_OPERAND_WIDTH-1:0] ibus_adr_o,
    output                            ibus_burst_o,

    // pipeline control input
    input   padv_i,
    input   padv_ctrl_i, // needed for immu spr

    // interface to decode unit
    output reg [OPTION_OPERAND_WIDTH-1:0] pc_decode_o,
    output reg [`OR1K_INSN_WIDTH    -1:0] decode_insn_o,
    output reg                            fetch_valid_o,
    output     [OPTION_RF_ADDR_WIDTH-1:0] fetch_rfa_adr_o,
    output     [OPTION_RF_ADDR_WIDTH-1:0] fetch_rfb_adr_o,
    output                                fetch_rf_adr_valid_o,

    // branch/jump indication
    input                            decode_branch_i,
    input [OPTION_OPERAND_WIDTH-1:0] decode_branch_target_i,
    input                            ctrl_branch_exception_i,
    input [OPTION_OPERAND_WIDTH-1:0] ctrl_branch_except_pc_i,
    input                            du_restart_i,
    input [OPTION_OPERAND_WIDTH-1:0] du_restart_pc_i,
    input                            decode_op_brcond_i,
    input                            branch_mispredict_i,
    input [OPTION_OPERAND_WIDTH-1:0] execute_mispredict_target_i,

    // pipeline flush input from control unit
    input pipeline_flush_i,

    // rfe instruction is being performed
    input doing_rfe_i,

    // instruction ibus error indication out
    output reg decode_except_ibus_err_o,

    // IMMU exceptions
    output reg decode_except_itlb_miss_o,
    output reg decode_except_ipagefault_o,

    output reg fetch_exception_taken_o
  );

  // registers
  reg [OPTION_OPERAND_WIDTH-1:0] pc_fetch;
  reg [OPTION_OPERAND_WIDTH-1:0] pc_addr;
  reg                            ctrl_branch_exception_r;

  wire   bus_access_done;
  wire   ctrl_branch_exception_edge;
  wire   stall_fetch_valid;
  wire   addr_valid;
  reg    flush;
  wire   flushing;

  reg nop_ack;

  reg                         imem_err;
  wire                        imem_ack;
  wire [`OR1K_INSN_WIDTH-1:0] imem_dat;

  wire                        ic_ack;
  wire [`OR1K_INSN_WIDTH-1:0] ic_dat;

  wire                            ic_refill;
  wire                            ic_refill_req;
  wire                            ic_refill_done;
  wire                            ic_invalidate;
  wire [OPTION_OPERAND_WIDTH-1:0] ic_addr;
  wire [OPTION_OPERAND_WIDTH-1:0] ic_addr_match;

  wire                            ic_access;


  wire [OPTION_OPERAND_WIDTH-1:0] immu_phys_addr;
  wire                            immu_cache_inhibit;
  wire                            pagefault;
  wire                            tlb_miss;
  wire                            except_itlb_miss;
  wire                            except_ipagefault;

  wire                            immu_busy;

  wire                            tlb_reload_req;
  reg                             tlb_reload_ack;
  wire [OPTION_OPERAND_WIDTH-1:0] tlb_reload_addr;
  reg  [OPTION_OPERAND_WIDTH-1:0] tlb_reload_data;
  wire                            tlb_reload_pagefault;
  wire                            tlb_reload_busy;

  reg    fetching_brcond;
  reg    fetching_mispredicted_branch;
  wire   mispredict_stall;

  reg    exception_while_tlb_reload;
  wire   except_ipagefault_clear;

  assign bus_access_done = (imem_ack | imem_err | nop_ack) & !immu_busy & !tlb_reload_busy;
  assign ctrl_branch_exception_edge = ctrl_branch_exception_i & !ctrl_branch_exception_r;

  /* used to keep fetch_valid_o high during stall */
  assign stall_fetch_valid = !padv_i & fetch_valid_o;

  assign addr_valid = bus_access_done & padv_i &
    !(except_itlb_miss | except_ipagefault) |
    decode_except_itlb_miss_o & ctrl_branch_exception_i |
    decode_except_ipagefault_o & ctrl_branch_exception_i |
    doing_rfe_i;

  assign except_itlb_miss = tlb_miss & immu_enable_i & bus_access_done &
    !mispredict_stall & !doing_rfe_i;
  assign except_ipagefault = pagefault & immu_enable_i & bus_access_done &
    !mispredict_stall & !doing_rfe_i |
    tlb_reload_pagefault;

  assign fetch_rfa_adr_o = imem_dat[`OR1K_RA_SELECT];
  assign fetch_rfb_adr_o = imem_dat[`OR1K_RB_SELECT];
  assign fetch_rf_adr_valid_o = bus_access_done & padv_i;

  // Signal to indicate that the ongoing bus access should be flushed
  always @(posedge clk `OR_ASYNC_RST) begin
    if (rst) begin
      flush <= 0;
    end else if (bus_access_done & padv_i | du_restart_i) begin
      flush <= 0;
    end else if (pipeline_flush_i)begin
      flush <= 1;
    end
  end

  // pipeline_flush_i comes on the same edge as branch_except_occur during
  // rfe, but on an edge later when an exception occurs, but we always need
  // to keep on flushing when the branch signal comes in.
  assign flushing = pipeline_flush_i | ctrl_branch_exception_edge | flush;

  // Branch misprediction stall logic
  always @(posedge clk `OR_ASYNC_RST) begin
    if (rst) begin
      fetching_brcond <= 0;
    end else if (pipeline_flush_i) begin
      fetching_brcond <= 0;
    end else if (decode_op_brcond_i & addr_valid) begin
      fetching_brcond <= 1;
    end else if (bus_access_done & padv_i | du_restart_i) begin
      fetching_brcond <= 0;
    end
  end

  always @(posedge clk `OR_ASYNC_RST) begin
    if (rst) begin
      fetching_mispredicted_branch <= 0;
    end else if (pipeline_flush_i) begin
      fetching_mispredicted_branch <= 0;
    end else if (bus_access_done & padv_i | du_restart_i) begin
      fetching_mispredicted_branch <= 0;
    end else if (fetching_brcond & branch_mispredict_i & padv_i) begin
      fetching_mispredicted_branch <= 1;
    end
  end

  assign mispredict_stall = fetching_mispredicted_branch |
    branch_mispredict_i & fetching_brcond;

  always @(posedge clk `OR_ASYNC_RST) begin
    if (rst) begin
      ctrl_branch_exception_r <= 1'b0;
    end else begin
      ctrl_branch_exception_r <= ctrl_branch_exception_i;
    end
  end

  // calculate address stage pc
  always @(*) begin
    if (rst) begin
      pc_addr = OPTION_RESET_PC;
    end else if (du_restart_i) begin
      pc_addr = du_restart_pc_i;
    end else if (ctrl_branch_exception_i & !fetch_exception_taken_o) begin
      pc_addr = ctrl_branch_except_pc_i;
    end else if (branch_mispredict_i | fetching_mispredicted_branch) begin
      pc_addr = execute_mispredict_target_i;
    end else if (decode_branch_i) begin
      pc_addr = decode_branch_target_i;
    end else begin
      pc_addr = pc_fetch + 4;
    end
  end


  // Register fetch pc from address stage
  always @(posedge clk `OR_ASYNC_RST) begin
    if (rst) begin
      pc_fetch <= OPTION_RESET_PC;
    end else if (addr_valid | du_restart_i) begin
      pc_fetch <= pc_addr;
    end
  end

  // fetch_exception_taken_o generation
  always @(posedge clk `OR_ASYNC_RST) begin
    if (rst) begin
      fetch_exception_taken_o <= 1'b0;
    end else if (fetch_exception_taken_o) begin
      fetch_exception_taken_o <= 1'b0;
    end else if (ctrl_branch_exception_i & bus_access_done & padv_i) begin
      fetch_exception_taken_o <= 1'b1;
    end else begin
      fetch_exception_taken_o <= 1'b0;
    end
  end

  // fetch_valid_o generation
  always @(posedge clk `OR_ASYNC_RST) begin
    if (rst) begin
      fetch_valid_o <= 1'b0;
    end else if (pipeline_flush_i) begin
      fetch_valid_o <= 1'b0;
    end else if (bus_access_done & padv_i & !mispredict_stall & !immu_busy & !tlb_reload_busy | stall_fetch_valid) begin
      fetch_valid_o <= 1'b1;
    end else begin
      fetch_valid_o <= 1'b0;
    end
  end

  // Register instruction coming in
  always @(posedge clk `OR_ASYNC_RST) begin
    if (rst) begin
      decode_insn_o <= {`OR1K_OPCODE_NOP,26'd0};
    end else if (imem_err | flushing) begin
      decode_insn_o <= {`OR1K_OPCODE_NOP,26'd0};
    end else if (bus_access_done & padv_i & !mispredict_stall) begin
      decode_insn_o <= imem_dat;
    end
  end

  // Register PC for later stages
  always @(posedge clk) begin
    if (bus_access_done & padv_i & !mispredict_stall) begin
      pc_decode_o <= pc_fetch;
    end
  end

  always @(posedge clk `OR_ASYNC_RST) begin
    if (rst) begin
      decode_except_ibus_err_o <= 0;
    end else if (du_restart_i) begin
      decode_except_ibus_err_o <= 0;
    end else if (imem_err) begin
      decode_except_ibus_err_o <= 1;
    end else if (decode_except_ibus_err_o & ctrl_branch_exception_i) begin
      decode_except_ibus_err_o <= 0;
    end
  end

  always @(posedge clk `OR_ASYNC_RST) begin
    if (rst) begin
      decode_except_itlb_miss_o <= 0;
    end else if (du_restart_i) begin
      decode_except_itlb_miss_o <= 0;
    end else if (tlb_reload_busy) begin
      decode_except_itlb_miss_o <= 0;
    end else if (except_itlb_miss) begin
      decode_except_itlb_miss_o <= 1;
    end else if (decode_except_itlb_miss_o & ctrl_branch_exception_i) begin
      decode_except_itlb_miss_o <= 0;
    end
  end

  assign except_ipagefault_clear = decode_except_ipagefault_o & ctrl_branch_exception_i;

  always @(posedge clk `OR_ASYNC_RST) begin
    if (rst) begin
      decode_except_ipagefault_o <= 0;
    end else if (du_restart_i) begin
      decode_except_ipagefault_o <= 0;
    end else if (except_ipagefault) begin
      decode_except_ipagefault_o <= 1;
    end else if (except_ipagefault_clear) begin
      decode_except_ipagefault_o <= 0;
    end
  end

  // Bus access logic
  localparam [2:0] IDLE       = 0;
  localparam [2:0] READ       = 1;
  localparam [2:0] TLB_RELOAD = 2;
  localparam [2:0] IC_REFILL  = 3;

  reg [2:0] state;

  reg  [OPTION_OPERAND_WIDTH-1:0] ibus_adr;
  wire [OPTION_OPERAND_WIDTH-1:0] next_ibus_adr;
  reg  [`OR1K_INSN_WIDTH    -1:0] ibus_dat;
  reg                             ibus_req;
  reg                             ibus_ack;

  wire ibus_access;

  // Under certain circumstances, there is a need to insert an nop
  // into the pipeline in order for it to move forward.
  // Here those conditions are handled and an acknowledged signal
  // is generated.

  always @(posedge clk `OR_ASYNC_RST) begin
    if (rst) begin
      nop_ack <= 0;
    end else begin
      nop_ack <= padv_i & !bus_access_done & !(ibus_req & ibus_access) &
      ((immu_enable_i & (tlb_miss | pagefault) &
        !tlb_reload_busy) |
       ctrl_branch_exception_edge & !tlb_reload_busy |
       exception_while_tlb_reload & !tlb_reload_busy |
       tlb_reload_pagefault |
       mispredict_stall);
    end
  end

  assign ibus_access = (!ic_access | tlb_reload_busy | ic_invalidate) &
    !ic_refill |
    (state != IDLE) & (state != IC_REFILL) |
    ibus_ack;
  assign imem_ack = ibus_access ? ibus_ack : ic_ack;
  assign imem_dat = (nop_ack | except_itlb_miss | except_ipagefault) ? {`OR1K_OPCODE_NOP,26'd0} :
                    ibus_access ? ibus_dat : ic_dat;
  assign ibus_adr_o = ibus_adr;
  assign ibus_req_o = ibus_req;
  assign ibus_burst_o = !ibus_access & ic_refill & !ic_refill_done;

  assign next_ibus_adr = (OPTION_ICACHE_BLOCK_WIDTH == 5) ?
                         {ibus_adr[31:5], ibus_adr[4:0] + 5'd4} : // 32 byte
                         {ibus_adr[31:4], ibus_adr[3:0] + 4'd4};  // 16 byte

  always @(posedge clk `OR_ASYNC_RST) begin
    if (rst) begin
      imem_err <= 0;
    end else begin
      imem_err <= ibus_err_i;
    end
  end

  always @(posedge clk) begin
    ibus_ack <= 0;
    exception_while_tlb_reload <= 0;
    tlb_reload_ack <= 0;

    case (state)
      IDLE: begin
        ibus_req <= 0;
        if (padv_i & ibus_access & !ibus_ack & !imem_err & !nop_ack) begin
          if (tlb_reload_req) begin
            ibus_adr <= tlb_reload_addr;
            ibus_req <= 1;
            state    <= TLB_RELOAD;
          end
          else if (immu_enable_i) begin
            ibus_adr <= immu_phys_addr;
            if (!tlb_miss & !pagefault & !immu_busy) begin
              ibus_req <= 1;
              state    <= READ;
            end
          end
          else if (!ctrl_branch_exception_i | doing_rfe_i) begin
            ibus_adr <= pc_fetch;
            ibus_req <= 1;
            state    <= READ;
          end
        end
        else if (ic_refill_req) begin
          ibus_adr <= ic_addr_match;
          ibus_req <= 1;
          state    <= IC_REFILL;
        end
      end

      IC_REFILL: begin
        ibus_req <= 1;
        if (ibus_ack_i) begin
          ibus_adr <= next_ibus_adr;
          if (ic_refill_done) begin
            ibus_req <= 0;
            state <= IDLE;
          end
        end

        if (ibus_err_i) begin
          ibus_req <= 0;
          state <= IDLE;
        end
      end

      READ: begin
        ibus_ack <= ibus_ack_i;
        ibus_dat <= ibus_dat_i;
        if (ibus_ack_i | ibus_err_i) begin
          ibus_req <= 0;
          state <= IDLE;
        end
      end

      TLB_RELOAD: begin
        if (ctrl_branch_exception_i) begin
          exception_while_tlb_reload <= 1;
        end

        ibus_adr        <= tlb_reload_addr;
        tlb_reload_data <= ibus_dat_i;
        tlb_reload_ack  <= ibus_ack_i & tlb_reload_req;

        if (!tlb_reload_req) begin
          state <= IDLE;
        end

        ibus_req <= tlb_reload_req;

        if (ibus_ack_i | tlb_reload_ack) begin
          ibus_req <= 0;
        end
      end

      default:
        state <= IDLE;
    endcase

    if (rst) begin
      ibus_req <= 0;
      state <= IDLE;
    end
  end


  assign ic_addr = (addr_valid | du_restart_i) ? pc_addr : pc_fetch;
  assign ic_addr_match = immu_enable_i ? immu_phys_addr : pc_fetch;

  generate
    if (FEATURE_INSTRUCTIONCACHE!="NONE") begin : icache_gen
      reg   ic_enable_r;
      always @(posedge clk `OR_ASYNC_RST) begin
        if (rst) begin
          ic_enable_r <= 0;
        end else if (ic_enable & !ibus_req) begin
          ic_enable_r <= 1;
        end else if (!ic_enable & !ic_refill) begin
          ic_enable_r <= 0;
        end
      end

      wire ic_enabled = ic_enable & ic_enable_r;
      wire ic_refill_allowed = (!((tlb_miss | pagefault) & immu_enable_i) &
                                !ctrl_branch_exception_i & !pipeline_flush_i &
                                !mispredict_stall | doing_rfe_i) &
      !tlb_reload_busy & !immu_busy;
      wire ic_req = padv_i & !decode_except_ibus_err_o &
      !decode_except_itlb_miss_o & !except_itlb_miss &
      !decode_except_ipagefault_o & !except_ipagefault &
      ic_access & ic_refill_allowed;

      if (OPTION_ICACHE_LIMIT_WIDTH == OPTION_OPERAND_WIDTH) begin
        assign ic_access = ic_enabled &
          !(immu_cache_inhibit & immu_enable_i);
      end else if (OPTION_ICACHE_LIMIT_WIDTH < OPTION_OPERAND_WIDTH) begin
        assign ic_access = ic_enabled &
          ic_addr_match[OPTION_OPERAND_WIDTH-1:
                        OPTION_ICACHE_LIMIT_WIDTH] == 0 &
          !(immu_cache_inhibit & immu_enable_i);
      end
      else begin
        initial begin
          $display("ERROR: OPTION_ICACHE_LIMIT_WIDTH > OPTION_OPERAND_WIDTH");
          $finish();
        end
      end

      pu_or1k_icache #(
        .OPTION_ICACHE_BLOCK_WIDTH (OPTION_ICACHE_BLOCK_WIDTH),
        .OPTION_ICACHE_SET_WIDTH   (OPTION_ICACHE_SET_WIDTH),
        .OPTION_ICACHE_WAYS        (OPTION_ICACHE_WAYS),
        .OPTION_ICACHE_LIMIT_WIDTH (OPTION_ICACHE_LIMIT_WIDTH)
      )
      pu_or1k_icache (
        .clk(clk),
        .rst(rst),

        .ic_imem_err_i (imem_err), 
        .ic_access_i   (ic_access),
        .refill_o      (ic_refill),
        .refill_req_o  (ic_refill_req),
        .refill_done_o (ic_refill_done),
        .invalidate_o  (ic_invalidate),
        .cache_hit_o   (ic_hit_o),

        .cpu_ack_o       (ic_ack),
        .cpu_dat_o       (ic_dat[OPTION_OPERAND_WIDTH-1:0]),
        .cpu_adr_i       (ic_addr),
        .cpu_adr_match_i (ic_addr_match),
        .cpu_req_i       (ic_req),

        .wradr_i (ibus_adr),
        .wrdat_i (ibus_dat_i),
        .we_i    (ibus_ack_i),

        .spr_bus_addr_i (spr_bus_addr_i[15:0]),
        .spr_bus_we_i   (spr_bus_we_i),
        .spr_bus_stb_i  (spr_bus_stb_i),
        .spr_bus_dat_i  (spr_bus_dat_i[OPTION_OPERAND_WIDTH-1:0]),

        .spr_bus_dat_o (spr_bus_dat_ic_o),
        .spr_bus_ack_o (spr_bus_ack_ic_o)
      );
    end
    else begin
      assign ic_access = 0;
      assign ic_refill = 0;
      assign ic_refill_req = 1'b0;
      assign ic_refill_done = 0;
      assign ic_ack = 0;
      assign ic_hit_o = 0;
      assign ic_dat = 0;
      assign ic_invalidate = 0;
      assign spr_bus_dat_ic_o = 0;
      assign spr_bus_ack_ic_o = 0;
    end
  endgenerate

  generate
    if (FEATURE_IMMU!="NONE") begin : immu_gen
      wire  [OPTION_OPERAND_WIDTH-1:0] virt_addr = ic_addr;
      wire     immu_spr_bus_stb;
      wire     immu_enable;
      // small hack to delay immu spr reads by one cycle
      // ideally the spr accesses should work so that the address is presented
      // in execute stage and the delayed data should be available in control
      // stage, but this is not how things currently work.
      assign immu_spr_bus_stb = spr_bus_stb_i & (!padv_ctrl_i | spr_bus_we_i);

      assign immu_enable = immu_enable_i & !pipeline_flush_i & !mispredict_stall;

      pu_or1k_immu #(
        .FEATURE_IMMU_HW_TLB_RELOAD (FEATURE_IMMU_HW_TLB_RELOAD),
        .OPTION_OPERAND_WIDTH       (OPTION_OPERAND_WIDTH),
        .OPTION_IMMU_SET_WIDTH      (OPTION_IMMU_SET_WIDTH),
        .OPTION_IMMU_WAYS           (OPTION_IMMU_WAYS)
      )
      pu_or1k_immu (
        .clk (clk),
        .rst (rst),

        .enable_i (immu_enable),

        .busy_o (immu_busy),

        .virt_addr_i       (virt_addr),
        .virt_addr_match_i (pc_fetch),
        .phys_addr_o       (immu_phys_addr),
        .cache_inhibit_o   (immu_cache_inhibit),

        .supervisor_mode_i (supervisor_mode_i),

        .tlb_miss_o  (tlb_miss),
        .pagefault_o (pagefault),

        .tlb_reload_req_o             (tlb_reload_req),
        .tlb_reload_addr_o            (tlb_reload_addr),
        .tlb_reload_pagefault_o       (tlb_reload_pagefault),
        .tlb_reload_busy_o            (tlb_reload_busy),
        .tlb_reload_ack_i             (tlb_reload_ack),
        .tlb_reload_data_i            (tlb_reload_data),
        .tlb_reload_pagefault_clear_i (except_ipagefault_clear),

        .spr_bus_dat_o  (spr_bus_dat_immu_o),
        .spr_bus_ack_o  (spr_bus_ack_immu_o),
        .spr_bus_addr_i (spr_bus_addr_i[15:0]),
        .spr_bus_we_i   (spr_bus_we_i),
        .spr_bus_stb_i  (immu_spr_bus_stb),
        .spr_bus_dat_i  (spr_bus_dat_i[OPTION_OPERAND_WIDTH-1:0])
      );
    end
    else begin
      assign immu_cache_inhibit = 0;
      assign immu_busy = 0;
      assign tlb_miss = 0;
      assign pagefault = 0;
      assign tlb_reload_busy = 0;
      assign tlb_reload_req = 0;
      assign tlb_reload_pagefault = 0;
    end
  endgenerate
endmodule
