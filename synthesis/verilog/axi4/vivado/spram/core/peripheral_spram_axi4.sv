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
//              MPSoC-RISCV CPU                                               //
//              Single Port RAM                                               //
//              Wishbone Bus Interface                                        //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 2018-2019 by the author(s)
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
//   Olof Kindgren <olof.kindgren@gmail.com>
//   Paco Reina Campo <pacoreinacampo@queenfield.tech>

module peripheral_spram_axi4 #(
  // Memory parameters
  parameter DEPTH   = 256,
  parameter MEMFILE = "",

  // Wishbone parameters
  parameter DW = 32,
  parameter AW = $clog2(DEPTH)
) (
  input axi4_clk_i,
  input axi4_rst_i,

  input [AW-1:0] axi4_adr_i,
  input [DW-1:0] axi4_dat_i,
  input [   3:0] axi4_sel_i,
  input          axi4_we_i,
  input [   1:0] axi4_bte_i,
  input [   2:0] axi4_cti_i,
  input          axi4_cyc_i,
  input          axi4_stb_i,

  output reg          axi4_ack_o,
  output              axi4_err_o,
  output     [DW-1:0] axi4_dat_o
);

  //////////////////////////////////////////////////////////////////////////////
  // Constants
  //////////////////////////////////////////////////////////////////////////////

  localparam CLASSIC_CYCLE = 1'b0;
  localparam BURST_CYCLE = 1'b1;

  localparam READ = 1'b0;
  localparam WRITE = 1'b1;

  localparam [2:0] CTI_CLASSIC = 3'b000;
  localparam [2:0] CTI_CONST_BURST = 3'b001;
  localparam [2:0] CTI_INC_BURST = 3'b010;
  localparam [2:0] CTI_END_OF_BURST = 3'b111;

  localparam [1:0] BTE_LINEAR = 2'd0;
  localparam [1:0] BTE_WRAP_4 = 2'd1;
  localparam [1:0] BTE_WRAP_8 = 2'd2;
  localparam [1:0] BTE_WRAP_16 = 2'd3;

  //////////////////////////////////////////////////////////////////////////////
  // Functions
  //////////////////////////////////////////////////////////////////////////////

  function get_cycle_type;
    input [2:0] cti;
    begin
      get_cycle_type = (cti === CTI_CLASSIC) ? CLASSIC_CYCLE : BURST_CYCLE;
    end
  endfunction

  function axi4_is_last;
    input [2:0] cti;
    begin
      case (cti)
        CTI_CLASSIC:      axi4_is_last = 1'b1;
        CTI_CONST_BURST:  axi4_is_last = 1'b0;
        CTI_INC_BURST:    axi4_is_last = 1'b0;
        CTI_END_OF_BURST: axi4_is_last = 1'b1;
      endcase
    end
  endfunction

  function [31:0] axi4_next_adr;
    input [31:0] adr_i;
    input [2:0] cti_i;
    input [1:0] bte_i;

    input integer dw;

    reg     [31:0] adr;

    integer        shift;
    begin
      if (dw == 64) begin
        shift = 3;
      end else if (dw == 32) begin
        shift = 2;
      end else if (dw == 16) begin
        shift = 1;
      end else begin
        shift = 0;
      end
      adr = adr_i >> shift;
      if (cti_i == CTI_INC_BURST)
        case (bte_i)
          BTE_LINEAR:  adr = adr + 1;
          BTE_WRAP_4:  adr = {adr[31:2], adr[1:0] + 2'd1};
          BTE_WRAP_8:  adr = {adr[31:3], adr[2:0] + 3'd1};
          BTE_WRAP_16: adr = {adr[31:4], adr[3:0] + 4'd1};
        endcase  // case (burst_type_i)
      axi4_next_adr = adr << shift;
    end
  endfunction

  //////////////////////////////////////////////////////////////////////////////
  // Variables
  //////////////////////////////////////////////////////////////////////////////

  reg  [AW-1:0] adr_r;
  wire [AW-1:0] next_adr;
  wire          valid;
  reg           valid_r;
  reg           is_last_r;
  wire          new_cycle;
  wire [AW-1:0] adr;
  wire          ram_we;

  //////////////////////////////////////////////////////////////////////////////
  // Body
  //////////////////////////////////////////////////////////////////////////////

  assign valid = axi4_cyc_i & axi4_stb_i;

  always @(posedge axi4_clk_i) begin
    is_last_r <= axi4_is_last(axi4_cti_i);
  end

  assign new_cycle = (valid & !valid_r) | is_last_r;

  assign next_adr  = axi4_next_adr(adr_r, axi4_cti_i, axi4_bte_i, DW);

  assign adr       = new_cycle ? axi4_adr_i : next_adr;

  always @(posedge axi4_clk_i) begin
    adr_r    <= adr;
    valid_r  <= valid;
    // Ack generation
    axi4_ack_o <= valid & (!((axi4_cti_i == 3'b000) | (axi4_cti_i == 3'b111)) | !axi4_ack_o);
    if (axi4_rst_i) begin
      adr_r    <= {AW{1'b0}};
      valid_r  <= 1'b0;
      axi4_ack_o <= 1'b0;
    end
  end

  assign ram_we   = axi4_we_i & valid & axi4_ack_o;

  // TO-DO:ck for burst address errors
  assign axi4_err_o = 1'b0;

  peripheral_ram_generic_axi4 #(
    .DEPTH  (DEPTH / 4),
    .MEMFILE(MEMFILE),

    .AW($clog2(DEPTH / 4)),
    .DW(DW)
  ) ram0 (
    .clk  (axi4_clk_i),
    .we   ({4{ram_we}} & axi4_sel_i),
    .din  (axi4_dat_i),
    .waddr(adr_r[AW-1:2]),
    .raddr(adr[AW-1:2]),
    .dout (axi4_dat_o)
  );
endmodule
