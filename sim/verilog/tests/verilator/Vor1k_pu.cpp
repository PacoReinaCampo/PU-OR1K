// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vor1k_pu.h for the primary calling header

#include "Vor1k_pu.h"
#include "Vor1k_pu__Syms.h"

#include "verilated_dpi.h"

//==========

void Vor1k_pu::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vor1k_pu::eval\n"); );
    Vor1k_pu__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("../../../../rtl/verilog/pu/or1k_pu.sv", 43, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vor1k_pu::_eval_initial_loop(Vor1k_pu__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("../../../../rtl/verilog/pu/or1k_pu.sv", 43, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vor1k_pu::_settle__TOP__1(Vor1k_pu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vor1k_pu::_settle__TOP__1\n"); );
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->tdo_pad_o = vlSymsp->TOP__or1k_pu.tdo_pad_o;
}

void Vor1k_pu::_eval(Vor1k_pu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vor1k_pu::_eval\n"); );
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->wb_clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__wb_clk_i)))) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu._sequent__TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu__3(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
        vlSymsp->TOP__or1k_pu__wb_bfm_memory0._sequent__TOP__or1k_pu__wb_bfm_memory0__3(vlSymsp);
        vlSymsp->TOP__or1k_pu._sequent__TOP__or1k_pu__3(vlSymsp);
        vlSymsp->TOP__or1k_pu__wb_bfm_memory0__ram0._sequent__TOP__or1k_pu__wb_bfm_memory0__ram0__1(vlSymsp);
        vlSymsp->TOP__or1k_pu__core__or1k_cpu._sequent__TOP__or1k_pu__core__or1k_cpu__2(vlSymsp);
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu._sequent__TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu__4(vlSymsp);
        vlSymsp->TOP__or1k_pu__wb_bfm_memory0._sequent__TOP__or1k_pu__wb_bfm_memory0__4(vlSymsp);
        vlSymsp->TOP__or1k_pu._sequent__TOP__or1k_pu__4(vlSymsp);
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu._sequent__TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu__5(vlSymsp);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__or1k_pu____PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_rst) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__or1k_pu____PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_rst))) 
         | ((IData)(vlTOPp->tck_pad_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__tck_pad_i))))) {
        vlSymsp->TOP__or1k_pu._sequent__TOP__or1k_pu__5(vlSymsp);
        vlTOPp->__Vm_traceActivity[2U] = 1U;
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__or1k_pu____PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_rst) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__or1k_pu____PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_rst))) 
         | ((IData)(vlTOPp->wb_clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__wb_clk_i))))) {
        vlSymsp->TOP__or1k_pu._sequent__TOP__or1k_pu__6(vlSymsp);
        vlTOPp->__Vm_traceActivity[3U] = 1U;
    }
    if (((IData)(vlTOPp->tck_pad_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__tck_pad_i)))) {
        vlSymsp->TOP__or1k_pu._sequent__TOP__or1k_pu__7(vlSymsp);
        vlTOPp->__Vm_traceActivity[4U] = 1U;
    }
    if (((~ (IData)(vlTOPp->tck_pad_i)) & (IData)(vlTOPp->__Vclklast__TOP__tck_pad_i))) {
        vlSymsp->TOP__or1k_pu._sequent__TOP__or1k_pu__8(vlSymsp);
        vlTOPp->__Vm_traceActivity[5U] = 1U;
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__or1k_pu__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__wr_fifo__RST) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__or1k_pu__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__wr_fifo__RST))) 
         | ((IData)(vlTOPp->wb_clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__wb_clk_i))))) {
        vlSymsp->TOP__or1k_pu._sequent__TOP__or1k_pu__9(vlSymsp);
        vlTOPp->__Vm_traceActivity[6U] = 1U;
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__or1k_pu__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__rd_fifo__RST) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__or1k_pu__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__rd_fifo__RST))) 
         | ((IData)(vlTOPp->wb_clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__wb_clk_i))))) {
        vlSymsp->TOP__or1k_pu._sequent__TOP__or1k_pu__10(vlSymsp);
    }
    if ((((IData)(vlTOPp->wb_clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__wb_clk_i))) 
         | ((IData)(vlTOPp->wb_rst_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__wb_rst_i))))) {
        vlSymsp->TOP__or1k_pu._sequent__TOP__or1k_pu__11(vlSymsp);
        vlTOPp->__Vm_traceActivity[7U] = 1U;
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu._sequent__TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu__6(vlSymsp);
    }
    if ((((IData)(vlTOPp->tck_pad_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__tck_pad_i))) 
         | ((IData)(vlTOPp->wb_rst_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__wb_rst_i))))) {
        vlSymsp->TOP__or1k_pu._sequent__TOP__or1k_pu__12(vlSymsp);
        vlTOPp->__Vm_traceActivity[8U] = 1U;
    }
    if (((((IData)(vlTOPp->__VinpClk__TOP__or1k_pu____PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_rst) 
           & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__or1k_pu____PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_rst))) 
          | ((IData)(vlTOPp->tck_pad_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__tck_pad_i)))) 
         | ((IData)(vlTOPp->wb_clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__wb_clk_i))))) {
        vlSymsp->TOP__or1k_pu._multiclk__TOP__or1k_pu__13(vlSymsp);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__or1k_pu____PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_rst) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__or1k_pu____PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_rst))) 
         | ((IData)(vlTOPp->tck_pad_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__tck_pad_i))))) {
        vlSymsp->TOP__or1k_pu._sequent__TOP__or1k_pu__14(vlSymsp);
    }
    vlSymsp->TOP__or1k_pu._combo__TOP__or1k_pu__15(vlSymsp);
    vlTOPp->__Vm_traceActivity[9U] = 1U;
    if (((IData)(vlTOPp->wb_clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__wb_clk_i)))) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu._sequent__TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu__7(vlSymsp);
        vlTOPp->__Vm_traceActivity[0xaU] = 1U;
        vlSymsp->TOP__or1k_pu._sequent__TOP__or1k_pu__16(vlSymsp);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__or1k_pu____PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_rst) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__or1k_pu____PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_rst))) 
         | ((IData)(vlTOPp->wb_clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__wb_clk_i))))) {
        vlSymsp->TOP__or1k_pu._sequent__TOP__or1k_pu__17(vlSymsp);
    }
    if ((((IData)(vlTOPp->wb_clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__wb_clk_i))) 
         | ((IData)(vlTOPp->wb_rst_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__wb_rst_i))))) {
        vlSymsp->TOP__or1k_pu._sequent__TOP__or1k_pu__18(vlSymsp);
        vlTOPp->__Vm_traceActivity[0xbU] = 1U;
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu._sequent__TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu__8(vlSymsp);
    }
    if (((((IData)(vlTOPp->tck_pad_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__tck_pad_i))) 
          | ((IData)(vlTOPp->wb_clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__wb_clk_i)))) 
         | ((IData)(vlTOPp->wb_rst_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__wb_rst_i))))) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu._multiclk__TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu__9(vlSymsp);
        vlTOPp->__Vm_traceActivity[0xcU] = 1U;
        vlSymsp->TOP__or1k_pu._multiclk__TOP__or1k_pu__19(vlSymsp);
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu._multiclk__TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu__10(vlSymsp);
        vlSymsp->TOP__or1k_pu._settle__TOP__or1k_pu__2(vlSymsp);
        vlSymsp->TOP__or1k_pu__wb_bfm_memory0._multiclk__TOP__or1k_pu__wb_bfm_memory0__5(vlSymsp);
    }
    vlSymsp->TOP__or1k_pu._combo__TOP__or1k_pu__21(vlSymsp);
    if (((((IData)(vlTOPp->__VinpClk__TOP__or1k_pu____PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_rst) 
           & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__or1k_pu____PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_rst))) 
          | ((IData)(vlTOPp->tck_pad_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__tck_pad_i)))) 
         | ((IData)(vlTOPp->wb_clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__wb_clk_i))))) {
        vlSymsp->TOP__or1k_pu._multiclk__TOP__or1k_pu__22(vlSymsp);
        vlTOPp->__Vm_traceActivity[0xdU] = 1U;
        vlSymsp->TOP__or1k_pu__wb_bfm_memory0._settle__TOP__or1k_pu__wb_bfm_memory0__1(vlSymsp);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__or1k_pu____PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_rst) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__or1k_pu____PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_rst))) 
         | ((IData)(vlTOPp->tck_pad_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__tck_pad_i))))) {
        vlSymsp->TOP__or1k_pu._sequent__TOP__or1k_pu__23(vlSymsp);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__or1k_pu__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__rd_fifo__RST) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__or1k_pu__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__rd_fifo__RST))) 
         | ((IData)(vlTOPp->wb_clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__wb_clk_i))))) {
        vlSymsp->TOP__or1k_pu._sequent__TOP__or1k_pu__24(vlSymsp);
        vlTOPp->__Vm_traceActivity[0xeU] = 1U;
    }
    if (((IData)(vlTOPp->wb_clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__wb_clk_i)))) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu._sequent__TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu__11(vlSymsp);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__or1k_pu__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__wr_fifo__RST) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__or1k_pu__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__wr_fifo__RST))) 
         | ((IData)(vlTOPp->wb_clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__wb_clk_i))))) {
        vlSymsp->TOP__or1k_pu._sequent__TOP__or1k_pu__25(vlSymsp);
        vlTOPp->__Vm_traceActivity[0xfU] = 1U;
    }
    if ((((IData)(vlTOPp->tck_pad_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__tck_pad_i))) 
         | ((IData)(vlTOPp->wb_rst_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__wb_rst_i))))) {
        vlSymsp->TOP__or1k_pu._sequent__TOP__or1k_pu__26(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x10U] = 1U;
    }
    if ((((((IData)(vlTOPp->__VinpClk__TOP__or1k_pu____PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_rst) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__or1k_pu____PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_rst))) 
           | ((IData)(vlTOPp->tck_pad_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__tck_pad_i)))) 
          | ((IData)(vlTOPp->wb_clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__wb_clk_i)))) 
         | ((IData)(vlTOPp->wb_rst_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__wb_rst_i))))) {
        vlSymsp->TOP__or1k_pu__wb_bfm_memory0._multiclk__TOP__or1k_pu__wb_bfm_memory0__7(vlSymsp);
    }
    if (((((IData)(vlTOPp->__VinpClk__TOP__or1k_pu____PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_rst) 
           & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__or1k_pu____PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_rst))) 
          | ((IData)(vlTOPp->tck_pad_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__tck_pad_i)))) 
         | ((IData)(vlTOPp->wb_rst_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__wb_rst_i))))) {
        vlSymsp->TOP__or1k_pu._multiclk__TOP__or1k_pu__27(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x11U] = 1U;
    }
    vlSymsp->TOP__or1k_pu._combo__TOP__or1k_pu__28(vlSymsp);
    if ((((IData)(vlTOPp->wb_clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__wb_clk_i))) 
         | ((IData)(vlTOPp->wb_rst_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__wb_rst_i))))) {
        vlSymsp->TOP__or1k_pu._sequent__TOP__or1k_pu__29(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x12U] = 1U;
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu._sequent__TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu__12(vlSymsp);
    }
    if (((((IData)(vlTOPp->__VinpClk__TOP__or1k_pu__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__rd_fifo__RST) 
           & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__or1k_pu__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__rd_fifo__RST))) 
          | ((IData)(vlTOPp->wb_clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__wb_clk_i)))) 
         | ((IData)(vlTOPp->wb_rst_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__wb_rst_i))))) {
        vlSymsp->TOP__or1k_pu._multiclk__TOP__or1k_pu__30(vlSymsp);
    }
    if ((((((IData)(vlTOPp->__VinpClk__TOP__or1k_pu__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__rd_fifo__RST) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__or1k_pu__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__rd_fifo__RST))) 
           | ((IData)(vlTOPp->tck_pad_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__tck_pad_i)))) 
          | ((IData)(vlTOPp->wb_clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__wb_clk_i)))) 
         | ((IData)(vlTOPp->wb_rst_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__wb_rst_i))))) {
        vlSymsp->TOP__or1k_pu._multiclk__TOP__or1k_pu__31(vlSymsp);
    }
    if (((((IData)(vlTOPp->tck_pad_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__tck_pad_i))) 
          | ((IData)(vlTOPp->wb_clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__wb_clk_i)))) 
         | ((IData)(vlTOPp->wb_rst_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__wb_rst_i))))) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu._multiclk__TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu__13(vlSymsp);
    }
    if (((((IData)(vlTOPp->__VinpClk__TOP__or1k_pu__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__wr_fifo__RST) 
           & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__or1k_pu__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__wr_fifo__RST))) 
          | ((IData)(vlTOPp->wb_clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__wb_clk_i)))) 
         | ((IData)(vlTOPp->wb_rst_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__wb_rst_i))))) {
        vlSymsp->TOP__or1k_pu._multiclk__TOP__or1k_pu__32(vlSymsp);
    }
    if (((((IData)(vlTOPp->__VinpClk__TOP__or1k_pu____PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_rst) 
           & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__or1k_pu____PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_rst))) 
          | ((IData)(vlTOPp->tck_pad_i) ^ (IData)(vlTOPp->__Vclklast__TOP__tck_pad_i))) 
         | ((IData)(vlTOPp->wb_rst_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__wb_rst_i))))) {
        vlSymsp->TOP__or1k_pu._multiclk__TOP__or1k_pu__33(vlSymsp);
        vlTOPp->_settle__TOP__1(vlSymsp);
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu._combo__TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu__14(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__wb_clk_i = vlTOPp->wb_clk_i;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__or1k_pu____PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_rst 
        = vlTOPp->__VinpClk__TOP__or1k_pu____PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_rst;
    vlTOPp->__Vclklast__TOP__tck_pad_i = vlTOPp->tck_pad_i;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__or1k_pu__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__wr_fifo__RST 
        = vlTOPp->__VinpClk__TOP__or1k_pu__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__wr_fifo__RST;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__or1k_pu__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__rd_fifo__RST 
        = vlTOPp->__VinpClk__TOP__or1k_pu__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__rd_fifo__RST;
    vlTOPp->__Vclklast__TOP__wb_rst_i = vlTOPp->wb_rst_i;
    vlTOPp->__VinpClk__TOP__or1k_pu____PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_rst 
        = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_rst;
    vlTOPp->__VinpClk__TOP__or1k_pu__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__wr_fifo__RST 
        = vlSymsp->TOP__or1k_pu.dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__wr_fifo__RST;
    vlTOPp->__VinpClk__TOP__or1k_pu__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__rd_fifo__RST 
        = vlSymsp->TOP__or1k_pu.dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__rd_fifo__RST;
}

VL_INLINE_OPT QData Vor1k_pu::_change_request(Vor1k_pu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vor1k_pu::_change_request\n"); );
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vor1k_pu::_change_request_1(Vor1k_pu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vor1k_pu::_change_request_1\n"); );
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_rst ^ vlTOPp->__Vchglast__TOP__or1k_pu__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_rst)
         | (vlSymsp->TOP__or1k_pu.dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__wr_fifo__RST ^ vlTOPp->__Vchglast__TOP__or1k_pu__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__wr_fifo__RST)
         | (vlSymsp->TOP__or1k_pu.dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__rd_fifo__RST ^ vlTOPp->__Vchglast__TOP__or1k_pu__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__rd_fifo__RST));
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_rst ^ vlTOPp->__Vchglast__TOP__or1k_pu__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_rst))) VL_DBG_MSGF("        CHANGE: ../../../../dbg/rtl/pu/or1k/verilog/wb/core/adbg_wb_module.sv:169: dbg_if0.wb.i_dbg_wb.biu_rst\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__or1k_pu.dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__wr_fifo__RST ^ vlTOPp->__Vchglast__TOP__or1k_pu__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__wr_fifo__RST))) VL_DBG_MSGF("        CHANGE: ../../../../dbg/rtl/pu/or1k/verilog/wb/core/adbg_bytefifo.sv:47: dbg_if0.genblk4.i_dbg_jsp.jsp_biu_i.__Vcellinp__wr_fifo__RST\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__or1k_pu.dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__rd_fifo__RST ^ vlTOPp->__Vchglast__TOP__or1k_pu__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__rd_fifo__RST))) VL_DBG_MSGF("        CHANGE: ../../../../dbg/rtl/pu/or1k/verilog/wb/core/adbg_bytefifo.sv:47: dbg_if0.genblk4.i_dbg_jsp.jsp_biu_i.__Vcellinp__rd_fifo__RST\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__or1k_pu__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_rst 
        = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_rst;
    vlTOPp->__Vchglast__TOP__or1k_pu__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__wr_fifo__RST 
        = vlSymsp->TOP__or1k_pu.dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__wr_fifo__RST;
    vlTOPp->__Vchglast__TOP__or1k_pu__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__rd_fifo__RST 
        = vlSymsp->TOP__or1k_pu.dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__rd_fifo__RST;
    return __req;
}

#ifdef VL_DEBUG
void Vor1k_pu::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vor1k_pu::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((wb_clk_i & 0xfeU))) {
        Verilated::overWidthError("wb_clk_i");}
    if (VL_UNLIKELY((wb_rst_i & 0xfeU))) {
        Verilated::overWidthError("wb_rst_i");}
    if (VL_UNLIKELY((tms_pad_i & 0xfeU))) {
        Verilated::overWidthError("tms_pad_i");}
    if (VL_UNLIKELY((tck_pad_i & 0xfeU))) {
        Verilated::overWidthError("tck_pad_i");}
    if (VL_UNLIKELY((tdi_pad_i & 0xfeU))) {
        Verilated::overWidthError("tdi_pad_i");}
}
#endif  // VL_DEBUG
