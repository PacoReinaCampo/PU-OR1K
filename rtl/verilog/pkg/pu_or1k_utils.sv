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

`ifndef _MOR1KX_UTILS_VH_
`define _MOR1KX_UTILS_VH_ 1

// clog2 - replacement for $clog for tools that doesn't support verilog 2005.
// However, icarus doesn't support constant user functions, so it has to be
// implemened with a bit of `define trickery.

`ifdef __ICARUS__
`define clog2 $clog2
`else
`define clog2 clog2
`endif

`endif  // _MOR1KX_UTILS_VH_

function integer clog2;
  input integer in;
  begin
    in = in - 1;
    for (clog2 = 0; in > 0; clog2 = clog2 + 1) begin
      in = in >> 1;
    end
  end
endfunction

// Find First 1
// - Start from MSB and count downwards, returns 0 when no bit set
function integer ff1;
  input integer in;
  input integer width;
  integer i;
  begin
    ff1 = 0;
    for (i = width - 1; i >= 0; i = i - 1) begin
      if (in[i]) begin
        ff1 = i;
      end
    end
  end
endfunction

// Find Last 1
// -  Start from LSB and count upwards, returns 0 when no bit set
function integer fl1;
  input integer in;
  input integer width;
  integer i;
  begin
    fl1 = 0;
    for (i = 0; i < width; i = i + 1) begin
      if (in[i]) fl1 = i;
    end
  end
endfunction

// Reverse bits in a vector
function integer reverse_bits;
  input integer in;
  input integer width;
  integer i;
  begin
    for (i = 0; i < width; i = i + 1) begin
      reverse_bits[width-i] = in[i];
    end
  end
endfunction

// Reverse bytes in a vector
function integer reverse_bytes;
  input integer in;
  input integer width;
  integer i;
  begin
    for (i = 0; i < width; i = i + 8) begin
      reverse_bytes[(width-1)-i-:8] = in[i+:8];
    end
  end
endfunction

// Calculate register file address width, considers shadow registers, used in rf and cpu.
function integer calc_rf_addr_width;
  input integer rf_addr_width;
  input integer rf_num_shadow_gpr;
  begin
    if (rf_num_shadow_gpr == 0) begin
      calc_rf_addr_width = rf_addr_width;
    end else begin
      calc_rf_addr_width = rf_addr_width + ((rf_num_shadow_gpr == 1) ? 1 : `clog2(rf_num_shadow_gpr));
    end
  end
endfunction
