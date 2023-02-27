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

`include "or1k_defines.sv"

module or1k_branch_prediction #(
  parameter [95:0] FEATURE_BRANCH_PREDICTOR = "SIMPLE",
  parameter        OPTION_OPERAND_WIDTH     = 32
)
  (
    input clk,
    input rst,

    // Signals belonging to the stage where the branch is predicted.
    input                            op_bf_i,           // from decode stage, brn is bf
    input                            op_bnf_i,          // from decode stage, brn is bnf
    input [                     9:0] immjbr_upper_i,    // from decode stage, imm
    input [OPTION_OPERAND_WIDTH-1:0] brn_pc_i,          // pc of brn being predicted
    output                           predicted_flag_o,  // to decode-execute stage, flag we predict to be

    // Signals belonging to the stage where the branch is resolved.
    input prev_op_brcond_i,       // from decode-execute stage, prev brn was cond
    input prev_predicted_flag_i,  // from decode-execute, prev predicted flag
    input flag_i,                 // from execute-ctrl stage, real flag we got

    input padv_decode_i,          // is decode stage stalled
    input execute_bf_i,           // prev insn was bf
    input execute_bnf_i,          // prev insn was bnf

    // Branch misprediction indicator
    output branch_mispredict_o    // to decode-execute stage, was brn mispredicted or not
  );

  // Compare the real flag with the previously predicted flag and signal a
  // misprediction in case of a mismatch.
  assign branch_mispredict_o = prev_op_brcond_i & (flag_i != prev_predicted_flag_i);

  generate
    if (FEATURE_BRANCH_PREDICTOR=="SAT_COUNTER") begin : branch_predictor_saturation_counter
      or1k_branch_predictor_saturation_counter or1k_branch_predictor_saturation_counter (
        .clk                              (clk),
        .rst                              (rst),

        .predicted_flag_o                 (predicted_flag_o),

        .execute_op_bf_i                  (execute_bf_i),
        .execute_op_bnf_i                 (execute_bnf_i),
        .op_bf_i                          (op_bf_i),
        .op_bnf_i                         (op_bnf_i),
        .prev_op_brcond_i                 (prev_op_brcond_i),
        .flag_i                           (flag_i),

        .padv_decode_i                    (padv_decode_i),
        .branch_mispredict_i              (branch_mispredict_o)
      );
    end
    else if (FEATURE_BRANCH_PREDICTOR=="GSHARE") begin : branch_predictor_gshare
      or1k_branch_predictor_gshare #(
        .OPTION_OPERAND_WIDTH(OPTION_OPERAND_WIDTH)
      )
      or1k_branch_predictor_gshare (
        .clk                              (clk),
        .rst                              (rst),

        .predicted_flag_o                 (predicted_flag_o),

        .execute_op_bf_i                  (execute_bf_i),
        .execute_op_bnf_i                 (execute_bnf_i),
        .op_bf_i                          (op_bf_i),
        .op_bnf_i                         (op_bnf_i),
        .padv_decode_i                    (padv_decode_i),
        .flag_i                           (flag_i),

        .prev_op_brcond_i                 (prev_op_brcond_i),
        .branch_mispredict_i              (branch_mispredict_o),

        .brn_pc_i                         (brn_pc_i)
      );
    end
    else if (FEATURE_BRANCH_PREDICTOR=="SIMPLE") begin : branch_predictor_simple
      or1k_branch_predictor_simple or1k_branch_predictor_simple (
        .op_bf_i                          (op_bf_i),
        .op_bnf_i                         (op_bnf_i),
        .immjbr_upper_i                   (immjbr_upper_i),
        .predicted_flag_o                 (predicted_flag_o)
      );
    end
    else begin
      initial begin
        $display("Error: FEATURE_PREDICTOR_TYPE, %s, not valid", FEATURE_BRANCH_PREDICTOR);
        $finish();
      end
    end
  endgenerate
endmodule
