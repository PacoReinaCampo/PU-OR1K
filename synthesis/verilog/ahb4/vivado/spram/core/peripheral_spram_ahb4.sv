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

module peripheral_spram_ahb4 #(
  // Memory parameters
  parameter DEPTH   = 256,
  parameter MEMFILE = "",

  // Wishbone parameters
  parameter DW = 32,
  parameter AW = $clog2(DEPTH)
) (
  input ahb4_clk_i,
  input ahb4_rst_i,

  input [AW-1:0] ahb4_adr_i,
  input [DW-1:0] ahb4_dat_i,
  input [   3:0] ahb4_sel_i,
  input          ahb4_we_i,
  input [   1:0] ahb4_bte_i,
  input [   2:0] ahb4_cti_i,
  input          ahb4_cyc_i,
  input          ahb4_stb_i,

  output reg          ahb4_ack_o,
  output              ahb4_err_o,
  output     [DW-1:0] ahb4_dat_o
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

  function ahb4_is_last;
    input [2:0] cti;
    begin
      case (cti)
        CTI_CLASSIC:      ahb4_is_last = 1'b1;
        CTI_CONST_BURST:  ahb4_is_last = 1'b0;
        CTI_INC_BURST:    ahb4_is_last = 1'b0;
        CTI_END_OF_BURST: ahb4_is_last = 1'b1;
      endcase
    end
  endfunction

  function [31:0] ahb4_next_adr;
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
      ahb4_next_adr = adr << shift;
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

  assign valid = ahb4_cyc_i & ahb4_stb_i;

  always @(posedge ahb4_clk_i) begin
    is_last_r <= ahb4_is_last(ahb4_cti_i);
  end

  assign new_cycle = (valid & !valid_r) | is_last_r;

  assign next_adr  = ahb4_next_adr(adr_r, ahb4_cti_i, ahb4_bte_i, DW);

  assign adr       = new_cycle ? ahb4_adr_i : next_adr;

  always @(posedge ahb4_clk_i) begin
    adr_r    <= adr;
    valid_r  <= valid;
    // Ack generation
    ahb4_ack_o <= valid & (!((ahb4_cti_i == 3'b000) | (ahb4_cti_i == 3'b111)) | !ahb4_ack_o);
    if (ahb4_rst_i) begin
      adr_r    <= {AW{1'b0}};
      valid_r  <= 1'b0;
      ahb4_ack_o <= 1'b0;
    end
  end

  assign ram_we   = ahb4_we_i & valid & ahb4_ack_o;

  // TO-DO:ck for burst address errors
  assign ahb4_err_o = 1'b0;

  peripheral_ram_generic_ahb4 #(
    .DEPTH  (DEPTH / 4),
    .MEMFILE(MEMFILE),

    .AW($clog2(DEPTH / 4)),
    .DW(DW)
  ) ram0 (
    .clk  (ahb4_clk_i),
    .we   ({4{ram_we}} & ahb4_sel_i),
    .din  (ahb4_dat_i),
    .waddr(adr_r[AW-1:2]),
    .raddr(adr[AW-1:2]),
    .dout (ahb4_dat_o)
  );
endmodule
