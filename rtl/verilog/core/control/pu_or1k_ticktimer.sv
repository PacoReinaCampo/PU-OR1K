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

module pu_or1k_ticktimer (
  input 	 clk,
  input 	 rst,

  output [31:0] spr_ttmr_o,
  output [31:0] spr_ttcr_o,

  // SPR Bus interface
  input         spr_access_i,
  input         spr_we_i,
  input  [15:0] spr_addr_i,
  input  [31:0] spr_dat_i,
  output        spr_bus_ack,
  output [31:0] spr_dat_o
);

  // Registers
  reg [31:0]    spr_ttmr;
  reg [31:0]    spr_ttcr;

  wire spr_ttmr_access;
  wire spr_ttcr_access;

  // ttcr control wires
  wire          ttcr_clear;
  wire          ttcr_run;
  wire          ttcr_match;

  assign spr_ttmr_o = spr_ttmr;
  assign spr_ttcr_o = spr_ttcr;

  assign spr_ttmr_access = spr_access_i & (`SPR_OFFSET(spr_addr_i) == `SPR_OFFSET(`OR1K_SPR_TTMR_ADDR));
  assign spr_ttcr_access = spr_access_i & (`SPR_OFFSET(spr_addr_i) == `SPR_OFFSET(`OR1K_SPR_TTCR_ADDR));

  assign spr_bus_ack = spr_access_i;
  assign spr_dat_o = (spr_access_i & spr_ttcr_access) ? spr_ttcr :
                     (spr_access_i & spr_ttmr_access) ? spr_ttmr : 0;

  assign ttcr_match = spr_ttcr[27:0] == spr_ttmr[27:0];

  // Timer SPR control
  always @(posedge clk `OR_ASYNC_RST) begin
    if (rst)
      spr_ttmr <= 0;
    else if (spr_we_i & spr_ttmr_access)
      spr_ttmr <= spr_dat_i[31:0];
    else if (ttcr_match & spr_ttmr[29])
      spr_ttmr[28] <= 1; // Generate interrupt
  end

  // Modes (spr_ttmr[31:30]):
  // 00 Tick timer is disabled.
  // 01 Timer is restarted on ttcr_match.
  // 10 Timer stops when ttcr_match is true.
  // 11 Timer does not stop when ttcr_match is true
  assign ttcr_clear = (spr_ttmr[31:30] == 2'b01) & ttcr_match;
  assign ttcr_run = (spr_ttmr[31:30] != 2'b00) & !ttcr_match |
    (spr_ttmr[31:30] == 2'b11);

  always @(posedge clk `OR_ASYNC_RST) begin
    if (rst)
      spr_ttcr <= 0;
    else if (spr_we_i & spr_ttcr_access)
      spr_ttcr <= spr_dat_i[31:0];
    else if (ttcr_clear)
      spr_ttcr <= 0;
    else if (ttcr_run)
      spr_ttcr <= spr_ttcr + 1;
  end
endmodule
