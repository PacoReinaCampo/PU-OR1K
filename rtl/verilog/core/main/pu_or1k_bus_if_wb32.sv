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

module pu_or1k_bus_if_wb32 #(
  parameter BUS_IF_TYPE = "CLASSIC",
  parameter BURST_LENGTH = 8
)
  (
    input         clk,
    input         rst,

    output        cpu_err_o,
    output        cpu_ack_o,
    output [31:0] cpu_dat_o,
    input  [31:0] cpu_adr_i,
    input  [31:0] cpu_dat_i,
    input         cpu_req_i,
    input  [ 3:0] cpu_bsel_i,
    input         cpu_we_i,
    input         cpu_burst_i,

    output [31:0] wbm_adr_o,
    output        wbm_stb_o,
    output        wbm_cyc_o,
    output [ 3:0] wbm_sel_o,
    output        wbm_we_o,
    output [ 2:0] wbm_cti_o,
    output [ 1:0] wbm_bte_o,
    output [31:0] wbm_dat_o,
    input         wbm_err_i,
    input         wbm_ack_i,
    input  [31:0] wbm_dat_i,
    input         wbm_rty_i
  );

  localparam  BADDR_WITH = (BURST_LENGTH==4)  ? 2 :
                           (BURST_LENGTH==8)  ? 3 :
                           (BURST_LENGTH==16) ? 4 : 30;

  generate
    if (BUS_IF_TYPE=="B3_READ_BURSTING") begin : b3_read_bursting
      // Burst until the incoming address is not what it should be
      wire                  finish_burst;
      reg                   finish_burst_r;
      reg                   bursting;
      reg  [          31:2] burst_address;
      reg  [BADDR_WITH-1:0] burst_wrap_start;
      wire [BADDR_WITH-1:0] burst_wrap_finish;
      wire                  address_differs;

      always @(posedge clk `OR_ASYNC_RST) begin
        if (rst) begin
          bursting <= 0;
        end else if (wbm_err_i) begin
          bursting <= 0;
        end else if (bursting & finish_burst & wbm_ack_i) begin
          bursting <= 0;
        end else if (cpu_req_i & !bursting & !cpu_we_i) begin
          bursting <= 1;
        end
      end

      always @(posedge clk `OR_ASYNC_RST) begin
        if (rst) begin
          burst_address    <= 0;
          burst_wrap_start <= 0;
        end else if (cpu_req_i & !bursting) begin
          burst_address    <= cpu_adr_i[31:2];
          burst_wrap_start <= cpu_adr_i[BADDR_WITH+2-1:2];
        end else if (wbm_ack_i) begin
          burst_address[BADDR_WITH+2-1:2] <= burst_address[BADDR_WITH+2-1:2] + 1;
        end
      end

      assign address_differs   = (burst_address!=cpu_adr_i[31:2]);
      assign burst_wrap_finish = burst_wrap_start - 1;
      assign finish_burst      = (bursting & ((BURST_LENGTH!=0 &&
                                               burst_address[BADDR_WITH+2-1:2]==(burst_wrap_finish)) | address_differs | !cpu_req_i));

      always @(posedge clk `OR_ASYNC_RST) begin
        if (rst) begin
          finish_burst_r <= 0;
        end else if (wbm_ack_i) begin
          finish_burst_r <= finish_burst;
        end else begin
          finish_burst_r <= 0;
        end
      end

      assign wbm_adr_o = bursting ? {burst_address,2'b00} : cpu_adr_i;
      assign wbm_stb_o = bursting & !finish_burst_r;
      assign wbm_cyc_o = bursting & !finish_burst_r;
      assign wbm_sel_o = cpu_bsel_i;
      assign wbm_we_o  = cpu_we_i;
      assign wbm_cti_o = bursting ? (finish_burst ? 3'b111 : 3'b010) : 3'b000;
      assign wbm_bte_o = BURST_LENGTH==4  ? 2'b01 :
                         BURST_LENGTH==8  ? 2'b10 :
                         BURST_LENGTH==16 ? 2'b11 : 2'b00; // Linear burst

      assign wbm_dat_o = cpu_dat_i;

      assign cpu_err_o = wbm_err_i;
      assign cpu_ack_o = (wbm_ack_i) & !(bursting & address_differs) & cpu_req_i;
      assign cpu_dat_o = wbm_err_i ? 0 :  wbm_dat_i;
    end else if (BUS_IF_TYPE=="B3_REGISTERED_FEEDBACK") begin : b3_registered_feedback
      assign wbm_adr_o = cpu_adr_i;
      assign wbm_stb_o = cpu_req_i;
      assign wbm_cyc_o = cpu_req_i;
      assign wbm_sel_o = cpu_bsel_i;
      assign wbm_we_o  = cpu_we_i;
      assign wbm_cti_o = cpu_burst_i ? 3'b010 : 3'b111;
      assign wbm_bte_o = BURST_LENGTH ==  4 ? 2'b01 :
                         BURST_LENGTH ==  8 ? 2'b10 :
                         BURST_LENGTH == 16 ? 2'b11 : 2'b00; // Linear burst

      assign wbm_dat_o = cpu_dat_i;
      assign cpu_err_o = wbm_err_i;
      assign cpu_ack_o = wbm_ack_i;
      assign cpu_dat_o = wbm_dat_i;

    end else begin : classic // CLASSIC only
      // Only classic, single cycle accesses

      // A register to force de-assertion of access request signals after
      // each ack
      reg cycle_end;

      always @(posedge clk `OR_ASYNC_RST) begin
        if (rst) begin
          cycle_end <= 1;
        end else begin
          cycle_end <= wbm_ack_i | wbm_err_i;
        end
      end

      assign cpu_err_o = wbm_err_i;
      assign cpu_ack_o = wbm_ack_i;
      assign cpu_dat_o = wbm_dat_i;

      assign wbm_adr_o = cpu_adr_i;
      assign wbm_stb_o = cpu_req_i & !cycle_end;
      assign wbm_cyc_o = cpu_req_i;
      assign wbm_sel_o = cpu_bsel_i;
      assign wbm_we_o  = cpu_we_i;
      assign wbm_cti_o = 0;
      assign wbm_bte_o = 0;
      assign wbm_dat_o = cpu_dat_i;
    end
  endgenerate
endmodule
