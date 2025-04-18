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

// completely combinatorial module

module pfpu64_fcmp (
  input                                      fpu_op_is_comp_i,
  input  [`OR1K_FPUOP_GENERIC_CMP_WIDTH-1:0] generic_cmp_opc_i,    // ordered/unordered
  input                                      unordered_cmp_bit_i,  // is unorderd

  // operand 'a' related inputs
  input                                      signa_i,
  input  [                              9:0] exp10a_i,
  input  [                             23:0] fract24a_i,
  input                                      snana_i,
  input                                      qnana_i,
  input                                      infa_i,
  input                                      zeroa_i,

  // operand 'b' related inputs
  input                                      signb_i,
  input  [                              9:0] exp10b_i,
  input  [                             23:0] fract24b_i,
  input                                      snanb_i,
  input                                      qnanb_i,
  input                                      infb_i,
  input                                      zerob_i,

  // support addsub
  output                                     addsub_agtb_o,
  output                                     addsub_aeqb_o,

  // outputs
  output                                     cmp_flag_o,
  output                                     inv_o,
  output                                     inf_o,
  output                                     ready_o
);

  // Full length ordered comparison opcodes
  localparam [`OR1K_FPUOP_WIDTH-1:0] FPCOP_SFEQ = `OR1K_FPCOP_SFEQ;
  localparam [`OR1K_FPUOP_WIDTH-1:0] FPCOP_SFNE = `OR1K_FPCOP_SFNE;
  localparam [`OR1K_FPUOP_WIDTH-1:0] FPCOP_SFGT = `OR1K_FPCOP_SFGT;
  localparam [`OR1K_FPUOP_WIDTH-1:0] FPCOP_SFGE = `OR1K_FPCOP_SFGE;
  localparam [`OR1K_FPUOP_WIDTH-1:0] FPCOP_SFLT = `OR1K_FPCOP_SFLT;
  localparam [`OR1K_FPUOP_WIDTH-1:0] FPCOP_SFLE = `OR1K_FPCOP_SFLE;

  // For ordered / unordered comparison
  localparam [`OR1K_FPUOP_GENERIC_CMP_WIDTH-1:0] GENERIC_SFEQ = FPCOP_SFEQ[`OR1K_FPUOP_GENERIC_CMP_SELECT];
  localparam [`OR1K_FPUOP_GENERIC_CMP_WIDTH-1:0] GENERIC_SFNE = FPCOP_SFNE[`OR1K_FPUOP_GENERIC_CMP_SELECT];
  localparam [`OR1K_FPUOP_GENERIC_CMP_WIDTH-1:0] GENERIC_SFGT = FPCOP_SFGT[`OR1K_FPUOP_GENERIC_CMP_SELECT];
  localparam [`OR1K_FPUOP_GENERIC_CMP_WIDTH-1:0] GENERIC_SFGE = FPCOP_SFGE[`OR1K_FPUOP_GENERIC_CMP_SELECT];
  localparam [`OR1K_FPUOP_GENERIC_CMP_WIDTH-1:0] GENERIC_SFLT = FPCOP_SFLT[`OR1K_FPUOP_GENERIC_CMP_SELECT];
  localparam [`OR1K_FPUOP_GENERIC_CMP_WIDTH-1:0] GENERIC_SFLE = FPCOP_SFLE[`OR1K_FPUOP_GENERIC_CMP_SELECT];

  // Exception Logic

  // Analysis of operands
  wire qnan = qnana_i | qnanb_i;
  wire snan = snana_i | snanb_i;
  wire anan = qnan | snan;

  //  Comparison is ordered/unordered EQ/NE
  wire eqne = (generic_cmp_opc_i == GENERIC_SFEQ) | (generic_cmp_opc_i == GENERIC_SFNE);

  // Comparison is invalid if:
  //  1) sNaN is an operand of ordered/unordered EQ/NE comparison
  //  2)  NaN is an operand of ordered LT/LE/GT/GE comparison
  wire inv_cmp = (eqne & snan) | ((~eqne) & anan & (~unordered_cmp_bit_i));

  // Comparison Logic
  wire exp_gt = exp10a_i > exp10b_i;
  wire exp_eq = exp10a_i == exp10b_i;
  wire exp_lt = (~exp_gt) & (~exp_eq);  // exp10a_i  < exp10b_i;

  wire fract_gt = fract24a_i > fract24b_i;
  wire fract_eq = fract24a_i == fract24b_i;
  wire fract_lt = (~fract_gt) & (~fract_eq);  // fract24a_i  < fract24b_i;

  wire all_zero = zeroa_i & zerob_i;

  reg altb, blta, aeqb;

  always @(qnan or snan or infa_i or infb_i or signa_i or signb_i or exp_eq or exp_gt or exp_lt or fract_eq or fract_gt or fract_lt or all_zero) begin
    casez ({ qnan, snan, infa_i, infb_i, signa_i, signb_i, exp_eq, exp_gt, exp_lt, fract_eq, fract_gt, fract_lt, all_zero })
      13'b1?_??_??_???_???_?: {blta, altb, aeqb} = 3'b000;  // qnan
      13'b?1_??_??_???_???_?: {blta, altb, aeqb} = 3'b000;  // snan

      13'b00_11_00_???_???_?: {blta, altb, aeqb} = 3'b001;  // both op INF comparisson
      13'b00_11_01_???_???_?: {blta, altb, aeqb} = 3'b100;
      13'b00_11_10_???_???_?: {blta, altb, aeqb} = 3'b010;
      13'b00_11_11_???_???_?: {blta, altb, aeqb} = 3'b001;

      13'b00_10_00_???_???_?: {blta, altb, aeqb} = 3'b100;  // opa_i INF comparisson
      13'b00_10_01_???_???_?: {blta, altb, aeqb} = 3'b100;
      13'b00_10_10_???_???_?: {blta, altb, aeqb} = 3'b010;
      13'b00_10_11_???_???_?: {blta, altb, aeqb} = 3'b010;

      13'b00_01_00_???_???_?: {blta, altb, aeqb} = 3'b010;  // opb_i INF comparisson
      13'b00_01_01_???_???_?: {blta, altb, aeqb} = 3'b100;
      13'b00_01_10_???_???_?: {blta, altb, aeqb} = 3'b010;
      13'b00_01_11_???_???_?: {blta, altb, aeqb} = 3'b100;

      13'b00_00_10_???_???_0: {blta, altb, aeqb} = 3'b010;  // compare base on sign
      13'b00_00_01_???_???_0: {blta, altb, aeqb} = 3'b100;  // compare base on sign

      13'b00_00_??_???_???_1: {blta, altb, aeqb} = 3'b001;  // compare base on sign both are zero

      13'b00_00_00_010_???_?: {blta, altb, aeqb} = 3'b100;  // cmp exp, equal sign
      13'b00_00_00_001_???_?: {blta, altb, aeqb} = 3'b010;
      13'b00_00_11_010_???_?: {blta, altb, aeqb} = 3'b010;
      13'b00_00_11_001_???_?: {blta, altb, aeqb} = 3'b100;

      13'b00_00_00_100_010_?: {blta, altb, aeqb} = 3'b100;  // compare fractions, equal sign, equal exp
      13'b00_00_00_100_001_?: {blta, altb, aeqb} = 3'b010;
      13'b00_00_11_100_010_?: {blta, altb, aeqb} = 3'b010;
      13'b00_00_11_100_001_?: {blta, altb, aeqb} = 3'b100;

      13'b00_00_00_100_100_?: {blta, altb, aeqb} = 3'b001;
      13'b00_00_11_100_100_?: {blta, altb, aeqb} = 3'b001;

      default: {blta, altb, aeqb} = 3'b000;
    endcase
  end

  // Comparison cmp_flag generation
  reg  generic_cmp_flag;  // ordered / unordered
  wire cmp_flag = (unordered_cmp_bit_i & anan) | generic_cmp_flag;

  always @(altb or blta or aeqb or generic_cmp_opc_i) begin
    case (generic_cmp_opc_i)  // synthesis parallel_case
      GENERIC_SFEQ: generic_cmp_flag = aeqb;
      GENERIC_SFNE: generic_cmp_flag = ~aeqb;
      GENERIC_SFGT: generic_cmp_flag = blta & ~aeqb;
      GENERIC_SFGE: generic_cmp_flag = blta | aeqb;
      GENERIC_SFLT: generic_cmp_flag = altb & ~aeqb;
      GENERIC_SFLE: generic_cmp_flag = altb | aeqb;
      default:      generic_cmp_flag = 1'b0;
    endcase
  end

  // output (latching is perfommed on FPU top level)
  assign addsub_agtb_o = exp_gt | (exp_eq & fract_gt);
  assign addsub_aeqb_o = exp_eq & fract_eq;

  assign cmp_flag_o    = cmp_flag;
  assign inv_o         = inv_cmp;
  assign inf_o         = infa_i | infb_i;
  assign ready_o       = fpu_op_is_comp_i;
endmodule
