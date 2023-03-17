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

module or1k_true_dpram_sclk #(
  parameter ADDR_WIDTH = 32,
  parameter DATA_WIDTH = 32
) (
  // Port A
  input                   clk_a,
  input  [ADDR_WIDTH-1:0] addr_a,
  input                   we_a,
  input  [DATA_WIDTH-1:0] din_a,
  output [DATA_WIDTH-1:0] dout_a,

  // Port B
  input                   clk_b,
  input  [ADDR_WIDTH-1:0] addr_b,
  input                   we_b,
  input  [DATA_WIDTH-1:0] din_b,
  output [DATA_WIDTH-1:0] dout_b
);

  reg [DATA_WIDTH-1:0] mem     [(1<<ADDR_WIDTH)-1:0];

  reg [DATA_WIDTH-1:0] rdata_a;
  reg [DATA_WIDTH-1:0] rdata_b;

  assign dout_a = rdata_a;
  assign dout_b = rdata_b;

  always @(posedge clk_a) begin
    if (we_a) begin
      mem[addr_a] <= din_a;
      rdata_a     <= din_a;
    end else begin
      rdata_a <= mem[addr_a];
    end
  end

  always @(posedge clk_b) begin
    if (we_b) begin
      mem[addr_b] <= din_b;
      rdata_b     <= din_b;
    end else begin
      rdata_b <= mem[addr_b];
    end
  end
endmodule
