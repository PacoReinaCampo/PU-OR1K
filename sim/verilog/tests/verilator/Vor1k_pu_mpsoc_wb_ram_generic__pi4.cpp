// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vor1k_pu.h for the primary calling header

#include "Vor1k_pu_mpsoc_wb_ram_generic__pi4.h"
#include "Vor1k_pu__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vor1k_pu_mpsoc_wb_ram_generic__pi4::_sequent__TOP__or1k_pu__wb_bfm_memory0__ram0__1(Vor1k_pu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vor1k_pu_mpsoc_wb_ram_generic__pi4::_sequent__TOP__or1k_pu__wb_bfm_memory0__ram0__1\n"); );
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vdlyvlsb__mem__v0;
    CData/*7:0*/ __Vdlyvval__mem__v0;
    CData/*0:0*/ __Vdlyvset__mem__v0;
    CData/*4:0*/ __Vdlyvlsb__mem__v1;
    CData/*7:0*/ __Vdlyvval__mem__v1;
    CData/*0:0*/ __Vdlyvset__mem__v1;
    CData/*4:0*/ __Vdlyvlsb__mem__v2;
    CData/*7:0*/ __Vdlyvval__mem__v2;
    CData/*0:0*/ __Vdlyvset__mem__v2;
    CData/*4:0*/ __Vdlyvlsb__mem__v3;
    CData/*7:0*/ __Vdlyvval__mem__v3;
    CData/*0:0*/ __Vdlyvset__mem__v3;
    IData/*20:0*/ __Vdlyvdim0__mem__v0;
    IData/*20:0*/ __Vdlyvdim0__mem__v1;
    IData/*20:0*/ __Vdlyvdim0__mem__v2;
    IData/*20:0*/ __Vdlyvdim0__mem__v3;
    WData/*95:0*/ __Vtemp1[3];
    WData/*95:0*/ __Vtemp2[3];
    WData/*95:0*/ __Vtemp3[3];
    WData/*95:0*/ __Vtemp4[3];
    // Body
    __Vdlyvset__mem__v0 = 0U;
    __Vdlyvset__mem__v1 = 0U;
    __Vdlyvset__mem__v2 = 0U;
    __Vdlyvset__mem__v3 = 0U;
    vlSymsp->TOP__or1k_pu__wb_bfm_memory0__ram0.__PVT__dout 
        = vlSymsp->TOP__or1k_pu__wb_bfm_memory0__ram0.mem
        [(0x1fffffU & (vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__adr 
                       >> 2U))];
    if ((((((2U >= (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel)) 
            & ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_we_o) 
                 << 1U) | (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__wr_reg)) 
               >> (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel))) 
           & (IData)(vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__valid)) 
          & (IData)(vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__wb_ack_o)) 
         & ((0xbU >= (0xfU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                              << 2U))) ? (0xfU & ((0xf00U 
                                                   | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_bsel_o) 
                                                       << 4U) 
                                                      | (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__sel_reg))) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                                      << 2U))))
             : 0U))) {
        __Vtemp1[0U] = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__data_in_reg;
        __Vtemp1[1U] = (IData)((QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat)));
        __Vtemp1[2U] = (IData)(((QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat)) 
                                >> 0x20U));
        __Vdlyvval__mem__v0 = ((0x5fU >= (0x7fU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                                   << 5U)))
                                ? (0xffU & (((0U == 
                                              (0x1fU 
                                               & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                                  << 5U)))
                                              ? 0U : 
                                             (__Vtemp1[
                                              ((IData)(1U) 
                                               + (3U 
                                                  & (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                                      << 5U))))) 
                                            | (__Vtemp1[
                                               (3U 
                                                & (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel))] 
                                               >> (0x1fU 
                                                   & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                                      << 5U)))))
                                : 0U);
        __Vdlyvset__mem__v0 = 1U;
        __Vdlyvlsb__mem__v0 = 0U;
        __Vdlyvdim0__mem__v0 = (0x1fffffU & (vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__adr_r 
                                             >> 2U));
    }
    if ((2U & ((- (IData)(((((2U >= (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel)) 
                             & ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_we_o) 
                                  << 1U) | (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__wr_reg)) 
                                >> (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel))) 
                            & (IData)(vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__valid)) 
                           & (IData)(vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__wb_ack_o)))) 
               & ((0xbU >= (0xfU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                    << 2U))) ? ((0xf00U 
                                                 | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_bsel_o) 
                                                     << 4U) 
                                                    | (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__sel_reg))) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                                    << 2U)))
                   : 0U)))) {
        __Vtemp2[0U] = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__data_in_reg;
        __Vtemp2[1U] = (IData)((QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat)));
        __Vtemp2[2U] = (IData)(((QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat)) 
                                >> 0x20U));
        __Vdlyvval__mem__v1 = (0xffU & (((0x5fU >= 
                                          (0x7fU & 
                                           ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                            << 5U)))
                                          ? (((0U == 
                                               (0x1fU 
                                                & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                                   << 5U)))
                                               ? 0U
                                               : (__Vtemp2[
                                                  ((IData)(1U) 
                                                   + 
                                                   (3U 
                                                    & (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                                       << 5U))))) 
                                             | (__Vtemp2[
                                                (3U 
                                                 & (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                                    << 5U))))
                                          : 0U) >> 8U));
        __Vdlyvset__mem__v1 = 1U;
        __Vdlyvlsb__mem__v1 = 8U;
        __Vdlyvdim0__mem__v1 = (0x1fffffU & (vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__adr_r 
                                             >> 2U));
    }
    if ((4U & ((- (IData)(((((2U >= (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel)) 
                             & ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_we_o) 
                                  << 1U) | (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__wr_reg)) 
                                >> (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel))) 
                            & (IData)(vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__valid)) 
                           & (IData)(vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__wb_ack_o)))) 
               & ((0xbU >= (0xfU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                    << 2U))) ? ((0xf00U 
                                                 | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_bsel_o) 
                                                     << 4U) 
                                                    | (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__sel_reg))) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                                    << 2U)))
                   : 0U)))) {
        __Vtemp3[0U] = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__data_in_reg;
        __Vtemp3[1U] = (IData)((QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat)));
        __Vtemp3[2U] = (IData)(((QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat)) 
                                >> 0x20U));
        __Vdlyvval__mem__v2 = (0xffU & (((0x5fU >= 
                                          (0x7fU & 
                                           ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                            << 5U)))
                                          ? (((0U == 
                                               (0x1fU 
                                                & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                                   << 5U)))
                                               ? 0U
                                               : (__Vtemp3[
                                                  ((IData)(1U) 
                                                   + 
                                                   (3U 
                                                    & (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                                       << 5U))))) 
                                             | (__Vtemp3[
                                                (3U 
                                                 & (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                                    << 5U))))
                                          : 0U) >> 0x10U));
        __Vdlyvset__mem__v2 = 1U;
        __Vdlyvlsb__mem__v2 = 0x10U;
        __Vdlyvdim0__mem__v2 = (0x1fffffU & (vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__adr_r 
                                             >> 2U));
    }
    if ((8U & ((- (IData)(((((2U >= (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel)) 
                             & ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_we_o) 
                                  << 1U) | (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__wr_reg)) 
                                >> (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel))) 
                            & (IData)(vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__valid)) 
                           & (IData)(vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__wb_ack_o)))) 
               & ((0xbU >= (0xfU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                    << 2U))) ? ((0xf00U 
                                                 | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_bsel_o) 
                                                     << 4U) 
                                                    | (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__sel_reg))) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                                    << 2U)))
                   : 0U)))) {
        __Vtemp4[0U] = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__data_in_reg;
        __Vtemp4[1U] = (IData)((QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat)));
        __Vtemp4[2U] = (IData)(((QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat)) 
                                >> 0x20U));
        __Vdlyvval__mem__v3 = (0xffU & (((0x5fU >= 
                                          (0x7fU & 
                                           ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                            << 5U)))
                                          ? (((0U == 
                                               (0x1fU 
                                                & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                                   << 5U)))
                                               ? 0U
                                               : (__Vtemp4[
                                                  ((IData)(1U) 
                                                   + 
                                                   (3U 
                                                    & (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                                       << 5U))))) 
                                             | (__Vtemp4[
                                                (3U 
                                                 & (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                                    << 5U))))
                                          : 0U) >> 0x18U));
        __Vdlyvset__mem__v3 = 1U;
        __Vdlyvlsb__mem__v3 = 0x18U;
        __Vdlyvdim0__mem__v3 = (0x1fffffU & (vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__adr_r 
                                             >> 2U));
    }
    if (__Vdlyvset__mem__v0) {
        vlSymsp->TOP__or1k_pu__wb_bfm_memory0__ram0.mem[__Vdlyvdim0__mem__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__mem__v0))) 
                & vlSymsp->TOP__or1k_pu__wb_bfm_memory0__ram0.mem
                [__Vdlyvdim0__mem__v0]) | ((IData)(__Vdlyvval__mem__v0) 
                                           << (IData)(__Vdlyvlsb__mem__v0)));
    }
    if (__Vdlyvset__mem__v1) {
        vlSymsp->TOP__or1k_pu__wb_bfm_memory0__ram0.mem[__Vdlyvdim0__mem__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__mem__v1))) 
                & vlSymsp->TOP__or1k_pu__wb_bfm_memory0__ram0.mem
                [__Vdlyvdim0__mem__v1]) | ((IData)(__Vdlyvval__mem__v1) 
                                           << (IData)(__Vdlyvlsb__mem__v1)));
    }
    if (__Vdlyvset__mem__v2) {
        vlSymsp->TOP__or1k_pu__wb_bfm_memory0__ram0.mem[__Vdlyvdim0__mem__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__mem__v2))) 
                & vlSymsp->TOP__or1k_pu__wb_bfm_memory0__ram0.mem
                [__Vdlyvdim0__mem__v2]) | ((IData)(__Vdlyvval__mem__v2) 
                                           << (IData)(__Vdlyvlsb__mem__v2)));
    }
    if (__Vdlyvset__mem__v3) {
        vlSymsp->TOP__or1k_pu__wb_bfm_memory0__ram0.mem[__Vdlyvdim0__mem__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__mem__v3))) 
                & vlSymsp->TOP__or1k_pu__wb_bfm_memory0__ram0.mem
                [__Vdlyvdim0__mem__v3]) | ((IData)(__Vdlyvval__mem__v3) 
                                           << (IData)(__Vdlyvlsb__mem__v3)));
    }
}
