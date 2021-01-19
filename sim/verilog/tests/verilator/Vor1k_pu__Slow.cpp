// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vor1k_pu.h for the primary calling header

#include "Vor1k_pu.h"
#include "Vor1k_pu__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vor1k_pu) {
    Vor1k_pu__Syms* __restrict vlSymsp = __VlSymsp = new Vor1k_pu__Syms(this, name());
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(or1k_pu, Vor1k_pu_or1k_pu);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vor1k_pu::__Vconfigure(Vor1k_pu__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vor1k_pu::~Vor1k_pu() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void Vor1k_pu::_eval_initial(Vor1k_pu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vor1k_pu::_eval_initial\n"); );
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__wb_clk_i = vlTOPp->wb_clk_i;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__or1k_pu____PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_rst 
        = vlTOPp->__VinpClk__TOP__or1k_pu____PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_rst;
    vlTOPp->__Vclklast__TOP__tck_pad_i = vlTOPp->tck_pad_i;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__or1k_pu__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__wr_fifo__RST 
        = vlTOPp->__VinpClk__TOP__or1k_pu__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__wr_fifo__RST;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__or1k_pu__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__rd_fifo__RST 
        = vlTOPp->__VinpClk__TOP__or1k_pu__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__rd_fifo__RST;
    vlTOPp->__Vclklast__TOP__wb_rst_i = vlTOPp->wb_rst_i;
}

void Vor1k_pu::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vor1k_pu::final\n"); );
    // Variables
    Vor1k_pu__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vor1k_pu::_eval_settle(Vor1k_pu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vor1k_pu::_eval_settle\n"); );
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu._settle__TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x12U] = 1U;
    vlTOPp->__Vm_traceActivity[0x11U] = 1U;
    vlTOPp->__Vm_traceActivity[0x10U] = 1U;
    vlTOPp->__Vm_traceActivity[0xfU] = 1U;
    vlTOPp->__Vm_traceActivity[0xeU] = 1U;
    vlTOPp->__Vm_traceActivity[0xdU] = 1U;
    vlTOPp->__Vm_traceActivity[0xcU] = 1U;
    vlTOPp->__Vm_traceActivity[0xbU] = 1U;
    vlTOPp->__Vm_traceActivity[0xaU] = 1U;
    vlTOPp->__Vm_traceActivity[9U] = 1U;
    vlTOPp->__Vm_traceActivity[8U] = 1U;
    vlTOPp->__Vm_traceActivity[7U] = 1U;
    vlTOPp->__Vm_traceActivity[6U] = 1U;
    vlTOPp->__Vm_traceActivity[5U] = 1U;
    vlTOPp->__Vm_traceActivity[4U] = 1U;
    vlTOPp->__Vm_traceActivity[3U] = 1U;
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
    vlSymsp->TOP__or1k_pu._settle__TOP__or1k_pu__1(vlSymsp);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu._settle__TOP__or1k_pu__core__or1k_cpu__1(vlSymsp);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu._settle__TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu__2(vlSymsp);
    vlSymsp->TOP__or1k_pu__wb_bfm_memory0._settle__TOP__or1k_pu__wb_bfm_memory0__1(vlSymsp);
    vlTOPp->_settle__TOP__1(vlSymsp);
    vlSymsp->TOP__or1k_pu._settle__TOP__or1k_pu__2(vlSymsp);
    vlSymsp->TOP__or1k_pu__wb_bfm_memory0._settle__TOP__or1k_pu__wb_bfm_memory0__2(vlSymsp);
}

void Vor1k_pu::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vor1k_pu::_ctor_var_reset\n"); );
    // Body
    wb_clk_i = VL_RAND_RESET_I(1);
    wb_rst_i = VL_RAND_RESET_I(1);
    tdo_pad_o = VL_RAND_RESET_I(1);
    tms_pad_i = VL_RAND_RESET_I(1);
    tck_pad_i = VL_RAND_RESET_I(1);
    tdi_pad_i = VL_RAND_RESET_I(1);
    __VinpClk__TOP__or1k_pu____PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_rst = VL_RAND_RESET_I(1);
    __VinpClk__TOP__or1k_pu__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__wr_fifo__RST = VL_RAND_RESET_I(1);
    __VinpClk__TOP__or1k_pu__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__rd_fifo__RST = VL_RAND_RESET_I(1);
    __Vchglast__TOP__or1k_pu__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_rst = VL_RAND_RESET_I(1);
    __Vchglast__TOP__or1k_pu__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__wr_fifo__RST = VL_RAND_RESET_I(1);
    __Vchglast__TOP__or1k_pu__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__rd_fifo__RST = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<19; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
