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

module pu_or1k_pcu #(
  parameter OPTION_PERFCOUNTERS_NUM = 7
)
  (
    input clk,
    input rst,

    // SPR Bus interface
    input         spr_access_i,
    input         spr_we_i,
    input         spr_re_i,
    input  [15:0] spr_addr_i,
    input  [31:0] spr_dat_i,
    output        spr_bus_ack,
    output [31:0] spr_dat_o,

    // Current cpu mode: user/supervisor
    input         spr_sys_mode_i,
    // Events that can occur
    input         pcu_event_load_i,            // track load insn
    input         pcu_event_store_i,           // track store insn
    input         pcu_event_ifetch_i,          // track insn fetch
    input         pcu_event_dcache_miss_i,     // track data cache miss
    input         pcu_event_icache_miss_i,     // track insn cache miss
    input         pcu_event_ifetch_stall_i,    // track SOME stall
    input         pcu_event_lsu_stall_i,       // track LSU stall
    input         pcu_event_brn_stall_i,       // track brn miss
    input         pcu_event_dtlb_miss_i,       // track data tlb miss
    input         pcu_event_itlb_miss_i,       // track insn tlb miss
    input         pcu_event_datadep_stall_i    // track SOME stall
  );

  // Registers
  reg [31:0]    pcu_pccr[0:OPTION_PERFCOUNTERS_NUM];
  reg [31:0]    pcu_pcmr[0:OPTION_PERFCOUNTERS_NUM];

  wire pcu_pccr_access;
  wire pcu_pcmr_access;

  // check if we access pcu
  // TO-DO: generate this signals according to present units
  assign pcu_pccr_access = spr_access_i &
    ((`SPR_OFFSET(spr_addr_i) == `SPR_OFFSET(`OR1K_SPR_PCCR0_ADDR)) |
     (`SPR_OFFSET(spr_addr_i) == `SPR_OFFSET(`OR1K_SPR_PCCR1_ADDR)) |
     (`SPR_OFFSET(spr_addr_i) == `SPR_OFFSET(`OR1K_SPR_PCCR2_ADDR)) |
     (`SPR_OFFSET(spr_addr_i) == `SPR_OFFSET(`OR1K_SPR_PCCR3_ADDR)) |
     (`SPR_OFFSET(spr_addr_i) == `SPR_OFFSET(`OR1K_SPR_PCCR4_ADDR)) |
     (`SPR_OFFSET(spr_addr_i) == `SPR_OFFSET(`OR1K_SPR_PCCR5_ADDR)) |
     (`SPR_OFFSET(spr_addr_i) == `SPR_OFFSET(`OR1K_SPR_PCCR6_ADDR)) |
     (`SPR_OFFSET(spr_addr_i) == `SPR_OFFSET(`OR1K_SPR_PCCR7_ADDR)));

  assign pcu_pcmr_access = spr_access_i &
    ((`SPR_OFFSET(spr_addr_i) == `SPR_OFFSET(`OR1K_SPR_PCMR0_ADDR)) |
     (`SPR_OFFSET(spr_addr_i) == `SPR_OFFSET(`OR1K_SPR_PCMR1_ADDR)) |
     (`SPR_OFFSET(spr_addr_i) == `SPR_OFFSET(`OR1K_SPR_PCMR2_ADDR)) |
     (`SPR_OFFSET(spr_addr_i) == `SPR_OFFSET(`OR1K_SPR_PCMR3_ADDR)) |
     (`SPR_OFFSET(spr_addr_i) == `SPR_OFFSET(`OR1K_SPR_PCMR4_ADDR)) |
     (`SPR_OFFSET(spr_addr_i) == `SPR_OFFSET(`OR1K_SPR_PCMR5_ADDR)) |
     (`SPR_OFFSET(spr_addr_i) == `SPR_OFFSET(`OR1K_SPR_PCMR6_ADDR)) |
     (`SPR_OFFSET(spr_addr_i) == `SPR_OFFSET(`OR1K_SPR_PCMR7_ADDR)));

  // put data on data bus
  assign spr_bus_ack = spr_access_i;
  assign spr_dat_o   = (spr_access_i & pcu_pccr_access & spr_re_i) ? pcu_pccr[spr_addr_i[2:0]] :
      (spr_access_i & pcu_pcmr_access & spr_re_i & spr_sys_mode_i) ? pcu_pcmr[spr_addr_i[2:0]] : 0;
  genvar pcu_num;
  generate
    for(pcu_num = 0; pcu_num < OPTION_PERFCOUNTERS_NUM + 1; pcu_num = pcu_num + 1) begin: pcu_generate
      wire [`OR1K_PCMR_DDS:`OR1K_PCMR_LA] pcu_events_active;
      wire [`OR1K_PCMR_DDS:`OR1K_PCMR_LA] pcu_events_hit;

      assign pcu_events_active =
        (pcu_event_load_i << `OR1K_PCMR_LA) |
        (pcu_event_store_i << `OR1K_PCMR_SA) |
        (pcu_event_ifetch_i << `OR1K_PCMR_IF) |
        (pcu_event_dcache_miss_i << `OR1K_PCMR_DCM) |
        (pcu_event_icache_miss_i << `OR1K_PCMR_ICM) |
        (pcu_event_ifetch_stall_i << `OR1K_PCMR_IFS) |
        (pcu_event_lsu_stall_i << `OR1K_PCMR_LSUS) |
        (pcu_event_brn_stall_i << `OR1K_PCMR_BS) |
        (pcu_event_dtlb_miss_i << `OR1K_PCMR_DTLBM) |
        (pcu_event_itlb_miss_i << `OR1K_PCMR_ITLBM) |
        (pcu_event_datadep_stall_i << `OR1K_PCMR_DDS);

      assign pcu_events_hit = pcu_events_active & pcu_pcmr[pcu_num];

      always @(posedge clk or posedge rst) begin
        if (rst) begin
          pcu_pccr[pcu_num] <= 32'd0;
          pcu_pcmr[pcu_num] <= 32'd0 | 1 << `OR1K_PCMR_CP;
          // we could write pcu registers only in system mode
        end else if (spr_we_i && spr_sys_mode_i) begin
          if (pcu_pccr_access & (spr_addr_i[2:0] == pcu_num)) begin
            pcu_pccr[pcu_num] <= spr_dat_i;
          end

          // WPE are not implemented, hence we do not update WPE part
          if (pcu_pcmr_access && (spr_addr_i[2:0] == pcu_num)) begin
            pcu_pcmr[pcu_num][`OR1K_PCMR_DDS:`OR1K_PCMR_CISM] <=
            spr_dat_i[`OR1K_PCMR_DDS:`OR1K_PCMR_CISM];
          end
        end else if (((pcu_pcmr[pcu_num][`OR1K_PCMR_CISM] & spr_sys_mode_i) | (pcu_pcmr[pcu_num][`OR1K_PCMR_CIUM] & ~spr_sys_mode_i))) begin
          pcu_pccr[pcu_num] <= pcu_pccr[pcu_num] +
          pcu_events_hit[`OR1K_PCMR_LA] +
          pcu_events_hit[`OR1K_PCMR_SA] +
          pcu_events_hit[`OR1K_PCMR_IF] +
          pcu_events_hit[`OR1K_PCMR_DCM] +
          pcu_events_hit[`OR1K_PCMR_ICM] +
          pcu_events_hit[`OR1K_PCMR_IFS] +
          pcu_events_hit[`OR1K_PCMR_LSUS] +
          pcu_events_hit[`OR1K_PCMR_BS] +
          pcu_events_hit[`OR1K_PCMR_DTLBM] +
          pcu_events_hit[`OR1K_PCMR_ITLBM] +
          pcu_events_hit[`OR1K_PCMR_DDS];
        end
      end
    end
  endgenerate
endmodule
