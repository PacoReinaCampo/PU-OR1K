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
// Copyright (c) 2015-2016 by the author(s)
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
////////////////////////////////////////////////////////////////////////////////
// Author(s):
//   Paco Reina Campo <pacoreinacampo@queenfield.tech>

`include "pu_or1k_defines.sv"

module pu_or1k_decode_execute_cappuccino #(
  parameter OPTION_OPERAND_WIDTH = 32,
  parameter OPTION_RESET_PC      = {{(OPTION_OPERAND_WIDTH-13){1'b0}}, `OR1K_RESET_VECTOR,8'd0},

  parameter OPTION_RF_ADDR_WIDTH = 5,

  parameter FEATURE_SYSCALL    = "ENABLED",
  parameter FEATURE_TRAP       = "ENABLED",
  parameter FEATURE_DELAY_SLOT = "ENABLED",

  parameter FEATURE_MULTIPLIER = "THREESTAGE",

  parameter FEATURE_FPU = "NONE", // ENABLED|NONE

  parameter FEATURE_INBUILT_CHECKERS = "ENABLED"
)
  (
    input                                 clk,
    input                                 rst,

    // pipeline control signal in
    input                                 padv_i,
    input      [OPTION_OPERAND_WIDTH-1:0] pc_decode_i,

    // input from register file
    input      [OPTION_OPERAND_WIDTH-1:0] decode_rfb_i,
    input      [OPTION_OPERAND_WIDTH-1:0] execute_rfb_i,

    // Branch prediction signals
    input                                 predicted_flag_i,
    output reg                            execute_predicted_flag_o,
    // The target pc that should be used in case of branch misprediction
    output reg [OPTION_OPERAND_WIDTH-1:0] execute_mispredict_target_o,

    input                                 pipeline_flush_i,

    // ALU related inputs from decode
    input      [`OR1K_ALU_OPC_WIDTH -1:0] decode_opc_alu_i,
    input      [`OR1K_ALU_OPC_WIDTH -1:0] decode_opc_alu_secondary_i,

    input      [`OR1K_IMM_WIDTH     -1:0] decode_imm16_i,
    input      [OPTION_OPERAND_WIDTH-1:0] decode_immediate_i,
    input                                 decode_immediate_sel_i,

    //  ALU related outputs to execute
    output reg [`OR1K_ALU_OPC_WIDTH -1:0] execute_opc_alu_o,
    output reg [`OR1K_ALU_OPC_WIDTH -1:0] execute_opc_alu_secondary_o,

    output reg [`OR1K_IMM_WIDTH     -1:0] execute_imm16_o,
    output reg [OPTION_OPERAND_WIDTH-1:0] execute_immediate_o,
    output reg                            execute_immediate_sel_o,

    // Adder control logic from decode
    input                                 decode_adder_do_sub_i,
    input                                 decode_adder_do_carry_i,

    // Adder control logic to execute
    output reg                            execute_adder_do_sub_o,
    output reg                            execute_adder_do_carry_o,

    // Upper 10 bits of immediate for jumps and branches
    input      [                     9:0] decode_immjbr_upper_i,
    output reg [                     9:0] execute_immjbr_upper_o,

    // GPR numbers
    output reg [OPTION_RF_ADDR_WIDTH-1:0] execute_rfd_adr_o,
    input      [OPTION_RF_ADDR_WIDTH-1:0] decode_rfd_adr_i,
    input      [OPTION_RF_ADDR_WIDTH-1:0] decode_rfa_adr_i,
    input      [OPTION_RF_ADDR_WIDTH-1:0] decode_rfb_adr_i,
    input      [OPTION_RF_ADDR_WIDTH-1:0] ctrl_rfd_adr_i,
    input                                 ctrl_op_lsu_load_i,
    input                                 ctrl_op_mfspr_i,
    input                                 ctrl_op_mul_i,

    // Control signal inputs from decode stage
    input                                 decode_rf_wb_i,

    input                                 decode_op_alu_i,

    input                                 decode_op_setflag_i,

    input                                 decode_op_jbr_i,
    input                                 decode_op_jr_i,
    input                                 decode_op_jal_i,
    input                                 decode_op_bf_i,
    input                                 decode_op_bnf_i,
    input                                 decode_op_brcond_i,
    input                                 decode_op_branch_i,

    input                                 decode_op_lsu_load_i,
    input                                 decode_op_lsu_store_i,
    input                                 decode_op_lsu_atomic_i,
    input      [                     1:0] decode_lsu_length_i,
    input                                 decode_lsu_zext_i,

    input                                 decode_op_mfspr_i,
    input                                 decode_op_mtspr_i,

    input                                 decode_op_rfe_i,
    input                                 decode_op_add_i,
    input                                 decode_op_mul_i,
    input                                 decode_op_mul_signed_i,
    input                                 decode_op_mul_unsigned_i,
    input                                 decode_op_div_i,
    input                                 decode_op_div_signed_i,
    input                                 decode_op_div_unsigned_i,
    input                                 decode_op_shift_i,
    input                                 decode_op_ffl1_i,
    input                                 decode_op_movhi_i,
    input                                 decode_op_ext_i,
    input                                 decode_op_msync_i,
    input      [`OR1K_FPUOP_WIDTH   -1:0] decode_op_fpu_i,

    input      [`OR1K_OPCODE_WIDTH  -1:0] decode_opc_insn_i,

    // Control signal outputs to execute stage
    output reg                            execute_rf_wb_o,

    output reg                            execute_op_alu_o,

    output reg                            execute_op_setflag_o,

    output reg                            execute_op_jbr_o,
    output reg                            execute_op_jr_o,
    output reg                            execute_op_jal_o,
    output reg                            execute_op_brcond_o,
    output reg                            execute_op_branch_o,

    output reg                            execute_op_lsu_load_o,
    output reg                            execute_op_lsu_store_o,
    output reg                            execute_op_lsu_atomic_o,
    output reg                      [1:0] execute_lsu_length_o,
    output reg                            execute_lsu_zext_o,

    output reg                            execute_op_mfspr_o,
    output reg                            execute_op_mtspr_o,

    output reg                            execute_op_rfe_o,
    output reg                            execute_op_add_o,
    output reg                            execute_op_mul_o,
    output reg                            execute_op_mul_signed_o,
    output reg                            execute_op_mul_unsigned_o,
    output reg                            execute_op_div_o,
    output reg                            execute_op_div_signed_o,
    output reg                            execute_op_div_unsigned_o,
    output reg                            execute_op_shift_o,
    output reg                            execute_op_ffl1_o,
    output reg                            execute_op_movhi_o,
    output reg                            execute_op_ext_o,
    output reg                            execute_op_bf_o,
    output reg                            execute_op_bnf_o,
    output reg                            execute_op_msync_o,
    output     [`OR1K_FPUOP_WIDTH   -1:0] execute_op_fpu_o,

    output reg [OPTION_OPERAND_WIDTH-1:0] execute_jal_result_o,

    output reg [`OR1K_OPCODE_WIDTH  -1:0] execute_opc_insn_o,

    // branch detection
    output                                decode_branch_o,
    output     [OPTION_OPERAND_WIDTH-1:0] decode_branch_target_o,

    // exceptions in
    input                                 decode_except_ibus_err_i,
    input                                 decode_except_itlb_miss_i,
    input                                 decode_except_ipagefault_i,
    input                                 decode_except_illegal_i,
    input                                 decode_except_syscall_i,
    input                                 decode_except_trap_i,

    // exception output
    output reg                            execute_except_ibus_err_o,
    output reg                            execute_except_itlb_miss_o,
    output reg                            execute_except_ipagefault_o,
    output reg                            execute_except_illegal_o,
    output reg                            execute_except_ibus_align_o,
    output reg                            execute_except_syscall_o,
    output reg                            execute_except_trap_o,

    output reg [OPTION_OPERAND_WIDTH-1:0] pc_execute_o,

    // output is valid, signal
    output reg                            decode_valid_o,

    output                                decode_bubble_o,
    output reg                            execute_bubble_o
  );

  wire                            ctrl_to_decode_interlock;
  wire                            branch_to_imm;
  wire [OPTION_OPERAND_WIDTH-1:0] branch_to_imm_target;
  wire                            branch_to_reg;

  wire                            decode_except_ibus_align;

  wire [OPTION_OPERAND_WIDTH-1:0] next_pc_after_branch_insn;
  wire [OPTION_OPERAND_WIDTH-1:0] decode_mispredict_target;

  // Op control signals to execute stage
  always @(posedge clk or posedge rst) begin
    if (rst) begin
      execute_op_bf_o <= 1'b0;
      execute_op_bnf_o <= 1'b0;
      execute_op_alu_o <= 1'b0;
      execute_op_add_o <= 1'b0;
      execute_op_mul_o <= 1'b0;
      execute_op_mul_signed_o <= 1'b0;
      execute_op_mul_unsigned_o <= 1'b0;
      execute_op_div_o <= 1'b0;
      execute_op_div_signed_o <= 1'b0;
      execute_op_div_unsigned_o <= 1'b0;
      execute_op_shift_o <= 1'b0;
      execute_op_ffl1_o <= 1'b0;
      execute_op_movhi_o <= 1'b0;
      execute_op_ext_o <= 1'b0;
      execute_op_msync_o <= 1'b0;
      execute_op_mfspr_o <= 1'b0;
      execute_op_mtspr_o <= 1'b0;
      execute_op_lsu_load_o <= 1'b0;
      execute_op_lsu_store_o <= 1'b0;
      execute_op_lsu_atomic_o <= 1'b0;
      execute_op_setflag_o <= 1'b0;
      execute_op_jbr_o <= 1'b0;
      execute_op_jr_o <= 1'b0;
      execute_op_jal_o <= 1'b0;
      execute_op_brcond_o <= 1'b0;
      execute_op_branch_o <= 0;
    end else if (pipeline_flush_i) begin
      execute_op_bf_o <= 1'b0;
      execute_op_bnf_o <= 1'b0;
      execute_op_alu_o <= 1'b0;
      execute_op_add_o <= 1'b0;
      execute_op_mul_o <= 1'b0;
      execute_op_mul_signed_o <= 1'b0;
      execute_op_mul_unsigned_o <= 1'b0;
      execute_op_div_o <= 1'b0;
      execute_op_div_signed_o <= 1'b0;
      execute_op_div_unsigned_o <= 1'b0;
      execute_op_shift_o <= 1'b0;
      execute_op_ffl1_o <= 1'b0;
      execute_op_movhi_o <= 1'b0;
      execute_op_ext_o <= 1'b0;
      execute_op_msync_o <= 1'b0;
      execute_op_lsu_load_o <= 1'b0;
      execute_op_lsu_store_o <= 1'b0;
      execute_op_lsu_atomic_o <= 1'b0;
      execute_op_setflag_o <= 1'b0;
      execute_op_jbr_o <= 1'b0;
      execute_op_jr_o <= 1'b0;
      execute_op_jal_o <= 1'b0;
      execute_op_brcond_o <= 1'b0;
      execute_op_branch_o <= 1'b0;
    end else if (padv_i) begin
      execute_op_bf_o <= decode_op_bf_i;
      execute_op_bnf_o <= decode_op_bnf_i;
      execute_op_alu_o <= decode_op_alu_i;
      execute_op_add_o <= decode_op_add_i;
      execute_op_mul_o <= decode_op_mul_i;
      execute_op_mul_signed_o <= decode_op_mul_signed_i;
      execute_op_mul_unsigned_o <= decode_op_mul_unsigned_i;
      execute_op_div_o <= decode_op_div_i;
      execute_op_div_signed_o <= decode_op_div_signed_i;
      execute_op_div_unsigned_o <= decode_op_div_unsigned_i;
      execute_op_shift_o <= decode_op_shift_i;
      execute_op_ffl1_o <= decode_op_ffl1_i;
      execute_op_movhi_o <= decode_op_movhi_i;
      execute_op_ext_o <= decode_op_ext_i;
      execute_op_msync_o <= decode_op_msync_i;
      execute_op_mfspr_o <= decode_op_mfspr_i;
      execute_op_mtspr_o <= decode_op_mtspr_i;
      execute_op_lsu_load_o <= decode_op_lsu_load_i;
      execute_op_lsu_store_o <= decode_op_lsu_store_i;
      execute_op_lsu_atomic_o <= decode_op_lsu_atomic_i;
      execute_op_setflag_o <= decode_op_setflag_i;
      execute_op_jbr_o <= decode_op_jbr_i;
      execute_op_jr_o <= decode_op_jr_i;
      execute_op_jal_o <= decode_op_jal_i;
      execute_op_brcond_o <= decode_op_brcond_i;
      execute_op_branch_o <= decode_op_branch_i;
      if (decode_bubble_o) begin
        execute_op_bf_o <= 1'b0;
        execute_op_bnf_o <= 1'b0;
        execute_op_alu_o <= 1'b0;
        execute_op_add_o <= 1'b0;
        execute_op_mul_o <= 1'b0;
        execute_op_mul_signed_o <= 1'b0;
        execute_op_mul_unsigned_o <= 1'b0;
        execute_op_div_o <= 1'b0;
        execute_op_div_signed_o <= 1'b0;
        execute_op_div_unsigned_o <= 1'b0;
        execute_op_shift_o <= 1'b0;
        execute_op_ffl1_o <= 1'b0;
        execute_op_movhi_o <= 1'b0;
        execute_op_ext_o <= 1'b0;
        execute_op_msync_o <= 1'b0;
        execute_op_mtspr_o <= 1'b0;
        execute_op_mfspr_o <= 1'b0;
        execute_op_lsu_load_o <= 1'b0;
        execute_op_lsu_store_o <= 1'b0;
        execute_op_lsu_atomic_o <= 1'b0;
        execute_op_setflag_o <= 1'b0;
        execute_op_jbr_o <= 1'b0;
        execute_op_jr_o <= 1'b0;
        execute_op_jal_o <= 1'b0;
        execute_op_brcond_o <= 1'b0;
        execute_op_branch_o <= 1'b0;
      end
    end
  end

  // FPU related
  generate
    if (FEATURE_FPU!="NONE") begin : fpu_decode_execute_ena
      reg [`OR1K_FPUOP_WIDTH-1:0] execute_op_fpu_r;
      assign execute_op_fpu_o = execute_op_fpu_r;
      always @(posedge clk or posedge rst) begin
        if (rst) begin
          execute_op_fpu_r <= {`OR1K_FPUOP_WIDTH{1'b0}};
        end else if (pipeline_flush_i) begin
          execute_op_fpu_r <= {`OR1K_FPUOP_WIDTH{1'b0}};
        end else if (padv_i) begin
          execute_op_fpu_r <= (decode_bubble_o ? {`OR1K_FPUOP_WIDTH{1'b0}} : decode_op_fpu_i);
        end
      end
    end else begin : fpu_decode_execute_none
      assign execute_op_fpu_o  = {`OR1K_FPUOP_WIDTH{1'b0}};
    end
  endgenerate

  // rfe is a special case, instead of pushing the pipeline full
  // of nops on a decode_bubble_o, we push it full of rfes.
  // The reason for this is that we need the rfe to reach control
  // stage so it will cause the branch.
  // It will clear itself by the pipeline_flush_i that the rfe
  // will generate.
  always @(posedge clk or posedge rst) begin
    if (rst) begin
      execute_op_rfe_o <= 0;
    end else if (pipeline_flush_i) begin
      execute_op_rfe_o <= 0;
    end else if (padv_i) begin
      execute_op_rfe_o <= decode_op_rfe_i;
    end
  end

  always @(posedge clk or posedge rst) begin
    if (rst) begin
      execute_rf_wb_o <= 0;
    end else if (pipeline_flush_i) begin
      execute_rf_wb_o <= 0;
    end else if (padv_i) begin
      execute_rf_wb_o <= decode_rf_wb_i;
      if (decode_bubble_o) begin
        execute_rf_wb_o <= 0;
      end
    end
  end

  always @(posedge clk) begin
    if (padv_i) begin
      execute_rfd_adr_o <= decode_rfd_adr_i;
    end
  end

  always @(posedge clk) begin
    if (padv_i) begin
      execute_lsu_length_o <= decode_lsu_length_i;
      execute_lsu_zext_o   <= decode_lsu_zext_i;
    end
  end

  always @(posedge clk) begin
    if (padv_i) begin
      execute_imm16_o         <= decode_imm16_i;
      execute_immediate_o     <= decode_immediate_i;
      execute_immediate_sel_o <= decode_immediate_sel_i;
    end
  end

  always @(posedge clk) begin
    if (padv_i ) begin
      execute_immjbr_upper_o <= decode_immjbr_upper_i;
    end
  end

  always @(posedge clk) begin
    if (padv_i) begin
      execute_opc_alu_o           <= decode_opc_alu_i;
      execute_opc_alu_secondary_o <= decode_opc_alu_secondary_i;
    end
  end

  always @(posedge clk or posedge rst) begin
    if (rst) begin
      execute_opc_insn_o <= `OR1K_OPCODE_NOP;
    end else if (pipeline_flush_i) begin
      execute_opc_insn_o <= `OR1K_OPCODE_NOP;
    end else if (padv_i) begin
      execute_opc_insn_o <= decode_opc_insn_i;
      if (decode_bubble_o) begin
        execute_opc_insn_o <= `OR1K_OPCODE_NOP;
      end
    end
  end

  always @(posedge clk or posedge rst) begin
    if (rst) begin
      execute_adder_do_sub_o   <= 1'b0;
      execute_adder_do_carry_o <= 1'b0;
    end else if (pipeline_flush_i) begin
      execute_adder_do_sub_o   <= 1'b0;
      execute_adder_do_carry_o <= 1'b0;
    end else if (padv_i) begin
      execute_adder_do_sub_o    <= decode_adder_do_sub_i;
      execute_adder_do_carry_o <= decode_adder_do_carry_i;
      if (decode_bubble_o) begin
        execute_adder_do_sub_o   <= 1'b0;
        execute_adder_do_carry_o <= 1'b0;
      end
    end
  end

  // Decode for system call exception
  always @(posedge clk or posedge rst) begin
    if (rst) begin
      execute_except_syscall_o <= 0;
    end else if (padv_i && FEATURE_SYSCALL=="ENABLED") begin
      execute_except_syscall_o <= decode_except_syscall_i;
    end
  end

  // Decode for system call exception
  always @(posedge clk or posedge rst) begin
    if (rst) begin
      execute_except_trap_o <= 0;
    end else if (padv_i && FEATURE_TRAP=="ENABLED") begin
      execute_except_trap_o <= decode_except_trap_i;
    end
  end

  // Decode Illegal instruction
  always @(posedge clk or posedge rst) begin
    if (rst) begin
      execute_except_illegal_o <= 0;
    end else if (padv_i) begin
      execute_except_illegal_o <= decode_except_illegal_i;
    end
  end

  always @(posedge clk or posedge rst) begin
    if (rst) begin
      execute_except_ibus_err_o <= 1'b0;
    end else if (padv_i) begin
      execute_except_ibus_err_o <= decode_except_ibus_err_i;
    end
  end

  always @(posedge clk or posedge rst) begin
    if (rst) begin
      execute_except_itlb_miss_o <= 1'b0;
    end else if (padv_i) begin
      execute_except_itlb_miss_o <= decode_except_itlb_miss_i;
    end
  end

  always @(posedge clk or posedge rst) begin
    if (rst) begin
      execute_except_ipagefault_o <= 1'b0;
    end else if (padv_i) begin
      execute_except_ipagefault_o <= decode_except_ipagefault_i;
    end
  end

  always @(posedge clk or posedge rst) begin
    if (rst) begin
      execute_except_ibus_align_o <= 1'b0;
    end else if (padv_i) begin
      execute_except_ibus_align_o <= decode_except_ibus_align;
    end
  end

  always @(posedge clk or posedge rst) begin
    if (rst) begin
      decode_valid_o <= 0;
    end else begin
      decode_valid_o <= padv_i;
    end
  end

  always @(posedge clk or posedge rst) begin
    if (padv_i) begin
      pc_execute_o <= pc_decode_i;
    end
  end

  // Branch detection
  assign ctrl_to_decode_interlock = (ctrl_op_lsu_load_i | ctrl_op_mfspr_i |
    ctrl_op_mul_i &
    FEATURE_MULTIPLIER=="PIPELINED") &
    ((decode_rfa_adr_i == ctrl_rfd_adr_i) ||
    (decode_rfb_adr_i == ctrl_rfd_adr_i));

  assign branch_to_imm = (decode_op_jbr_i &
    // l.j/l.jal
    (!(|decode_opc_insn_i[2:1]) |
     // l.bf/bnf and flag is right
     (decode_opc_insn_i[2] == predicted_flag_i)));

  assign branch_to_imm_target = pc_decode_i + {{4{decode_immjbr_upper_i[9]}},
                                                  decode_immjbr_upper_i,
                                                  decode_imm16_i,2'b00};
  assign branch_to_reg = decode_op_jr_i &
    !(ctrl_to_decode_interlock | execute_rf_wb_o & (decode_rfb_adr_i == execute_rfd_adr_o));

  assign decode_branch_o = (branch_to_imm | branch_to_reg) & !pipeline_flush_i;

  assign decode_branch_target_o = branch_to_imm ? branch_to_imm_target :
    // If a bubble have been pushed out to get
    // the instruction that will write the
    // branch target to control stage, then we
    // need to use the register result from
    // execute stage instead of decode stage.
    execute_bubble_o | execute_op_jr_o ?
    execute_rfb_i : decode_rfb_i;

  assign decode_except_ibus_align = decode_branch_o & (|decode_branch_target_o[1:0]);

  assign next_pc_after_branch_insn = FEATURE_DELAY_SLOT == "ENABLED" ? pc_decode_i + 8 : pc_decode_i + 4;

  assign decode_mispredict_target = decode_op_bf_i & !predicted_flag_i |
    decode_op_bnf_i & predicted_flag_i ?
    branch_to_imm_target : next_pc_after_branch_insn;

  // Forward branch prediction signals to execute stage
  always @(posedge clk) begin
    if (padv_i & decode_op_brcond_i) begin
      execute_mispredict_target_o <= decode_mispredict_target;
    end
  end

  always @(posedge clk) begin
    if (padv_i & decode_op_brcond_i) begin
      execute_predicted_flag_o <= predicted_flag_i;
    end
  end

  // Calculate the link register result
  // TO-DO: investigate if the ALU adder can be used for this without
  // introducing critical paths
  always @(posedge clk) begin
    if (padv_i) begin
      execute_jal_result_o <= next_pc_after_branch_insn;
    end
  end

  // Detect the situation where there is an instruction in execute stage
  // that will produce it's result in control stage (i.e. load and mfspr),
  // and an instruction currently in decode stage needing it's result as
  // input in execute stage.
  // Also detect the situation where there is a jump to register in decode
  // stage and an instruction in execute stage that will write to that
  // register.
  //
  // A bubble is also inserted when an rfe instruction is in decode stage,
  // the main purpose of this is to stall fetch while the rfe is propagating
  // up to ctrl stage.

  assign decode_bubble_o = (
    // load/mfspr/mul
    (execute_op_lsu_load_o | execute_op_mfspr_o |
    execute_op_mul_o &
    FEATURE_MULTIPLIER=="PIPELINED") &
    (decode_rfa_adr_i == execute_rfd_adr_o ||
    decode_rfb_adr_i == execute_rfd_adr_o) |
    // mul
    FEATURE_MULTIPLIER=="PIPELINED" &
    (decode_op_mul_i &
    (ctrl_to_decode_interlock |
    execute_rf_wb_o & (decode_rfa_adr_i == execute_rfd_adr_o ||
    decode_rfb_adr_i == execute_rfd_adr_o))) |
    // jr
    decode_op_jr_i & (ctrl_to_decode_interlock |
    execute_rf_wb_o & (decode_rfb_adr_i == execute_rfd_adr_o)) |
    // atomic store
    execute_op_lsu_store_o & execute_op_lsu_atomic_o |
    // rfe
    decode_op_rfe_i) & padv_i;

  always @(posedge clk or posedge rst) begin
    if (rst) begin
      execute_bubble_o <= 0;
    end else if (pipeline_flush_i) begin
      execute_bubble_o <= 0;
    end else if (padv_i) begin
      execute_bubble_o <= decode_bubble_o;
    end
  end
endmodule
