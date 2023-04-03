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

module pu_or1k_wb_mux_cappuccino #(
  parameter OPTION_OPERAND_WIDTH = 32
) (
  input clk,
  input rst,

  input [OPTION_OPERAND_WIDTH-1:0] alu_result_i,
  input [OPTION_OPERAND_WIDTH-1:0] lsu_result_i,
  input [OPTION_OPERAND_WIDTH-1:0] mul_result_i,
  input [OPTION_OPERAND_WIDTH-1:0] spr_i,

  output [OPTION_OPERAND_WIDTH-1:0] rf_result_o,

  input op_mul_i,
  input op_lsu_load_i,
  input op_mfspr_i
);

  reg [OPTION_OPERAND_WIDTH-1:0] rf_result;
  reg                            wb_op_mul;

  assign rf_result_o = wb_op_mul ? mul_result_i : rf_result;

  always @(posedge clk) begin
    if (op_mfspr_i) rf_result <= spr_i;
    else if (op_lsu_load_i) rf_result <= lsu_result_i;
    else rf_result <= alu_result_i;
  end

  always @(posedge clk) begin
    wb_op_mul <= op_mul_i;
  end
endmodule
