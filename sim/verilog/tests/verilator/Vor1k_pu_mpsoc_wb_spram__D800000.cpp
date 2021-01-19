// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vor1k_pu.h for the primary calling header

#include "Vor1k_pu_mpsoc_wb_spram__D800000.h"
#include "Vor1k_pu__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vor1k_pu_mpsoc_wb_spram__D800000::_settle__TOP__or1k_pu__wb_bfm_memory0__1(Vor1k_pu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vor1k_pu_mpsoc_wb_spram__D800000::_settle__TOP__or1k_pu__wb_bfm_memory0__1\n"); );
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__valid 
        = ((((2U >= (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel)) 
             & ((IData)(vlSymsp->TOP__or1k_pu.wb_interface0__DOT____Vcellinp__wb_arbiter_mem__wbm_cyc_i) 
                >> (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel))) 
            & (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__active)) 
           & ((2U >= (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel)) 
              & ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_req) 
                   << 2U) | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_req_o) 
                              << 1U) | (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_m2s_dbg_stb))) 
                 >> (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel))));
}

VL_INLINE_OPT void Vor1k_pu_mpsoc_wb_spram__D800000::_sequent__TOP__or1k_pu__wb_bfm_memory0__3(Vor1k_pu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vor1k_pu_mpsoc_wb_spram__D800000::_sequent__TOP__or1k_pu__wb_bfm_memory0__3\n"); );
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vfunc_wb_is_last__0__Vfuncout;
    CData/*2:0*/ __Vfunc_wb_is_last__0__cti;
    // Body
    vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__Vdly__wb_ack_o 
        = vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__wb_ack_o;
    __Vfunc_wb_is_last__0__cti = vlSymsp->TOP__or1k_pu.__PVT__wb_m2s_mem_cti;
    if ((0U == (IData)(__Vfunc_wb_is_last__0__cti))) {
        __Vfunc_wb_is_last__0__Vfuncout = 1U;
    } else {
        if ((1U == (IData)(__Vfunc_wb_is_last__0__cti))) {
            __Vfunc_wb_is_last__0__Vfuncout = 0U;
        } else {
            if ((2U == (IData)(__Vfunc_wb_is_last__0__cti))) {
                __Vfunc_wb_is_last__0__Vfuncout = 0U;
            } else {
                if ((7U == (IData)(__Vfunc_wb_is_last__0__cti))) {
                    __Vfunc_wb_is_last__0__Vfuncout = 1U;
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__is_last_r 
        = __Vfunc_wb_is_last__0__Vfuncout;
    vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__valid_r 
        = vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__valid;
    if (vlTOPp->wb_rst_i) {
        vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__valid_r = 0U;
    }
    vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__Vdly__wb_ack_o 
        = ((IData)(vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__valid) 
           & ((~ ((0U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_m2s_mem_cti)) 
                  | (7U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_m2s_mem_cti)))) 
              | (~ (IData)(vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__wb_ack_o))));
    if (vlTOPp->wb_rst_i) {
        vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__Vdly__wb_ack_o = 0U;
    }
}

VL_INLINE_OPT void Vor1k_pu_mpsoc_wb_spram__D800000::_sequent__TOP__or1k_pu__wb_bfm_memory0__4(Vor1k_pu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vor1k_pu_mpsoc_wb_spram__D800000::_sequent__TOP__or1k_pu__wb_bfm_memory0__4\n"); );
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__wb_ack_o 
        = vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__Vdly__wb_ack_o;
    vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__adr_r 
        = vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__adr;
    if (vlTOPp->wb_rst_i) {
        vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__adr_r = 0U;
    }
}

VL_INLINE_OPT void Vor1k_pu_mpsoc_wb_spram__D800000::_multiclk__TOP__or1k_pu__wb_bfm_memory0__5(Vor1k_pu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vor1k_pu_mpsoc_wb_spram__D800000::_multiclk__TOP__or1k_pu__wb_bfm_memory0__5\n"); );
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
}

VL_INLINE_OPT void Vor1k_pu_mpsoc_wb_spram__D800000::_multiclk__TOP__or1k_pu__wb_bfm_memory0__7(Vor1k_pu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vor1k_pu_mpsoc_wb_spram__D800000::_multiclk__TOP__or1k_pu__wb_bfm_memory0__7\n"); );
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp4[3];
    // Body
    __Vtemp4[0U] = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__addr_reg;
    __Vtemp4[1U] = (IData)((((QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_adr)) 
                             << 0x20U) | (QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_adr))));
    __Vtemp4[2U] = (IData)(((((QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_adr)) 
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
                                  ? 0U : (__Vtemp4[
                                          ((IData)(1U) 
                                           + (3U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                                    << 5U))))) 
                                | (__Vtemp4[(3U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel))] 
                                   >> (0x1fU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                                << 5U))))
                             : 0U) : vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__next_adr));
}
