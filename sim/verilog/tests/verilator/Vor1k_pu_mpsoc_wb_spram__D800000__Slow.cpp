// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vor1k_pu.h for the primary calling header

#include "Vor1k_pu_mpsoc_wb_spram__D800000.h"
#include "Vor1k_pu__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vor1k_pu_mpsoc_wb_spram__D800000) {
    VL_CELL(ram0, Vor1k_pu_mpsoc_wb_ram_generic__pi4);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vor1k_pu_mpsoc_wb_spram__D800000::__Vconfigure(Vor1k_pu__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vor1k_pu_mpsoc_wb_spram__D800000::~Vor1k_pu_mpsoc_wb_spram__D800000() {
}

void Vor1k_pu_mpsoc_wb_spram__D800000::_settle__TOP__or1k_pu__wb_bfm_memory0__2(Vor1k_pu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vor1k_pu_mpsoc_wb_spram__D800000::_settle__TOP__or1k_pu__wb_bfm_memory0__2\n"); );
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp2[3];
    // Body
    vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__Vfunc_wb_next_adr__1__bte_i 
        = ((5U >= (7U & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                         << 1U))) ? (3U & (0x28U >> 
                                           (7U & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                                  << 1U))))
            : 0U);
    vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__Vfunc_wb_next_adr__1__cti_i 
        = vlSymsp->TOP__or1k_pu.__PVT__wb_m2s_mem_cti;
    vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__Vfunc_wb_next_adr__1__adr_i 
        = vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__adr_r;
    vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__Vfunc_wb_next_adr__1__adr 
        = (vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__Vfunc_wb_next_adr__1__adr_i 
           >> 2U);
    if ((2U == (IData)(vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__Vfunc_wb_next_adr__1__cti_i))) {
        vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__Vfunc_wb_next_adr__1__adr 
            = ((2U & (IData)(vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__Vfunc_wb_next_adr__1__bte_i))
                ? ((1U & (IData)(vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__Vfunc_wb_next_adr__1__bte_i))
                    ? ((0xfffffff0U & vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__Vfunc_wb_next_adr__1__adr) 
                       | (0xfU & ((IData)(1U) + vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__Vfunc_wb_next_adr__1__adr)))
                    : ((0xfffffff8U & vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__Vfunc_wb_next_adr__1__adr) 
                       | (7U & ((IData)(1U) + vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__Vfunc_wb_next_adr__1__adr))))
                : ((1U & (IData)(vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__Vfunc_wb_next_adr__1__bte_i))
                    ? ((0xfffffffcU & vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__Vfunc_wb_next_adr__1__adr) 
                       | (3U & ((IData)(1U) + vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__Vfunc_wb_next_adr__1__adr)))
                    : ((IData)(1U) + vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__Vfunc_wb_next_adr__1__adr)));
    }
    vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__Vfunc_wb_next_adr__1__Vfuncout 
        = (vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__Vfunc_wb_next_adr__1__adr 
           << 2U);
    vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__next_adr 
        = (0x7fffffU & vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__Vfunc_wb_next_adr__1__Vfuncout);
    __Vtemp2[0U] = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__addr_reg;
    __Vtemp2[1U] = (IData)((((QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_adr)) 
                             << 0x20U) | (QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_adr))));
    __Vtemp2[2U] = (IData)(((((QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_adr)) 
                              << 0x20U) | (QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_adr))) 
                            >> 0x20U));
    vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__adr 
        = (0x7fffffU & ((((IData)(vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__valid) 
                          & (~ (IData)(vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__valid_r))) 
                         | (IData)(vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__is_last_r))
                         ? ((0x5fU >= (0x7fU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                                << 5U)))
                             ? (((0U == (0x1fU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                                  << 5U)))
                                  ? 0U : (__Vtemp2[
                                          ((IData)(1U) 
                                           + (3U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                                    << 5U))))) 
                                | (__Vtemp2[(3U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel))] 
                                   >> (0x1fU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                                << 5U))))
                             : 0U) : vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__next_adr));
}

void Vor1k_pu_mpsoc_wb_spram__D800000::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vor1k_pu_mpsoc_wb_spram__D800000::_ctor_var_reset\n"); );
    // Body
    __PVT__wb_clk_i = VL_RAND_RESET_I(1);
    __PVT__wb_rst_i = VL_RAND_RESET_I(1);
    __PVT__wb_adr_i = VL_RAND_RESET_I(23);
    __PVT__wb_dat_i = VL_RAND_RESET_I(32);
    __PVT__wb_sel_i = VL_RAND_RESET_I(4);
    __PVT__wb_we_i = VL_RAND_RESET_I(1);
    __PVT__wb_bte_i = VL_RAND_RESET_I(2);
    __PVT__wb_cti_i = VL_RAND_RESET_I(3);
    __PVT__wb_cyc_i = VL_RAND_RESET_I(1);
    __PVT__wb_stb_i = VL_RAND_RESET_I(1);
    __PVT__wb_ack_o = VL_RAND_RESET_I(1);
    __PVT__wb_err_o = VL_RAND_RESET_I(1);
    __PVT__wb_dat_o = VL_RAND_RESET_I(32);
    __PVT__adr_r = VL_RAND_RESET_I(23);
    __PVT__next_adr = VL_RAND_RESET_I(23);
    __PVT__valid = VL_RAND_RESET_I(1);
    __PVT__valid_r = VL_RAND_RESET_I(1);
    __PVT__is_last_r = VL_RAND_RESET_I(1);
    __PVT__adr = VL_RAND_RESET_I(23);
    __Vfunc_wb_next_adr__1__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_wb_next_adr__1__adr_i = VL_RAND_RESET_I(32);
    __Vfunc_wb_next_adr__1__cti_i = VL_RAND_RESET_I(3);
    __Vfunc_wb_next_adr__1__bte_i = VL_RAND_RESET_I(2);
    __Vfunc_wb_next_adr__1__adr = VL_RAND_RESET_I(32);
    __Vdly__wb_ack_o = VL_RAND_RESET_I(1);
}
