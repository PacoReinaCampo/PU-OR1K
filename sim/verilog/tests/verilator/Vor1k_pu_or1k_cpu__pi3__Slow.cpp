// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vor1k_pu.h for the primary calling header

#include "Vor1k_pu_or1k_cpu__pi3.h"
#include "Vor1k_pu__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vor1k_pu_or1k_cpu__pi3) {
    VL_CELL(cappuccino__DOT__or1k_cpu, Vor1k_pu_or1k_cpu_cappuccino__pi5);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vor1k_pu_or1k_cpu__pi3::__Vconfigure(Vor1k_pu__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vor1k_pu_or1k_cpu__pi3::~Vor1k_pu_or1k_cpu__pi3() {
}

void Vor1k_pu_or1k_cpu__pi3::_settle__TOP__or1k_pu__core__or1k_cpu__1(Vor1k_pu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vor1k_pu_or1k_cpu__pi3::_settle__TOP__or1k_pu__core__or1k_cpu__1\n"); );
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__or1k_pu__core__or1k_cpu.monitor_execute_insn 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu.__PVT__cappuccino__DOT__monitor_execute_insn_reg;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu.monitor_execute_pc 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pc_decode_to_execute;
}

void Vor1k_pu_or1k_cpu__pi3::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vor1k_pu_or1k_cpu__pi3::_ctor_var_reset\n"); );
    // Body
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__rst = VL_RAND_RESET_I(1);
    __PVT__ibus_err_i = VL_RAND_RESET_I(1);
    __PVT__ibus_ack_i = VL_RAND_RESET_I(1);
    __PVT__ibus_dat_i = VL_RAND_RESET_I(32);
    __PVT__ibus_adr_o = VL_RAND_RESET_I(32);
    __PVT__ibus_req_o = VL_RAND_RESET_I(1);
    __PVT__ibus_burst_o = VL_RAND_RESET_I(1);
    __PVT__dbus_err_i = VL_RAND_RESET_I(1);
    __PVT__dbus_ack_i = VL_RAND_RESET_I(1);
    __PVT__dbus_dat_i = VL_RAND_RESET_I(32);
    __PVT__dbus_adr_o = VL_RAND_RESET_I(32);
    __PVT__dbus_dat_o = VL_RAND_RESET_I(32);
    __PVT__dbus_req_o = VL_RAND_RESET_I(1);
    __PVT__dbus_bsel_o = VL_RAND_RESET_I(4);
    __PVT__dbus_we_o = VL_RAND_RESET_I(1);
    __PVT__dbus_burst_o = VL_RAND_RESET_I(1);
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
    __PVT__spr_bus_addr_o = VL_RAND_RESET_I(16);
    __PVT__spr_bus_we_o = VL_RAND_RESET_I(1);
    __PVT__spr_bus_stb_o = VL_RAND_RESET_I(1);
    __PVT__spr_bus_dat_o = VL_RAND_RESET_I(32);
    __PVT__spr_bus_dat_dmmu_i = VL_RAND_RESET_I(32);
    __PVT__spr_bus_ack_dmmu_i = VL_RAND_RESET_I(1);
    __PVT__spr_bus_dat_immu_i = VL_RAND_RESET_I(32);
    __PVT__spr_bus_ack_immu_i = VL_RAND_RESET_I(1);
    __PVT__spr_bus_dat_mac_i = VL_RAND_RESET_I(32);
    __PVT__spr_bus_ack_mac_i = VL_RAND_RESET_I(1);
    __PVT__spr_bus_dat_pmu_i = VL_RAND_RESET_I(32);
    __PVT__spr_bus_ack_pmu_i = VL_RAND_RESET_I(1);
    __PVT__spr_bus_dat_pcu_i = VL_RAND_RESET_I(32);
    __PVT__spr_bus_ack_pcu_i = VL_RAND_RESET_I(1);
    __PVT__spr_bus_dat_fpu_i = VL_RAND_RESET_I(32);
    __PVT__spr_bus_ack_fpu_i = VL_RAND_RESET_I(1);
    __PVT__spr_sr_o = VL_RAND_RESET_I(16);
    __PVT__multicore_coreid_i = VL_RAND_RESET_I(32);
    __PVT__multicore_numcores_i = VL_RAND_RESET_I(32);
    __PVT__snoop_adr_i = VL_RAND_RESET_I(32);
    __PVT__snoop_en_i = VL_RAND_RESET_I(1);
    monitor_execute_insn = VL_RAND_RESET_I(32);
    monitor_execute_pc = VL_RAND_RESET_I(32);
    __PVT__cappuccino__DOT__monitor_execute_insn_reg = VL_RAND_RESET_I(32);
}
