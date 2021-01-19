// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vor1k_pu.h for the primary calling header

#include "Vor1k_pu_or1k_core__pi1.h"
#include "Vor1k_pu__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vor1k_pu_or1k_core__pi1) {
    VL_CELL(or1k_cpu, Vor1k_pu_or1k_cpu__pi3);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vor1k_pu_or1k_core__pi1::__Vconfigure(Vor1k_pu__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vor1k_pu_or1k_core__pi1::~Vor1k_pu_or1k_core__pi1() {
}

void Vor1k_pu_or1k_core__pi1::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vor1k_pu_or1k_core__pi1::_ctor_var_reset\n"); );
    // Body
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__rst = VL_RAND_RESET_I(1);
    __PVT__iwbm_adr_o = VL_RAND_RESET_I(32);
    __PVT__iwbm_stb_o = VL_RAND_RESET_I(1);
    __PVT__iwbm_cyc_o = VL_RAND_RESET_I(1);
    __PVT__iwbm_sel_o = VL_RAND_RESET_I(4);
    __PVT__iwbm_we_o = VL_RAND_RESET_I(1);
    __PVT__iwbm_cti_o = VL_RAND_RESET_I(3);
    __PVT__iwbm_bte_o = VL_RAND_RESET_I(2);
    __PVT__iwbm_dat_o = VL_RAND_RESET_I(32);
    __PVT__iwbm_err_i = VL_RAND_RESET_I(1);
    __PVT__iwbm_ack_i = VL_RAND_RESET_I(1);
    __PVT__iwbm_dat_i = VL_RAND_RESET_I(32);
    __PVT__iwbm_rty_i = VL_RAND_RESET_I(1);
    __PVT__dwbm_adr_o = VL_RAND_RESET_I(32);
    __PVT__dwbm_stb_o = VL_RAND_RESET_I(1);
    __PVT__dwbm_cyc_o = VL_RAND_RESET_I(1);
    __PVT__dwbm_sel_o = VL_RAND_RESET_I(4);
    __PVT__dwbm_we_o = VL_RAND_RESET_I(1);
    __PVT__dwbm_cti_o = VL_RAND_RESET_I(3);
    __PVT__dwbm_bte_o = VL_RAND_RESET_I(2);
    __PVT__dwbm_dat_o = VL_RAND_RESET_I(32);
    __PVT__dwbm_err_i = VL_RAND_RESET_I(1);
    __PVT__dwbm_ack_i = VL_RAND_RESET_I(1);
    __PVT__dwbm_dat_i = VL_RAND_RESET_I(32);
    __PVT__dwbm_rty_i = VL_RAND_RESET_I(1);
    __PVT__irq_i = VL_RAND_RESET_I(32);
    __PVT__du_addr_i = VL_RAND_RESET_I(16);
    __PVT__du_stb_i = VL_RAND_RESET_I(1);
    __PVT__du_dat_i = VL_RAND_RESET_I(32);
    __PVT__du_we_i = VL_RAND_RESET_I(1);
    __PVT__du_dat_o = VL_RAND_RESET_I(32);
    __PVT__du_ack_o = VL_RAND_RESET_I(1);
    __PVT__du_stall_i = VL_RAND_RESET_I(1);
    __PVT__du_stall_o = VL_RAND_RESET_I(1);
    __PVT__traceport_exec_valid_o = VL_RAND_RESET_I(1);
    __PVT__traceport_exec_pc_o = VL_RAND_RESET_I(32);
    __PVT__traceport_exec_jb_o = VL_RAND_RESET_I(1);
    __PVT__traceport_exec_jal_o = VL_RAND_RESET_I(1);
    __PVT__traceport_exec_jr_o = VL_RAND_RESET_I(1);
    __PVT__traceport_exec_jbtarget_o = VL_RAND_RESET_I(32);
    __PVT__traceport_exec_insn_o = VL_RAND_RESET_I(32);
    __PVT__traceport_exec_wbdata_o = VL_RAND_RESET_I(32);
    __PVT__traceport_exec_wbreg_o = VL_RAND_RESET_I(5);
    __PVT__traceport_exec_wben_o = VL_RAND_RESET_I(1);
    __PVT__multicore_coreid_i = VL_RAND_RESET_I(32);
    __PVT__multicore_numcores_i = VL_RAND_RESET_I(32);
    __PVT__snoop_adr_i = VL_RAND_RESET_I(32);
    __PVT__snoop_en_i = VL_RAND_RESET_I(1);
}
