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

module pu_or1k_branch_predictor_gshare #(
  parameter GSHARE_BITS_NUM      = 10,
  parameter OPTION_OPERAND_WIDTH = 32
) (
  input clk,
  input rst,

  // Signals belonging to the stage where the branch is predicted.
  output predicted_flag_o,  // result of predictor

  input execute_op_bf_i,   // prev insn was bf
  input execute_op_bnf_i,  // prev insn was bnf
  input op_bf_i,           // cur insn is bf
  input op_bnf_i,          // cur insn is bnf
  input padv_decode_i,     // pipeline is moved
  input flag_i,            // prev predicted flag

  // Signals belonging to the stage where the branch is resolved.
  input prev_op_brcond_i,    // prev op was cond brn
  input branch_mispredict_i, // prev brn was mispredicted

  input [OPTION_OPERAND_WIDTH-1:0] brn_pc_i
);

  localparam [1:0] STATE_STRONGLY_NOT_TAKEN = 2'b00;
  localparam [1:0] STATE_WEAKLY_NOT_TAKEN = 2'b01;
  localparam [1:0] STATE_WEAKLY_TAKEN = 2'b10;
  localparam [1:0] STATE_STRONGLY_TAKEN = 2'b11;

  localparam FSM_NUM = 2 ** GSHARE_BITS_NUM;

  integer                         i = 0;

  reg     [                  1:0] state                                                                           [0:FSM_NUM];
  reg     [    GSHARE_BITS_NUM:0] brn_hist_reg = 0;

  reg     [GSHARE_BITS_NUM - 1:0] prev_idx = 0;

  // +2 bits for alignement
  wire    [  GSHARE_BITS_NUM-1:0] state_index = brn_hist_reg[GSHARE_BITS_NUM-1:0] ^ brn_pc_i[GSHARE_BITS_NUM+1:2];

  assign predicted_flag_o = (state[state_index][1] && op_bf_i) || (!state[state_index][1] && op_bnf_i);
  wire brn_taken = (execute_op_bf_i && flag_i) || (execute_op_bnf_i && !flag_i);

  always @(posedge clk) begin
    if (rst) begin
      brn_hist_reg <= 0;
      prev_idx     <= 0;
      for (i = 0; i < FSM_NUM; i = i + 1) begin
        state[i] <= STATE_WEAKLY_TAKEN;
      end
    end else begin
      if (op_bf_i || op_bnf_i) begin
        // store prev index
        prev_idx <= state_index;
      end

      if (prev_op_brcond_i && padv_decode_i) begin
        brn_hist_reg <= {brn_hist_reg[GSHARE_BITS_NUM-1:0], brn_taken};
        if (!brn_taken) begin
          // change fsm state:
          //   STATE_STRONGLY_TAKEN     -> STATE_WEAKLY_TAKEN
          //   STATE_WEAKLY_TAKEN       -> STATE_WEAKLY_NOT_TAKEN
          //   STATE_WEAKLY_NOT_TAKEN   -> STATE_STRONGLY_NOT_TAKEN
          //   STATE_STRONGLY_NOT_TAKEN -> STATE_STRONGLY_NOT_TAKEN
          case (state[prev_idx])
            STATE_STRONGLY_TAKEN:     state[prev_idx] <= STATE_WEAKLY_TAKEN;
            STATE_WEAKLY_TAKEN:       state[prev_idx] <= STATE_WEAKLY_NOT_TAKEN;
            STATE_WEAKLY_NOT_TAKEN:   state[prev_idx] <= STATE_STRONGLY_NOT_TAKEN;
            STATE_STRONGLY_NOT_TAKEN: state[prev_idx] <= STATE_STRONGLY_NOT_TAKEN;
          endcase
        end else begin
          // change fsm state:
          //   STATE_STRONGLY_NOT_TAKEN -> STATE_WEAKLY_NOT_TAKEN
          //   STATE_WEAKLY_NOT_TAKEN -> STATE_WEAKLY_TAKEN
          //   STATE_WEAKLY_TAKEN -> STATE_STRONGLY_TAKEN
          //   STATE_STRONGLY_TAKEN -> STATE_STRONGLY_TAKEN
          case (state[prev_idx])
            STATE_STRONGLY_NOT_TAKEN: state[prev_idx] <= STATE_WEAKLY_NOT_TAKEN;
            STATE_WEAKLY_NOT_TAKEN:   state[prev_idx] <= STATE_WEAKLY_TAKEN;
            STATE_WEAKLY_TAKEN:       state[prev_idx] <= STATE_STRONGLY_TAKEN;
            STATE_STRONGLY_TAKEN:     state[prev_idx] <= STATE_STRONGLY_TAKEN;
          endcase
        end
      end
    end
  end
endmodule
