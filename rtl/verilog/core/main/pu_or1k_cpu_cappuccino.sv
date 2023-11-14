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

module pu_or1k_cpu_cappuccino #(
  parameter OPTION_OPERAND_WIDTH = 32,

  parameter FEATURE_DATACACHE          = "NONE",
  parameter OPTION_DCACHE_BLOCK_WIDTH  = 5,
  parameter OPTION_DCACHE_SET_WIDTH    = 9,
  parameter OPTION_DCACHE_WAYS         = 2,
  parameter OPTION_DCACHE_LIMIT_WIDTH  = 32,
  parameter OPTION_DCACHE_SNOOP        = "NONE",
  parameter FEATURE_DMMU               = "NONE",
  parameter FEATURE_DMMU_HW_TLB_RELOAD = "NONE",
  parameter OPTION_DMMU_SET_WIDTH      = 6,
  parameter OPTION_DMMU_WAYS           = 1,
  parameter FEATURE_INSTRUCTIONCACHE   = "NONE",
  parameter OPTION_ICACHE_BLOCK_WIDTH  = 5,
  parameter OPTION_ICACHE_SET_WIDTH    = 9,
  parameter OPTION_ICACHE_WAYS         = 2,
  parameter OPTION_ICACHE_LIMIT_WIDTH  = 32,
  parameter FEATURE_IMMU               = "NONE",
  parameter FEATURE_IMMU_HW_TLB_RELOAD = "NONE",
  parameter OPTION_IMMU_SET_WIDTH      = 6,
  parameter OPTION_IMMU_WAYS           = 1,
  parameter FEATURE_TIMER              = "ENABLED",
  parameter FEATURE_DEBUGUNIT          = "NONE",
  parameter FEATURE_PERFCOUNTERS       = "NONE",
  parameter OPTION_PERFCOUNTERS_NUM    = 0,
  parameter FEATURE_MAC                = "NONE",

  parameter FEATURE_SYSCALL = "ENABLED",
  parameter FEATURE_TRAP    = "ENABLED",
  parameter FEATURE_RANGE   = "ENABLED",

  parameter FEATURE_PIC          = "ENABLED",
  parameter OPTION_PIC_TRIGGER   = "LEVEL",
  parameter OPTION_PIC_NMI_WIDTH = 0,

  parameter FEATURE_DSX        = "NONE",
  parameter FEATURE_OVERFLOW   = "NONE",
  parameter FEATURE_CARRY_FLAG = "ENABLED",

  parameter FEATURE_FASTCONTEXTS     = "NONE",
  parameter OPTION_RF_CLEAR_ON_INIT  = 0,
  parameter OPTION_RF_NUM_SHADOW_GPR = 0,
  parameter OPTION_RF_ADDR_WIDTH     = 5,
  parameter OPTION_RF_WORDS          = 32,

  parameter OPTION_RESET_PC = {{(OPTION_OPERAND_WIDTH - 13) {1'b0}}, `OR1K_RESET_VECTOR, 8'd0},

  parameter FEATURE_MULTIPLIER = "THREESTAGE",
  parameter FEATURE_DIVIDER    = "NONE",

  parameter OPTION_SHIFTER = "BARREL",

  parameter FEATURE_ADDC  = "NONE",
  parameter FEATURE_SRA   = "ENABLED",
  parameter FEATURE_ROR   = "NONE",
  parameter FEATURE_EXT   = "NONE",
  parameter FEATURE_CMOV  = "NONE",
  parameter FEATURE_FFL1  = "NONE",
  parameter FEATURE_MSYNC = "ENABLED",
  parameter FEATURE_PSYNC = "NONE",
  parameter FEATURE_CSYNC = "NONE",

  parameter FEATURE_ATOMIC = "ENABLED",

  parameter FEATURE_FPU          = "NONE",  // ENABLED|NONE
  parameter OPTION_FTOI_ROUNDING = "CPP",   // "CPP" / "IEEE"

  parameter FEATURE_CUST1 = "NONE",
  parameter FEATURE_CUST2 = "NONE",
  parameter FEATURE_CUST3 = "NONE",
  parameter FEATURE_CUST4 = "NONE",
  parameter FEATURE_CUST5 = "NONE",
  parameter FEATURE_CUST6 = "NONE",
  parameter FEATURE_CUST7 = "NONE",
  parameter FEATURE_CUST8 = "NONE",

  parameter FEATURE_STORE_BUFFER            = "ENABLED",
  parameter OPTION_STORE_BUFFER_DEPTH_WIDTH = 8,

  parameter FEATURE_MULTICORE = "NONE",

  parameter FEATURE_TRACEPORT_EXEC   = "NONE",
  parameter FEATURE_BRANCH_PREDICTOR = "SIMPLE"  // SIMPLE|SAT_COUNTER|GSHARE
) (
  input clk,
  input rst,

  // Instruction bus
  input                             ibus_err_i,
  input                             ibus_ack_i,
  input  [`OR1K_INSN_WIDTH    -1:0] ibus_dat_i,
  output [OPTION_OPERAND_WIDTH-1:0] ibus_adr_o,
  output                            ibus_req_o,
  output                            ibus_burst_o,

  // Data bus
  input                             dbus_err_i,
  input                             dbus_ack_i,
  input  [OPTION_OPERAND_WIDTH-1:0] dbus_dat_i,
  output [OPTION_OPERAND_WIDTH-1:0] dbus_adr_o,
  output [OPTION_OPERAND_WIDTH-1:0] dbus_dat_o,
  output                            dbus_req_o,
  output [                     3:0] dbus_bsel_o,
  output                            dbus_we_o,
  output                            dbus_burst_o,

  // Interrupts
  input [31:0] irq_i,

  // Debug interface
  input  [                    15:0] du_addr_i,
  input                             du_stb_i,
  input  [OPTION_OPERAND_WIDTH-1:0] du_dat_i,
  input                             du_we_i,
  output [OPTION_OPERAND_WIDTH-1:0] du_dat_o,
  output                            du_ack_o,
  // Stall control from debug interface
  input                             du_stall_i,
  output                            du_stall_o,

  output reg                            traceport_exec_valid_o,
  output reg [                    31:0] traceport_exec_pc_o,
  output reg                            traceport_exec_jb_o,
  output reg                            traceport_exec_jal_o,
  output reg                            traceport_exec_jr_o,
  output reg [                    31:0] traceport_exec_jbtarget_o,
  output reg [    `OR1K_INSN_WIDTH-1:0] traceport_exec_insn_o,
  output     [OPTION_OPERAND_WIDTH-1:0] traceport_exec_wbdata_o,
  output     [OPTION_RF_ADDR_WIDTH-1:0] traceport_exec_wbreg_o,
  output                                traceport_exec_wben_o,

  // SPR accesses to external units (cache, mmu, etc.)
  output [                    15:0] spr_bus_addr_o,
  output                            spr_bus_we_o,
  output                            spr_bus_stb_o,
  output [OPTION_OPERAND_WIDTH-1:0] spr_bus_dat_o,
  input  [OPTION_OPERAND_WIDTH-1:0] spr_bus_dat_mac_i,
  input                             spr_bus_ack_mac_i,
  input  [OPTION_OPERAND_WIDTH-1:0] spr_bus_dat_pmu_i,
  input                             spr_bus_ack_pmu_i,
  input  [OPTION_OPERAND_WIDTH-1:0] spr_bus_dat_pcu_i,
  input                             spr_bus_ack_pcu_i,
  input  [OPTION_OPERAND_WIDTH-1:0] spr_bus_dat_fpu_i,
  input                             spr_bus_ack_fpu_i,
  output [                    15:0] spr_sr_o,

  input [OPTION_OPERAND_WIDTH-1:0] multicore_coreid_i,
  input [OPTION_OPERAND_WIDTH-1:0] multicore_numcores_i,

  input [31:0] snoop_adr_i,
  input        snoop_en_i
);

  wire [OPTION_OPERAND_WIDTH-1:0] pc_fetch_to_decode;
  wire [`OR1K_INSN_WIDTH    -1:0] insn_fetch_to_decode;
  wire [OPTION_OPERAND_WIDTH-1:0] pc_decode_to_execute;
  wire [OPTION_OPERAND_WIDTH-1:0] pc_execute_to_ctrl;

  // Beginning of automatic wires (for undeclared instantiated-module outputs)
  wire [OPTION_OPERAND_WIDTH-1:0] adder_result_o;
  wire [OPTION_OPERAND_WIDTH-1:0] alu_result_o;
  wire                            alu_valid_o;
  wire                            atomic_flag_clear_o;
  wire                            atomic_flag_set_o;
  wire                            branch_mispredict_o;
  wire                            carry_clear_o;
  wire                            carry_set_o;
  wire [OPTION_OPERAND_WIDTH-1:0] ctrl_alu_result_o;
  wire [OPTION_OPERAND_WIDTH-1:0] ctrl_branch_except_pc_o;
  wire                            ctrl_branch_exception_o;
  wire                            ctrl_bubble_o;
  wire                            ctrl_carry_clear_o;
  wire                            ctrl_carry_o;
  wire                            ctrl_carry_set_o;
  wire [OPTION_OPERAND_WIDTH-1:0] ctrl_epcr_o;
  wire                            ctrl_except_align_o;
  wire                            ctrl_except_dbus_o;
  wire                            ctrl_except_dpagefault_o;
  wire                            ctrl_except_dtlb_miss_o;
  wire                            ctrl_except_ibus_align_o;
  wire                            ctrl_except_ibus_err_o;
  wire                            ctrl_except_illegal_o;
  wire                            ctrl_except_ipagefault_o;
  wire                            ctrl_except_itlb_miss_o;
  wire                            ctrl_except_syscall_o;
  wire                            ctrl_except_trap_o;
  wire                            ctrl_flag_clear_o;
  wire                            ctrl_flag_o;
  wire                            ctrl_flag_set_o;
  wire [OPTION_OPERAND_WIDTH-1:0] ctrl_lsu_adr_o;
  wire [                     1:0] ctrl_lsu_length_o;
  wire                            ctrl_lsu_zext_o;
  wire                            ctrl_mfspr_ack_o;
  wire                            ctrl_mtspr_ack_o;
  wire                            ctrl_op_lsu_atomic_o;
  wire                            ctrl_op_lsu_load_o;
  wire                            ctrl_op_lsu_store_o;
  wire                            ctrl_op_mfspr_o;
  wire                            ctrl_op_msync_o;
  wire                            ctrl_op_mtspr_o;
  wire                            ctrl_op_mul_o;
  wire                            ctrl_op_rfe_o;
  wire                            ctrl_overflow_clear_o;
  wire                            ctrl_overflow_set_o;
  wire [`OR1K_FPCSR_WIDTH   -1:0] ctrl_fpcsr_o;
  wire                            ctrl_fpcsr_set_o;
  wire [`OR1K_FPCSR_RM_SIZE -1:0] ctrl_fpu_round_mode_o;
  wire                            ctrl_rf_wb_o;
  wire [OPTION_OPERAND_WIDTH-1:0] ctrl_rfb_o;
  wire [OPTION_RF_ADDR_WIDTH-1:0] ctrl_rfd_adr_o;
  wire                            ctrl_valid_o;
  wire                            decode_adder_do_carry_o;
  wire                            decode_adder_do_sub_o;
  wire                            decode_branch_o;
  wire [OPTION_OPERAND_WIDTH-1:0] decode_branch_target_o;
  wire                            decode_bubble_o;
  wire                            decode_except_ibus_err_o;
  wire                            decode_except_illegal_o;
  wire                            decode_except_ipagefault_o;
  wire                            decode_except_itlb_miss_o;
  wire                            decode_except_syscall_o;
  wire                            decode_except_trap_o;
  wire [`OR1K_IMM_WIDTH     -1:0] decode_imm16_o;
  wire [OPTION_OPERAND_WIDTH-1:0] decode_immediate_o;
  wire                            decode_immediate_sel_o;
  wire [                     9:0] decode_immjbr_upper_o;
  wire [                     1:0] decode_lsu_length_o;
  wire                            decode_lsu_zext_o;
  wire                            decode_op_add_o;
  wire                            decode_op_alu_o;
  wire                            decode_op_bf_o;
  wire                            decode_op_bnf_o;
  wire                            decode_op_branch_o;
  wire                            decode_op_brcond_o;
  wire                            decode_op_div_o;
  wire                            decode_op_div_signed_o;
  wire                            decode_op_div_unsigned_o;
  wire                            decode_op_ffl1_o;
  wire                            decode_op_jal_o;
  wire                            decode_op_jbr_o;
  wire                            decode_op_jr_o;
  wire                            decode_op_lsu_atomic_o;
  wire                            decode_op_lsu_load_o;
  wire                            decode_op_lsu_store_o;
  wire                            decode_op_mfspr_o;
  wire                            decode_op_movhi_o;
  wire                            decode_op_ext_o;
  wire                            decode_op_msync_o;
  wire [`OR1K_FPUOP_WIDTH   -1:0] decode_op_fpu_o;
  wire                            decode_op_mtspr_o;
  wire                            decode_op_mul_o;
  wire                            decode_op_mul_signed_o;
  wire                            decode_op_mul_unsigned_o;
  wire                            decode_op_rfe_o;
  wire                            decode_op_setflag_o;
  wire                            decode_op_shift_o;
  wire [`OR1K_ALU_OPC_WIDTH -1:0] decode_opc_alu_o;
  wire [`OR1K_ALU_OPC_WIDTH -1:0] decode_opc_alu_secondary_o;
  wire [`OR1K_OPCODE_WIDTH  -1:0] decode_opc_insn_o;
  wire                            decode_rf_wb_o;
  wire [OPTION_RF_ADDR_WIDTH-1:0] decode_rfa_adr_o;
  wire [OPTION_OPERAND_WIDTH-1:0] decode_rfa_o;
  wire [OPTION_RF_ADDR_WIDTH-1:0] decode_rfb_adr_o;
  wire [OPTION_OPERAND_WIDTH-1:0] decode_rfb_o;
  wire [OPTION_RF_ADDR_WIDTH-1:0] decode_rfd_adr_o;
  wire                            decode_valid_o;
  wire                            doing_rfe_o;
  wire                            du_restart_o;
  wire [OPTION_OPERAND_WIDTH-1:0] du_restart_pc_o;
  wire                            execute_adder_do_carry_o;
  wire                            execute_adder_do_sub_o;
  wire                            execute_bubble_o;
  wire                            execute_except_ibus_align_o;
  wire                            execute_except_ibus_err_o;
  wire                            execute_except_illegal_o;
  wire                            execute_except_ipagefault_o;
  wire                            execute_except_itlb_miss_o;
  wire                            execute_except_syscall_o;
  wire                            execute_except_trap_o;
  wire [`OR1K_IMM_WIDTH     -1:0] execute_imm16_o;
  wire [OPTION_OPERAND_WIDTH-1:0] execute_immediate_o;
  wire                            execute_immediate_sel_o;
  wire [                     9:0] execute_immjbr_upper_o;
  wire [OPTION_OPERAND_WIDTH-1:0] execute_jal_result_o;
  wire [                     1:0] execute_lsu_length_o;
  wire                            execute_lsu_zext_o;
  wire [OPTION_OPERAND_WIDTH-1:0] execute_mispredict_target_o;
  wire                            execute_op_add_o;
  wire                            execute_op_alu_o;
  wire                            execute_op_bf_o;
  wire                            execute_op_bnf_o;
  wire                            execute_op_branch_o;
  wire                            execute_op_brcond_o;
  wire                            execute_op_div_o;
  wire                            execute_op_div_signed_o;
  wire                            execute_op_div_unsigned_o;
  wire                            execute_op_ffl1_o;
  wire                            execute_op_jal_o;
  wire                            execute_op_jbr_o;
  wire                            execute_op_jr_o;
  wire                            execute_op_lsu_atomic_o;
  wire                            execute_op_lsu_load_o;
  wire                            execute_op_lsu_store_o;
  wire                            execute_op_mfspr_o;
  wire                            execute_op_movhi_o;
  wire                            execute_op_ext_o;
  wire                            execute_op_msync_o;
  wire [`OR1K_FPUOP_WIDTH   -1:0] execute_op_fpu_o;
  wire                            execute_op_mtspr_o;
  wire                            execute_op_mul_o;
  wire                            execute_op_mul_signed_o;
  wire                            execute_op_mul_unsigned_o;
  wire                            execute_op_rfe_o;
  wire                            execute_op_setflag_o;
  wire                            execute_op_shift_o;
  wire [`OR1K_ALU_OPC_WIDTH -1:0] execute_opc_alu_o;
  wire [`OR1K_ALU_OPC_WIDTH -1:0] execute_opc_alu_secondary_o;
  wire [`OR1K_OPCODE_WIDTH  -1:0] execute_opc_insn_o;
  wire                            execute_predicted_flag_o;
  wire                            execute_rf_wb_o;
  wire [OPTION_OPERAND_WIDTH-1:0] execute_rfa_o;
  wire [OPTION_OPERAND_WIDTH-1:0] execute_rfb_o;
  wire [OPTION_RF_ADDR_WIDTH-1:0] execute_rfd_adr_o;
  wire                            execute_valid_o;
  wire                            fetch_exception_taken_o;
  wire                            fetch_rf_adr_valid_o;
  wire [OPTION_RF_ADDR_WIDTH-1:0] fetch_rfa_adr_o;
  wire [OPTION_RF_ADDR_WIDTH-1:0] fetch_rfb_adr_o;
  wire                            fetch_valid_o;
  wire                            flag_clear_o;
  wire                            flag_set_o;
  wire                            icache_hit_o;
  wire                            dcache_hit_o;
  wire                            lsu_except_align_o;
  wire                            lsu_except_dbus_o;
  wire                            lsu_except_dpagefault_o;
  wire                            lsu_except_dtlb_miss_o;
  wire [OPTION_OPERAND_WIDTH-1:0] lsu_result_o;
  wire                            lsu_valid_o;
  wire [OPTION_OPERAND_WIDTH-1:0] mfspr_dat_o;
  wire                            msync_stall_o;
  wire [OPTION_OPERAND_WIDTH-1:0] mul_result_o;
  wire                            overflow_clear_o;
  wire                            overflow_set_o;
  wire [`OR1K_FPCSR_WIDTH   -1:0] fpcsr_o;
  wire                            fpcsr_set_o;
  wire                            padv_ctrl_o;
  wire                            padv_decode_o;
  wire                            padv_execute_o;
  wire                            padv_fetch_o;
  wire                            pipeline_flush_o;
  wire                            predicted_flag_o;
  wire [OPTION_OPERAND_WIDTH-1:0] rf_result_o;
  wire                            spr_bus_ack_dc_i;
  wire                            spr_bus_ack_dmmu_i;
  wire                            spr_bus_ack_ic_i;
  wire                            spr_bus_ack_immu_i;
  wire [OPTION_OPERAND_WIDTH-1:0] spr_bus_dat_dc_i;
  wire [OPTION_OPERAND_WIDTH-1:0] spr_bus_dat_dmmu_i;
  wire [OPTION_OPERAND_WIDTH-1:0] spr_bus_dat_ic_i;
  wire [OPTION_OPERAND_WIDTH-1:0] spr_bus_dat_immu_i;
  wire                            spr_gpr_ack_o;
  wire [OPTION_OPERAND_WIDTH-1:0] spr_gpr_dat_o;
  wire [OPTION_OPERAND_WIDTH-1:0] store_buffer_epcr_o;
  wire                            store_buffer_err_o;
  wire                            wb_rf_wb_o;
  wire [OPTION_RF_ADDR_WIDTH-1:0] wb_rfd_adr_o;
  // End of automatics

  pu_or1k_fetch_cappuccino #(
    .OPTION_OPERAND_WIDTH      (OPTION_OPERAND_WIDTH),
    .OPTION_RESET_PC           (OPTION_RESET_PC),
    .FEATURE_INSTRUCTIONCACHE  (FEATURE_INSTRUCTIONCACHE),
    .OPTION_ICACHE_BLOCK_WIDTH (OPTION_ICACHE_BLOCK_WIDTH),
    .OPTION_ICACHE_SET_WIDTH   (OPTION_ICACHE_SET_WIDTH),
    .OPTION_ICACHE_WAYS        (OPTION_ICACHE_WAYS),
    .OPTION_ICACHE_LIMIT_WIDTH (OPTION_ICACHE_LIMIT_WIDTH),
    .FEATURE_IMMU              (FEATURE_IMMU),
    .FEATURE_IMMU_HW_TLB_RELOAD(FEATURE_IMMU_HW_TLB_RELOAD),
    .OPTION_IMMU_SET_WIDTH     (OPTION_IMMU_SET_WIDTH),
    .OPTION_IMMU_WAYS          (OPTION_IMMU_WAYS)
  ) pu_or1k_fetch_cappuccino (
    // Outputs
    .spr_bus_dat_ic_o           (spr_bus_dat_ic_i[OPTION_OPERAND_WIDTH-1:0]),
    .spr_bus_ack_ic_o           (spr_bus_ack_ic_i),
    .spr_bus_dat_immu_o         (spr_bus_dat_immu_i[OPTION_OPERAND_WIDTH-1:0]),
    .spr_bus_ack_immu_o         (spr_bus_ack_immu_i),
    .ibus_req_o                 (ibus_req_o),
    .ibus_adr_o                 (ibus_adr_o[OPTION_OPERAND_WIDTH-1:0]),
    .ibus_burst_o               (ibus_burst_o),
    .pc_decode_o                (pc_fetch_to_decode),
    .decode_insn_o              (insn_fetch_to_decode),
    .fetch_valid_o              (fetch_valid_o),
    .fetch_rfa_adr_o            (fetch_rfa_adr_o[OPTION_RF_ADDR_WIDTH-1:0]),
    .fetch_rfb_adr_o            (fetch_rfb_adr_o[OPTION_RF_ADDR_WIDTH-1:0]),
    .fetch_rf_adr_valid_o       (fetch_rf_adr_valid_o),
    .decode_except_ibus_err_o   (decode_except_ibus_err_o),
    .decode_except_itlb_miss_o  (decode_except_itlb_miss_o),
    .decode_except_ipagefault_o (decode_except_ipagefault_o),
    .fetch_exception_taken_o    (fetch_exception_taken_o),
    .ic_hit_o                   (icache_hit_o),
    // Inputs
    .clk                        (clk),
    .rst                        (rst),
    .spr_bus_addr_i             (spr_bus_addr_o[15:0]),
    .spr_bus_we_i               (spr_bus_we_o),
    .spr_bus_stb_i              (spr_bus_stb_o),
    .spr_bus_dat_i              (spr_bus_dat_o[OPTION_OPERAND_WIDTH-1:0]),
    .ic_enable                  (spr_sr_o[`OR1K_SPR_SR_ICE]),
    .immu_enable_i              (spr_sr_o[`OR1K_SPR_SR_IME]),
    .supervisor_mode_i          (spr_sr_o[`OR1K_SPR_SR_SM]),
    .ibus_err_i                 (ibus_err_i),
    .ibus_ack_i                 (ibus_ack_i),
    .ibus_dat_i                 (ibus_dat_i[`OR1K_INSN_WIDTH-1:0]),
    .padv_i                     (padv_fetch_o),
    .padv_ctrl_i                (padv_ctrl_o),
    .decode_branch_i            (decode_branch_o),
    .decode_branch_target_i     (decode_branch_target_o),
    .ctrl_branch_exception_i    (ctrl_branch_exception_o),
    .ctrl_branch_except_pc_i    (ctrl_branch_except_pc_o),
    .du_restart_i               (du_restart_o),
    .du_restart_pc_i            (du_restart_pc_o),
    .decode_op_brcond_i         (decode_op_brcond_o),
    .branch_mispredict_i        (branch_mispredict_o),
    .execute_mispredict_target_i(execute_mispredict_target_o),
    .pipeline_flush_i           (pipeline_flush_o),
    .doing_rfe_i                (doing_rfe_o)
  );

  pu_or1k_decode #(
    .OPTION_OPERAND_WIDTH(OPTION_OPERAND_WIDTH),
    .OPTION_RESET_PC     (OPTION_RESET_PC),
    .OPTION_RF_ADDR_WIDTH(OPTION_RF_ADDR_WIDTH),
    .FEATURE_SYSCALL     (FEATURE_SYSCALL),
    .FEATURE_TRAP        (FEATURE_TRAP),
    .FEATURE_RANGE       (FEATURE_RANGE),
    .FEATURE_MAC         (FEATURE_MAC),
    .FEATURE_MULTIPLIER  (FEATURE_MULTIPLIER),
    .FEATURE_DIVIDER     (FEATURE_DIVIDER),
    .FEATURE_ADDC        (FEATURE_ADDC),
    .FEATURE_SRA         (FEATURE_SRA),
    .FEATURE_ROR         (FEATURE_ROR),
    .FEATURE_EXT         (FEATURE_EXT),
    .FEATURE_CMOV        (FEATURE_CMOV),
    .FEATURE_FFL1        (FEATURE_FFL1),
    .FEATURE_MSYNC       (FEATURE_MSYNC),
    .FEATURE_PSYNC       (FEATURE_PSYNC),
    .FEATURE_CSYNC       (FEATURE_CSYNC),
    .FEATURE_ATOMIC      (FEATURE_ATOMIC),
    .FEATURE_FPU         (FEATURE_FPU),           // pipeline cappuccino: decode instance
    .FEATURE_CUST1       (FEATURE_CUST1),
    .FEATURE_CUST2       (FEATURE_CUST2),
    .FEATURE_CUST3       (FEATURE_CUST3),
    .FEATURE_CUST4       (FEATURE_CUST4),
    .FEATURE_CUST5       (FEATURE_CUST5),
    .FEATURE_CUST6       (FEATURE_CUST6),
    .FEATURE_CUST7       (FEATURE_CUST7),
    .FEATURE_CUST8       (FEATURE_CUST8)
  ) pu_or1k_decode (
    // Outputs
    .decode_opc_alu_o          (decode_opc_alu_o[`OR1K_ALU_OPC_WIDTH-1:0]),
    .decode_opc_alu_secondary_o(decode_opc_alu_secondary_o[`OR1K_ALU_OPC_WIDTH-1:0]),
    .decode_imm16_o            (decode_imm16_o[`OR1K_IMM_WIDTH-1:0]),
    .decode_immediate_o        (decode_immediate_o[OPTION_OPERAND_WIDTH-1:0]),
    .decode_immediate_sel_o    (decode_immediate_sel_o),
    .decode_immjbr_upper_o     (decode_immjbr_upper_o[9:0]),
    .decode_rfd_adr_o          (decode_rfd_adr_o[OPTION_RF_ADDR_WIDTH-1:0]),
    .decode_rfa_adr_o          (decode_rfa_adr_o[OPTION_RF_ADDR_WIDTH-1:0]),
    .decode_rfb_adr_o          (decode_rfb_adr_o[OPTION_RF_ADDR_WIDTH-1:0]),
    .decode_rf_wb_o            (decode_rf_wb_o),
    .decode_op_jbr_o           (decode_op_jbr_o),
    .decode_op_jr_o            (decode_op_jr_o),
    .decode_op_jal_o           (decode_op_jal_o),
    .decode_op_bf_o            (decode_op_bf_o),
    .decode_op_bnf_o           (decode_op_bnf_o),
    .decode_op_brcond_o        (decode_op_brcond_o),
    .decode_op_branch_o        (decode_op_branch_o),
    .decode_op_alu_o           (decode_op_alu_o),
    .decode_op_lsu_load_o      (decode_op_lsu_load_o),
    .decode_op_lsu_store_o     (decode_op_lsu_store_o),
    .decode_op_lsu_atomic_o    (decode_op_lsu_atomic_o),
    .decode_lsu_length_o       (decode_lsu_length_o[1:0]),
    .decode_lsu_zext_o         (decode_lsu_zext_o),
    .decode_op_mfspr_o         (decode_op_mfspr_o),
    .decode_op_mtspr_o         (decode_op_mtspr_o),
    .decode_op_rfe_o           (decode_op_rfe_o),
    .decode_op_setflag_o       (decode_op_setflag_o),
    .decode_op_add_o           (decode_op_add_o),
    .decode_op_mul_o           (decode_op_mul_o),
    .decode_op_mul_signed_o    (decode_op_mul_signed_o),
    .decode_op_mul_unsigned_o  (decode_op_mul_unsigned_o),
    .decode_op_div_o           (decode_op_div_o),
    .decode_op_div_signed_o    (decode_op_div_signed_o),
    .decode_op_div_unsigned_o  (decode_op_div_unsigned_o),
    .decode_op_shift_o         (decode_op_shift_o),
    .decode_op_ffl1_o          (decode_op_ffl1_o),
    .decode_op_movhi_o         (decode_op_movhi_o),
    .decode_op_ext_o           (decode_op_ext_o),
    .decode_op_msync_o         (decode_op_msync_o),
    .decode_op_fpu_o           (decode_op_fpu_o),
    .decode_adder_do_sub_o     (decode_adder_do_sub_o),
    .decode_adder_do_carry_o   (decode_adder_do_carry_o),
    .decode_except_illegal_o   (decode_except_illegal_o),
    .decode_except_syscall_o   (decode_except_syscall_o),
    .decode_except_trap_o      (decode_except_trap_o),
    .decode_opc_insn_o         (decode_opc_insn_o[`OR1K_OPCODE_WIDTH-1:0]),
    // Inputs
    .clk                       (clk),
    .rst                       (rst),
    .decode_insn_i             (insn_fetch_to_decode)
  );

  pu_or1k_decode_execute_cappuccino #(
    .OPTION_OPERAND_WIDTH(OPTION_OPERAND_WIDTH),
    .OPTION_RESET_PC     (OPTION_RESET_PC),
    .OPTION_RF_ADDR_WIDTH(OPTION_RF_ADDR_WIDTH),
    .FEATURE_SYSCALL     (FEATURE_SYSCALL),
    .FEATURE_TRAP        (FEATURE_TRAP),
    .FEATURE_FPU         (FEATURE_FPU),           // pipeline cappuccino: decode_execute instance
    .FEATURE_MULTIPLIER  (FEATURE_MULTIPLIER)
  ) pu_or1k_decode_execute_cappuccino (
    // Outputs
    .execute_predicted_flag_o   (execute_predicted_flag_o),
    .execute_mispredict_target_o(execute_mispredict_target_o[OPTION_OPERAND_WIDTH-1:0]),
    .execute_opc_alu_o          (execute_opc_alu_o[`OR1K_ALU_OPC_WIDTH-1:0]),
    .execute_opc_alu_secondary_o(execute_opc_alu_secondary_o[`OR1K_ALU_OPC_WIDTH-1:0]),
    .execute_imm16_o            (execute_imm16_o[`OR1K_IMM_WIDTH-1:0]),
    .execute_immediate_o        (execute_immediate_o[OPTION_OPERAND_WIDTH-1:0]),
    .execute_immediate_sel_o    (execute_immediate_sel_o),
    .execute_adder_do_sub_o     (execute_adder_do_sub_o),
    .execute_adder_do_carry_o   (execute_adder_do_carry_o),
    .execute_immjbr_upper_o     (execute_immjbr_upper_o[9:0]),
    .execute_rfd_adr_o          (execute_rfd_adr_o[OPTION_RF_ADDR_WIDTH-1:0]),
    .execute_rf_wb_o            (execute_rf_wb_o),
    .execute_op_alu_o           (execute_op_alu_o),
    .execute_op_setflag_o       (execute_op_setflag_o),
    .execute_op_jbr_o           (execute_op_jbr_o),
    .execute_op_jr_o            (execute_op_jr_o),
    .execute_op_jal_o           (execute_op_jal_o),
    .execute_op_brcond_o        (execute_op_brcond_o),
    .execute_op_branch_o        (execute_op_branch_o),
    .execute_op_lsu_load_o      (execute_op_lsu_load_o),
    .execute_op_lsu_store_o     (execute_op_lsu_store_o),
    .execute_op_lsu_atomic_o    (execute_op_lsu_atomic_o),
    .execute_lsu_length_o       (execute_lsu_length_o[1:0]),
    .execute_lsu_zext_o         (execute_lsu_zext_o),
    .execute_op_mfspr_o         (execute_op_mfspr_o),
    .execute_op_mtspr_o         (execute_op_mtspr_o),
    .execute_op_rfe_o           (execute_op_rfe_o),
    .execute_op_add_o           (execute_op_add_o),
    .execute_op_mul_o           (execute_op_mul_o),
    .execute_op_mul_signed_o    (execute_op_mul_signed_o),
    .execute_op_mul_unsigned_o  (execute_op_mul_unsigned_o),
    .execute_op_div_o           (execute_op_div_o),
    .execute_op_div_signed_o    (execute_op_div_signed_o),
    .execute_op_div_unsigned_o  (execute_op_div_unsigned_o),
    .execute_op_shift_o         (execute_op_shift_o),
    .execute_op_ffl1_o          (execute_op_ffl1_o),
    .execute_op_movhi_o         (execute_op_movhi_o),
    .execute_op_ext_o           (execute_op_ext_o),
    .execute_op_msync_o         (execute_op_msync_o),
    .execute_op_fpu_o           (execute_op_fpu_o),
    .execute_op_bf_o            (execute_op_bf_o),
    .execute_op_bnf_o           (execute_op_bnf_o),
    .execute_jal_result_o       (execute_jal_result_o[OPTION_OPERAND_WIDTH-1:0]),
    .execute_opc_insn_o         (execute_opc_insn_o[`OR1K_OPCODE_WIDTH-1:0]),
    .decode_branch_o            (decode_branch_o),
    .decode_branch_target_o     (decode_branch_target_o[OPTION_OPERAND_WIDTH-1:0]),
    .execute_except_ibus_err_o  (execute_except_ibus_err_o),
    .execute_except_itlb_miss_o (execute_except_itlb_miss_o),
    .execute_except_ipagefault_o(execute_except_ipagefault_o),
    .execute_except_illegal_o   (execute_except_illegal_o),
    .execute_except_ibus_align_o(execute_except_ibus_align_o),
    .execute_except_syscall_o   (execute_except_syscall_o),
    .execute_except_trap_o      (execute_except_trap_o),
    .pc_execute_o               (pc_decode_to_execute),
    .decode_valid_o             (decode_valid_o),
    .decode_bubble_o            (decode_bubble_o),
    .execute_bubble_o           (execute_bubble_o),
    // Inputs
    .clk                        (clk),
    .rst                        (rst),
    .padv_i                     (padv_decode_o),
    .pc_decode_i                (pc_fetch_to_decode),
    .decode_rfb_i               (decode_rfb_o),
    .execute_rfb_i              (execute_rfb_o),
    .predicted_flag_i           (predicted_flag_o),
    .pipeline_flush_i           (pipeline_flush_o),
    .decode_opc_alu_i           (decode_opc_alu_o),
    .decode_opc_alu_secondary_i (decode_opc_alu_secondary_o),
    .decode_imm16_i             (decode_imm16_o),
    .decode_immediate_i         (decode_immediate_o),
    .decode_immediate_sel_i     (decode_immediate_sel_o),
    .decode_adder_do_sub_i      (decode_adder_do_sub_o),
    .decode_adder_do_carry_i    (decode_adder_do_carry_o),
    .decode_immjbr_upper_i      (decode_immjbr_upper_o),
    .decode_rfd_adr_i           (decode_rfd_adr_o),
    .decode_rfa_adr_i           (decode_rfa_adr_o),
    .decode_rfb_adr_i           (decode_rfb_adr_o),
    .ctrl_rfd_adr_i             (ctrl_rfd_adr_o),
    .ctrl_op_lsu_load_i         (ctrl_op_lsu_load_o),
    .ctrl_op_mfspr_i            (ctrl_op_mfspr_o),
    .ctrl_op_mul_i              (ctrl_op_mul_o),
    .decode_rf_wb_i             (decode_rf_wb_o),
    .decode_op_alu_i            (decode_op_alu_o),
    .decode_op_setflag_i        (decode_op_setflag_o),
    .decode_op_jbr_i            (decode_op_jbr_o),
    .decode_op_jr_i             (decode_op_jr_o),
    .decode_op_jal_i            (decode_op_jal_o),
    .decode_op_bf_i             (decode_op_bf_o),
    .decode_op_bnf_i            (decode_op_bnf_o),
    .decode_op_brcond_i         (decode_op_brcond_o),
    .decode_op_branch_i         (decode_op_branch_o),
    .decode_op_lsu_load_i       (decode_op_lsu_load_o),
    .decode_op_lsu_store_i      (decode_op_lsu_store_o),
    .decode_op_lsu_atomic_i     (decode_op_lsu_atomic_o),
    .decode_lsu_length_i        (decode_lsu_length_o[1:0]),
    .decode_lsu_zext_i          (decode_lsu_zext_o),
    .decode_op_mfspr_i          (decode_op_mfspr_o),
    .decode_op_mtspr_i          (decode_op_mtspr_o),
    .decode_op_rfe_i            (decode_op_rfe_o),
    .decode_op_add_i            (decode_op_add_o),
    .decode_op_mul_i            (decode_op_mul_o),
    .decode_op_mul_signed_i     (decode_op_mul_signed_o),
    .decode_op_mul_unsigned_i   (decode_op_mul_unsigned_o),
    .decode_op_div_i            (decode_op_div_o),
    .decode_op_div_signed_i     (decode_op_div_signed_o),
    .decode_op_div_unsigned_i   (decode_op_div_unsigned_o),
    .decode_op_shift_i          (decode_op_shift_o),
    .decode_op_ffl1_i           (decode_op_ffl1_o),
    .decode_op_movhi_i          (decode_op_movhi_o),
    .decode_op_ext_i            (decode_op_ext_o),
    .decode_op_msync_i          (decode_op_msync_o),
    .decode_op_fpu_i            (decode_op_fpu_o),
    .decode_opc_insn_i          (decode_opc_insn_o[`OR1K_OPCODE_WIDTH-1:0]),
    .decode_except_ibus_err_i   (decode_except_ibus_err_o),
    .decode_except_itlb_miss_i  (decode_except_itlb_miss_o),
    .decode_except_ipagefault_i (decode_except_ipagefault_o),
    .decode_except_illegal_i    (decode_except_illegal_o),
    .decode_except_syscall_i    (decode_except_syscall_o),
    .decode_except_trap_i       (decode_except_trap_o)
  );

  pu_or1k_branch_prediction #(
    .FEATURE_BRANCH_PREDICTOR(FEATURE_BRANCH_PREDICTOR),
    .OPTION_OPERAND_WIDTH    (OPTION_OPERAND_WIDTH)
  ) pu_or1k_branch_prediction (
    // Outputs
    .predicted_flag_o     (predicted_flag_o),
    .branch_mispredict_o  (branch_mispredict_o),
    // Inputs
    .clk                  (clk),
    .rst                  (rst),
    .op_bf_i              (decode_op_bf_o),
    .op_bnf_i             (decode_op_bnf_o),
    .execute_bf_i         (execute_op_bf_o),
    .execute_bnf_i        (execute_op_bnf_o),
    .padv_decode_i        (padv_decode_o),
    .immjbr_upper_i       (decode_immjbr_upper_o),
    .prev_op_brcond_i     (execute_op_brcond_o),
    .prev_predicted_flag_i(execute_predicted_flag_o),
    .brn_pc_i             (pc_fetch_to_decode),
    .flag_i               (ctrl_flag_o)
  );

  pu_or1k_execute_alu #(
    .OPTION_OPERAND_WIDTH (OPTION_OPERAND_WIDTH),
    .FEATURE_OVERFLOW     (FEATURE_OVERFLOW),
    .FEATURE_CARRY_FLAG   (FEATURE_CARRY_FLAG),
    .FEATURE_MULTIPLIER   (FEATURE_MULTIPLIER),
    .FEATURE_DIVIDER      (FEATURE_DIVIDER),
    .FEATURE_ADDC         (FEATURE_ADDC),
    .FEATURE_SRA          (FEATURE_SRA),
    .FEATURE_ROR          (FEATURE_ROR),
    .FEATURE_EXT          (FEATURE_EXT),
    .FEATURE_CMOV         (FEATURE_CMOV),
    .FEATURE_FFL1         (FEATURE_FFL1),
    .FEATURE_CUST1        (FEATURE_CUST1),
    .FEATURE_CUST2        (FEATURE_CUST2),
    .FEATURE_CUST3        (FEATURE_CUST3),
    .FEATURE_CUST4        (FEATURE_CUST4),
    .FEATURE_CUST5        (FEATURE_CUST5),
    .FEATURE_CUST6        (FEATURE_CUST6),
    .FEATURE_CUST7        (FEATURE_CUST7),
    .FEATURE_CUST8        (FEATURE_CUST8),
    .FEATURE_FPU          (FEATURE_FPU),           // pipeline cappuccino: execute_alu instance
    .OPTION_FTOI_ROUNDING (OPTION_FTOI_ROUNDING),  // pipeline cappuccino: execute_alu instance
    .OPTION_SHIFTER       (OPTION_SHIFTER),
    .CALCULATE_BRANCH_DEST("FALSE")
  ) pu_or1k_execute_alu (
    // Outputs
    .flag_set_o            (flag_set_o),
    .flag_clear_o          (flag_clear_o),
    .carry_set_o           (carry_set_o),
    .carry_clear_o         (carry_clear_o),
    .overflow_set_o        (overflow_set_o),
    .overflow_clear_o      (overflow_clear_o),
    .fpcsr_o               (fpcsr_o),
    .fpcsr_set_o           (fpcsr_set_o),
    .alu_result_o          (alu_result_o[OPTION_OPERAND_WIDTH-1:0]),
    .alu_valid_o           (alu_valid_o),
    .mul_result_o          (mul_result_o[OPTION_OPERAND_WIDTH-1:0]),
    .adder_result_o        (adder_result_o[OPTION_OPERAND_WIDTH-1:0]),
    // Inputs
    .clk                   (clk),
    .rst                   (rst),
    .padv_decode_i         (padv_decode_o),
    .padv_execute_i        (padv_execute_o),
    .padv_ctrl_i           (padv_ctrl_o),
    .pipeline_flush_i      (pipeline_flush_o),
    .opc_alu_i             (execute_opc_alu_o),
    .opc_alu_secondary_i   (execute_opc_alu_secondary_o),
    .imm16_i               (execute_imm16_o),
    .immediate_i           (execute_immediate_o),
    .immediate_sel_i       (execute_immediate_sel_o),
    .decode_immediate_i    (decode_immediate_o),
    .decode_immediate_sel_i(decode_immediate_sel_o),
    .decode_valid_i        (decode_valid_o),
    .decode_op_mul_i       (decode_op_mul_o),
    .op_alu_i              (execute_op_alu_o),
    .op_add_i              (execute_op_add_o),
    .op_mul_i              (execute_op_mul_o),
    .op_mul_signed_i       (execute_op_mul_signed_o),
    .op_mul_unsigned_i     (execute_op_mul_unsigned_o),
    .op_div_i              (execute_op_div_o),
    .op_div_signed_i       (execute_op_div_signed_o),
    .op_div_unsigned_i     (execute_op_div_unsigned_o),
    .op_shift_i            (execute_op_shift_o),
    .op_ffl1_i             (execute_op_ffl1_o),
    .op_setflag_i          (execute_op_setflag_o),
    .op_mtspr_i            (execute_op_mtspr_o),
    .op_mfspr_i            (execute_op_mfspr_o),
    .op_movhi_i            (execute_op_movhi_o),
    .op_ext_i              (execute_op_ext_o),
    .op_fpu_i              (execute_op_fpu_o),
    .fpu_round_mode_i      (ctrl_fpu_round_mode_o),
    .op_jbr_i              (execute_op_jbr_o),
    .op_jr_i               (execute_op_jr_o),
    .immjbr_upper_i        (execute_immjbr_upper_o),
    .pc_execute_i          (pc_decode_to_execute),
    .adder_do_sub_i        (execute_adder_do_sub_o),
    .adder_do_carry_i      (execute_adder_do_carry_o),
    .decode_rfa_i          (decode_rfa_o),
    .decode_rfb_i          (decode_rfb_o),
    .rfa_i                 (execute_rfa_o),
    .rfb_i                 (execute_rfb_o),
    .flag_i                (ctrl_flag_o),
    .carry_i               (ctrl_carry_o)
  );

  pu_or1k_lsu_cappuccino #(
    .FEATURE_DATACACHE              (FEATURE_DATACACHE),
    .OPTION_OPERAND_WIDTH           (OPTION_OPERAND_WIDTH),
    .OPTION_DCACHE_BLOCK_WIDTH      (OPTION_DCACHE_BLOCK_WIDTH),
    .OPTION_DCACHE_SET_WIDTH        (OPTION_DCACHE_SET_WIDTH),
    .OPTION_DCACHE_WAYS             (OPTION_DCACHE_WAYS),
    .OPTION_DCACHE_LIMIT_WIDTH      (OPTION_DCACHE_LIMIT_WIDTH),
    .OPTION_DCACHE_SNOOP            (OPTION_DCACHE_SNOOP),
    .FEATURE_DMMU                   (FEATURE_DMMU),
    .FEATURE_DMMU_HW_TLB_RELOAD     (FEATURE_DMMU_HW_TLB_RELOAD),
    .OPTION_DMMU_SET_WIDTH          (OPTION_DMMU_SET_WIDTH),
    .OPTION_DMMU_WAYS               (OPTION_DMMU_WAYS),
    .FEATURE_STORE_BUFFER           (FEATURE_STORE_BUFFER),
    .OPTION_STORE_BUFFER_DEPTH_WIDTH(OPTION_STORE_BUFFER_DEPTH_WIDTH),
    .FEATURE_ATOMIC                 (FEATURE_ATOMIC)
  ) pu_or1k_lsu_cappuccino (
    // Outputs
    .store_buffer_epcr_o    (store_buffer_epcr_o[OPTION_OPERAND_WIDTH-1:0]),
    .lsu_result_o           (lsu_result_o[OPTION_OPERAND_WIDTH-1:0]),
    .lsu_valid_o            (lsu_valid_o),
    .lsu_except_dbus_o      (lsu_except_dbus_o),
    .lsu_except_align_o     (lsu_except_align_o),
    .lsu_except_dtlb_miss_o (lsu_except_dtlb_miss_o),
    .lsu_except_dpagefault_o(lsu_except_dpagefault_o),
    .store_buffer_err_o     (store_buffer_err_o),
    .atomic_flag_set_o      (atomic_flag_set_o),
    .atomic_flag_clear_o    (atomic_flag_clear_o),
    .msync_stall_o          (msync_stall_o),
    .spr_bus_dat_dc_o       (spr_bus_dat_dc_i[OPTION_OPERAND_WIDTH-1:0]),
    .spr_bus_ack_dc_o       (spr_bus_ack_dc_i),
    .spr_bus_dat_dmmu_o     (spr_bus_dat_dmmu_i[OPTION_OPERAND_WIDTH-1:0]),
    .spr_bus_ack_dmmu_o     (spr_bus_ack_dmmu_i),
    .dbus_adr_o             (dbus_adr_o[OPTION_OPERAND_WIDTH-1:0]),
    .dbus_req_o             (dbus_req_o),
    .dbus_dat_o             (dbus_dat_o[OPTION_OPERAND_WIDTH-1:0]),
    .dbus_bsel_o            (dbus_bsel_o[3:0]),
    .dbus_we_o              (dbus_we_o),
    .dbus_burst_o           (dbus_burst_o),
    .dc_hit_o               (dcache_hit_o),
    // Inputs
    .clk                    (clk),
    .rst                    (rst),
    .padv_execute_i         (padv_execute_o),
    .padv_ctrl_i            (padv_ctrl_o),
    .decode_valid_i         (decode_valid_o),
    .exec_lsu_adr_i         (adder_result_o),
    .ctrl_lsu_adr_i         (ctrl_lsu_adr_o),
    .ctrl_rfb_i             (ctrl_rfb_o),
    .exec_op_lsu_load_i     (execute_op_lsu_load_o),
    .exec_op_lsu_store_i    (execute_op_lsu_store_o),
    .exec_op_lsu_atomic_i   (execute_op_lsu_atomic_o),
    .ctrl_op_lsu_load_i     (ctrl_op_lsu_load_o),
    .ctrl_op_lsu_store_i    (ctrl_op_lsu_store_o),
    .ctrl_op_lsu_atomic_i   (ctrl_op_lsu_atomic_o),
    .ctrl_op_msync_i        (ctrl_op_msync_o),
    .ctrl_lsu_length_i      (ctrl_lsu_length_o),
    .ctrl_lsu_zext_i        (ctrl_lsu_zext_o),
    .ctrl_epcr_i            (ctrl_epcr_o),
    .spr_bus_addr_i         (spr_bus_addr_o[15:0]),
    .spr_bus_we_i           (spr_bus_we_o),
    .spr_bus_stb_i          (spr_bus_stb_o),
    .spr_bus_dat_i          (spr_bus_dat_o[OPTION_OPERAND_WIDTH-1:0]),
    .dc_enable_i            (spr_sr_o[`OR1K_SPR_SR_DCE]),
    .dmmu_enable_i          (spr_sr_o[`OR1K_SPR_SR_DME]),
    .supervisor_mode_i      (spr_sr_o[`OR1K_SPR_SR_SM]),
    .dbus_err_i             (dbus_err_i),
    .dbus_ack_i             (dbus_ack_i),
    .dbus_dat_i             (dbus_dat_i[OPTION_OPERAND_WIDTH-1:0]),
    .pipeline_flush_i       (pipeline_flush_o),
    .snoop_adr_i            (snoop_adr_i[31:0]),
    .snoop_en_i             (snoop_en_i)
  );

  pu_or1k_wb_mux_cappuccino #(
    .OPTION_OPERAND_WIDTH(OPTION_OPERAND_WIDTH)
  ) pu_or1k_wb_mux_cappuccino (
    // Outputs
    .rf_result_o  (rf_result_o[OPTION_OPERAND_WIDTH-1:0]),
    // Inputs
    .clk          (clk),
    .rst          (rst),
    .alu_result_i (ctrl_alu_result_o),
    .lsu_result_i (lsu_result_o),
    .mul_result_i (mul_result_o),
    .spr_i        (mfspr_dat_o),
    .op_mul_i     (ctrl_op_mul_o),
    .op_lsu_load_i(ctrl_op_lsu_load_o),
    .op_mfspr_i   (ctrl_op_mfspr_o)
  );

  pu_or1k_rf_cappuccino #(
    .OPTION_OPERAND_WIDTH    (OPTION_OPERAND_WIDTH),
    .FEATURE_FASTCONTEXTS    (FEATURE_FASTCONTEXTS),
    .OPTION_RF_CLEAR_ON_INIT (OPTION_RF_CLEAR_ON_INIT),
    .OPTION_RF_NUM_SHADOW_GPR(OPTION_RF_NUM_SHADOW_GPR),
    .OPTION_RF_ADDR_WIDTH    (OPTION_RF_ADDR_WIDTH),
    .OPTION_RF_WORDS         (OPTION_RF_WORDS),
    .FEATURE_DEBUGUNIT       (FEATURE_DEBUGUNIT)
  ) pu_or1k_rf_cappuccino (
    // Outputs
    .spr_gpr_ack_o       (spr_gpr_ack_o),
    .spr_gpr_dat_o       (spr_gpr_dat_o[OPTION_OPERAND_WIDTH-1:0]),
    .decode_rfa_o        (decode_rfa_o[OPTION_OPERAND_WIDTH-1:0]),
    .decode_rfb_o        (decode_rfb_o[OPTION_OPERAND_WIDTH-1:0]),
    .execute_rfa_o       (execute_rfa_o[OPTION_OPERAND_WIDTH-1:0]),
    .execute_rfb_o       (execute_rfb_o[OPTION_OPERAND_WIDTH-1:0]),
    // Inputs
    .clk                 (clk),
    .rst                 (rst),
    .padv_decode_i       (padv_decode_o),
    .padv_execute_i      (padv_execute_o),
    .padv_ctrl_i         (padv_ctrl_o),
    .decode_valid_i      (decode_valid_o),
    .fetch_rf_adr_valid_i(fetch_rf_adr_valid_o),
    .fetch_rfa_adr_i     (fetch_rfa_adr_o),
    .fetch_rfb_adr_i     (fetch_rfb_adr_o),
    .decode_rfa_adr_i    (decode_rfa_adr_o),
    .decode_rfb_adr_i    (decode_rfb_adr_o),
    .execute_rfd_adr_i   (execute_rfd_adr_o),
    .ctrl_rfd_adr_i      (ctrl_rfd_adr_o),
    .wb_rfd_adr_i        (wb_rfd_adr_o),
    .spr_bus_addr_i      (spr_bus_addr_o[15:0]),
    .spr_bus_stb_i       (spr_bus_stb_o),
    .spr_bus_we_i        (spr_bus_we_o),
    .spr_bus_dat_i       (spr_bus_dat_o),
    .execute_rf_wb_i     (execute_rf_wb_o),
    .ctrl_rf_wb_i        (ctrl_rf_wb_o),
    .wb_rf_wb_i          (wb_rf_wb_o),
    .result_i            (rf_result_o),
    .ctrl_alu_result_i   (ctrl_alu_result_o),
    .pipeline_flush_i    (pipeline_flush_o)
  );

`ifndef SYNTHESIS
  // Debug signals required for the debug monitor

  `include "pu_or1k_utils.sv"
  localparam RF_ADDR_WIDTH = calc_rf_addr_width(OPTION_RF_ADDR_WIDTH, OPTION_RF_NUM_SHADOW_GPR);

  function [OPTION_OPERAND_WIDTH-1:0] get_gpr;
    // verilator public
    input [RF_ADDR_WIDTH-1:0] gpr_num;
    begin
      // TODO: handle load ops
      if ((pu_or1k_rf_cappuccino.execute_rfd_adr_i == gpr_num[4:0]) & pu_or1k_rf_cappuccino.execute_rf_wb_i) begin
        get_gpr = alu_result_o;
      end else if ((pu_or1k_rf_cappuccino.ctrl_rfd_adr_i == gpr_num[4:0]) & pu_or1k_rf_cappuccino.ctrl_rf_wb_i) begin
        get_gpr = ctrl_alu_result_o;
      end else if ((pu_or1k_rf_cappuccino.wb_rfd_adr_i == gpr_num[4:0]) & pu_or1k_rf_cappuccino.wb_rf_wb_i) begin
        get_gpr = pu_or1k_rf_cappuccino.result_i;
      end else begin
        get_gpr = pu_or1k_rf_cappuccino.rfa.mem[gpr_num];
      end
    end
  endfunction

  task set_gpr;
    input [RF_ADDR_WIDTH-1:0] gpr_num;
    input [OPTION_OPERAND_WIDTH-1:0] gpr_value;
    begin
      pu_or1k_rf_cappuccino.rfa.mem[gpr_num] = gpr_value;
      pu_or1k_rf_cappuccino.rfb.mem[gpr_num] = gpr_value;
    end
  endtask
`endif

  pu_or1k_execute_ctrl_cappuccino #(
    .OPTION_OPERAND_WIDTH(OPTION_OPERAND_WIDTH),
    .OPTION_RESET_PC     (OPTION_RESET_PC),
    .FEATURE_FPU         (FEATURE_FPU),           // pipeline cappuccino: execute_ctrl instance
    .FEATURE_MULTIPLIER  (FEATURE_MULTIPLIER)
  ) pu_or1k_execute_ctrl_cappuccino (
    // Outputs
    .ctrl_rf_wb_o               (ctrl_rf_wb_o),
    .wb_rf_wb_o                 (wb_rf_wb_o),
    .ctrl_rfd_adr_o             (ctrl_rfd_adr_o[OPTION_RF_ADDR_WIDTH-1:0]),
    .wb_rfd_adr_o               (wb_rfd_adr_o[OPTION_RF_ADDR_WIDTH-1:0]),
    .ctrl_alu_result_o          (ctrl_alu_result_o[OPTION_OPERAND_WIDTH-1:0]),
    .ctrl_lsu_adr_o             (ctrl_lsu_adr_o[OPTION_OPERAND_WIDTH-1:0]),
    .ctrl_rfb_o                 (ctrl_rfb_o[OPTION_OPERAND_WIDTH-1:0]),
    .ctrl_flag_set_o            (ctrl_flag_set_o),
    .ctrl_flag_clear_o          (ctrl_flag_clear_o),
    .ctrl_carry_set_o           (ctrl_carry_set_o),
    .ctrl_carry_clear_o         (ctrl_carry_clear_o),
    .ctrl_overflow_set_o        (ctrl_overflow_set_o),
    .ctrl_overflow_clear_o      (ctrl_overflow_clear_o),
    .ctrl_fpcsr_o               (ctrl_fpcsr_o),
    .ctrl_fpcsr_set_o           (ctrl_fpcsr_set_o),
    .pc_ctrl_o                  (pc_execute_to_ctrl),
    .ctrl_op_mul_o              (ctrl_op_mul_o),
    .ctrl_op_lsu_load_o         (ctrl_op_lsu_load_o),
    .ctrl_op_lsu_store_o        (ctrl_op_lsu_store_o),
    .ctrl_op_lsu_atomic_o       (ctrl_op_lsu_atomic_o),
    .ctrl_lsu_length_o          (ctrl_lsu_length_o[1:0]),
    .ctrl_lsu_zext_o            (ctrl_lsu_zext_o),
    .ctrl_op_msync_o            (ctrl_op_msync_o),
    .ctrl_op_mfspr_o            (ctrl_op_mfspr_o),
    .ctrl_op_mtspr_o            (ctrl_op_mtspr_o),
    .ctrl_op_rfe_o              (ctrl_op_rfe_o),
    .ctrl_except_ibus_err_o     (ctrl_except_ibus_err_o),
    .ctrl_except_itlb_miss_o    (ctrl_except_itlb_miss_o),
    .ctrl_except_ipagefault_o   (ctrl_except_ipagefault_o),
    .ctrl_except_ibus_align_o   (ctrl_except_ibus_align_o),
    .ctrl_except_illegal_o      (ctrl_except_illegal_o),
    .ctrl_except_syscall_o      (ctrl_except_syscall_o),
    .ctrl_except_dbus_o         (ctrl_except_dbus_o),
    .ctrl_except_dtlb_miss_o    (ctrl_except_dtlb_miss_o),
    .ctrl_except_dpagefault_o   (ctrl_except_dpagefault_o),
    .ctrl_except_align_o        (ctrl_except_align_o),
    .ctrl_except_trap_o         (ctrl_except_trap_o),
    .execute_valid_o            (execute_valid_o),
    .ctrl_valid_o               (ctrl_valid_o),
    // Inputs
    .clk                        (clk),
    .rst                        (rst),
    .padv_i                     (padv_execute_o),
    .padv_ctrl_i                (padv_ctrl_o),
    .execute_except_ibus_err_i  (execute_except_ibus_err_o),
    .execute_except_itlb_miss_i (execute_except_itlb_miss_o),
    .execute_except_ipagefault_i(execute_except_ipagefault_o),
    .execute_except_illegal_i   (execute_except_illegal_o),
    .execute_except_ibus_align_i(execute_except_ibus_align_o),
    .execute_except_syscall_i   (execute_except_syscall_o),
    .lsu_except_dbus_i          (lsu_except_dbus_o),
    .lsu_except_align_i         (lsu_except_align_o),
    .lsu_except_dtlb_miss_i     (lsu_except_dtlb_miss_o),
    .lsu_except_dpagefault_i    (lsu_except_dpagefault_o),
    .execute_except_trap_i      (execute_except_trap_o),
    .pipeline_flush_i           (pipeline_flush_o),
    .op_mul_i                   (execute_op_mul_o),
    .op_lsu_load_i              (execute_op_lsu_load_o),
    .op_lsu_store_i             (execute_op_lsu_store_o),
    .op_lsu_atomic_i            (execute_op_lsu_atomic_o),
    .lsu_length_i               (execute_lsu_length_o),
    .lsu_zext_i                 (execute_lsu_zext_o),
    .op_msync_i                 (execute_op_msync_o),
    .op_mfspr_i                 (execute_op_mfspr_o),
    .op_mtspr_i                 (execute_op_mtspr_o),
    .alu_valid_i                (alu_valid_o),
    .lsu_valid_i                (lsu_valid_o),
    .msync_stall_i              (msync_stall_o),
    .op_jr_i                    (execute_op_jr_o),
    .op_jal_i                   (execute_op_jal_o),
    .op_rfe_i                   (execute_op_rfe_o),
    .alu_result_i               (alu_result_o),
    .adder_result_i             (adder_result_o),
    .rfb_i                      (execute_rfb_o),
    .execute_jal_result_i       (execute_jal_result_o),
    .flag_set_i                 (flag_set_o),
    .flag_clear_i               (flag_clear_o),
    .carry_set_i                (carry_set_o),
    .carry_clear_i              (carry_clear_o),
    .overflow_set_i             (overflow_set_o),
    .overflow_clear_i           (overflow_clear_o),
    .fpcsr_i                    (fpcsr_o),
    .fpcsr_set_i                (fpcsr_set_o),
    .pc_execute_i               (pc_decode_to_execute),
    .execute_rf_wb_i            (execute_rf_wb_o),
    .execute_rfd_adr_i          (execute_rfd_adr_o),
    .execute_bubble_i           (execute_bubble_o),
    .ctrl_mfspr_ack_i           (ctrl_mfspr_ack_o),
    .ctrl_mtspr_ack_i           (ctrl_mtspr_ack_o)
  );

  pu_or1k_ctrl_cappuccino #(
    .OPTION_OPERAND_WIDTH     (OPTION_OPERAND_WIDTH),
    .OPTION_RESET_PC          (OPTION_RESET_PC),
    .FEATURE_PIC              (FEATURE_PIC),
    .FEATURE_TIMER            (FEATURE_TIMER),
    .OPTION_PIC_TRIGGER       (OPTION_PIC_TRIGGER),
    .OPTION_PIC_NMI_WIDTH     (OPTION_PIC_NMI_WIDTH),
    .FEATURE_DATACACHE        (FEATURE_DATACACHE),
    .OPTION_DCACHE_BLOCK_WIDTH(OPTION_DCACHE_BLOCK_WIDTH),
    .OPTION_DCACHE_SET_WIDTH  (OPTION_DCACHE_SET_WIDTH),
    .OPTION_DCACHE_WAYS       (OPTION_DCACHE_WAYS),
    .FEATURE_DMMU             (FEATURE_DMMU),
    .OPTION_DMMU_SET_WIDTH    (OPTION_DMMU_SET_WIDTH),
    .OPTION_DMMU_WAYS         (OPTION_DMMU_WAYS),
    .FEATURE_INSTRUCTIONCACHE (FEATURE_INSTRUCTIONCACHE),
    .OPTION_ICACHE_BLOCK_WIDTH(OPTION_ICACHE_BLOCK_WIDTH),
    .OPTION_ICACHE_SET_WIDTH  (OPTION_ICACHE_SET_WIDTH),
    .OPTION_ICACHE_WAYS       (OPTION_ICACHE_WAYS),
    .FEATURE_IMMU             (FEATURE_IMMU),
    .OPTION_IMMU_SET_WIDTH    (OPTION_IMMU_SET_WIDTH),
    .OPTION_IMMU_WAYS         (OPTION_IMMU_WAYS),
    .FEATURE_DEBUGUNIT        (FEATURE_DEBUGUNIT),
    .FEATURE_PERFCOUNTERS     (FEATURE_PERFCOUNTERS),
    .OPTION_PERFCOUNTERS_NUM  (OPTION_PERFCOUNTERS_NUM),
    .FEATURE_MAC              (FEATURE_MAC),
    .FEATURE_FPU              (FEATURE_FPU),                // pipeline cappuccino: ctrl instance
    .FEATURE_MULTICORE        (FEATURE_MULTICORE),
    .FEATURE_SYSCALL          (FEATURE_SYSCALL),
    .FEATURE_TRAP             (FEATURE_TRAP),
    .FEATURE_RANGE            (FEATURE_RANGE),
    .FEATURE_DSX              (FEATURE_DSX),
    .FEATURE_FASTCONTEXTS     (FEATURE_FASTCONTEXTS),
    .OPTION_RF_NUM_SHADOW_GPR (OPTION_RF_NUM_SHADOW_GPR),
    .FEATURE_OVERFLOW         (FEATURE_OVERFLOW),
    .FEATURE_CARRY_FLAG       (FEATURE_CARRY_FLAG)
  ) pu_or1k_ctrl_cappuccino (
    // Outputs
    .ctrl_epcr_o                (ctrl_epcr_o[OPTION_OPERAND_WIDTH-1:0]),
    .mfspr_dat_o                (mfspr_dat_o[OPTION_OPERAND_WIDTH-1:0]),
    .ctrl_mfspr_ack_o           (ctrl_mfspr_ack_o),
    .ctrl_mtspr_ack_o           (ctrl_mtspr_ack_o),
    .ctrl_flag_o                (ctrl_flag_o),
    .ctrl_carry_o               (ctrl_carry_o),
    .ctrl_fpu_round_mode_o      (ctrl_fpu_round_mode_o),
    .ctrl_branch_exception_o    (ctrl_branch_exception_o),
    .ctrl_branch_except_pc_o    (ctrl_branch_except_pc_o[OPTION_OPERAND_WIDTH-1:0]),
    .pipeline_flush_o           (pipeline_flush_o),
    .doing_rfe_o                (doing_rfe_o),
    .padv_fetch_o               (padv_fetch_o),
    .padv_decode_o              (padv_decode_o),
    .padv_execute_o             (padv_execute_o),
    .padv_ctrl_o                (padv_ctrl_o),
    .du_dat_o                   (du_dat_o[OPTION_OPERAND_WIDTH-1:0]),
    .du_ack_o                   (du_ack_o),
    .du_stall_o                 (du_stall_o),
    .du_restart_pc_o            (du_restart_pc_o[OPTION_OPERAND_WIDTH-1:0]),
    .du_restart_o               (du_restart_o),
    .spr_bus_addr_o             (spr_bus_addr_o[15:0]),
    .spr_bus_we_o               (spr_bus_we_o),
    .spr_bus_stb_o              (spr_bus_stb_o),
    .spr_bus_dat_o              (spr_bus_dat_o[OPTION_OPERAND_WIDTH-1:0]),
    .spr_sr_o                   (spr_sr_o[15:0]),
    .ctrl_bubble_o              (ctrl_bubble_o),
    // Inputs
    .clk                        (clk),
    .rst                        (rst),
    .ctrl_alu_result_i          (ctrl_alu_result_o),
    .ctrl_lsu_adr_i             (ctrl_lsu_adr_o),
    .ctrl_rfb_i                 (ctrl_rfb_o),
    .ctrl_flag_set_i            (ctrl_flag_set_o),
    .ctrl_flag_clear_i          (ctrl_flag_clear_o),
    .atomic_flag_set_i          (atomic_flag_set_o),
    .atomic_flag_clear_i        (atomic_flag_clear_o),
    .pc_ctrl_i                  (pc_execute_to_ctrl),
    .ctrl_op_mfspr_i            (ctrl_op_mfspr_o),
    .ctrl_op_mtspr_i            (ctrl_op_mtspr_o),
    .ctrl_op_rfe_i              (ctrl_op_rfe_o),
    .decode_branch_i            (decode_branch_o),
    .decode_branch_target_i     (decode_branch_target_o),
    .branch_mispredict_i        (branch_mispredict_o),
    .execute_mispredict_target_i(execute_mispredict_target_o),
    .pc_execute_i               (pc_decode_to_execute),
    .execute_op_branch_i        (execute_op_branch_o),
    .except_ibus_err_i          (ctrl_except_ibus_err_o),
    .except_itlb_miss_i         (ctrl_except_itlb_miss_o),
    .except_ipagefault_i        (ctrl_except_ipagefault_o),
    .except_ibus_align_i        (ctrl_except_ibus_align_o),
    .except_illegal_i           (ctrl_except_illegal_o),
    .except_syscall_i           (ctrl_except_syscall_o),
    .except_dbus_i              (ctrl_except_dbus_o),
    .except_dtlb_miss_i         (ctrl_except_dtlb_miss_o),
    .except_dpagefault_i        (ctrl_except_dpagefault_o),
    .except_trap_i              (ctrl_except_trap_o),
    .except_align_i             (ctrl_except_align_o),
    .fetch_valid_i              (fetch_valid_o),
    .decode_valid_i             (decode_valid_o),
    .execute_valid_i            (execute_valid_o),
    .execute_op_lsu_load_i      (execute_op_lsu_load_o),
    .execute_op_lsu_store_i     (execute_op_lsu_store_o),
    .ctrl_valid_i               (ctrl_valid_o),
    .fetch_exception_taken_i    (fetch_exception_taken_o),
    .decode_bubble_i            (decode_bubble_o),
    .execute_bubble_i           (execute_bubble_o),
    .irq_i                      (irq_i[31:0]),
    .store_buffer_epcr_i        (store_buffer_epcr_o),
    .store_buffer_err_i         (store_buffer_err_o),
    .ctrl_carry_set_i           (ctrl_carry_set_o),
    .ctrl_carry_clear_i         (ctrl_carry_clear_o),
    .ctrl_overflow_set_i        (ctrl_overflow_set_o),
    .ctrl_overflow_clear_i      (ctrl_overflow_clear_o),
    .ctrl_fpcsr_i               (ctrl_fpcsr_o),
    .ctrl_fpcsr_set_i           (ctrl_fpcsr_set_o),
    .icache_hit_i               (icache_hit_o),
    .dcache_hit_i               (dcache_hit_o),
    .du_addr_i                  (du_addr_i[15:0]),
    .du_stb_i                   (du_stb_i),
    .du_dat_i                   (du_dat_i[OPTION_OPERAND_WIDTH-1:0]),
    .du_we_i                    (du_we_i),
    .du_stall_i                 (du_stall_i),
    .spr_bus_dat_dc_i           (spr_bus_dat_dc_i[OPTION_OPERAND_WIDTH-1:0]),
    .spr_bus_ack_dc_i           (spr_bus_ack_dc_i),
    .spr_bus_dat_ic_i           (spr_bus_dat_ic_i[OPTION_OPERAND_WIDTH-1:0]),
    .spr_bus_ack_ic_i           (spr_bus_ack_ic_i),
    .spr_bus_dat_dmmu_i         (spr_bus_dat_dmmu_i[OPTION_OPERAND_WIDTH-1:0]),
    .spr_bus_ack_dmmu_i         (spr_bus_ack_dmmu_i),
    .spr_bus_dat_immu_i         (spr_bus_dat_immu_i[OPTION_OPERAND_WIDTH-1:0]),
    .spr_bus_ack_immu_i         (spr_bus_ack_immu_i),
    .spr_bus_dat_mac_i          (spr_bus_dat_mac_i[OPTION_OPERAND_WIDTH-1:0]),
    .spr_bus_ack_mac_i          (spr_bus_ack_mac_i),
    .spr_bus_dat_pmu_i          (spr_bus_dat_pmu_i[OPTION_OPERAND_WIDTH-1:0]),
    .spr_bus_ack_pmu_i          (spr_bus_ack_pmu_i),
    .spr_bus_dat_pcu_i          (spr_bus_dat_pcu_i[OPTION_OPERAND_WIDTH-1:0]),
    .spr_bus_ack_pcu_i          (spr_bus_ack_pcu_i),
    .spr_bus_dat_fpu_i          (spr_bus_dat_fpu_i[OPTION_OPERAND_WIDTH-1:0]),
    .spr_bus_ack_fpu_i          (spr_bus_ack_fpu_i),
    .spr_gpr_dat_i              (spr_gpr_dat_o),
    .spr_gpr_ack_i              (spr_gpr_ack_o),
    .multicore_coreid_i         (multicore_coreid_i[OPTION_OPERAND_WIDTH-1:0]),
    .multicore_numcores_i       (multicore_numcores_i[OPTION_OPERAND_WIDTH-1:0])
  );

  reg [`OR1K_INSN_WIDTH-1:0] traceport_stage_decode_insn;
  reg [`OR1K_INSN_WIDTH-1:0] traceport_stage_exec_insn;

  reg                        traceport_jal_execute_to_ctrl;
  reg                        traceport_jr_execute_to_ctrl;
  reg [                31:0] traceport_jbtarget_decode_to_execute;
  reg [                31:0] traceport_jbtarget_execute_to_ctrl;

  reg                        traceport_waitexec;

  always @(posedge clk) begin
    if (FEATURE_TRACEPORT_EXEC != "NONE") begin
      if (rst) begin
        traceport_waitexec <= 0;
      end else begin
        if (padv_decode_o) begin
          traceport_stage_decode_insn          <= insn_fetch_to_decode;
          traceport_jbtarget_decode_to_execute <= decode_branch_target_o;
        end

        if (padv_execute_o) begin
          traceport_stage_exec_insn          <= traceport_stage_decode_insn;
          traceport_jbtarget_execute_to_ctrl <= traceport_jbtarget_decode_to_execute;
          traceport_jal_execute_to_ctrl      <= execute_op_jal_o;
          traceport_jr_execute_to_ctrl       <= execute_op_jr_o & !execute_op_jal_o;
        end

        if (padv_ctrl_o) begin
          traceport_exec_jal_o      <= traceport_jal_execute_to_ctrl;
          traceport_exec_jr_o       <= traceport_jr_execute_to_ctrl;
          traceport_exec_insn_o     <= traceport_stage_exec_insn;
          traceport_exec_jbtarget_o <= traceport_jbtarget_execute_to_ctrl;
        end

        traceport_exec_pc_o <= pc_execute_to_ctrl;

        if (!traceport_waitexec) begin
          if (padv_ctrl_o & !ctrl_bubble_o) begin
            if (execute_valid_o) begin
              traceport_exec_valid_o <= 1'b1;
            end else begin
              traceport_exec_valid_o <= 1'b0;
              traceport_waitexec     <= 1'b1;
            end
          end else if (ctrl_op_rfe_o) begin
            traceport_exec_valid_o <= 1'b1;
          end else begin
            traceport_exec_valid_o <= 1'b0;
          end
        end else begin
          if (execute_valid_o) begin
            traceport_exec_valid_o <= 1'b1;
            traceport_waitexec     <= 1'b0;
          end else begin
            traceport_exec_valid_o <= 1'b0;
          end
        end
      end
    end else begin
      traceport_stage_decode_insn <= {`OR1K_INSN_WIDTH{1'b0}};
      traceport_stage_exec_insn   <= {`OR1K_INSN_WIDTH{1'b0}};
      traceport_exec_insn_o       <= {`OR1K_INSN_WIDTH{1'b0}};
      traceport_exec_pc_o         <= 32'h0;
      traceport_exec_valid_o      <= 1'b0;
    end
  end

  generate
    if (FEATURE_TRACEPORT_EXEC != "NONE") begin
      assign traceport_exec_wbreg_o  = wb_rfd_adr_o;
      assign traceport_exec_wben_o   = wb_rf_wb_o;
      assign traceport_exec_wbdata_o = rf_result_o;
    end else begin
      assign traceport_exec_wbreg_o  = {OPTION_RF_ADDR_WIDTH{1'b0}};
      assign traceport_exec_wben_o   = 1'b0;
      assign traceport_exec_wbdata_o = {OPTION_OPERAND_WIDTH{1'b0}};
    end
  endgenerate
endmodule
