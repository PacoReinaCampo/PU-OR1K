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
 *   Francisco Javier Reina Campo <frareicam@gmail.com>
 */

`include "or1k-defines.sv"

module or1k_store_buffer #(
  parameter DEPTH_WIDTH          = 4,
  parameter OPTION_OPERAND_WIDTH = 32
)
  (
    input clk,
    input rst,

    input [OPTION_OPERAND_WIDTH  -1:0] pc_i,
    input [OPTION_OPERAND_WIDTH  -1:0] adr_i,
    input [OPTION_OPERAND_WIDTH  -1:0] dat_i,
    input [OPTION_OPERAND_WIDTH/8-1:0] bsel_i,
    input                              atomic_i,
    input                              write_i,

    output [OPTION_OPERAND_WIDTH  -1:0] pc_o,
    output [OPTION_OPERAND_WIDTH  -1:0] adr_o,
    output [OPTION_OPERAND_WIDTH  -1:0] dat_o,
    output [OPTION_OPERAND_WIDTH/8-1:0] bsel_o,
    output                              atomic_o,
    input                               read_i,

    output full_o,
    output empty_o
  );

  // The fifo stores address + data + byte sel + pc + atomic
  localparam FIFO_DATA_WIDTH = OPTION_OPERAND_WIDTH*3 + OPTION_OPERAND_WIDTH/8 + 1;

  wire [FIFO_DATA_WIDTH-1:0] fifo_dout;
  wire [FIFO_DATA_WIDTH-1:0] fifo_din;

  reg [DEPTH_WIDTH:0] write_pointer;
  reg [DEPTH_WIDTH:0] read_pointer;

  assign fifo_din = {adr_i, dat_i, bsel_i, pc_i, atomic_i};
  assign {adr_o, dat_o, bsel_o, pc_o, atomic_o} = fifo_dout;

  assign full_o = (write_pointer[DEPTH_WIDTH] != read_pointer[DEPTH_WIDTH]) &&
                  (write_pointer[DEPTH_WIDTH-1:0] == read_pointer[DEPTH_WIDTH-1:0]);
  assign empty_o = write_pointer == read_pointer;

  always @(posedge clk `OR_ASYNC_RST) begin
    if (rst)
      write_pointer <= 0;
    else if (write_i)
      write_pointer <= write_pointer + 1'd1;
  end

  always @(posedge clk `OR_ASYNC_RST) begin
    if (rst)
      read_pointer <= 0;
    else if (read_i)
      read_pointer <= read_pointer + 1'd1;
  end

  or1k_simple_dpram_sclk #(
    .ADDR_WIDTH(DEPTH_WIDTH),
    .DATA_WIDTH(FIFO_DATA_WIDTH),
    .ENABLE_BYPASS(1)
  )
  fifo_ram (
    .clk(clk),
    .dout(fifo_dout),
    .raddr(read_pointer[DEPTH_WIDTH-1:0]),
    .re(read_i),
    .waddr(write_pointer[DEPTH_WIDTH-1:0]),
    .we(write_i),
    .din(fifo_din)
  );
endmodule
