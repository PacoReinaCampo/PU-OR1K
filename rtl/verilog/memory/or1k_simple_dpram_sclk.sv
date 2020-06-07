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

module or1k_simple_dpram_sclk #(
  parameter ADDR_WIDTH    = 32,
  parameter DATA_WIDTH    = 32,
  parameter CLEAR_ON_INIT = 0,
  parameter ENABLE_BYPASS = 1
)
  (
    input                   clk,
    input  [ADDR_WIDTH-1:0] raddr,
    input                   re,
    input  [ADDR_WIDTH-1:0] waddr,
    input                   we,
    input  [DATA_WIDTH-1:0] din,
    output [DATA_WIDTH-1:0] dout
  );

  reg [DATA_WIDTH-1:0]     mem[(1<<ADDR_WIDTH)-1:0];
  reg [DATA_WIDTH-1:0]     rdata;

  generate
    if(CLEAR_ON_INIT) begin :clear_on_init
      integer idx;
      initial
        for(idx=0; idx < (1<<ADDR_WIDTH); idx=idx+1) begin
          mem[idx] = {DATA_WIDTH{1'b0}};
        end
    end
  endgenerate

  generate
    if (ENABLE_BYPASS) begin : bypass_gen
      reg [DATA_WIDTH-1:0] din_r;
      reg                  bypass;

      assign dout = bypass ? din_r : rdata;

      always @(posedge clk) begin
        if (re)
          din_r <= din;
      end

      always @(posedge clk) begin
        if (waddr == raddr && we && re)
          bypass <= 1;
        else if (re)
          bypass <= 0;
      end
    end
    else begin
      assign dout = rdata;
    end
  endgenerate

  always @(posedge clk) begin
    if (we)
      mem[waddr] <= din;
    if (re)
      rdata <= mem[raddr];
  end
endmodule
