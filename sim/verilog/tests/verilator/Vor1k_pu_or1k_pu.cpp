// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vor1k_pu.h for the primary calling header

#include "Vor1k_pu_or1k_pu.h"
#include "Vor1k_pu__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vor1k_pu_or1k_pu::_settle__TOP__or1k_pu__2(Vor1k_pu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vor1k_pu_or1k_pu::_settle__TOP__or1k_pu__2\n"); );
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__or1k_pu.__PVT__wb_m2s_mem_cti = (
                                                   (8U 
                                                    >= 
                                                    (0xfU 
                                                     & ((IData)(3U) 
                                                        * (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel))))
                                                    ? 
                                                   (7U 
                                                    & (((((((~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_access)) 
                                                            & (4U 
                                                               == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state))) 
                                                           & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__refill_done)))
                                                           ? 2U
                                                           : 7U) 
                                                         << 6U) 
                                                        | ((((4U 
                                                              == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__state)) 
                                                             & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__refill_done)))
                                                             ? 2U
                                                             : 7U) 
                                                           << 3U)) 
                                                       >> 
                                                       (0xfU 
                                                        & ((IData)(3U) 
                                                           * (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel)))))
                                                    : 0U);
}

VL_INLINE_OPT void Vor1k_pu_or1k_pu::_sequent__TOP__or1k_pu__3(Vor1k_pu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vor1k_pu_or1k_pu::_sequent__TOP__or1k_pu__3\n"); );
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*3:0*/ __Vdlyvdim0__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    CData/*7:0*/ __Vdlyvval__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    CData/*3:0*/ __Vdlyvdim0__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    CData/*7:0*/ __Vdlyvval__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    // Body
    if ((1U & (~ (IData)(vlTOPp->wb_rst_i)))) {
        if (vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__next) {
            vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__yy = 3U;
        }
    }
    __Vdlyvset__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0U;
    __Vdlyvset__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0U;
    if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_rst_i) {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__thr_int_arm = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wb_wr) 
             | (((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__r_fifo_en) 
                 & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rpp))) 
                & (1U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter))))) {
            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__thr_int_arm = 1U;
        } else {
            if (((((((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_cyc_i) 
                     & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_stb_i)) 
                    & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_we_i))) 
                   & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_sel_i) 
                      >> 1U)) & (~ (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_adr_i 
                                    >> 2U))) & (0U 
                                                == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter)))) {
                vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__thr_int_arm = 0U;
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_rst_i) {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__reg_ier = 0U;
    } else {
        if (((((((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_cyc_i) 
                 & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_stb_i)) 
                & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_we_i)) 
               & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_sel_i) 
                  >> 2U)) & (~ (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_adr_i 
                                >> 2U))) & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__reg_dlab_bit)))) {
            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__reg_ier 
                = (0xfU & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_dat_i 
                           >> 0x10U));
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__grant 
        = ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__token) 
           & (IData)(vlSymsp->TOP__or1k_pu.wb_interface0__DOT____Vcellinp__wb_arbiter_mem__wbm_cyc_i));
    vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_mux_or1k_d__DOT__wbm_err 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_req_o) 
           & (~ (IData)((0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_mux_or1k_d__DOT__match)))));
    vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__active 
        = (0U != ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__token) 
                  & (IData)(vlSymsp->TOP__or1k_pu.wb_interface0__DOT____Vcellinp__wb_arbiter_mem__wbm_cyc_i)));
    vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_mux_dbg__DOT__wbm_err 
        = ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_m2s_dbg_cyc) 
           & (0U != (0xfe000000U & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__addr_reg)));
    vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_mux_or1k_i__DOT__wbm_err 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_req) 
           & (0U != (0xfe000000U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_adr)));
    if (vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rf_push_pulse) {
        __Vdlyvval__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 
            = (0xffU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rf_data_in) 
                        >> 3U));
        __Vdlyvset__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 1U;
        __Vdlyvdim0__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 
            = vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top;
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__tf_push) {
        __Vdlyvval__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 
            = vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_dat_is;
        __Vdlyvset__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 1U;
        __Vdlyvdim0__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 
            = vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top;
    }
    if (__Vdlyvset__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0) {
        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[__Vdlyvdim0__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0] 
            = __Vdlyvval__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    }
    if (__Vdlyvset__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0) {
        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[__Vdlyvdim0__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0] 
            = __Vdlyvval__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_rst_i) {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__reg_dlab_bit = 0U;
    } else {
        if ((((((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_cyc_i) 
                & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_stb_i)) 
               & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_we_i)) 
              & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_sel_i)) 
             & (~ (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_adr_i 
                   >> 2U)))) {
            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__reg_dlab_bit 
                = (1U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_dat_i 
                         >> 7U));
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wb_wr 
        = (((((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_cyc_i) 
              & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_stb_i)) 
             & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_we_i)) 
            & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__fifo_access)) 
           & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__reg_dlab_bit)));
}

VL_INLINE_OPT void Vor1k_pu_or1k_pu::_sequent__TOP__or1k_pu__4(Vor1k_pu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vor1k_pu_or1k_pu::_sequent__TOP__or1k_pu__4\n"); );
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vfunc_wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__ff1__3__Vfuncout;
    CData/*2:0*/ __Vfunc_wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__ff1__3__in;
    WData/*95:0*/ __Vtemp3[3];
    // Body
    vlSymsp->TOP__or1k_pu.__Vfunc_wb_interface0__DOT__wb_mux_or1k_i__DOT__ff1__1__in 
        = (0U == (0xfe000000U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_adr));
    vlSymsp->TOP__or1k_pu.__Vfunc_wb_interface0__DOT__wb_mux_or1k_i__DOT__ff1__1__Vfuncout = 0U;
    if (vlSymsp->TOP__or1k_pu.__Vfunc_wb_interface0__DOT__wb_mux_or1k_i__DOT__ff1__1__in) {
        vlSymsp->TOP__or1k_pu.__Vfunc_wb_interface0__DOT__wb_mux_or1k_i__DOT__ff1__1__Vfuncout = 0U;
    }
    vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_mux_or1k_i__DOT__slave_sel 
        = vlSymsp->TOP__or1k_pu.__Vfunc_wb_interface0__DOT__wb_mux_or1k_i__DOT__ff1__1__Vfuncout;
    __Vfunc_wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__ff1__3__in 
        = ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__token) 
           & (IData)(vlSymsp->TOP__or1k_pu.wb_interface0__DOT____Vcellinp__wb_arbiter_mem__wbm_cyc_i));
    __Vfunc_wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__ff1__3__Vfuncout = 0U;
    if ((4U & (IData)(__Vfunc_wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__ff1__3__in))) {
        __Vfunc_wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__ff1__3__Vfuncout = 2U;
    }
    if ((2U & (IData)(__Vfunc_wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__ff1__3__in))) {
        __Vfunc_wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__ff1__3__Vfuncout = 1U;
    }
    if ((1U & (IData)(__Vfunc_wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__ff1__3__in))) {
        __Vfunc_wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__ff1__3__Vfuncout = 0U;
    }
    vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel 
        = __Vfunc_wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__ff1__3__Vfuncout;
    __Vtemp3[0U] = vlSymsp->TOP__or1k_pu__wb_bfm_memory0__ram0.__PVT__dout;
    __Vtemp3[1U] = vlSymsp->TOP__or1k_pu__wb_bfm_memory0__ram0.__PVT__dout;
    __Vtemp3[2U] = vlSymsp->TOP__or1k_pu__wb_bfm_memory0__ram0.__PVT__dout;
    vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_or1k_i_dat 
        = (((0U == (0x1fU & ((IData)(0x40U) + (0x1fU 
                                               & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_mux_or1k_i__DOT__slave_sel) 
                                                  << 5U)))))
             ? 0U : (__Vtemp3[((IData)(1U) + (((IData)(0x40U) 
                                               + (0x1fU 
                                                  & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_mux_or1k_i__DOT__slave_sel) 
                                                     << 5U))) 
                                              >> 5U))] 
                     << ((IData)(0x20U) - (0x1fU & 
                                           ((IData)(0x40U) 
                                            + (0x1fU 
                                               & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_mux_or1k_i__DOT__slave_sel) 
                                                  << 5U))))))) 
           | (__Vtemp3[(((IData)(0x40U) + (0x1fU & 
                                           ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_mux_or1k_i__DOT__slave_sel) 
                                            << 5U))) 
                        >> 5U)] >> (0x1fU & ((IData)(0x40U) 
                                             + (0x1fU 
                                                & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_mux_or1k_i__DOT__slave_sel) 
                                                   << 5U))))));
    if (vlTOPp->wb_rst_i) {
        vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__token = 1U;
    } else {
        if (vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__next) {
            if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__order))) {
                vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__token 
                    = vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__token_lookahead
                    [0U];
            }
            if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__order))) {
                vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__token 
                    = vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__token_lookahead
                    [1U];
            }
            if ((4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__order))) {
                vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__token 
                    = vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__token_lookahead
                    [2U];
            }
        }
    }
    vlSymsp->TOP__or1k_pu.wb_interface0__DOT____Vcellout__wb_arbiter_mem__wbm_ack_o 
        = (7U & (((IData)(vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__wb_ack_o) 
                  & (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__active)) 
                 << (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel)));
    vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_or1k_i_ack 
        = ((0U >= (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_mux_or1k_i__DOT__slave_sel)) 
           & ((IData)(vlSymsp->TOP__or1k_pu.wb_interface0__DOT____Vcellout__wb_arbiter_mem__wbm_ack_o) 
              >> ((IData)(2U) + (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_mux_or1k_i__DOT__slave_sel))));
    vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__token_lookahead[0U] 
        = vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__token;
    vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__token_lookahead[1U] 
        = (7U & ((0x7ffffffcU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__token) 
                                 << 2U)) | ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__token) 
                                            >> 1U)));
    vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__token_lookahead[2U] 
        = (7U & ((0x3ffffffeU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__token) 
                                 << 1U)) | ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__token) 
                                            >> 2U)));
}

VL_INLINE_OPT void Vor1k_pu_or1k_pu::_sequent__TOP__or1k_pu__5(Vor1k_pu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vor1k_pu_or1k_pu::_sequent__TOP__or1k_pu__5\n"); );
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdly__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__rdy_sync_tff2q;
    // Body
    vlSymsp->TOP__or1k_pu.__Vdly__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__str_sync 
        = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__str_sync;
    __Vdly__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__rdy_sync_tff2q 
        = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__rdy_sync_tff2q;
    vlSymsp->TOP__or1k_pu.__Vdly__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_ready 
        = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_ready;
    if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_rst) {
        vlSymsp->TOP__or1k_pu.__Vdly__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__str_sync = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_strobe) 
             & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_ready))) {
            vlSymsp->TOP__or1k_pu.__Vdly__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__str_sync 
                = (1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__str_sync)));
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_rst) {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__addr_reg = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_strobe) 
             & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_ready))) {
            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__addr_reg 
                = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__address_counter;
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_rst) {
        __Vdly__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__rdy_sync_tff2q = 0U;
        vlSymsp->TOP__or1k_pu.__Vdly__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_ready = 1U;
    } else {
        if (((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_strobe) 
             & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_ready))) {
            vlSymsp->TOP__or1k_pu.__Vdly__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_ready = 0U;
        } else {
            if (((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__rdy_sync_tff2) 
                 != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__rdy_sync_tff2q))) {
                vlSymsp->TOP__or1k_pu.__Vdly__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_ready = 1U;
            }
        }
        __Vdly__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__rdy_sync_tff2q 
            = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__rdy_sync_tff2;
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_rst) {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__data_in_reg = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_strobe) 
             & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_ready))) {
            if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__rd_op)))) {
                vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__data_in_reg 
                    = ((8U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__be_dec))
                        ? ((4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__be_dec))
                            ? vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__data_to_biu
                            : ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__be_dec))
                                ? vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__data_to_biu
                                : ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__be_dec))
                                    ? vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__data_to_biu
                                    : (0xff000000U 
                                       & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__data_to_biu))))
                        : ((4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__be_dec))
                            ? ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__be_dec))
                                ? vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__data_to_biu
                                : ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__be_dec))
                                    ? vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__data_to_biu
                                    : (0xff0000U & 
                                       (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__data_to_biu 
                                        >> 8U)))) : 
                           ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__be_dec))
                             ? ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__be_dec))
                                 ? (0xffffU & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__data_to_biu 
                                               >> 0x10U))
                                 : (0xff00U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__data_to_biu 
                                               >> 0x10U)))
                             : ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__be_dec))
                                 ? (0xffU & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__data_to_biu 
                                             >> 0x18U))
                                 : vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__data_to_biu))));
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_rst) {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__wr_reg = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_strobe) 
             & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_ready))) {
            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__wr_reg 
                = (1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__rd_op)));
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__rdy_sync_tff2q 
        = __Vdly__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__rdy_sync_tff2q;
    vlSymsp->TOP__or1k_pu.__Vfunc_wb_interface0__DOT__wb_mux_dbg__DOT__ff1__2__in 
        = (0U == (0xfe000000U & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__addr_reg));
    vlSymsp->TOP__or1k_pu.__Vfunc_wb_interface0__DOT__wb_mux_dbg__DOT__ff1__2__Vfuncout = 0U;
    if (vlSymsp->TOP__or1k_pu.__Vfunc_wb_interface0__DOT__wb_mux_dbg__DOT__ff1__2__in) {
        vlSymsp->TOP__or1k_pu.__Vfunc_wb_interface0__DOT__wb_mux_dbg__DOT__ff1__2__Vfuncout = 0U;
    }
    vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_mux_dbg__DOT__slave_sel 
        = vlSymsp->TOP__or1k_pu.__Vfunc_wb_interface0__DOT__wb_mux_dbg__DOT__ff1__2__Vfuncout;
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__rdy_sync_tff2 
        = ((~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_rst)) 
           & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__rdy_sync_tff1));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__rdy_sync_tff1 
        = ((~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_rst)) 
           & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__rdy_sync));
}

VL_INLINE_OPT void Vor1k_pu_or1k_pu::_sequent__TOP__or1k_pu__6(Vor1k_pu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vor1k_pu_or1k_pu::_sequent__TOP__or1k_pu__6\n"); );
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdly__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__rdy_sync;
    // Body
    __Vdly__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__rdy_sync 
        = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__rdy_sync;
    if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_rst) {
        __Vdly__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__rdy_sync = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__rdy_sync_en) {
            __Vdly__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__rdy_sync 
                = (1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__rdy_sync)));
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__wb_fsm_state 
        = ((~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_rst)) 
           & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__next_fsm_state));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__str_sync_wbff2q 
        = ((~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_rst)) 
           & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__str_sync_wbff2));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__rdy_sync 
        = __Vdly__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__rdy_sync;
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__str_sync_wbff2 
        = ((~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_rst)) 
           & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__str_sync_wbff1));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__str_sync_wbff1 
        = ((~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_rst)) 
           & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__str_sync));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__start_toggle 
        = ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__str_sync_wbff2) 
           != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__str_sync_wbff2q));
}

VL_INLINE_OPT void Vor1k_pu_or1k_pu::_sequent__TOP__or1k_pu__7(Vor1k_pu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vor1k_pu_or1k_pu::_sequent__TOP__or1k_pu__7\n"); );
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__tms_q4 
        = vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__tms_q3;
    vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__idcode_reg 
        = (((IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__idcode_select) 
            & (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__shift_dr))
            ? (((IData)(vlTOPp->tdi_pad_i) << 0x1fU) 
               | (0x7fffffffU & (vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__idcode_reg 
                                 >> 1U))) : 0x149511c3U);
    vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__tms_q3 
        = vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__tms_q2;
    vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__tms_q2 
        = vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__tms_q1;
    vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__tms_q1 
        = vlTOPp->tms_pad_i;
}

VL_INLINE_OPT void Vor1k_pu_or1k_pu::_sequent__TOP__or1k_pu__8(Vor1k_pu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vor1k_pu_or1k_pu::_sequent__TOP__or1k_pu__8\n"); );
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__idcode_tdo 
        = (1U & vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__idcode_reg);
    vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__instruction_tdo 
        = (1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__jtag_ir));
    vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__shift_ir_neg 
        = vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__shift_ir;
    vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__tdo_padoe_o 
        = (((IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__shift_ir) 
            | (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__shift_dr)) 
           | ((IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__pause_dr) 
              & (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__debug_select)));
    vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__bypassed_tdo 
        = vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__bypass_reg;
    vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__latched_jtag_ir_neg 
        = vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__latched_jtag_ir;
}

VL_INLINE_OPT void Vor1k_pu_or1k_pu::_sequent__TOP__or1k_pu__9(Vor1k_pu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vor1k_pu_or1k_pu::_sequent__TOP__or1k_pu__9\n"); );
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__or1k_pu.__Vdly__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter 
        = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter;
    if (vlSymsp->TOP__or1k_pu.dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__wr_fifo__RST) {
        vlSymsp->TOP__or1k_pu.__Vdly__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter = 0U;
    } else {
        if ((((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__w_fifo_en) 
              & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wpp)) 
             & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__push_ok))) {
            vlSymsp->TOP__or1k_pu.__Vdly__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter 
                = (0xfU & ((IData)(1U) + (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter)));
        } else {
            if ((((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__w_fifo_en) 
                  & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wpp))) 
                 & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__pop_ok))) {
                vlSymsp->TOP__or1k_pu.__Vdly__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter 
                    = (0xfU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter) 
                               - (IData)(1U)));
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu.dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__wr_fifo__RST) {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg7 = 0U;
    } else {
        if ((((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__w_fifo_en) 
              & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wpp)) 
             & (8U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter)))) {
            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg7 
                = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg6;
        }
    }
    if (vlSymsp->TOP__or1k_pu.dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__wr_fifo__RST) {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg6 = 0U;
    } else {
        if ((((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__w_fifo_en) 
              & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wpp)) 
             & (8U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter)))) {
            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg6 
                = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg5;
        }
    }
    if (vlSymsp->TOP__or1k_pu.dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__wr_fifo__RST) {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg5 = 0U;
    } else {
        if ((((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__w_fifo_en) 
              & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wpp)) 
             & (8U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter)))) {
            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg5 
                = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg4;
        }
    }
    if (vlSymsp->TOP__or1k_pu.dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__wr_fifo__RST) {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg4 = 0U;
    } else {
        if ((((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__w_fifo_en) 
              & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wpp)) 
             & (8U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter)))) {
            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg4 
                = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg3;
        }
    }
    if (vlSymsp->TOP__or1k_pu.dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__wr_fifo__RST) {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg3 = 0U;
    } else {
        if ((((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__w_fifo_en) 
              & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wpp)) 
             & (8U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter)))) {
            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg3 
                = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg2;
        }
    }
    if (vlSymsp->TOP__or1k_pu.dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__wr_fifo__RST) {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg2 = 0U;
    } else {
        if ((((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__w_fifo_en) 
              & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wpp)) 
             & (8U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter)))) {
            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg2 
                = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg1;
        }
    }
    if (vlSymsp->TOP__or1k_pu.dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__wr_fifo__RST) {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg1 = 0U;
    } else {
        if ((((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__w_fifo_en) 
              & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wpp)) 
             & (8U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter)))) {
            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg1 
                = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg0;
        }
    }
    if (vlSymsp->TOP__or1k_pu.dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__wr_fifo__RST) {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg0 = 0U;
    } else {
        if ((((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__w_fifo_en) 
              & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wpp)) 
             & (8U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter)))) {
            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg0 
                = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__data_in;
        }
    }
}

VL_INLINE_OPT void Vor1k_pu_or1k_pu::_sequent__TOP__or1k_pu__10(Vor1k_pu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vor1k_pu_or1k_pu::_sequent__TOP__or1k_pu__10\n"); );
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__or1k_pu.__Vdly__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter 
        = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter;
    if (vlSymsp->TOP__or1k_pu.dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__rd_fifo__RST) {
        vlSymsp->TOP__or1k_pu.__Vdly__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter = 0U;
    } else {
        if ((((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__r_fifo_en) 
              & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rpp)) 
             & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__push_ok))) {
            vlSymsp->TOP__or1k_pu.__Vdly__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter 
                = (0xfU & ((IData)(1U) + (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter)));
        } else {
            if ((((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__r_fifo_en) 
                  & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rpp))) 
                 & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__pop_ok))) {
                vlSymsp->TOP__or1k_pu.__Vdly__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter 
                    = (0xfU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter) 
                               - (IData)(1U)));
            }
        }
    }
}

VL_INLINE_OPT void Vor1k_pu_or1k_pu::_sequent__TOP__or1k_pu__11(Vor1k_pu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vor1k_pu_or1k_pu::_sequent__TOP__or1k_pu__11\n"); );
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vtableidx11;
    CData/*0:0*/ __Vdly__uart16550__DOT__regs__DOT__rf_pop;
    CData/*0:0*/ __Vdly__uart16550__DOT__regs__DOT__msi_reset;
    CData/*7:0*/ __Vdly__uart16550__DOT__regs__DOT__msr;
    CData/*0:0*/ __Vdly__uart16550__DOT__regs__DOT__lsr5r;
    CData/*7:0*/ __Vdly__uart16550__DOT__regs__DOT__block_cnt;
    CData/*0:0*/ __Vdly__uart16550__DOT__regs__DOT__rls_int_pnd;
    CData/*0:0*/ __Vdly__uart16550__DOT__regs__DOT__rda_int_pnd;
    CData/*0:0*/ __Vdly__uart16550__DOT__regs__DOT__thre_int_pnd;
    CData/*0:0*/ __Vdly__uart16550__DOT__regs__DOT__ms_int_pnd;
    CData/*0:0*/ __Vdly__uart16550__DOT__regs__DOT__ti_int_pnd;
    CData/*2:0*/ __Vdly__uart16550__DOT__regs__DOT__tstate;
    CData/*4:0*/ __Vdly__uart16550__DOT__regs__DOT__transmitter__DOT__counter;
    CData/*6:0*/ __Vdly__uart16550__DOT__regs__DOT__transmitter__DOT__shift_out;
    CData/*0:0*/ __Vdly__uart16550__DOT__regs__DOT__transmitter__DOT__bit_out;
    CData/*0:0*/ __Vdly__uart16550__DOT__regs__DOT__transmitter__DOT__parity_xor;
    CData/*2:0*/ __Vdly__uart16550__DOT__regs__DOT__transmitter__DOT__bit_counter;
    CData/*3:0*/ __Vdly__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    CData/*4:0*/ __Vdly__uart16550__DOT__regs__DOT__tf_count;
    CData/*3:0*/ __Vdly__uart16550__DOT__regs__DOT__rstate;
    CData/*2:0*/ __Vdly__uart16550__DOT__regs__DOT__receiver__DOT__rbit_counter;
    CData/*0:0*/ __Vdly__uart16550__DOT__regs__DOT__receiver__DOT__rparity_xor;
    CData/*0:0*/ __Vdly__uart16550__DOT__regs__DOT__receiver__DOT__rframing_error;
    CData/*0:0*/ __Vdly__uart16550__DOT__regs__DOT__receiver__DOT__rparity_error;
    CData/*0:0*/ __Vdly__uart16550__DOT__regs__DOT__receiver__DOT__rparity;
    CData/*7:0*/ __Vdly__uart16550__DOT__regs__DOT__receiver__DOT__rshift;
    CData/*7:0*/ __Vdly__uart16550__DOT__regs__DOT__receiver__DOT__counter_b;
    CData/*3:0*/ __Vdly__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top;
    CData/*3:0*/ __Vdly__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    CData/*4:0*/ __Vdly__uart16550__DOT__regs__DOT__rf_count;
    CData/*0:0*/ __Vdlyvset__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0;
    CData/*0:0*/ __Vdlyvset__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16;
    CData/*3:0*/ __Vdlyvdim0__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32;
    CData/*2:0*/ __Vdlyvval__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32;
    CData/*0:0*/ __Vdlyvset__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32;
    CData/*3:0*/ __Vdlyvdim0__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33;
    CData/*0:0*/ __Vdlyvset__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33;
    CData/*3:0*/ __Vdlyvdim0__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34;
    CData/*2:0*/ __Vdlyvval__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34;
    CData/*0:0*/ __Vdlyvset__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34;
    SData/*15:0*/ __Vdly__uart16550__DOT__regs__DOT__dlc;
    SData/*9:0*/ __Vdly__uart16550__DOT__regs__DOT__counter_t;
    // Body
    __Vdly__uart16550__DOT__regs__DOT__msi_reset = vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__msi_reset;
    vlSymsp->TOP__or1k_pu.__Vdly__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__strobe_toggle 
        = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__strobe_toggle;
    vlSymsp->TOP__or1k_pu.__Vdly__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__strobe_toggle 
        = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__strobe_toggle;
    __Vdly__uart16550__DOT__regs__DOT__lsr5r = vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr5r;
    vlSymsp->TOP__or1k_pu.__Vdly__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync 
        = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync;
    __Vdly__uart16550__DOT__regs__DOT__msr = vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__msr;
    __Vdly__uart16550__DOT__regs__DOT__rf_pop = vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rf_pop;
    __Vdly__uart16550__DOT__regs__DOT__ms_int_pnd = vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__ms_int_pnd;
    __Vdly__uart16550__DOT__regs__DOT__ti_int_pnd = vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__ti_int_pnd;
    __Vdly__uart16550__DOT__regs__DOT__rls_int_pnd 
        = vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rls_int_pnd;
    __Vdly__uart16550__DOT__regs__DOT__rda_int_pnd 
        = vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rda_int_pnd;
    __Vdly__uart16550__DOT__regs__DOT__thre_int_pnd 
        = vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__thre_int_pnd;
    __Vdly__uart16550__DOT__regs__DOT__receiver__DOT__counter_b 
        = vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__counter_b;
    __Vdly__uart16550__DOT__regs__DOT__counter_t = vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__counter_t;
    __Vdly__uart16550__DOT__regs__DOT__block_cnt = vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__block_cnt;
    __Vdly__uart16550__DOT__regs__DOT__transmitter__DOT__bit_counter 
        = vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__bit_counter;
    __Vdly__uart16550__DOT__regs__DOT__transmitter__DOT__parity_xor 
        = vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__parity_xor;
    __Vdly__uart16550__DOT__regs__DOT__transmitter__DOT__bit_out 
        = vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__bit_out;
    __Vdly__uart16550__DOT__regs__DOT__transmitter__DOT__shift_out 
        = vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__shift_out;
    __Vdly__uart16550__DOT__regs__DOT__transmitter__DOT__counter 
        = vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__counter;
    __Vdly__uart16550__DOT__regs__DOT__tstate = vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__tstate;
    __Vdly__uart16550__DOT__regs__DOT__receiver__DOT__rshift 
        = vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rshift;
    __Vdly__uart16550__DOT__regs__DOT__receiver__DOT__rparity 
        = vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rparity;
    __Vdly__uart16550__DOT__regs__DOT__receiver__DOT__rparity_error 
        = vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rparity_error;
    __Vdly__uart16550__DOT__regs__DOT__receiver__DOT__rframing_error 
        = vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rframing_error;
    __Vdly__uart16550__DOT__regs__DOT__receiver__DOT__rparity_xor 
        = vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rparity_xor;
    __Vdly__uart16550__DOT__regs__DOT__receiver__DOT__rbit_counter 
        = vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rbit_counter;
    __Vdly__uart16550__DOT__regs__DOT__rstate = vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rstate;
    __Vdly__uart16550__DOT__regs__DOT__dlc = vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__dlc;
    __Vdly__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top 
        = vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top;
    __Vdly__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
        = vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    __Vdly__uart16550__DOT__regs__DOT__rf_count = vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rf_count;
    __Vdly__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
        = vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    __Vdly__uart16550__DOT__regs__DOT__tf_count = vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__tf_count;
    __Vdlyvset__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 0U;
    __Vdlyvset__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 0U;
    __Vdlyvset__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 0U;
    __Vdlyvset__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 = 0U;
    __Vdlyvset__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 0U;
    if (vlTOPp->wb_rst_i) {
        __Vdly__uart16550__DOT__regs__DOT__msi_reset = 1U;
    } else {
        if (vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__msi_reset) {
            __Vdly__uart16550__DOT__regs__DOT__msi_reset = 0U;
        } else {
            if (vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__msr_read) {
                __Vdly__uart16550__DOT__regs__DOT__msi_reset = 1U;
            }
        }
    }
    if (vlTOPp->wb_rst_i) {
        vlSymsp->TOP__or1k_pu.__Vdly__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__strobe_toggle = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__A_enable) {
            vlSymsp->TOP__or1k_pu.__Vdly__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__strobe_toggle 
                = (1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__strobe_toggle)));
        }
    }
    if (vlTOPp->wb_rst_i) {
        vlSymsp->TOP__or1k_pu.__Vdly__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__strobe_toggle = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__A_enable) {
            vlSymsp->TOP__or1k_pu.__Vdly__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__strobe_toggle 
                = (1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__strobe_toggle)));
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr_mask_d 
        = ((~ (IData)(vlTOPp->wb_rst_i)) & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr_mask_condition));
    if (vlTOPp->wb_rst_i) {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__ack_sff__DOT__srflop = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__A_enable) {
            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__ack_sff__DOT__srflop = 0U;
        } else {
            if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__ack_sff__DOT__syncxor) {
                vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__ack_sff__DOT__srflop = 1U;
            }
        }
    }
    if (vlTOPp->wb_rst_i) {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__ack_sff__DOT__srflop = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__A_enable) {
            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__ack_sff__DOT__srflop = 0U;
        } else {
            if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__ack_sff__DOT__syncxor) {
                vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__ack_sff__DOT__srflop = 1U;
            }
        }
    }
    if (vlTOPp->wb_rst_i) {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wen_sff__DOT__srflop = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wda_rst) {
            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wen_sff__DOT__srflop = 0U;
        } else {
            if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wen_sff__DOT__syncxor) {
                vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wen_sff__DOT__srflop = 1U;
            }
        }
    }
    if (vlTOPp->wb_rst_i) {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__ren_sff__DOT__srflop = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__ren_rst) {
            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__ren_sff__DOT__srflop = 0U;
        } else {
            if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__ren_sff__DOT__syncxor) {
                vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__ren_sff__DOT__srflop = 1U;
            }
        }
    }
    if (vlTOPp->wb_rst_i) {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fsm_state = 0U;
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fsm_state = 0U;
    } else {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fsm_state 
            = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__next_wr_fsm_state;
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fsm_state 
            = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__next_rd_fsm_state;
    }
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__srx_pad 
        = ((IData)(vlTOPp->wb_rst_i) | (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__i_uart_sync_flops__DOT__flop_0));
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_we_is 
        = ((~ (IData)(vlTOPp->wb_rst_i)) & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_we_o));
    __Vdly__uart16550__DOT__regs__DOT__lsr5r = ((IData)(vlTOPp->wb_rst_i) 
                                                | ((~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__fifo_write)) 
                                                   & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr5r) 
                                                      | ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr5) 
                                                         & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr5_d))))));
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr6r 
        = ((IData)(vlTOPp->wb_rst_i) | ((~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__fifo_write)) 
                                        & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr6r) 
                                           | ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr6) 
                                              & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr6_d))))));
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr7r 
        = ((~ (IData)(vlTOPp->wb_rst_i)) & ((~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr_mask)) 
                                            & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr7r) 
                                               | ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr7) 
                                                  & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr7_d))))));
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr4r 
        = (1U & ((~ (IData)(vlTOPp->wb_rst_i)) & ((~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr_mask)) 
                                                  & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr4r) 
                                                     | (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rf_data_out) 
                                                         >> 2U) 
                                                        & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr4_d)))))));
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr3r 
        = (1U & ((~ (IData)(vlTOPp->wb_rst_i)) & ((~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr_mask)) 
                                                  & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr3r) 
                                                     | ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rf_data_out) 
                                                        & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr3_d)))))));
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr2r 
        = (1U & ((~ (IData)(vlTOPp->wb_rst_i)) & ((~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr_mask)) 
                                                  & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr2r) 
                                                     | (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rf_data_out) 
                                                         >> 1U) 
                                                        & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr2_d)))))));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__ack_sff__DOT__syncprev 
        = ((~ (IData)(vlTOPp->wb_rst_i)) & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__ack_sff__DOT__sync2));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__ack_sff__DOT__syncprev 
        = ((~ (IData)(vlTOPp->wb_rst_i)) & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__ack_sff__DOT__sync2));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__ren_sff__DOT__syncprev 
        = ((~ (IData)(vlTOPp->wb_rst_i)) & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__ren_sff__DOT__sync2));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wen_sff__DOT__syncprev 
        = ((~ (IData)(vlTOPp->wb_rst_i)) & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wen_sff__DOT__sync2));
    __Vtableidx11 = (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_cyc_is) 
                      << 4U) | (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_stb_is) 
                                 << 3U) | (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wbstate) 
                                            << 1U) 
                                           | (IData)(vlTOPp->wb_rst_i))));
    vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_uart_ack = 
        vlSymsp->TOP__or1k_pu.__Vtable11___PVT__wb_s2m_uart_ack
        [__Vtableidx11];
    if ((2U & vlSymsp->TOP__or1k_pu.__Vtablechg11[__Vtableidx11])) {
        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wbstate 
            = vlSymsp->TOP__or1k_pu.__Vtable11___PVT__uart16550__DOT__wb_interface__DOT__wbstate
            [__Vtableidx11];
    }
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wre 
        = vlSymsp->TOP__or1k_pu.__Vtable11___PVT__uart16550__DOT__wb_interface__DOT__wre
        [__Vtableidx11];
    vlSymsp->TOP__or1k_pu.__PVT__or1k_dbg_rst = ((~ (IData)(vlTOPp->wb_rst_i)) 
                                                 & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__cpu_reset_csff));
    if (vlTOPp->wb_rst_i) {
        vlSymsp->TOP__or1k_pu.__Vdly__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_en) {
            vlSymsp->TOP__or1k_pu.__Vdly__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync 
                = (1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync)));
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_fsm_state 
        = ((~ (IData)(vlTOPp->wb_rst_i)) & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__next_fsm_state));
    if (vlTOPp->wb_rst_i) {
        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__fcr = 3U;
    } else {
        if (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__we_o) 
             & (2U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_adr_is)))) {
            vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__fcr 
                = (3U & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_dat_is) 
                         >> 6U));
        }
    }
    if (vlTOPp->wb_rst_i) {
        __Vdly__uart16550__DOT__regs__DOT__msr = 0U;
    } else {
        __Vdly__uart16550__DOT__regs__DOT__msr = ((0xf0U 
                                                   & (IData)(__Vdly__uart16550__DOT__regs__DOT__msr)) 
                                                  | ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__msi_reset)
                                                      ? 0U
                                                      : 
                                                     (0xfU 
                                                      & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__msr) 
                                                         | (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__delayed_modem_signals))))));
        __Vdly__uart16550__DOT__regs__DOT__msr = ((0xfU 
                                                   & (IData)(__Vdly__uart16550__DOT__regs__DOT__msr)) 
                                                  | ((((0x10U 
                                                        & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__mcr))
                                                        ? 
                                                       (1U 
                                                        & ((0xcU 
                                                            & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__mcr) 
                                                               << 2U)) 
                                                           | ((2U 
                                                               & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__mcr) 
                                                                  >> 1U)) 
                                                              | (1U 
                                                                 & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__mcr) 
                                                                    >> 3U)))))
                                                        : 0U) 
                                                      << 7U) 
                                                     | ((0x40U 
                                                         & (((0x10U 
                                                              & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__mcr))
                                                              ? 
                                                             ((0xcU 
                                                               & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__mcr) 
                                                                  << 2U)) 
                                                              | ((2U 
                                                                  & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__mcr) 
                                                                     >> 1U)) 
                                                                 | (1U 
                                                                    & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__mcr) 
                                                                       >> 3U))))
                                                              : 0U) 
                                                            << 5U)) 
                                                        | ((0x20U 
                                                            & (((0x10U 
                                                                 & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__mcr))
                                                                 ? 
                                                                ((0xcU 
                                                                  & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__mcr) 
                                                                     << 2U)) 
                                                                 | ((2U 
                                                                     & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__mcr) 
                                                                        >> 1U)) 
                                                                    | (1U 
                                                                       & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__mcr) 
                                                                          >> 3U))))
                                                                 : 0U) 
                                                               << 3U)) 
                                                           | (0x10U 
                                                              & (((0x10U 
                                                                   & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__mcr))
                                                                   ? 
                                                                  ((0xcU 
                                                                    & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__mcr) 
                                                                       << 2U)) 
                                                                   | ((2U 
                                                                       & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__mcr) 
                                                                          >> 1U)) 
                                                                      | (1U 
                                                                         & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__mcr) 
                                                                            >> 3U))))
                                                                   : 0U) 
                                                                 << 1U))))));
    }
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr0r 
        = ((~ (IData)(vlTOPp->wb_rst_i)) & ((~ ((((1U 
                                                   == (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rf_count)) 
                                                  & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rf_pop)) 
                                                 & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rf_push_pulse))) 
                                                | (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rx_reset))) 
                                            & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr0r) 
                                               | ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr0) 
                                                  & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr0_d))))));
    if (vlTOPp->wb_rst_i) {
        __Vdly__uart16550__DOT__regs__DOT__rf_pop = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rf_pop) {
            __Vdly__uart16550__DOT__regs__DOT__rf_pop = 0U;
        } else {
            if ((((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__re_o) 
                  & (0U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_adr_is))) 
                 & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lcr) 
                       >> 7U)))) {
                __Vdly__uart16550__DOT__regs__DOT__rf_pop = 1U;
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync_wbff2q 
        = ((~ (IData)(vlTOPp->wb_rst_i)) & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync_wbff2));
    __Vdly__uart16550__DOT__regs__DOT__ms_int_pnd = 
        ((~ (IData)(vlTOPp->wb_rst_i)) & ((~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__msr_read)) 
                                          & (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__ms_int) 
                                              & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__ms_int_d))) 
                                             | ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__ms_int_pnd) 
                                                & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__ier) 
                                                   >> 3U)))));
    __Vdly__uart16550__DOT__regs__DOT__ti_int_pnd = 
        ((~ (IData)(vlTOPp->wb_rst_i)) & ((~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__fifo_read)) 
                                          & (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__ti_int) 
                                              & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__ti_int_d))) 
                                             | ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__ti_int_pnd) 
                                                & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__ier)))));
    __Vdly__uart16550__DOT__regs__DOT__rls_int_pnd 
        = ((~ (IData)(vlTOPp->wb_rst_i)) & ((~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr_mask)) 
                                            & (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rls_int) 
                                                & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rls_int_d))) 
                                               | ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rls_int_pnd) 
                                                  & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__ier) 
                                                     >> 2U)))));
    __Vdly__uart16550__DOT__regs__DOT__rda_int_pnd 
        = ((~ (IData)(vlTOPp->wb_rst_i)) & ((~ (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rf_count) 
                                                 == (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__trigger_level)) 
                                                & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__fifo_read))) 
                                            & (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rda_int) 
                                                & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rda_int_d))) 
                                               | ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rda_int_pnd) 
                                                  & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__ier)))));
    __Vdly__uart16550__DOT__regs__DOT__thre_int_pnd 
        = ((~ (IData)(vlTOPp->wb_rst_i)) & ((~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__fifo_write) 
                                                | (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__iir_read) 
                                                    & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__iir))) 
                                                   & (1U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__iir) 
                                                          >> 1U)))))) 
                                            & (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__thre_int) 
                                                & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__thre_int_d))) 
                                               | ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__thre_int_pnd) 
                                                  & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__ier) 
                                                     >> 1U)))));
    if (vlTOPp->wb_rst_i) {
        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__tf_overrun = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__tx_reset) 
             | (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr_mask))) {
            vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__tf_overrun = 0U;
        } else {
            if (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__tf_push) 
                 & (0x10U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__tf_count)))) {
                vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__tf_overrun = 1U;
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr1r 
        = ((~ (IData)(vlTOPp->wb_rst_i)) & ((~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr_mask)) 
                                            & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr1r) 
                                               | ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rf_overrun) 
                                                  & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr1_d))))));
    if (vlTOPp->wb_rst_i) {
        __Vdly__uart16550__DOT__regs__DOT__receiver__DOT__counter_b = 0x9fU;
    } else {
        if (vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__serial_in) {
            __Vdly__uart16550__DOT__regs__DOT__receiver__DOT__counter_b 
                = (0xffU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__toc_value) 
                            >> 2U));
        } else {
            if (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__enable) 
                 & (0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__counter_b)))) {
                __Vdly__uart16550__DOT__regs__DOT__receiver__DOT__counter_b 
                    = (0xffU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__counter_b) 
                                - (IData)(1U)));
            }
        }
    }
    if (vlTOPp->wb_rst_i) {
        __Vdly__uart16550__DOT__regs__DOT__counter_t = 0x27fU;
    } else {
        if ((((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rf_push_pulse) 
              | (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rf_pop)) 
             | (0U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rf_count)))) {
            __Vdly__uart16550__DOT__regs__DOT__counter_t 
                = vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__toc_value;
        } else {
            if (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__enable) 
                 & (0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__counter_t)))) {
                __Vdly__uart16550__DOT__regs__DOT__counter_t 
                    = (0x3ffU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__counter_t) 
                                 - (IData)(1U)));
            }
        }
    }
    if (vlTOPp->wb_rst_i) {
        __Vdly__uart16550__DOT__regs__DOT__block_cnt = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr5r) 
             & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__fifo_write))) {
            __Vdly__uart16550__DOT__regs__DOT__block_cnt = 1U;
        } else {
            if (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__enable) 
                 & (0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__block_cnt)))) {
                __Vdly__uart16550__DOT__regs__DOT__block_cnt 
                    = (0xffU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__block_cnt) 
                                - (IData)(1U)));
            }
        }
    }
    __Vdly__uart16550__DOT__regs__DOT__dlc = ((IData)(vlTOPp->wb_rst_i)
                                               ? 0U
                                               : (0xffffU 
                                                  & ((1U 
                                                      & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__start_dlc) 
                                                         | (~ (IData)(
                                                                      (0U 
                                                                       != (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__dlc))))))
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__dl) 
                                                      - (IData)(1U))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__dlc) 
                                                      - (IData)(1U)))));
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rf_push_q 
        = ((~ (IData)(vlTOPp->wb_rst_i)) & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rf_push));
    vlSymsp->TOP__or1k_pu.__PVT__uart_irq = (1U & (
                                                   (~ (IData)(vlTOPp->wb_rst_i)) 
                                                   & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rls_int_pnd)
                                                       ? 
                                                      (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr_mask))
                                                       : 
                                                      ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rda_int_pnd) 
                                                       | ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__ti_int_pnd)
                                                           ? 
                                                          (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__fifo_read))
                                                           : 
                                                          ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__thre_int_pnd)
                                                            ? 
                                                           (~ 
                                                            ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__fifo_write) 
                                                             & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__iir_read)))
                                                            : 
                                                           ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__ms_int_pnd) 
                                                            & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__msr_read)))))))));
    if (vlTOPp->wb_rst_i) {
        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top = 0U;
        __Vdly__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0U;
        __Vdly__uart16550__DOT__regs__DOT__tf_count = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__tx_reset) {
            vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top = 0U;
            __Vdly__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0U;
            __Vdly__uart16550__DOT__regs__DOT__tf_count = 0U;
        } else {
            if ((2U == (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__tf_push) 
                         << 1U) | (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__tf_pop)))) {
                if ((0x10U > (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__tf_count))) {
                    __Vdly__uart16550__DOT__regs__DOT__tf_count 
                        = (0x1fU & ((IData)(1U) + (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__tf_count)));
                    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top 
                        = vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1;
                }
            } else {
                if ((1U == (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__tf_push) 
                             << 1U) | (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__tf_pop)))) {
                    if ((0U < (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__tf_count))) {
                        __Vdly__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom)));
                        __Vdly__uart16550__DOT__regs__DOT__tf_count 
                            = (0x1fU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__tf_count) 
                                        - (IData)(1U)));
                    }
                } else {
                    if ((3U == (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__tf_push) 
                                 << 1U) | (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__tf_pop)))) {
                        __Vdly__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom)));
                        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top 
                            = vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1;
                    }
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_uart_dat = 
        ((IData)(vlTOPp->wb_rst_i) ? 0U : (0xffU & 
                                           ((4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_adr_is))
                                             ? ((2U 
                                                 & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_adr_is))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_adr_is))
                                                  ? (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__scratch)
                                                  : (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__msr))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_adr_is))
                                                  ? (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr)
                                                  : 0U))
                                             : ((2U 
                                                 & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_adr_is))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_adr_is))
                                                  ? (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lcr)
                                                  : 
                                                 (0xc0U 
                                                  | (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__iir)))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_adr_is))
                                                  ? 
                                                 ((0x80U 
                                                   & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lcr))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__dl) 
                                                   >> 8U)
                                                   : (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__ier))
                                                  : 
                                                 ((0x80U 
                                                   & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lcr))
                                                   ? (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__dl)
                                                   : 
                                                  ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rf_data_out) 
                                                   >> 3U)))))));
    if (vlTOPp->wb_rst_i) {
        __Vdly__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top = 0U;
        __Vdly__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
        __Vdly__uart16550__DOT__regs__DOT__rf_count = 0U;
        __Vdlyvset__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 1U;
    } else {
        if (vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rx_reset) {
            __Vdly__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top = 0U;
            __Vdly__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
            __Vdly__uart16550__DOT__regs__DOT__rf_count = 0U;
            __Vdlyvset__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 1U;
        } else {
            if ((2U == (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rf_push_pulse) 
                         << 1U) | (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rf_pop)))) {
                if ((0x10U > (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rf_count))) {
                    __Vdly__uart16550__DOT__regs__DOT__rf_count 
                        = (0x1fU & ((IData)(1U) + (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rf_count)));
                    __Vdlyvval__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 
                        = (7U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rf_data_in));
                    __Vdlyvset__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 1U;
                    __Vdlyvdim0__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 
                        = vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top;
                    __Vdly__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top 
                        = vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1;
                }
            } else {
                if ((1U == (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rf_push_pulse) 
                             << 1U) | (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rf_pop)))) {
                    if ((0U < (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rf_count))) {
                        __Vdly__uart16550__DOT__regs__DOT__rf_count 
                            = (0x1fU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rf_count) 
                                        - (IData)(1U)));
                        __Vdlyvset__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 = 1U;
                        __Vdlyvdim0__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 
                            = vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
                        __Vdly__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom)));
                    }
                } else {
                    if ((3U == (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rf_push_pulse) 
                                 << 1U) | (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rf_pop)))) {
                        __Vdly__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom)));
                        __Vdlyvval__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 
                            = (7U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rf_data_in));
                        __Vdlyvset__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 1U;
                        __Vdlyvdim0__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 
                            = vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top;
                        __Vdly__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top 
                            = vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1;
                    }
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__msi_reset 
        = __Vdly__uart16550__DOT__regs__DOT__msi_reset;
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__counter_t 
        = __Vdly__uart16550__DOT__regs__DOT__counter_t;
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__block_cnt 
        = __Vdly__uart16550__DOT__regs__DOT__block_cnt;
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr5r 
        = __Vdly__uart16550__DOT__regs__DOT__lsr5r;
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rda_int_pnd 
        = __Vdly__uart16550__DOT__regs__DOT__rda_int_pnd;
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
        = __Vdly__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__msr 
        = __Vdly__uart16550__DOT__regs__DOT__msr;
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top 
        = __Vdly__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top;
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
        = __Vdly__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    if (__Vdlyvset__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0) {
        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0U] = 0U;
        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1U] = 0U;
        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2U] = 0U;
        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3U] = 0U;
        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4U] = 0U;
        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5U] = 0U;
        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6U] = 0U;
        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7U] = 0U;
        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8U] = 0U;
        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9U] = 0U;
        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xaU] = 0U;
        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xbU] = 0U;
        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xcU] = 0U;
        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xdU] = 0U;
        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xeU] = 0U;
        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xfU] = 0U;
    }
    if (__Vdlyvset__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16) {
        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0U] = 0U;
        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1U] = 0U;
        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2U] = 0U;
        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3U] = 0U;
        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4U] = 0U;
        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5U] = 0U;
        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6U] = 0U;
        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7U] = 0U;
        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8U] = 0U;
        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9U] = 0U;
        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xaU] = 0U;
        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xbU] = 0U;
        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xcU] = 0U;
        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xdU] = 0U;
        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xeU] = 0U;
        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xfU] = 0U;
    }
    if (__Vdlyvset__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32) {
        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vdlyvdim0__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32] 
            = __Vdlyvval__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32;
    }
    if (__Vdlyvset__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33) {
        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vdlyvdim0__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33] = 0U;
    }
    if (__Vdlyvset__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34) {
        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vdlyvdim0__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34] 
            = __Vdlyvval__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34;
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__w_wb_ack = 0U;
    if ((0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fsm_state))) {
        if ((1U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fsm_state))) {
            if ((2U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fsm_state))) {
                vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__w_wb_ack = 1U;
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wda_rst = 0U;
    if ((0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fsm_state))) {
        if ((1U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fsm_state))) {
            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wda_rst = 1U;
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__w_fifo_en = 0U;
    if ((0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fsm_state))) {
        if ((1U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fsm_state))) {
            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__w_fifo_en = 1U;
        } else {
            if ((2U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fsm_state))) {
                vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__w_fifo_en = 1U;
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wpp = 0U;
    if ((0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fsm_state))) {
        if ((1U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fsm_state))) {
            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wpp = 1U;
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__i_uart_sync_flops__DOT__flop_0 
        = vlTOPp->wb_rst_i;
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr5_d 
        = ((IData)(vlTOPp->wb_rst_i) | (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr5));
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr6_d 
        = ((IData)(vlTOPp->wb_rst_i) | (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr6));
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr7_d 
        = ((~ (IData)(vlTOPp->wb_rst_i)) & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr7));
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr4_d 
        = (1U & ((~ (IData)(vlTOPp->wb_rst_i)) & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rf_data_out) 
                                                  >> 2U)));
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr3_d 
        = (1U & ((~ (IData)(vlTOPp->wb_rst_i)) & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rf_data_out)));
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr2_d 
        = (1U & ((~ (IData)(vlTOPp->wb_rst_i)) & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rf_data_out) 
                                                  >> 1U)));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__ack_sff__DOT__sync2 
        = ((~ (IData)(vlTOPp->wb_rst_i)) & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__ack_sff__DOT__sync1));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__ack_sff__DOT__sync2 
        = ((~ (IData)(vlTOPp->wb_rst_i)) & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__ack_sff__DOT__sync1));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__ren_sff__DOT__sync2 
        = ((~ (IData)(vlTOPp->wb_rst_i)) & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__ren_sff__DOT__sync1));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wen_sff__DOT__sync2 
        = ((~ (IData)(vlTOPp->wb_rst_i)) & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wen_sff__DOT__sync1));
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_cyc_is 
        = (1U & ((~ (IData)(vlTOPp->wb_rst_i)) & (IData)(vlSymsp->TOP__or1k_pu.wb_interface0__DOT____Vcellout__wb_mux_or1k_d__wbs_cyc_o)));
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_stb_is 
        = ((~ (IData)(vlTOPp->wb_rst_i)) & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_req_o));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__cpu_reset_csff 
        = ((~ (IData)(vlTOPp->wb_rst_i)) & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__cpu_reset));
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__trigger_level 
        = ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__fcr))
            ? ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__fcr))
                ? 0xeU : 8U) : ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__fcr))
                                 ? 4U : 1U));
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__delayed_modem_signals 
        = ((IData)(vlTOPp->wb_rst_i) ? 0U : 0xfU);
    if (vlTOPp->wb_rst_i) {
        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__mcr = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__we_o) 
             & (4U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_adr_is)))) {
            vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__mcr 
                = (0x1fU & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_dat_is));
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr0_d 
        = ((~ (IData)(vlTOPp->wb_rst_i)) & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr0));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync_wbff2 
        = ((~ (IData)(vlTOPp->wb_rst_i)) & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync_wbff1));
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__ms_int_d 
        = ((~ (IData)(vlTOPp->wb_rst_i)) & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__ms_int));
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__ti_int_d 
        = ((~ (IData)(vlTOPp->wb_rst_i)) & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__ti_int));
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rls_int_d 
        = ((~ (IData)(vlTOPp->wb_rst_i)) & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rls_int));
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rda_int_d 
        = ((~ (IData)(vlTOPp->wb_rst_i)) & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rda_int));
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__thre_int_d 
        = ((~ (IData)(vlTOPp->wb_rst_i)) & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__thre_int));
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr1_d 
        = ((~ (IData)(vlTOPp->wb_rst_i)) & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rf_overrun));
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr 
        = (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr7r) 
            << 7U) | (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr6r) 
                       << 6U) | (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr5r) 
                                  << 5U) | (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr4r) 
                                             << 4U) 
                                            | (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr3r) 
                                                << 3U) 
                                               | (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr2r) 
                                                   << 2U) 
                                                  | (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr1r) 
                                                      << 1U) 
                                                     | (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr0r))))))));
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__start_dlc 
        = ((~ (IData)(vlTOPp->wb_rst_i)) & (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__we_o) 
                                             & (0U 
                                                == (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_adr_is))) 
                                            & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lcr) 
                                               >> 7U)));
    vlSymsp->TOP__or1k_pu.__PVT__or1k_irq = ((0xfffffffbU 
                                              & vlSymsp->TOP__or1k_pu.__PVT__or1k_irq) 
                                             | ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart_irq) 
                                                << 2U));
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top)));
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__tx_reset 
        = ((~ (IData)(vlTOPp->wb_rst_i)) & (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__we_o) 
                                             & (2U 
                                                == (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_adr_is))) 
                                            & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_dat_is) 
                                               >> 2U)));
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__tf_push 
        = ((~ (IData)(vlTOPp->wb_rst_i)) & (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__we_o) 
                                             & (0U 
                                                == (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_adr_is))) 
                                            & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lcr) 
                                                  >> 7U))));
    if (vlTOPp->wb_rst_i) {
        __Vdly__uart16550__DOT__regs__DOT__tstate = 0U;
        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__stx_o_tmp = 1U;
        __Vdly__uart16550__DOT__regs__DOT__transmitter__DOT__counter = 0U;
        __Vdly__uart16550__DOT__regs__DOT__transmitter__DOT__shift_out = 0U;
        __Vdly__uart16550__DOT__regs__DOT__transmitter__DOT__bit_out = 0U;
        __Vdly__uart16550__DOT__regs__DOT__transmitter__DOT__parity_xor = 0U;
        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__tf_pop = 0U;
        __Vdly__uart16550__DOT__regs__DOT__transmitter__DOT__bit_counter = 0U;
    } else {
        if ((1U | (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__enable))) {
            if ((4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__tstate))) {
                if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__tstate))) {
                    __Vdly__uart16550__DOT__regs__DOT__tstate = 0U;
                } else {
                    if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__tstate))) {
                        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__tf_pop = 1U;
                        if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lcr))) {
                            if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lcr))) {
                                __Vdly__uart16550__DOT__regs__DOT__transmitter__DOT__bit_counter = 7U;
                                __Vdly__uart16550__DOT__regs__DOT__transmitter__DOT__parity_xor 
                                    = (1U & VL_REDXOR_32((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__tf_data_out)));
                            } else {
                                __Vdly__uart16550__DOT__regs__DOT__transmitter__DOT__bit_counter = 6U;
                                __Vdly__uart16550__DOT__regs__DOT__transmitter__DOT__parity_xor 
                                    = (1U & VL_REDXOR_32(
                                                         (0x7fU 
                                                          & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__tf_data_out))));
                            }
                        } else {
                            if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lcr))) {
                                __Vdly__uart16550__DOT__regs__DOT__transmitter__DOT__bit_counter = 5U;
                                __Vdly__uart16550__DOT__regs__DOT__transmitter__DOT__parity_xor 
                                    = (1U & VL_REDXOR_32(
                                                         (0x3fU 
                                                          & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__tf_data_out))));
                            } else {
                                __Vdly__uart16550__DOT__regs__DOT__transmitter__DOT__bit_counter = 4U;
                                __Vdly__uart16550__DOT__regs__DOT__transmitter__DOT__parity_xor 
                                    = (1U & VL_REDXOR_32(
                                                         (0x1fU 
                                                          & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__tf_data_out))));
                            }
                        }
                        __Vdly__uart16550__DOT__regs__DOT__transmitter__DOT__shift_out 
                            = (0x7fU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__tf_data_out) 
                                        >> 1U));
                        __Vdly__uart16550__DOT__regs__DOT__transmitter__DOT__bit_out 
                            = (1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__tf_data_out));
                        __Vdly__uart16550__DOT__regs__DOT__tstate = 1U;
                    } else {
                        if ((0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__counter))) {
                            if ((1U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__counter))) {
                                __Vdly__uart16550__DOT__regs__DOT__transmitter__DOT__counter = 0U;
                                __Vdly__uart16550__DOT__regs__DOT__tstate = 0U;
                            } else {
                                __Vdly__uart16550__DOT__regs__DOT__transmitter__DOT__counter 
                                    = (0x1fU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__counter) 
                                                - (IData)(1U)));
                            }
                        } else {
                            __Vdly__uart16550__DOT__regs__DOT__transmitter__DOT__counter 
                                = ((0U == (4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lcr)))
                                    ? 0xdU : ((4U == 
                                               (7U 
                                                & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lcr)))
                                               ? 0x15U
                                               : 0x1dU));
                        }
                        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__stx_o_tmp = 1U;
                    }
                }
            } else {
                if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__tstate))) {
                    if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__tstate))) {
                        if ((0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__counter))) {
                            if ((1U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__counter))) {
                                __Vdly__uart16550__DOT__regs__DOT__transmitter__DOT__counter = 0U;
                                __Vdly__uart16550__DOT__regs__DOT__tstate = 4U;
                            } else {
                                __Vdly__uart16550__DOT__regs__DOT__transmitter__DOT__counter 
                                    = (0x1fU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__counter) 
                                                - (IData)(1U)));
                            }
                        } else {
                            __Vdly__uart16550__DOT__regs__DOT__transmitter__DOT__counter = 0xfU;
                        }
                        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__stx_o_tmp 
                            = vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__bit_out;
                    } else {
                        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__stx_o_tmp 
                            = vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__bit_out;
                        if ((0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__counter))) {
                            if ((1U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__counter))) {
                                if ((0U < (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__bit_counter))) {
                                    __Vdly__uart16550__DOT__regs__DOT__transmitter__DOT__bit_counter 
                                        = (7U & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__bit_counter) 
                                                 - (IData)(1U)));
                                    __Vdly__uart16550__DOT__regs__DOT__transmitter__DOT__shift_out 
                                        = ((0x40U & (IData)(__Vdly__uart16550__DOT__regs__DOT__transmitter__DOT__shift_out)) 
                                           | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__shift_out) 
                                                 >> 1U)));
                                    __Vdly__uart16550__DOT__regs__DOT__transmitter__DOT__bit_out 
                                        = (1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__shift_out));
                                    __Vdly__uart16550__DOT__regs__DOT__tstate = 2U;
                                } else {
                                    if ((8U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lcr))) {
                                        __Vdly__uart16550__DOT__regs__DOT__transmitter__DOT__bit_out 
                                            = (1U & 
                                               ((0x10U 
                                                 & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lcr))
                                                 ? 
                                                ((~ 
                                                  ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lcr) 
                                                   >> 5U)) 
                                                 & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__parity_xor))
                                                 : 
                                                (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lcr) 
                                                  >> 5U) 
                                                 | (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__parity_xor)))));
                                        __Vdly__uart16550__DOT__regs__DOT__tstate = 3U;
                                    } else {
                                        __Vdly__uart16550__DOT__regs__DOT__tstate = 4U;
                                    }
                                }
                                __Vdly__uart16550__DOT__regs__DOT__transmitter__DOT__counter = 0U;
                            } else {
                                __Vdly__uart16550__DOT__regs__DOT__transmitter__DOT__counter 
                                    = (0x1fU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__counter) 
                                                - (IData)(1U)));
                            }
                        } else {
                            __Vdly__uart16550__DOT__regs__DOT__transmitter__DOT__counter = 0xfU;
                        }
                    }
                } else {
                    if (VL_UNLIKELY((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__tstate)))) {
                        VL_WRITEF("%c",8,vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__tf_data_out);
                        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__tf_pop = 0U;
                        if ((0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__counter))) {
                            if ((1U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__counter))) {
                                __Vdly__uart16550__DOT__regs__DOT__transmitter__DOT__counter = 0U;
                                __Vdly__uart16550__DOT__regs__DOT__tstate = 2U;
                            } else {
                                __Vdly__uart16550__DOT__regs__DOT__transmitter__DOT__counter 
                                    = (0x1fU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__counter) 
                                                - (IData)(1U)));
                            }
                        } else {
                            __Vdly__uart16550__DOT__regs__DOT__transmitter__DOT__counter = 0xfU;
                        }
                        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__stx_o_tmp = 0U;
                        if (0x80000001U) { VL_FFLUSH_I(0x80000001U); }
                        __Vdly__uart16550__DOT__regs__DOT__tstate = 0U;
                    } else {
                        if ((0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__tf_count))) {
                            vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__tf_pop = 0U;
                            vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__stx_o_tmp = 1U;
                            __Vdly__uart16550__DOT__regs__DOT__tstate = 5U;
                        } else {
                            __Vdly__uart16550__DOT__regs__DOT__tstate = 0U;
                            vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__stx_o_tmp = 1U;
                        }
                    }
                }
            }
        } else {
            vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__tf_pop = 0U;
        }
    }
    if (vlTOPp->wb_rst_i) {
        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__iir = 1U;
    } else {
        if (vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rls_int_pnd) {
            vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__iir 
                = (6U | (1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__iir)));
            vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__iir 
                = (0xeU & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__iir));
        } else {
            if (vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rda_int) {
                vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__iir 
                    = (4U | (1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__iir)));
                vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__iir 
                    = (0xeU & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__iir));
            } else {
                if (vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__ti_int_pnd) {
                    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__iir 
                        = (0xcU | (1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__iir)));
                    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__iir 
                        = (0xeU & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__iir));
                } else {
                    if (vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__thre_int_pnd) {
                        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__iir 
                            = (2U | (1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__iir)));
                        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__iir 
                            = (0xeU & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__iir));
                    } else {
                        if (vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__ms_int_pnd) {
                            vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__iir 
                                = (1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__iir));
                            vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__iir 
                                = (0xeU & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__iir));
                        } else {
                            vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__iir 
                                = (1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__iir));
                            vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__iir 
                                = (1U | (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__iir));
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->wb_rst_i) {
        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__scratch = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__we_o) 
             & (7U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_adr_is)))) {
            vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__scratch 
                = vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_dat_is;
        }
    }
    if (vlTOPp->wb_rst_i) {
        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__ier = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__we_o) 
             & (1U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_adr_is)))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lcr) 
                          >> 7U)))) {
                vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__ier 
                    = (0xfU & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_dat_is));
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top)));
    if (vlTOPp->wb_rst_i) {
        __Vdly__uart16550__DOT__regs__DOT__rstate = 0U;
        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rcounter16 = 0U;
        __Vdly__uart16550__DOT__regs__DOT__receiver__DOT__rbit_counter = 0U;
        __Vdly__uart16550__DOT__regs__DOT__receiver__DOT__rparity_xor = 0U;
        __Vdly__uart16550__DOT__regs__DOT__receiver__DOT__rframing_error = 0U;
        __Vdly__uart16550__DOT__regs__DOT__receiver__DOT__rparity_error = 0U;
        __Vdly__uart16550__DOT__regs__DOT__receiver__DOT__rparity = 0U;
        __Vdly__uart16550__DOT__regs__DOT__receiver__DOT__rshift = 0U;
        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rf_push = 0U;
        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rf_data_in = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__enable) {
            if ((8U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rstate))) {
                if ((4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rstate))) {
                    __Vdly__uart16550__DOT__regs__DOT__rstate = 0U;
                } else {
                    if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rstate))) {
                        if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rstate))) {
                            __Vdly__uart16550__DOT__regs__DOT__rstate = 0U;
                        } else {
                            if (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__serial_in) 
                                 | (0U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__counter_b)))) {
                                vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rf_data_in 
                                    = ((0U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__counter_b))
                                        ? 4U : (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rshift) 
                                                 << 3U) 
                                                | (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rparity_error) 
                                                    << 1U) 
                                                   | (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rframing_error))));
                                vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rf_push = 1U;
                                __Vdly__uart16550__DOT__regs__DOT__rstate = 0U;
                            } else {
                                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rframing_error)))) {
                                    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rf_data_in 
                                        = (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rshift) 
                                            << 3U) 
                                           | (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rparity_error) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rframing_error)));
                                    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rf_push = 1U;
                                    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rcounter16 = 0xeU;
                                    __Vdly__uart16550__DOT__regs__DOT__rstate = 1U;
                                }
                            }
                        }
                    } else {
                        if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rstate))) {
                            if (vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rcounter16_eq_0) {
                                __Vdly__uart16550__DOT__regs__DOT__rstate = 4U;
                                vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rcounter16 = 0xeU;
                            } else {
                                vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rcounter16 
                                    = vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1;
                            }
                        } else {
                            vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rcounter16 
                                = vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1;
                            __Vdly__uart16550__DOT__regs__DOT__receiver__DOT__rparity_xor 
                                = (1U & (VL_REDXOR_32((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rshift)) 
                                         ^ (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rparity)));
                            __Vdly__uart16550__DOT__regs__DOT__rstate = 5U;
                        }
                    }
                }
            } else {
                if ((4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rstate))) {
                    if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rstate))) {
                        if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rstate))) {
                            if ((0U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rbit_counter))) {
                                if ((8U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lcr))) {
                                    __Vdly__uart16550__DOT__regs__DOT__rstate = 3U;
                                } else {
                                    __Vdly__uart16550__DOT__regs__DOT__rstate = 4U;
                                    __Vdly__uart16550__DOT__regs__DOT__receiver__DOT__rparity_error = 0U;
                                }
                            } else {
                                __Vdly__uart16550__DOT__regs__DOT__receiver__DOT__rbit_counter 
                                    = (7U & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rbit_counter) 
                                             - (IData)(1U)));
                                __Vdly__uart16550__DOT__regs__DOT__rstate = 2U;
                            }
                            vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rcounter16 = 0xeU;
                        } else {
                            __Vdly__uart16550__DOT__regs__DOT__receiver__DOT__rbit_counter 
                                = ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lcr))
                                    ? ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lcr))
                                        ? 7U : 6U) : 
                                   ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lcr))
                                     ? 5U : 4U));
                            if (vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rcounter16_eq_0) {
                                __Vdly__uart16550__DOT__regs__DOT__rstate = 2U;
                                vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rcounter16 = 0xeU;
                                __Vdly__uart16550__DOT__regs__DOT__receiver__DOT__rshift = 0U;
                            } else {
                                __Vdly__uart16550__DOT__regs__DOT__rstate = 6U;
                            }
                            vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rcounter16 
                                = vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1;
                        }
                    } else {
                        if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rstate))) {
                            __Vdly__uart16550__DOT__regs__DOT__receiver__DOT__rparity_error 
                                = (1U & ((0x10U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lcr))
                                          ? ((0x20U 
                                              & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lcr))
                                              ? (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rparity)
                                              : (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rparity_xor))
                                          : ((0x20U 
                                              & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lcr))
                                              ? (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rparity))
                                              : (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rparity_xor)))));
                            vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rcounter16 
                                = vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1;
                            __Vdly__uart16550__DOT__regs__DOT__rstate = 9U;
                        } else {
                            if (vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rcounter16_eq_7) {
                                __Vdly__uart16550__DOT__regs__DOT__receiver__DOT__rframing_error 
                                    = (1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__serial_in)));
                                __Vdly__uart16550__DOT__regs__DOT__rstate = 0xaU;
                            }
                            vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rcounter16 
                                = vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1;
                        }
                    }
                } else {
                    if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rstate))) {
                        if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rstate))) {
                            if (vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rcounter16_eq_7) {
                                __Vdly__uart16550__DOT__regs__DOT__receiver__DOT__rparity 
                                    = vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__serial_in;
                                __Vdly__uart16550__DOT__regs__DOT__rstate = 8U;
                            }
                            vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rcounter16 
                                = vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1;
                        } else {
                            if (vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rcounter16_eq_7) {
                                if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lcr))) {
                                    if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lcr))) {
                                        __Vdly__uart16550__DOT__regs__DOT__receiver__DOT__rshift 
                                            = (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__serial_in) 
                                                << 7U) 
                                               | (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rshift) 
                                                     >> 1U)));
                                    } else {
                                        __Vdly__uart16550__DOT__regs__DOT__receiver__DOT__rshift 
                                            = ((0x80U 
                                                & (IData)(__Vdly__uart16550__DOT__regs__DOT__receiver__DOT__rshift)) 
                                               | (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__serial_in) 
                                                   << 6U) 
                                                  | (0x3fU 
                                                     & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rshift) 
                                                        >> 1U))));
                                    }
                                } else {
                                    __Vdly__uart16550__DOT__regs__DOT__receiver__DOT__rshift 
                                        = ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lcr))
                                            ? ((0xc0U 
                                                & (IData)(__Vdly__uart16550__DOT__regs__DOT__receiver__DOT__rshift)) 
                                               | (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__serial_in) 
                                                   << 5U) 
                                                  | (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rshift) 
                                                        >> 1U))))
                                            : ((0xe0U 
                                                & (IData)(__Vdly__uart16550__DOT__regs__DOT__receiver__DOT__rshift)) 
                                               | (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__serial_in) 
                                                   << 4U) 
                                                  | (0xfU 
                                                     & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rshift) 
                                                        >> 1U)))));
                                }
                            }
                            if (vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rcounter16_eq_0) {
                                __Vdly__uart16550__DOT__regs__DOT__rstate = 7U;
                            }
                            vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rcounter16 
                                = vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1;
                        }
                    } else {
                        if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rstate))) {
                            vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rf_push = 0U;
                            if (vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rcounter16_eq_7) {
                                __Vdly__uart16550__DOT__regs__DOT__rstate 
                                    = ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__serial_in)
                                        ? 0U : 6U);
                            }
                            vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rcounter16 
                                = vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1;
                        } else {
                            vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rf_push = 0U;
                            vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rf_data_in = 0U;
                            vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rcounter16 = 0xeU;
                            if (((~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__serial_in)) 
                                 & (0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__counter_b)))) {
                                __Vdly__uart16550__DOT__regs__DOT__rstate = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rf_data_out 
        = ((vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
            [vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
            << 3U) | vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
           [vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom]);
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__counter 
        = __Vdly__uart16550__DOT__regs__DOT__transmitter__DOT__counter;
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__shift_out 
        = __Vdly__uart16550__DOT__regs__DOT__transmitter__DOT__shift_out;
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__bit_out 
        = __Vdly__uart16550__DOT__regs__DOT__transmitter__DOT__bit_out;
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__parity_xor 
        = __Vdly__uart16550__DOT__regs__DOT__transmitter__DOT__parity_xor;
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__bit_counter 
        = __Vdly__uart16550__DOT__regs__DOT__transmitter__DOT__bit_counter;
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__tf_data_out 
        = vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram
        [vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom];
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__tstate 
        = __Vdly__uart16550__DOT__regs__DOT__tstate;
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__tf_count 
        = __Vdly__uart16550__DOT__regs__DOT__tf_count;
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rls_int_pnd 
        = __Vdly__uart16550__DOT__regs__DOT__rls_int_pnd;
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__ti_int_pnd 
        = __Vdly__uart16550__DOT__regs__DOT__ti_int_pnd;
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__thre_int_pnd 
        = __Vdly__uart16550__DOT__regs__DOT__thre_int_pnd;
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__ms_int_pnd 
        = __Vdly__uart16550__DOT__regs__DOT__ms_int_pnd;
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rstate 
        = __Vdly__uart16550__DOT__regs__DOT__rstate;
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rbit_counter 
        = __Vdly__uart16550__DOT__regs__DOT__receiver__DOT__rbit_counter;
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rparity_xor 
        = __Vdly__uart16550__DOT__regs__DOT__receiver__DOT__rparity_xor;
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rframing_error 
        = __Vdly__uart16550__DOT__regs__DOT__receiver__DOT__rframing_error;
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rparity_error 
        = __Vdly__uart16550__DOT__regs__DOT__receiver__DOT__rparity_error;
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rparity 
        = __Vdly__uart16550__DOT__regs__DOT__receiver__DOT__rparity;
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rshift 
        = __Vdly__uart16550__DOT__regs__DOT__receiver__DOT__rshift;
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__counter_b 
        = __Vdly__uart16550__DOT__regs__DOT__receiver__DOT__counter_b;
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__ack_sff__DOT__syncxor 
        = ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__ack_sff__DOT__sync2) 
           ^ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__ack_sff__DOT__syncprev));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__ack_sff__DOT__sync1 
        = ((~ (IData)(vlTOPp->wb_rst_i)) & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__ack_toggle));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__ack_sff__DOT__syncxor 
        = ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__ack_sff__DOT__sync2) 
           ^ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__ack_sff__DOT__syncprev));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__ack_sff__DOT__sync1 
        = ((~ (IData)(vlTOPp->wb_rst_i)) & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__ack_toggle));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__ren_sff__DOT__syncxor 
        = ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__ren_sff__DOT__sync2) 
           ^ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__ren_sff__DOT__syncprev));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__ren_sff__DOT__sync1 
        = ((~ (IData)(vlTOPp->wb_rst_i)) & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__ren_tff));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wen_sff__DOT__syncxor 
        = ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wen_sff__DOT__sync2) 
           ^ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wen_sff__DOT__syncprev));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wen_sff__DOT__sync1 
        = ((~ (IData)(vlTOPp->wb_rst_i)) & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wen_tff));
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__re_o 
        = ((((~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_we_is)) 
             & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_stb_is)) 
            & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_cyc_is)) 
           & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wre));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync_wbff1 
        = ((~ (IData)(vlTOPp->wb_rst_i)) & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__start_toggle 
        = ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync_wbff2) 
           != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync_wbff2q));
    if (vlTOPp->wb_rst_i) {
        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rf_overrun = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rx_reset) 
             | (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr_mask))) {
            vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rf_overrun = 0U;
        } else {
            if ((((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rf_push_pulse) 
                  & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rf_pop))) 
                 & (0x10U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rf_count)))) {
                vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rf_overrun = 1U;
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr5 
        = ((0U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__tf_count)) 
           & (~ (IData)((0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__block_cnt)))));
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr6 
        = (((0U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__tf_count)) 
            & (~ (IData)((0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__block_cnt))))) 
           & (0U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__tstate)));
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rls_int 
        = (1U & (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__ier) 
                  >> 2U) & (((((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr) 
                               >> 1U) | ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr) 
                                         >> 2U)) | 
                             ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr) 
                              >> 3U)) | ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr) 
                                         >> 4U))));
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__thre_int 
        = (1U & (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__ier) 
                  >> 1U) & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr) 
                            >> 5U)));
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__ms_int 
        = (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__ier) 
            >> 3U) & (0U != (0xfU & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__msr))));
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rcounter16_eq_7 
        = (7U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rcounter16));
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rcounter16_eq_0 
        = (0U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rcounter16));
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1 
        = (0xfU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rcounter16) 
                   - (IData)(1U)));
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__enable 
        = ((~ (IData)(vlTOPp->wb_rst_i)) & ((0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__dl)) 
                                            & (~ (IData)(
                                                         (0U 
                                                          != (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__dlc))))));
    vlSymsp->TOP__or1k_pu.__Vtableidx10 = ((((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wen_sff__DOT__srflop) 
                                             | (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wen_sff__DOT__syncxor)) 
                                            << 3U) 
                                           | (((((((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_cyc_i) 
                                                   & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_stb_i)) 
                                                  & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_we_i))) 
                                                 & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__fifo_access)) 
                                                & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__reg_dlab_bit))) 
                                               << 2U) 
                                              | (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fsm_state)));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__next_wr_fsm_state 
        = vlSymsp->TOP__or1k_pu.__Vtable10___PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__next_wr_fsm_state
        [vlSymsp->TOP__or1k_pu.__Vtableidx10];
    if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_fsm_state) {
        if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_fsm_state) {
            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__next_fsm_state 
                = (1U & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__du__DOT__du_ack)));
        }
    } else {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__next_fsm_state 
            = ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__start_toggle) 
               & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__du__DOT__du_ack)));
    }
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rf_pop 
        = __Vdly__uart16550__DOT__regs__DOT__rf_pop;
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rf_push_pulse 
        = ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rf_push) 
           & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rf_push_q)));
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rf_count 
        = __Vdly__uart16550__DOT__regs__DOT__rf_count;
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__dlc 
        = __Vdly__uart16550__DOT__regs__DOT__dlc;
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr7 
        = ((0U != (((((((((((((((vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0U] | vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [1U]) | vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                [2U]) | vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [3U]) | vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]) | vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                             [5U]) | vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                            [6U]) | vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                           [7U]) | vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                          [8U]) | vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                         [9U]) | vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                        [0xaU]) | vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                       [0xbU]) | vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                      [0xcU]) | vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                     [0xdU]) | vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                    [0xeU]) | vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                   [0xfU])) | (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rf_overrun));
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr0 
        = ((0U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rf_count)) 
           & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rf_push_pulse));
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rda_int 
        = ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__ier) 
           & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rf_count) 
              >= (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__trigger_level)));
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__ti_int 
        = (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__ier) 
            & (0U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__counter_t))) 
           & (0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rf_count)));
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rx_reset 
        = ((~ (IData)(vlTOPp->wb_rst_i)) & (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__we_o) 
                                             & (2U 
                                                == (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_adr_is))) 
                                            & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_dat_is) 
                                               >> 1U)));
    if (vlTOPp->wb_rst_i) {
        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__dl 
            = (0xffU & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__dl));
    } else {
        if (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__we_o) 
             & (1U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_adr_is)))) {
            if ((0x80U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lcr))) {
                vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__dl 
                    = ((0xffU & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__dl)) 
                       | ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_dat_is) 
                          << 8U));
            }
        }
    }
    if (vlTOPp->wb_rst_i) {
        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__dl 
            = (0xff00U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__dl));
    } else {
        if (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__we_o) 
             & (0U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_adr_is)))) {
            if ((0x80U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lcr))) {
                vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__dl 
                    = ((0xff00U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__dl)) 
                       | (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_dat_is));
            }
        }
    }
    if (vlTOPp->wb_rst_i) {
        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lcr = 3U;
    } else {
        if (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__we_o) 
             & (3U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_adr_is)))) {
            vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lcr 
                = vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_dat_is;
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__we_o 
        = ((((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_we_is) 
             & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_stb_is)) 
            & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_cyc_is)) 
           & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wre));
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__serial_in 
        = ((0x10U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__mcr))
            ? ((~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lcr) 
                   >> 6U)) & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__stx_o_tmp))
            : (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__srx_pad));
    vlSymsp->TOP__or1k_pu.__Vtableidx12 = vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lcr;
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__block_value 
        = vlSymsp->TOP__or1k_pu.__Vtable12___PVT__uart16550__DOT__regs__DOT__block_value
        [vlSymsp->TOP__or1k_pu.__Vtableidx12];
    vlSymsp->TOP__or1k_pu.__Vtableidx13 = vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lcr;
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__toc_value 
        = vlSymsp->TOP__or1k_pu.__Vtable13___PVT__uart16550__DOT__regs__DOT__receiver__DOT__toc_value
        [vlSymsp->TOP__or1k_pu.__Vtableidx13];
    if (vlTOPp->wb_rst_i) {
        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_adr_is = 0U;
        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_dat_is = 0U;
    } else {
        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_adr_is 
            = (7U & vlSymsp->TOP__or1k_pu.__PVT__wb_m2s_uart_adr);
        vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_dat_is 
            = (0xffU & ((8U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_bsel_o))
                         ? (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat 
                            >> 0x18U) : ((4U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_bsel_o))
                                          ? (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat 
                                             >> 0x10U)
                                          : ((2U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_bsel_o))
                                              ? (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat 
                                                 >> 8U)
                                              : ((1U 
                                                  & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_bsel_o))
                                                  ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat
                                                  : 0U)))));
    }
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__iir_read 
        = (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__re_o) 
            & (2U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_adr_is))) 
           & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lcr) 
                 >> 7U)));
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__msr_read 
        = (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__re_o) 
            & (6U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_adr_is))) 
           & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lcr) 
                 >> 7U)));
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__fifo_read 
        = (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__re_o) 
            & (0U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_adr_is))) 
           & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lcr) 
                 >> 7U)));
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__fifo_write 
        = (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__we_o) 
            & (0U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_adr_is))) 
           & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lcr) 
                 >> 7U)));
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr_mask_condition 
        = (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__re_o) 
            & (5U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_adr_is))) 
           & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lcr) 
                 >> 7U)));
    vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr_mask 
        = ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr_mask_condition) 
           & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr_mask_d)));
}

VL_INLINE_OPT void Vor1k_pu_or1k_pu::_sequent__TOP__or1k_pu__12(Vor1k_pu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vor1k_pu_or1k_pu::_sequent__TOP__or1k_pu__12\n"); );
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdly__jtag_tap0__DOT__test_logic_reset;
    CData/*0:0*/ __Vdly__jtag_tap0__DOT__select_dr_scan;
    CData/*0:0*/ __Vdly__jtag_tap0__DOT__shift_dr;
    CData/*0:0*/ __Vdly__jtag_tap0__DOT__pause_dr;
    CData/*0:0*/ __Vdly__jtag_tap0__DOT__shift_ir;
    CData/*0:0*/ __Vdly__jtag_tap0__DOT__pause_ir;
    CData/*3:0*/ __Vdly__jtag_tap0__DOT__jtag_ir;
    CData/*5:0*/ __Vdly__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__bit_count;
    CData/*5:0*/ __Vdly__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__bit_count;
    CData/*0:0*/ __Vdly__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync;
    CData/*0:0*/ __Vdly__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_tff2q;
    CData/*0:0*/ __Vdly__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__biu_ready;
    CData/*3:0*/ __Vdly__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__write_bit_count;
    CData/*3:0*/ __Vdly__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__read_bit_count;
    CData/*7:0*/ __Vdly__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__data_out_shift_reg;
    CData/*0:0*/ __Vdly__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wen_tff;
    CData/*0:0*/ __Vdly__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__ren_tff;
    CData/*0:0*/ __Vdly__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__ack_toggle;
    CData/*0:0*/ __Vdly__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__ack_toggle;
    IData/*31:0*/ __Vdly__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc;
    IData/*31:0*/ __Vdly__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__data_out_shift_reg;
    IData/*31:0*/ __Vdly__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc;
    QData/*52:0*/ __Vdly__dbg_if0__DOT__input_shift_reg;
    QData/*32:0*/ __Vdly__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__data_out_shift_reg;
    // Body
    __Vdly__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__ren_tff 
        = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__ren_tff;
    __Vdly__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__ack_toggle 
        = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__ack_toggle;
    __Vdly__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__ack_toggle 
        = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__ack_toggle;
    __Vdly__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wen_tff 
        = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wen_tff;
    __Vdly__jtag_tap0__DOT__test_logic_reset = vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__test_logic_reset;
    __Vdly__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__write_bit_count 
        = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__write_bit_count;
    __Vdly__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__read_bit_count 
        = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__read_bit_count;
    __Vdly__jtag_tap0__DOT__jtag_ir = vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__jtag_ir;
    __Vdly__jtag_tap0__DOT__pause_ir = vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__pause_ir;
    __Vdly__jtag_tap0__DOT__shift_ir = vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__shift_ir;
    __Vdly__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__data_out_shift_reg 
        = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__data_out_shift_reg;
    __Vdly__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync 
        = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync;
    __Vdly__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
        = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc;
    __Vdly__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc 
        = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc;
    __Vdly__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__data_out_shift_reg 
        = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__data_out_shift_reg;
    __Vdly__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_tff2q 
        = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_tff2q;
    __Vdly__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__bit_count 
        = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__bit_count;
    __Vdly__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__biu_ready 
        = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__biu_ready;
    __Vdly__jtag_tap0__DOT__pause_dr = vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__pause_dr;
    __Vdly__jtag_tap0__DOT__shift_dr = vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__shift_dr;
    vlSymsp->TOP__or1k_pu.__Vdly__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg 
        = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg;
    __Vdly__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__bit_count 
        = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__bit_count;
    __Vdly__jtag_tap0__DOT__select_dr_scan = vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__select_dr_scan;
    __Vdly__dbg_if0__DOT__input_shift_reg = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg;
    __Vdly__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__data_out_shift_reg 
        = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__data_out_shift_reg;
    if (vlTOPp->wb_rst_i) {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__internal_register_select = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__regsel_ld_en) {
            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__internal_register_select 
                = (1U & (IData)((vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                 >> 0x2fU)));
        }
    }
    if (vlTOPp->wb_rst_i) {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__internal_register_select = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__regsel_ld_en) {
            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__internal_register_select 
                = (1U & (IData)((vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                 >> 0x2fU)));
        }
    }
    if (vlTOPp->wb_rst_i) {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__internal_reg_error = 0ULL;
    } else {
        if (((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__intreg_ld_en) 
             & (~ (IData)((vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                           >> 0x2fU))))) {
            if ((1U & (IData)((vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                               >> 0x2eU)))) {
                vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__internal_reg_error 
                    = (0x1fffffffeULL & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__internal_reg_error);
            }
        } else {
            if (((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__error_reg_en) 
                 & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__internal_reg_error)))) {
                if ((1U & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__err_reg) 
                           | (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_ready))))) {
                    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__internal_reg_error 
                        = (1ULL | vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__internal_reg_error);
                } else {
                    if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__err_reg) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__internal_reg_error 
                            = (1ULL | vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__internal_reg_error);
                    } else {
                        if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_strobe) {
                            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__internal_reg_error 
                                = ((1ULL & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__internal_reg_error) 
                                   | ((QData)((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__address_counter)) 
                                      << 1U));
                        }
                    }
                }
            } else {
                if (((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_strobe) 
                     & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__internal_reg_error)))) {
                    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__internal_reg_error 
                        = ((1ULL & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__internal_reg_error) 
                           | ((QData)((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__address_counter)) 
                              << 1U));
                }
            }
        }
    }
    if (vlTOPp->wb_rst_i) {
        __Vdly__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__ren_tff = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__biu_rd_strobe) {
            __Vdly__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__ren_tff 
                = (1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__ren_tff)));
        }
    }
    if (vlTOPp->wb_rst_i) {
        __Vdly__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__ack_toggle = 1U;
    } else {
        if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__strobe_sff_out) {
            __Vdly__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__ack_toggle 
                = (1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__ack_toggle)));
        }
    }
    if (vlTOPp->wb_rst_i) {
        __Vdly__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__ack_toggle = 1U;
    } else {
        if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__strobe_sff_out) {
            __Vdly__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__ack_toggle 
                = (1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__ack_toggle)));
        }
    }
    if (vlTOPp->wb_rst_i) {
        __Vdly__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wen_tff = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__biu_wr_strobe) {
            __Vdly__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wen_tff 
                = (1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wen_tff)));
        }
    }
    if (vlTOPp->wb_rst_i) {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__strobe_sff__DOT__srflop = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__strobe_sff_out) {
            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__strobe_sff__DOT__srflop = 0U;
        } else {
            if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__strobe_sff__DOT__syncxor) {
                vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__strobe_sff__DOT__srflop = 1U;
            }
        }
    }
    if (vlTOPp->wb_rst_i) {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__strobe_sff__DOT__srflop = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__strobe_sff_out) {
            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__strobe_sff__DOT__srflop = 0U;
        } else {
            if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__strobe_sff__DOT__syncxor) {
                vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__strobe_sff__DOT__srflop = 1U;
            }
        }
    }
    if (vlTOPp->wb_rst_i) {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__input_word_count = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__in_word_ct_en) {
            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__input_word_count 
                = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__data_to_in_word_counter;
        }
    }
    if (vlTOPp->wb_rst_i) {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__user_word_count = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__user_word_ct_en) {
            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__user_word_count 
                = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__data_to_user_word_counter;
        }
    }
    if (vlTOPp->wb_rst_i) {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__output_word_count = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__out_word_ct_en) {
            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__output_word_count 
                = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__data_to_out_word_counter;
        }
    }
    if (vlTOPp->wb_rst_i) {
        vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__bypass_reg = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__shift_dr) {
            vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__bypass_reg 
                = vlTOPp->tdi_pad_i;
        }
    }
    __Vdly__jtag_tap0__DOT__test_logic_reset = ((IData)(vlTOPp->wb_rst_i) 
                                                | ((IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__tms_reset) 
                                                   | ((IData)(vlTOPp->tms_pad_i) 
                                                      & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__test_logic_reset) 
                                                         | (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__select_ir_scan)))));
    if (vlTOPp->wb_rst_i) {
        __Vdly__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__write_bit_count = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__wr_bit_ct_rst) {
            __Vdly__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__write_bit_count = 0U;
        } else {
            if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__wr_bit_ct_en) {
                __Vdly__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__write_bit_count 
                    = (0xfU & ((IData)(1U) + (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__write_bit_count)));
            }
        }
    }
    if (vlTOPp->wb_rst_i) {
        __Vdly__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__read_bit_count = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_bit_ct_rst) {
            __Vdly__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__read_bit_count = 0U;
        } else {
            if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_bit_ct_en) {
                __Vdly__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__read_bit_count 
                    = (0xfU & ((IData)(1U) + (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__read_bit_count)));
            }
        }
    }
    if (vlTOPp->wb_rst_i) {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__wr_module_state = 0U;
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_module_state = 0U;
    } else {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__wr_module_state 
            = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__wr_module_next_state;
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_module_state 
            = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_module_next_state;
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__strobe_sff__DOT__syncprev 
        = ((~ (IData)(vlTOPp->wb_rst_i)) & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__strobe_sff__DOT__sync2));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__strobe_sff__DOT__syncprev 
        = ((~ (IData)(vlTOPp->wb_rst_i)) & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__strobe_sff__DOT__sync2));
    if (vlTOPp->wb_rst_i) {
        __Vdly__jtag_tap0__DOT__jtag_ir = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__capture_ir) {
            __Vdly__jtag_tap0__DOT__jtag_ir = 5U;
        } else {
            if (vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__shift_ir) {
                __Vdly__jtag_tap0__DOT__jtag_ir = (
                                                   ((IData)(vlTOPp->tdi_pad_i) 
                                                    << 3U) 
                                                   | (7U 
                                                      & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__jtag_ir) 
                                                         >> 1U)));
            }
        }
    }
    __Vdly__jtag_tap0__DOT__pause_ir = ((~ (IData)(vlTOPp->wb_rst_i)) 
                                        & ((~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__tms_reset)) 
                                           & ((~ (IData)(vlTOPp->tms_pad_i)) 
                                              & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__exit1_ir) 
                                                 | (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__pause_ir)))));
    __Vdly__jtag_tap0__DOT__shift_ir = ((~ (IData)(vlTOPp->wb_rst_i)) 
                                        & ((~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__tms_reset)) 
                                           & ((~ (IData)(vlTOPp->tms_pad_i)) 
                                              & (((IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__capture_ir) 
                                                  | (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__shift_ir)) 
                                                 | (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__exit2_ir)))));
    if (vlTOPp->wb_rst_i) {
        vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__latched_jtag_ir = 2U;
    } else {
        if (vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__tms_reset) {
            vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__latched_jtag_ir = 2U;
        } else {
            if (vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__update_ir) {
                vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__latched_jtag_ir 
                    = vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__jtag_ir;
            }
        }
    }
    if (vlTOPp->wb_rst_i) {
        __Vdly__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__data_out_shift_reg = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__out_reg_ld_en) {
            __Vdly__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__data_out_shift_reg 
                = ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__out_reg_data_sel)
                    ? (((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__regB) 
                        << 4U) | (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__regB))
                    : (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rdata));
        } else {
            if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__out_reg_shift_en) {
                __Vdly__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__data_out_shift_reg 
                    = (0x7fU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__data_out_shift_reg) 
                                >> 1U));
            }
        }
    }
    if (vlTOPp->wb_rst_i) {
        __Vdly__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__biu_strobe) 
             & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__biu_ready))) {
            __Vdly__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync 
                = (1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync)));
        }
    }
    if (vlTOPp->wb_rst_i) {
        __Vdly__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc = 0xffffffffU;
    } else {
        if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__crc_clr) {
            __Vdly__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc = 0xffffffffU;
        } else {
            if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__crc_en) {
                __Vdly__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                    = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc;
            } else {
                if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__crc_shift_en) {
                    __Vdly__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                        = (0x7fffffffU & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                          >> 1U));
                }
            }
        }
    }
    if (vlTOPp->wb_rst_i) {
        __Vdly__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc = 0xffffffffU;
    } else {
        if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__crc_clr) {
            __Vdly__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc = 0xffffffffU;
        } else {
            if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__crc_en) {
                __Vdly__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc 
                    = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc;
            } else {
                if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__crc_shift_en) {
                    __Vdly__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc 
                        = (0x7fffffffU & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc 
                                          >> 1U));
                }
            }
        }
    }
    if (vlTOPp->wb_rst_i) {
        __Vdly__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__data_out_shift_reg = 0ULL;
    } else {
        if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__out_reg_ld_en) {
            __Vdly__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__data_out_shift_reg 
                = ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__out_reg_data_sel)
                    ? vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__internal_reg_error
                    : (QData)((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__data_out_reg)));
        } else {
            if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__out_reg_shift_en) {
                __Vdly__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__data_out_shift_reg 
                    = (QData)((IData)((vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__data_out_shift_reg 
                                       >> 1U)));
            }
        }
    }
    if (vlTOPp->wb_rst_i) {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__word_count = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__word_ct_en) {
            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__word_count 
                = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__data_to_word_counter;
        }
    }
    if (vlTOPp->wb_rst_i) {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_count = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_ct_en) {
            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_count 
                = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__data_to_word_counter;
        }
    }
    if (vlTOPp->wb_rst_i) {
        __Vdly__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__bit_count = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__bit_ct_rst) {
            __Vdly__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__bit_count = 0U;
        } else {
            if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__bit_ct_en) {
                __Vdly__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__bit_count 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__bit_count)));
            }
        }
    }
    if (vlTOPp->wb_rst_i) {
        __Vdly__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_tff2q = 0U;
        __Vdly__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__biu_ready = 1U;
    } else {
        if (((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__biu_strobe) 
             & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__biu_ready))) {
            __Vdly__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__biu_ready = 0U;
        } else {
            if (((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_tff2) 
                 != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_tff2q))) {
                __Vdly__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__biu_ready = 1U;
            }
        }
        __Vdly__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_tff2q 
            = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_tff2;
    }
    if (vlTOPp->wb_rst_i) {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state = 0U;
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state = 0U;
    } else {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state 
            = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_next_state;
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state 
            = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_next_state;
    }
    if (vlTOPp->wb_rst_i) {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__data_in = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__biu_wr_strobe) {
            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__data_in 
                = (((IData)(vlTOPp->tdi_pad_i) << 7U) 
                   | (0x7fU & (IData)((vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                       >> 0x2eU))));
        }
    }
    if (vlTOPp->wb_rst_i) {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__cpu_reset = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__status_reg_wr) {
            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__cpu_reset 
                = (1U & (IData)((vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                 >> 0x2eU)));
        }
    }
    __Vdly__jtag_tap0__DOT__pause_dr = ((~ (IData)(vlTOPp->wb_rst_i)) 
                                        & ((~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__tms_reset)) 
                                           & ((~ (IData)(vlTOPp->tms_pad_i)) 
                                              & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__exit1_dr) 
                                                 | (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__pause_dr)))));
    __Vdly__jtag_tap0__DOT__shift_dr = ((~ (IData)(vlTOPp->wb_rst_i)) 
                                        & ((~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__tms_reset)) 
                                           & ((~ (IData)(vlTOPp->tms_pad_i)) 
                                              & (((IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__capture_dr) 
                                                  | (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__shift_dr)) 
                                                 | (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__exit2_dr)))));
    if (vlTOPp->wb_rst_i) {
        vlSymsp->TOP__or1k_pu.__Vdly__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp_tck) {
            vlSymsp->TOP__or1k_pu.__Vdly__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg = 1U;
        } else {
            if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__status_reg_wr) {
                vlSymsp->TOP__or1k_pu.__Vdly__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg 
                    = (1U & (IData)((vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                     >> 0x2dU)));
            }
        }
    }
    if (vlTOPp->wb_rst_i) {
        __Vdly__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__bit_count = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__bit_ct_rst) {
            __Vdly__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__bit_count = 0U;
        } else {
            if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__bit_ct_en) {
                __Vdly__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__bit_count 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__bit_count)));
            }
        }
    }
    __Vdly__jtag_tap0__DOT__select_dr_scan = ((~ (IData)(vlTOPp->wb_rst_i)) 
                                              & ((~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__tms_reset)) 
                                                 & ((IData)(vlTOPp->tms_pad_i) 
                                                    & (((IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__run_test_idle) 
                                                        | (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__update_dr)) 
                                                       | (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__update_ir)))));
    vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__run_test_idle 
        = ((~ (IData)(vlTOPp->wb_rst_i)) & ((~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__tms_reset)) 
                                            & ((~ (IData)(vlTOPp->tms_pad_i)) 
                                               & ((((IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__test_logic_reset) 
                                                    | (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__run_test_idle)) 
                                                   | (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__update_dr)) 
                                                  | (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__update_ir)))));
    if (vlTOPp->wb_rst_i) {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_in_reg = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__biu_strobe) 
             & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__biu_ready))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__operation) 
                          >> 2U)))) {
                vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_in_reg 
                    = (((IData)(vlTOPp->tdi_pad_i) 
                        << 0x1fU) | (0x7fffffffU & (IData)(
                                                           (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                                            >> 0x16U))));
            }
        }
    }
    if (vlTOPp->wb_rst_i) {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__operation = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__op_reg_en) {
            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__operation 
                = (0xfU & (IData)((vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                   >> 0x30U)));
        }
    }
    if (vlTOPp->wb_rst_i) {
        __Vdly__dbg_if0__DOT__input_shift_reg = 0ULL;
    } else {
        if (((IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__debug_select) 
             & (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__shift_dr))) {
            __Vdly__dbg_if0__DOT__input_shift_reg = 
                (((QData)((IData)(vlTOPp->tdi_pad_i)) 
                  << 0x34U) | (0xfffffffffffffULL & 
                               (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                >> 1U)));
        }
    }
    if (vlTOPp->wb_rst_i) {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__module_id_reg = 0U;
    } else {
        if (((((IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__debug_select) 
               & (IData)((vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                          >> 0x34U))) & (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__update_dr)) 
             & (~ (IData)((0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__module_inhibit)))))) {
            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__module_id_reg 
                = (3U & (IData)((vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                 >> 0x32U)));
        }
    }
    if (vlTOPp->wb_rst_i) {
        __Vdly__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__data_out_shift_reg = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__out_reg_ld_en) {
            __Vdly__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__data_out_shift_reg 
                = ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__out_reg_data_sel)
                    ? (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__internal_reg_status)
                    : vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_out_reg);
        } else {
            if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__out_reg_shift_en) {
                __Vdly__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__data_out_shift_reg 
                    = (0x7fffffffU & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__data_out_shift_reg 
                                      >> 1U));
            }
        }
    }
    if (vlTOPp->wb_rst_i) {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__addr_reg = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__biu_strobe) 
             & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__biu_ready))) {
            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__addr_reg 
                = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__address_counter;
        }
    }
    if (vlTOPp->wb_rst_i) {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__wr_reg = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__biu_strobe) 
             & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__biu_ready))) {
            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__wr_reg 
                = (1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__operation) 
                            >> 2U)));
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__ren_tff 
        = __Vdly__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__ren_tff;
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__ack_toggle 
        = __Vdly__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__ack_toggle;
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__ack_toggle 
        = __Vdly__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__ack_toggle;
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wen_tff 
        = __Vdly__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wen_tff;
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__write_bit_count 
        = __Vdly__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__write_bit_count;
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__read_bit_count 
        = __Vdly__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__read_bit_count;
    vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__jtag_ir 
        = __Vdly__jtag_tap0__DOT__jtag_ir;
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__data_out_shift_reg 
        = __Vdly__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__data_out_shift_reg;
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync 
        = __Vdly__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync;
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
        = __Vdly__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc;
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc 
        = __Vdly__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc;
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__data_out_shift_reg 
        = __Vdly__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__data_out_shift_reg;
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__bit_count 
        = __Vdly__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__bit_count;
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_tff2q 
        = __Vdly__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_tff2q;
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__bit_count 
        = __Vdly__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__bit_count;
    vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__test_logic_reset 
        = __Vdly__jtag_tap0__DOT__test_logic_reset;
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__data_out_shift_reg 
        = __Vdly__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__data_out_shift_reg;
    if (vlTOPp->wb_rst_i) {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__address_counter = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__addr_ct_en) {
            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__address_counter 
                = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__data_to_addr_counter;
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__biu_ready 
        = __Vdly__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__biu_ready;
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__strobe_sff__DOT__sync2 
        = ((~ (IData)(vlTOPp->wb_rst_i)) & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__strobe_sff__DOT__sync1));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__strobe_sff__DOT__sync2 
        = ((~ (IData)(vlTOPp->wb_rst_i)) & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__strobe_sff__DOT__sync1));
    vlSymsp->TOP__or1k_pu.__Vtableidx1 = vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__latched_jtag_ir;
    vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__extest_select 
        = vlSymsp->TOP__or1k_pu.__Vtable1___PVT__jtag_tap0__DOT__extest_select
        [vlSymsp->TOP__or1k_pu.__Vtableidx1];
    vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__sample_preload_select 
        = vlSymsp->TOP__or1k_pu.__Vtable1___PVT__jtag_tap0__DOT__sample_preload_select
        [vlSymsp->TOP__or1k_pu.__Vtableidx1];
    vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__idcode_select 
        = vlSymsp->TOP__or1k_pu.__Vtable1___PVT__jtag_tap0__DOT__idcode_select
        [vlSymsp->TOP__or1k_pu.__Vtableidx1];
    vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__mbist_select 
        = vlSymsp->TOP__or1k_pu.__Vtable1___PVT__jtag_tap0__DOT__mbist_select
        [vlSymsp->TOP__or1k_pu.__Vtableidx1];
    vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__debug_select 
        = vlSymsp->TOP__or1k_pu.__Vtable1___PVT__jtag_tap0__DOT__debug_select
        [vlSymsp->TOP__or1k_pu.__Vtableidx1];
    vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__bypass_select 
        = vlSymsp->TOP__or1k_pu.__Vtable1___PVT__jtag_tap0__DOT__bypass_select
        [vlSymsp->TOP__or1k_pu.__Vtableidx1];
    if (vlTOPp->wb_rst_i) {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__regB = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__strobe_sff_out) {
            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__regB 
                = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__regA;
        }
    }
    if (vlTOPp->wb_rst_i) {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__regB = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__strobe_sff_out) {
            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__regB 
                = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__regA;
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xfffffffeU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (1U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                    >> 1U)));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xfffffffdU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (2U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                    >> 1U)));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xfffffffbU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (4U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                    >> 1U)));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xfffffff7U & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (8U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                    >> 1U)));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xffffffefU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x10U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                       >> 1U)));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xffffffbfU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x40U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                       >> 1U)));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xffffff7fU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x80U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                       >> 1U)));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xfffffbffU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x400U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                        >> 1U)));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xfffff7ffU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x800U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                        >> 1U)));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xffffefffU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x1000U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                         >> 1U)));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xffffdfffU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x2000U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                         >> 1U)));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xffffbfffU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x4000U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                         >> 1U)));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xfffeffffU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x10000U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                          >> 1U)));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xfffdffffU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x20000U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                          >> 1U)));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xfffbffffU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x40000U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                          >> 1U)));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xffbfffffU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x400000U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                           >> 1U)));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xfdffffffU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x2000000U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                            >> 1U)));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xefffffffU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x10000000U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                             >> 1U)));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc 
        = ((0xfffffffeU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc) 
           | (1U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc 
                    >> 1U)));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc 
        = ((0xfffffffdU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc) 
           | (2U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc 
                    >> 1U)));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc 
        = ((0xfffffffbU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc) 
           | (4U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc 
                    >> 1U)));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc 
        = ((0xfffffff7U & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc) 
           | (8U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc 
                    >> 1U)));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc 
        = ((0xffffffefU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc) 
           | (0x10U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc 
                       >> 1U)));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc 
        = ((0xffffffbfU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc) 
           | (0x40U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc 
                       >> 1U)));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc 
        = ((0xffffff7fU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc) 
           | (0x80U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc 
                       >> 1U)));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc 
        = ((0xfffffbffU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc) 
           | (0x400U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc 
                        >> 1U)));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc 
        = ((0xfffff7ffU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc) 
           | (0x800U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc 
                        >> 1U)));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc 
        = ((0xffffefffU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc) 
           | (0x1000U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc 
                         >> 1U)));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc 
        = ((0xffffdfffU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc) 
           | (0x2000U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc 
                         >> 1U)));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc 
        = ((0xffffbfffU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc) 
           | (0x4000U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc 
                         >> 1U)));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc 
        = ((0xfffeffffU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc) 
           | (0x10000U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc 
                          >> 1U)));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc 
        = ((0xfffdffffU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc) 
           | (0x20000U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc 
                          >> 1U)));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc 
        = ((0xfffbffffU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc) 
           | (0x40000U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc 
                          >> 1U)));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc 
        = ((0xffbfffffU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc) 
           | (0x400000U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc 
                           >> 1U)));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc 
        = ((0xfdffffffU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc) 
           | (0x2000000U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc 
                            >> 1U)));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc 
        = ((0xefffffffU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc) 
           | (0x10000000U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc 
                             >> 1U)));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_tff2 
        = ((~ (IData)(vlTOPp->wb_rst_i)) & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_tff1));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__crc_shift_en = 0U;
    if ((8U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__crc_shift_en = 1U;
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu.dbg_if0__DOT____Vcellout__cpu0__DOT__i_dbg_cpu_or1k__top_inhibit_o = 0U;
    if ((8U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                      >> 2U)))) {
            vlSymsp->TOP__or1k_pu.dbg_if0__DOT____Vcellout__cpu0__DOT__i_dbg_cpu_or1k__top_inhibit_o = 1U;
        }
    } else {
        if ((4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
            if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                vlSymsp->TOP__or1k_pu.dbg_if0__DOT____Vcellout__cpu0__DOT__i_dbg_cpu_or1k__top_inhibit_o = 1U;
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    vlSymsp->TOP__or1k_pu.dbg_if0__DOT____Vcellout__cpu0__DOT__i_dbg_cpu_or1k__top_inhibit_o = 1U;
                }
            }
        } else {
            if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    vlSymsp->TOP__or1k_pu.dbg_if0__DOT____Vcellout__cpu0__DOT__i_dbg_cpu_or1k__top_inhibit_o = 1U;
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__crc_shift_en = 0U;
    if ((8U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
                    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__crc_shift_en = 1U;
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu.dbg_if0__DOT____Vcellout__wb__DOT__i_dbg_wb__top_inhibit_o = 0U;
    if ((8U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state) 
                      >> 2U)))) {
            vlSymsp->TOP__or1k_pu.dbg_if0__DOT____Vcellout__wb__DOT__i_dbg_wb__top_inhibit_o = 1U;
        }
    } else {
        if ((4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
            if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
                vlSymsp->TOP__or1k_pu.dbg_if0__DOT____Vcellout__wb__DOT__i_dbg_wb__top_inhibit_o = 1U;
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state)))) {
                    vlSymsp->TOP__or1k_pu.dbg_if0__DOT____Vcellout__wb__DOT__i_dbg_wb__top_inhibit_o = 1U;
                }
            }
        } else {
            if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
                    vlSymsp->TOP__or1k_pu.dbg_if0__DOT____Vcellout__wb__DOT__i_dbg_wb__top_inhibit_o = 1U;
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp_tck 
        = ((~ (IData)(vlTOPp->wb_rst_i)) & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp_csff));
    vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__update_ir 
        = ((~ (IData)(vlTOPp->wb_rst_i)) & ((~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__tms_reset)) 
                                            & ((IData)(vlTOPp->tms_pad_i) 
                                               & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__exit1_ir) 
                                                  | (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__exit2_ir)))));
    vlSymsp->TOP__or1k_pu.__Vtableidx3 = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__operation;
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_size_bits 
        = vlSymsp->TOP__or1k_pu.__Vtable3___PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_size_bits
        [vlSymsp->TOP__or1k_pu.__Vtableidx3];
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_size_bytes 
        = vlSymsp->TOP__or1k_pu.__Vtable3___PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_size_bytes
        [vlSymsp->TOP__or1k_pu.__Vtableidx3];
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__rd_op 
        = vlSymsp->TOP__or1k_pu.__Vtable3___PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__rd_op
        [vlSymsp->TOP__or1k_pu.__Vtableidx3];
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__module_selects = 0U;
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__module_selects 
        = ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__module_selects) 
           | ((IData)(1U) << (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__module_id_reg)));
    vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__update_dr 
        = ((~ (IData)(vlTOPp->wb_rst_i)) & ((~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__tms_reset)) 
                                            & ((IData)(vlTOPp->tms_pad_i) 
                                               & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__exit1_dr) 
                                                  | (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__exit2_dr)))));
    if (vlTOPp->wb_rst_i) {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__address_counter = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__addr_ct_en) {
            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__address_counter 
                = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__data_to_addr_counter;
        }
    }
    if (vlTOPp->wb_rst_i) {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__operation = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__op_reg_en) {
            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__operation 
                = (0xfU & (IData)((vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                   >> 0x30U)));
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__module_inhibit 
        = ((0xdU & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__module_inhibit)) 
           | ((IData)(vlSymsp->TOP__or1k_pu.dbg_if0__DOT____Vcellout__cpu0__DOT__i_dbg_cpu_or1k__top_inhibit_o) 
              << 1U));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__module_inhibit 
        = ((0xeU & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__module_inhibit)) 
           | (IData)(vlSymsp->TOP__or1k_pu.dbg_if0__DOT____Vcellout__wb__DOT__i_dbg_wb__top_inhibit_o));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__bit_count_max 
        = ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__bit_count) 
           == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_size_bits));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
        = __Vdly__dbg_if0__DOT__input_shift_reg;
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__strobe_sff__DOT__syncxor 
        = ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__strobe_sff__DOT__sync2) 
           ^ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__strobe_sff__DOT__syncprev));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__strobe_sff__DOT__sync1 
        = ((~ (IData)(vlTOPp->wb_rst_i)) & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__strobe_toggle));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__strobe_sff__DOT__syncxor 
        = ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__strobe_sff__DOT__sync2) 
           ^ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__strobe_sff__DOT__syncprev));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__strobe_sff__DOT__sync1 
        = ((~ (IData)(vlTOPp->wb_rst_i)) & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__strobe_toggle));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_tff1 
        = ((~ (IData)(vlTOPp->wb_rst_i)) & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp_csff 
        = ((~ (IData)(vlTOPp->wb_rst_i)) & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp));
    vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__exit2_ir 
        = ((~ (IData)(vlTOPp->wb_rst_i)) & ((~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__tms_reset)) 
                                            & ((IData)(vlTOPp->tms_pad_i) 
                                               & (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__pause_ir))));
    vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__exit1_ir 
        = ((~ (IData)(vlTOPp->wb_rst_i)) & ((~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__tms_reset)) 
                                            & ((IData)(vlTOPp->tms_pad_i) 
                                               & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__capture_ir) 
                                                  | (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__shift_ir)))));
    vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__exit2_dr 
        = ((~ (IData)(vlTOPp->wb_rst_i)) & ((~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__tms_reset)) 
                                            & ((IData)(vlTOPp->tms_pad_i) 
                                               & (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__pause_dr))));
    vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__exit1_dr 
        = ((~ (IData)(vlTOPp->wb_rst_i)) & ((~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__tms_reset)) 
                                            & ((IData)(vlTOPp->tms_pad_i) 
                                               & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__capture_dr) 
                                                  | (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__shift_dr)))));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__regsel_ld_en = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state)))) {
                    if ((((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__module_selects) 
                          & (~ (IData)((vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                        >> 0x34U)))) 
                         & (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__update_dr))) {
                        if (((9U == (0xfU & (IData)(
                                                    (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                                     >> 0x30U)))) 
                             | (0xdU == (0xfU & (IData)(
                                                        (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                                         >> 0x30U)))))) {
                            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__regsel_ld_en = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__intreg_ld_en = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state)))) {
                    if ((((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__module_selects) 
                          & (~ (IData)((vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                        >> 0x34U)))) 
                         & (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__update_dr))) {
                        if ((9U == (0xfU & (IData)(
                                                   (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                                    >> 0x30U))))) {
                            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__intreg_ld_en = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__regsel_ld_en = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    if (((((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__module_selects) 
                           >> 1U) & (~ (IData)((vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                                >> 0x34U)))) 
                         & (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__update_dr))) {
                        if (((9U == (0xfU & (IData)(
                                                    (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                                     >> 0x30U)))) 
                             | (0xdU == (0xfU & (IData)(
                                                        (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                                         >> 0x30U)))))) {
                            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__regsel_ld_en = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__intreg_ld_en = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    if (((((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__module_selects) 
                           >> 1U) & (~ (IData)((vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                                >> 0x34U)))) 
                         & (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__update_dr))) {
                        if ((9U == (0xfU & (IData)(
                                                   (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                                    >> 0x30U))))) {
                            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__intreg_ld_en = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__burst_instruction 
        = ((3U == (0xfU & (IData)((vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                   >> 0x30U)))) | (7U 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                                               >> 0x30U)))));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__burst_instruction 
        = (1U & ((~ (IData)((vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                             >> 0x33U))) & ((IData)(
                                                    (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                                     >> 0x30U)) 
                                            | (IData)(
                                                      (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                                       >> 0x31U)))));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__strobe_sff_out 
        = ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__strobe_sff__DOT__srflop) 
           | (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__strobe_sff__DOT__syncxor));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__strobe_sff_out 
        = ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__strobe_sff__DOT__srflop) 
           | (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__strobe_sff__DOT__syncxor));
    vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__pause_ir 
        = __Vdly__jtag_tap0__DOT__pause_ir;
    vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__shift_ir 
        = __Vdly__jtag_tap0__DOT__shift_ir;
    vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__pause_dr 
        = __Vdly__jtag_tap0__DOT__pause_dr;
    vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__shift_dr 
        = __Vdly__jtag_tap0__DOT__shift_dr;
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__status_reg_wr 
        = ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__intreg_ld_en) 
           & (~ (IData)((vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                         >> 0x2fU))));
    vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__capture_ir 
        = ((~ (IData)(vlTOPp->wb_rst_i)) & ((~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__tms_reset)) 
                                            & ((~ (IData)(vlTOPp->tms_pad_i)) 
                                               & (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__select_ir_scan))));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__wr_bit_ct_en = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__wr_module_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__wr_module_state))) {
            if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__wr_module_state))) {
                if (vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__shift_dr) {
                    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__wr_bit_ct_en = 1U;
                }
            } else {
                if (vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__shift_dr) {
                    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__wr_bit_ct_en = 1U;
                }
            }
        } else {
            if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__wr_module_state))) {
                vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__wr_bit_ct_en = 0U;
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__out_reg_data_sel = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_module_state) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_module_state) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_module_state))) {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_module_state))) {
                    if (vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__shift_dr) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__out_reg_data_sel = 0U;
                    }
                } else {
                    if (vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__shift_dr) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__out_reg_data_sel = 0U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_module_state)))) {
                    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__out_reg_data_sel = 1U;
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_bit_ct_en = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_module_state) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_module_state) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_module_state))) {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_module_state))) {
                    if (vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__shift_dr) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_bit_ct_en = 1U;
                    }
                } else {
                    if (vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__shift_dr) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_bit_ct_en = 1U;
                    }
                }
            } else {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_module_state))) {
                    if (vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__shift_dr) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_bit_ct_en = 1U;
                    }
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__out_reg_shift_en = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state)))) {
                    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__out_reg_shift_en = 1U;
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state)))) {
                    if (((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__module_selects) 
                         & (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__shift_dr))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__out_reg_shift_en = 1U;
                    }
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__out_reg_shift_en = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__out_reg_shift_en = 1U;
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    if ((((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__module_selects) 
                          >> 1U) & (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__shift_dr))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__out_reg_shift_en = 1U;
                    }
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__biu_rd_strobe = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_module_state) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_module_state) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_module_state))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_module_state)))) {
                    if (vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__shift_dr) {
                        if ((0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__output_word_count))) {
                            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__biu_rd_strobe = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__out_reg_shift_en = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_module_state) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_module_state) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_module_state))) {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_module_state))) {
                    if (vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__shift_dr) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__out_reg_shift_en = 1U;
                        if ((7U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__read_bit_count))) {
                            if ((0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__output_word_count))) {
                                vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__out_reg_shift_en = 0U;
                            }
                        }
                    }
                } else {
                    if (vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__shift_dr) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__out_reg_shift_en = 1U;
                    }
                }
            } else {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_module_state))) {
                    if (vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__shift_dr) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__out_reg_shift_en = 1U;
                        if ((7U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__read_bit_count))) {
                            if ((0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__output_word_count))) {
                                vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__out_reg_shift_en = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__user_word_ct_en = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__wr_module_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__wr_module_state))) {
            if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__wr_module_state))) {
                if (vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__shift_dr) {
                    if ((7U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__write_bit_count))) {
                        if ((1U & (~ ((0U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__input_word_count)) 
                                      | (0U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__user_word_count)))))) {
                            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__user_word_ct_en = 1U;
                        }
                    }
                }
            } else {
                if (vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__shift_dr) {
                    if ((7U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__write_bit_count))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__user_word_ct_en = 1U;
                    }
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__in_word_ct_sel = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__wr_module_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__wr_module_state))) {
            if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__wr_module_state))) {
                if (vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__shift_dr) {
                    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__in_word_ct_sel = 1U;
                }
            }
        } else {
            if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__wr_module_state)))) {
                vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__in_word_ct_sel = 0U;
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__out_word_ct_sel = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_module_state) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_module_state) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_module_state))) {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_module_state))) {
                    if (vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__shift_dr) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__out_word_ct_sel = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_module_state)))) {
                    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__out_word_ct_sel = 0U;
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__user_word_ct_sel = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__wr_module_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__wr_module_state))) {
            if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__wr_module_state))) {
                if (vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__shift_dr) {
                    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__user_word_ct_sel = 1U;
                }
            } else {
                if (vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__shift_dr) {
                    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__user_word_ct_sel = 0U;
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__biu_wr_strobe = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__wr_module_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__wr_module_state))) {
            if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__wr_module_state))) {
                if (vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__shift_dr) {
                    if ((7U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__write_bit_count))) {
                        if ((1U & (~ ((0U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__input_word_count)) 
                                      | (0U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__user_word_count)))))) {
                            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__biu_wr_strobe = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__capture_dr 
        = ((~ (IData)(vlTOPp->wb_rst_i)) & ((~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__tms_reset)) 
                                            & ((~ (IData)(vlTOPp->tms_pad_i)) 
                                               & (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__select_dr_scan))));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__data_to_in_word_counter 
        = (0xfU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__in_word_ct_sel)
                    ? ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__input_word_count) 
                       - (IData)(1U)) : (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__regB)));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__data_to_out_word_counter 
        = (0xfU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__out_word_ct_sel)
                    ? ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__output_word_count) 
                       - (IData)(1U)) : (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__regB)));
    vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__select_ir_scan 
        = ((~ (IData)(vlTOPp->wb_rst_i)) & ((~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__tms_reset)) 
                                            & ((IData)(vlTOPp->tms_pad_i) 
                                               & (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__select_dr_scan))));
    vlSymsp->TOP__or1k_pu.__Vtableidx7 = (((IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__capture_dr) 
                                           << 6U) | 
                                          ((0x20U & 
                                            ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__module_selects) 
                                             << 2U)) 
                                           | (((7U 
                                                == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__read_bit_count)) 
                                               << 4U) 
                                              | (((IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__update_dr) 
                                                  << 3U) 
                                                 | (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_module_state)))));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_module_next_state 
        = vlSymsp->TOP__or1k_pu.__Vtable7___PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_module_next_state
        [vlSymsp->TOP__or1k_pu.__Vtableidx7];
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_next_state 
        = ((8U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))
            ? ((4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))
                ? 0U : ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))
                         ? ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))
                             ? ((IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__update_dr)
                                 ? 0U : 0xbU) : ((IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__update_dr)
                                                  ? 0U
                                                  : 
                                                 ((0x20U 
                                                   == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__bit_count))
                                                   ? 0xbU
                                                   : 0xaU)))
                         : ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))
                             ? ((IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__update_dr)
                                 ? 0U : 9U) : ((IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__update_dr)
                                                ? 0U
                                                : (
                                                   (0U 
                                                    == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__word_count))
                                                    ? 0xaU
                                                    : 7U)))))
            : ((4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))
                ? ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))
                    ? ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))
                        ? ((IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__update_dr)
                            ? 0U : ((0x1fU == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__bit_count))
                                     ? ((0U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__word_count))
                                         ? 0xaU : 7U)
                                     : 7U)) : ((IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__update_dr)
                                                ? 0U
                                                : (
                                                   (1U 
                                                    & (((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__module_selects) 
                                                        >> 1U) 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                                                  >> 0x34U))))
                                                    ? 7U
                                                    : 6U)))
                    : ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))
                        ? ((0U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__word_count))
                            ? 0U : ((((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__module_selects) 
                                      >> 1U) & (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__capture_dr))
                                     ? 6U : 5U)) : 
                       ((IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__update_dr)
                         ? 0U : (((0x1fU == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__bit_count)) 
                                  & (0U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__word_count)))
                                  ? 9U : 4U)))) : (
                                                   (2U 
                                                    & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__update_dr)
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__biu_ready)
                                                       ? 4U
                                                       : 3U))
                                                     : 
                                                    ((((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__module_selects) 
                                                       >> 1U) 
                                                      & (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__capture_dr))
                                                      ? 3U
                                                      : 2U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))
                                                     ? 
                                                    ((0U 
                                                      == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__word_count))
                                                      ? 0U
                                                      : 2U)
                                                     : 
                                                    ((((((~ (IData)(
                                                                    (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                                                     >> 0x34U))) 
                                                         & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__module_selects) 
                                                            >> 1U)) 
                                                        & (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__update_dr)) 
                                                       & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__burst_instruction)) 
                                                      & (IData)(
                                                                (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                                                 >> 0x32U)))
                                                      ? 1U
                                                      : 
                                                     (((((~ (IData)(
                                                                    (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                                                     >> 0x34U))) 
                                                         & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__module_selects) 
                                                            >> 1U)) 
                                                        & (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__update_dr)) 
                                                       & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__burst_instruction))
                                                       ? 5U
                                                       : 0U))))));
    vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__select_dr_scan 
        = __Vdly__jtag_tap0__DOT__select_dr_scan;
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_bit_ct_rst = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_module_state) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_module_state) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_module_state))) {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_module_state))) {
                    if (vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__shift_dr) {
                        if ((7U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__read_bit_count))) {
                            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_bit_ct_rst = 1U;
                        }
                    }
                }
            } else {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_module_state))) {
                    if (vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__shift_dr) {
                        if ((7U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__read_bit_count))) {
                            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_bit_ct_rst = 1U;
                        }
                    }
                } else {
                    if ((0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_module_next_state))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_bit_ct_rst = 1U;
                    }
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__out_word_ct_en = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_module_state) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_module_state) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_module_state))) {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_module_state))) {
                    if (vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__shift_dr) {
                        if ((7U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__read_bit_count))) {
                            if ((0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__output_word_count))) {
                                vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__out_word_ct_en = 1U;
                            }
                        }
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_module_state)))) {
                    if ((0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_module_next_state))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__out_word_ct_en = 1U;
                    }
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__out_reg_ld_en = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_module_state) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_module_state) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_module_state))) {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_module_state))) {
                    if (vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__shift_dr) {
                        if ((7U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__read_bit_count))) {
                            if ((0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__output_word_count))) {
                                vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__out_reg_ld_en = 1U;
                            }
                        }
                    }
                }
            } else {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_module_state))) {
                    if (vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__shift_dr) {
                        if ((7U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__read_bit_count))) {
                            if ((0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__output_word_count))) {
                                vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__out_reg_ld_en = 1U;
                            }
                        }
                    }
                } else {
                    if ((0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_module_next_state))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__out_reg_ld_en = 1U;
                    }
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__crc_en = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
            if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__crc_en = 1U;
                } else {
                    if ((7U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_next_state))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__crc_en = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__crc_en = 1U;
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__crc_clr = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    if ((0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_next_state))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__crc_clr = 1U;
                    }
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__bit_ct_en = 0U;
    if ((8U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__bit_ct_en = 1U;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
            if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__bit_ct_en = 1U;
                } else {
                    if ((7U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_next_state))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__bit_ct_en = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__bit_ct_en = 1U;
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__op_reg_en = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    if ((0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_next_state))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__op_reg_en = 1U;
                    }
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__bit_ct_rst = 0U;
    if ((8U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__bit_ct_rst = 1U;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
            if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    if ((0x1fU == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__bit_count))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__bit_ct_rst = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    if ((0x1fU == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__bit_count))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__bit_ct_rst = 1U;
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    if ((4U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_next_state))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__bit_ct_rst = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    if ((0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_next_state))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__bit_ct_rst = 1U;
                    }
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__word_ct_en = 0U;
    if ((8U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__word_ct_en = 1U;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
            if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    if ((0x1fU == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__bit_count))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__word_ct_en = 1U;
                    }
                } else {
                    if ((7U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_next_state))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__word_ct_en = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    if ((0x1fU == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__bit_count))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__word_ct_en = 1U;
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    if ((4U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_next_state))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__word_ct_en = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    if ((0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_next_state))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__word_ct_en = 1U;
                    }
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__addr_ct_en = 0U;
    if ((8U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__addr_ct_en = 1U;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
            if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    if ((0x1fU == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__bit_count))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__addr_ct_en = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    if ((0x1fU == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__bit_count))) {
                        if (((0U != (0xffffU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__word_count) 
                                                - (IData)(1U)))) 
                             & (0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__word_count)))) {
                            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__addr_ct_en = 1U;
                        }
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    if ((4U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_next_state))) {
                        if (((0U != (0xffffU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__word_count) 
                                                - (IData)(1U)))) 
                             & (0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__word_count)))) {
                            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__addr_ct_en = 1U;
                        }
                    }
                }
            } else {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    if ((0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__word_count))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__addr_ct_en = 1U;
                    }
                } else {
                    if ((0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_next_state))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__addr_ct_en = 1U;
                    }
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__biu_strobe = 0U;
    if ((8U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__biu_strobe = 1U;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
            if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    if ((0x1fU == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__bit_count))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__biu_strobe = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    if ((0x1fU == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__bit_count))) {
                        if (((0U != (0xffffU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__word_count) 
                                                - (IData)(1U)))) 
                             & (0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__word_count)))) {
                            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__biu_strobe = 1U;
                        }
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    if ((4U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_next_state))) {
                        if (((0U != (0xffffU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__word_count) 
                                                - (IData)(1U)))) 
                             & (0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__word_count)))) {
                            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__biu_strobe = 1U;
                        }
                    }
                }
            } else {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    if ((0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__word_count))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__biu_strobe = 1U;
                    }
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__out_reg_data_sel = 1U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    if ((0x1fU == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__bit_count))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__out_reg_data_sel = 0U;
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    if ((4U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_next_state))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__out_reg_data_sel = 0U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    if ((((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__module_selects) 
                          >> 1U) & (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__capture_dr))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__out_reg_data_sel = 1U;
                    }
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__out_reg_ld_en = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    if ((0x1fU == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__bit_count))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__out_reg_ld_en = 1U;
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    if ((4U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_next_state))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__out_reg_ld_en = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    if ((((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__module_selects) 
                          >> 1U) & (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__capture_dr))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__out_reg_ld_en = 1U;
                    }
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__word_ct_sel = 1U;
    if ((8U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__word_ct_sel = 1U;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
            if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    if ((0x1fU == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__bit_count))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__word_ct_sel = 1U;
                    }
                } else {
                    if ((7U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_next_state))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__word_ct_sel = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    if ((0x1fU == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__bit_count))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__word_ct_sel = 1U;
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    if ((4U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_next_state))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__word_ct_sel = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__word_ct_sel = 0U;
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__addr_sel = 1U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    if ((0x1fU == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__bit_count))) {
                        if (((0U != (0xffffU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__word_count) 
                                                - (IData)(1U)))) 
                             & (0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__word_count)))) {
                            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__addr_sel = 1U;
                        }
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    if ((4U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_next_state))) {
                        if (((0U != (0xffffU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__word_count) 
                                                - (IData)(1U)))) 
                             & (0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__word_count)))) {
                            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__addr_sel = 1U;
                        }
                    }
                }
            } else {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    if ((0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__word_count))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__addr_sel = 1U;
                    }
                } else {
                    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__addr_sel = 0U;
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__tdo_output_sel = 1U;
    if ((8U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__tdo_output_sel = 2U;
                } else {
                    if ((0xbU == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_next_state))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__tdo_output_sel = 2U;
                    }
                }
            } else {
                vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__tdo_output_sel 
                    = ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))
                        ? 3U : 0U);
            }
        }
    } else {
        if ((4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
            if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__tdo_output_sel = 1U;
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__tdo_output_sel = 1U;
                }
            }
        } else {
            if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__tdo_output_sel = 0U;
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__crc_in_sel = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
            if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state))) {
                    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__crc_in_sel = 1U;
                } else {
                    if ((7U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_next_state))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__crc_in_sel = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state)))) {
                    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__crc_in_sel = 0U;
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__data_to_word_counter 
        = (0xffffU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__word_ct_sel)
                       ? ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__word_count) 
                          - (IData)(1U)) : (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg)));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__data_to_addr_counter 
        = ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__addr_sel)
            ? ((IData)(1U) + vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__address_counter)
            : (IData)((vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                       >> 0x10U)));
}

VL_INLINE_OPT void Vor1k_pu_or1k_pu::_multiclk__TOP__or1k_pu__13(Vor1k_pu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vor1k_pu_or1k_pu::_multiclk__TOP__or1k_pu__13\n"); );
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_dbg_ack = (
                                                   (0U 
                                                    >= (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_mux_dbg__DOT__slave_sel)) 
                                                   & ((IData)(vlSymsp->TOP__or1k_pu.wb_interface0__DOT____Vcellout__wb_arbiter_mem__wbm_ack_o) 
                                                      >> (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_mux_dbg__DOT__slave_sel)));
}

VL_INLINE_OPT void Vor1k_pu_or1k_pu::_sequent__TOP__or1k_pu__14(Vor1k_pu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vor1k_pu_or1k_pu::_sequent__TOP__or1k_pu__14\n"); );
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__str_sync 
        = vlSymsp->TOP__or1k_pu.__Vdly__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__str_sync;
}

VL_INLINE_OPT void Vor1k_pu_or1k_pu::_combo__TOP__or1k_pu__15(Vor1k_pu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vor1k_pu_or1k_pu::_combo__TOP__or1k_pu__15\n"); );
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__or1k_pu.dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__wr_fifo__RST 
        = ((IData)(vlTOPp->wb_rst_i) | ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__reg_fcr_wren) 
                                        & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_dat_i 
                                           >> 9U)));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__data_to_biu 
        = (((IData)(vlTOPp->tdi_pad_i) << 0x1fU) | 
           (0x7fffffffU & (IData)((vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                   >> 0x16U))));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__data_to_user_word_counter 
        = (0xfU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__user_word_ct_sel)
                    ? ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__user_word_count) 
                       - (IData)(1U)) : (((IData)(vlTOPp->tdi_pad_i) 
                                          << 3U) | 
                                         (7U & (IData)(
                                                       (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                                        >> 0x32U))))));
    vlSymsp->TOP__or1k_pu.__Vtableidx6 = (((IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__capture_dr) 
                                           << 7U) | 
                                          (((IData)(vlTOPp->tdi_pad_i) 
                                            << 6U) 
                                           | ((0x20U 
                                               & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__module_selects) 
                                                  << 2U)) 
                                              | (((7U 
                                                   == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__write_bit_count)) 
                                                  << 4U) 
                                                 | (((IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__update_dr) 
                                                     << 3U) 
                                                    | (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__wr_module_state))))));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__wr_module_next_state 
        = vlSymsp->TOP__or1k_pu.__Vtable6___PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__wr_module_next_state
        [vlSymsp->TOP__or1k_pu.__Vtableidx6];
    vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__tms_reset 
        = (((((IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__tms_q1) 
              & (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__tms_q2)) 
             & (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__tms_q3)) 
            & (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__tms_q4)) 
           & (IData)(vlTOPp->tms_pad_i));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__crc_data_in 
        = (1U & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__crc_in_sel)
                  ? (IData)(vlTOPp->tdi_pad_i) : vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__data_out_shift_reg));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__wr_bit_ct_rst = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__wr_module_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__wr_module_state))) {
            if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__wr_module_state))) {
                if (vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__shift_dr) {
                    if ((7U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__write_bit_count))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__wr_bit_ct_rst = 1U;
                    }
                }
            } else {
                if (vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__shift_dr) {
                    if ((7U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__write_bit_count))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__wr_bit_ct_rst = 1U;
                    }
                }
            }
        } else {
            if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__wr_module_state)))) {
                if ((0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__wr_module_next_state))) {
                    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__wr_bit_ct_rst = 1U;
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__in_word_ct_en = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__wr_module_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__wr_module_state))) {
            if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__wr_module_state))) {
                if (vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__shift_dr) {
                    if ((7U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__write_bit_count))) {
                        if ((1U & (~ ((0U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__input_word_count)) 
                                      | (0U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__user_word_count)))))) {
                            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__in_word_ct_en = 1U;
                        }
                    }
                }
            }
        } else {
            if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__wr_module_state)))) {
                if ((0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__wr_module_next_state))) {
                    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__in_word_ct_en = 1U;
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xffffffdfU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x20U & (((0x7fffffe0U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                        >> 1U)) ^ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__crc_data_in) 
                                                   << 5U)) 
                       ^ (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                          << 5U))));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xfffffeffU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x100U & (((0x7fffff00U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                         >> 1U)) ^ 
                         ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__crc_data_in) 
                          << 8U)) ^ (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                     << 8U))));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xfffffdffU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x200U & (((0x7ffffe00U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                         >> 1U)) ^ 
                         ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__crc_data_in) 
                          << 9U)) ^ (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                     << 9U))));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xffff7fffU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x8000U & (((0x7fff8000U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                          >> 1U)) ^ 
                          ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__crc_data_in) 
                           << 0xfU)) ^ (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                        << 0xfU))));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xfff7ffffU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x80000U & (((0x7ff80000U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                           >> 1U)) 
                           ^ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__crc_data_in) 
                              << 0x13U)) ^ (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                            << 0x13U))));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xffefffffU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x100000U & (((0x7ff00000U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                            >> 1U)) 
                            ^ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__crc_data_in) 
                               << 0x14U)) ^ (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                             << 0x14U))));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xffdfffffU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x200000U & (((0x7fe00000U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                            >> 1U)) 
                            ^ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__crc_data_in) 
                               << 0x15U)) ^ (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                             << 0x15U))));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xff7fffffU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x800000U & (((0x7f800000U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                            >> 1U)) 
                            ^ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__crc_data_in) 
                               << 0x17U)) ^ (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                             << 0x17U))));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xfeffffffU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x1000000U & (((0x7f000000U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                             >> 1U)) 
                             ^ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__crc_data_in) 
                                << 0x18U)) ^ (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                              << 0x18U))));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xfbffffffU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x4000000U & (((0x7c000000U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                             >> 1U)) 
                             ^ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__crc_data_in) 
                                << 0x1aU)) ^ (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                              << 0x1aU))));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xf7ffffffU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x8000000U & (((0x78000000U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                             >> 1U)) 
                             ^ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__crc_data_in) 
                                << 0x1bU)) ^ (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                              << 0x1bU))));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xdfffffffU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x20000000U & (((0x60000000U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                              >> 1U)) 
                              ^ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__crc_data_in) 
                                 << 0x1dU)) ^ (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                               << 0x1dU))));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0xbfffffffU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x40000000U & (((0x40000000U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                              >> 1U)) 
                              ^ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__crc_data_in) 
                                 << 0x1eU)) ^ (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc 
                                               << 0x1eU))));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc 
        = ((0x7fffffffU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc) 
           | (0x80000000U & (((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__crc_data_in) 
                              ^ vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc) 
                             << 0x1fU)));
}

VL_INLINE_OPT void Vor1k_pu_or1k_pu::_sequent__TOP__or1k_pu__16(Vor1k_pu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vor1k_pu_or1k_pu::_sequent__TOP__or1k_pu__16\n"); );
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__or1k_pu.__PVT__wb_m2s_uart_adr = 
        ((0xfffffffcU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_adr) 
         | ((8U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_bsel_o))
             ? 0U : ((4U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_bsel_o))
                      ? 1U : ((2U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_bsel_o))
                               ? 2U : 3U))));
    vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_mux_or1k_d__DOT__match 
        = ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_mux_or1k_d__DOT__match)) 
           | (0x90000000U == (0xfffffff8U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_adr)));
    vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_mux_or1k_d__DOT__match 
        = ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_mux_or1k_d__DOT__match)) 
           | ((0U == (0xfe000000U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_adr)) 
              << 1U));
    vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_or1k_i_err 
        = vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_mux_or1k_i__DOT__wbm_err;
    vlSymsp->TOP__or1k_pu.__Vfunc_wb_interface0__DOT__wb_mux_or1k_d__DOT__ff1__0__in 
        = vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_mux_or1k_d__DOT__match;
    vlSymsp->TOP__or1k_pu.__Vfunc_wb_interface0__DOT__wb_mux_or1k_d__DOT__ff1__0__Vfuncout = 0U;
    if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__Vfunc_wb_interface0__DOT__wb_mux_or1k_d__DOT__ff1__0__in))) {
        vlSymsp->TOP__or1k_pu.__Vfunc_wb_interface0__DOT__wb_mux_or1k_d__DOT__ff1__0__Vfuncout = 1U;
    }
    if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__Vfunc_wb_interface0__DOT__wb_mux_or1k_d__DOT__ff1__0__in))) {
        vlSymsp->TOP__or1k_pu.__Vfunc_wb_interface0__DOT__wb_mux_or1k_d__DOT__ff1__0__Vfuncout = 0U;
    }
    vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_mux_or1k_d__DOT__slave_sel 
        = vlSymsp->TOP__or1k_pu.__Vfunc_wb_interface0__DOT__wb_mux_or1k_d__DOT__ff1__0__Vfuncout;
    vlSymsp->TOP__or1k_pu.wb_interface0__DOT____Vcellout__wb_mux_or1k_d__wbs_cyc_o 
        = ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_mux_or1k_d__DOT__match) 
           & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_req_o) 
              << (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_mux_or1k_d__DOT__slave_sel)));
    vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_or1k_d_err 
        = (1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_mux_or1k_d__DOT__wbm_err));
}

VL_INLINE_OPT void Vor1k_pu_or1k_pu::_sequent__TOP__or1k_pu__17(Vor1k_pu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vor1k_pu_or1k_pu::_sequent__TOP__or1k_pu__17\n"); );
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_rst) {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__err_reg = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__err_en) {
            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__err_reg 
                = vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_dbg_err;
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_rst) {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__data_out_reg = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__data_o_en) {
            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__data_out_reg 
                = ((8U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__sel_reg))
                    ? ((4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__sel_reg))
                        ? ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__sel_reg))
                            ? vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_dbg_dat
                            : ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__sel_reg))
                                ? vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_dbg_dat
                                : (0xffffU & (vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_dbg_dat 
                                              >> 0x10U))))
                        : ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__sel_reg))
                            ? vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_dbg_dat
                            : ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__sel_reg))
                                ? vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_dbg_dat
                                : (0xffU & (vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_dbg_dat 
                                            >> 0x18U)))))
                    : ((4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__sel_reg))
                        ? ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__sel_reg))
                            ? vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_dbg_dat
                            : ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__sel_reg))
                                ? vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_dbg_dat
                                : (0xffffU & (vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_dbg_dat 
                                              >> 0x10U))))
                        : ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__sel_reg))
                            ? ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__sel_reg))
                                ? vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_dbg_dat
                                : (0xffU & (vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_dbg_dat 
                                            >> 8U)))
                            : vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_dbg_dat)));
        }
    }
}

VL_INLINE_OPT void Vor1k_pu_or1k_pu::_sequent__TOP__or1k_pu__18(Vor1k_pu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vor1k_pu_or1k_pu::_sequent__TOP__or1k_pu__18\n"); );
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__strobe_toggle 
        = vlSymsp->TOP__or1k_pu.__Vdly__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__strobe_toggle;
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__strobe_toggle 
        = vlSymsp->TOP__or1k_pu.__Vdly__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__strobe_toggle;
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync 
        = vlSymsp->TOP__or1k_pu.__Vdly__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync;
    vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_or1k_d_dat 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__or1k_pu__wb_bfm_memory0__ram0.__PVT__dout)) 
                     << 0x20U) | (QData)((IData)(((8U 
                                                   & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_bsel_o))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_uart_dat) 
                                                   << 0x18U)
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_bsel_o))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_uart_dat) 
                                                    << 0x10U)
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_bsel_o))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_uart_dat) 
                                                     << 8U)
                                                     : (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_uart_dat))))))) 
                   >> (0x3fU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_mux_or1k_d__DOT__slave_sel) 
                                << 5U))));
    vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_or1k_d_ack 
        = (1U & (((2U & (IData)(vlSymsp->TOP__or1k_pu.wb_interface0__DOT____Vcellout__wb_arbiter_mem__wbm_ack_o)) 
                  | (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_uart_ack)) 
                 >> (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_mux_or1k_d__DOT__slave_sel)));
    if (vlTOPp->wb_rst_i) {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rdata = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rdata_en) {
            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rdata 
                = ((8U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter))
                    ? ((4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter))
                        ? 0U : ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter))
                                 ? 0U : ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter))
                                          ? 0U : (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg7))))
                    : ((4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter))
                        ? ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter))
                            ? ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter))
                                ? (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg6)
                                : (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg5))
                            : ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter))
                                ? (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg4)
                                : (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg3)))
                        : ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter))
                            ? ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter))
                                ? (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg2)
                                : (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg1))
                            : ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter))
                                ? (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg0)
                                : 0U))));
        }
    }
    if (vlTOPp->wb_rst_i) {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_out_reg = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_o_en) {
            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_out_reg 
                = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__du__DOT__du_read_dat;
        }
    }
    if (vlTOPp->wb_rst_i) {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__regA = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__A_enable) {
            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__regA 
                = (0xfU & ((IData)(8U) - (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter)));
        }
    }
    if (vlTOPp->wb_rst_i) {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__regA = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__A_enable) {
            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__regA 
                = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter;
        }
    }
    if (vlTOPp->wb_rst_i) {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__du_stall_o) {
            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp = 1U;
        } else {
            if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg_cpu) {
                vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp = 0U;
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg_cpu 
        = ((~ (IData)(vlTOPp->wb_rst_i)) & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg_csff));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg_csff 
        = ((~ (IData)(vlTOPp->wb_rst_i)) & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg));
}

VL_INLINE_OPT void Vor1k_pu_or1k_pu::_multiclk__TOP__or1k_pu__19(Vor1k_pu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vor1k_pu_or1k_pu::_multiclk__TOP__or1k_pu__19\n"); );
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__or1k_pu.__Vtableidx5 = (((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__wr_reg) 
                                           << 3U) | 
                                          (((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__start_toggle) 
                                            << 2U) 
                                           | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__du__DOT__du_ack) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_fsm_state))));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_en 
        = vlSymsp->TOP__or1k_pu.__Vtable5___PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_en
        [vlSymsp->TOP__or1k_pu.__Vtableidx5];
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_o_en 
        = vlSymsp->TOP__or1k_pu.__Vtable5___PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_o_en
        [vlSymsp->TOP__or1k_pu.__Vtableidx5];
    vlSymsp->TOP__or1k_pu.__PVT__or1k_dbg_stb_i = vlSymsp->TOP__or1k_pu.__Vtable5___PVT__or1k_dbg_stb_i
        [vlSymsp->TOP__or1k_pu.__Vtableidx5];
}

VL_INLINE_OPT void Vor1k_pu_or1k_pu::_combo__TOP__or1k_pu__21(Vor1k_pu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vor1k_pu_or1k_pu::_combo__TOP__or1k_pu__21\n"); );
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__or1k_pu.__PVT__or1k_rst = ((IData)(vlTOPp->wb_rst_i) 
                                             | (IData)(vlSymsp->TOP__or1k_pu.__PVT__or1k_dbg_rst));
}

VL_INLINE_OPT void Vor1k_pu_or1k_pu::_multiclk__TOP__or1k_pu__22(Vor1k_pu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vor1k_pu_or1k_pu::_multiclk__TOP__or1k_pu__22\n"); );
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_dbg_err = vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_mux_dbg__DOT__wbm_err;
    vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_dbg_dat = (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_mux_dbg__DOT__slave_sel) 
                                                         << 5U)))
                                                     ? 0U
                                                     : 
                                                    (vlSymsp->TOP__or1k_pu__wb_bfm_memory0__ram0.__PVT__dout 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_mux_dbg__DOT__slave_sel) 
                                                          << 5U))))) 
                                                   | (vlSymsp->TOP__or1k_pu__wb_bfm_memory0__ram0.__PVT__dout 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_mux_dbg__DOT__slave_sel) 
                                                          << 5U))));
    if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__wb_fsm_state) {
        if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__wb_fsm_state) {
            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__next_fsm_state 
                = (1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_dbg_ack) 
                            | (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_dbg_err))));
        }
    } else {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__next_fsm_state 
            = ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__start_toggle) 
               & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_dbg_ack) 
                     | (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_dbg_err))));
    }
    vlSymsp->TOP__or1k_pu.__Vtableidx4 = (((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__wr_reg) 
                                           << 4U) | 
                                          (((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__start_toggle) 
                                            << 3U) 
                                           | (((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_dbg_err) 
                                               << 2U) 
                                              | (((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_dbg_ack) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__wb_fsm_state)))));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__rdy_sync_en 
        = vlSymsp->TOP__or1k_pu.__Vtable4___PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__rdy_sync_en
        [vlSymsp->TOP__or1k_pu.__Vtableidx4];
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__err_en 
        = vlSymsp->TOP__or1k_pu.__Vtable4___PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__err_en
        [vlSymsp->TOP__or1k_pu.__Vtableidx4];
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__data_o_en 
        = vlSymsp->TOP__or1k_pu.__Vtable4___PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__data_o_en
        [vlSymsp->TOP__or1k_pu.__Vtableidx4];
    vlSymsp->TOP__or1k_pu.__PVT__wb_m2s_dbg_cyc = vlSymsp->TOP__or1k_pu.__Vtable4___PVT__wb_m2s_dbg_cyc
        [vlSymsp->TOP__or1k_pu.__Vtableidx4];
    vlSymsp->TOP__or1k_pu.__PVT__wb_m2s_dbg_stb = vlSymsp->TOP__or1k_pu.__Vtable4___PVT__wb_m2s_dbg_stb
        [vlSymsp->TOP__or1k_pu.__Vtableidx4];
    vlSymsp->TOP__or1k_pu.wb_interface0__DOT____Vcellinp__wb_arbiter_mem__wbm_cyc_i 
        = ((((0U == (0xfe000000U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_adr)) 
             & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_req) 
                << (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_mux_or1k_i__DOT__slave_sel))) 
            << 2U) | ((2U & (IData)(vlSymsp->TOP__or1k_pu.wb_interface0__DOT____Vcellout__wb_mux_or1k_d__wbs_cyc_o)) 
                      | ((0U == (0xfe000000U & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__addr_reg)) 
                         & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_m2s_dbg_cyc) 
                            << (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_mux_dbg__DOT__slave_sel)))));
    vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__next 
        = (1U & (~ (IData)((0U != ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__token) 
                                   & (IData)(vlSymsp->TOP__or1k_pu.wb_interface0__DOT____Vcellinp__wb_arbiter_mem__wbm_cyc_i))))));
    vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__order 
        = ((6U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__order)) 
           | (0U != (vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__token_lookahead
                     [0U] & (IData)(vlSymsp->TOP__or1k_pu.wb_interface0__DOT____Vcellinp__wb_arbiter_mem__wbm_cyc_i))));
    vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__order 
        = ((5U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__order)) 
           | ((IData)((0U != (vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__token_lookahead
                              [1U] & (IData)(vlSymsp->TOP__or1k_pu.wb_interface0__DOT____Vcellinp__wb_arbiter_mem__wbm_cyc_i)))) 
              << 1U));
    vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__order 
        = ((3U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__order)) 
           | ((IData)((0U != (vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__token_lookahead
                              [2U] & (IData)(vlSymsp->TOP__or1k_pu.wb_interface0__DOT____Vcellinp__wb_arbiter_mem__wbm_cyc_i)))) 
              << 2U));
}

VL_INLINE_OPT void Vor1k_pu_or1k_pu::_sequent__TOP__or1k_pu__23(Vor1k_pu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vor1k_pu_or1k_pu::_sequent__TOP__or1k_pu__23\n"); );
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_rst) {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__sel_reg = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_strobe) 
             & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_ready))) {
            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__sel_reg 
                = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__be_dec;
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_ready 
        = vlSymsp->TOP__or1k_pu.__Vdly__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_ready;
}

VL_INLINE_OPT void Vor1k_pu_or1k_pu::_sequent__TOP__or1k_pu__24(Vor1k_pu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vor1k_pu_or1k_pu::_sequent__TOP__or1k_pu__24\n"); );
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlSymsp->TOP__or1k_pu.dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__rd_fifo__RST) {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg7 = 0U;
    } else {
        if ((((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__r_fifo_en) 
              & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rpp)) 
             & (8U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter)))) {
            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg7 
                = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg6;
        }
    }
    if (vlSymsp->TOP__or1k_pu.dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__rd_fifo__RST) {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg6 = 0U;
    } else {
        if ((((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__r_fifo_en) 
              & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rpp)) 
             & (8U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter)))) {
            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg6 
                = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg5;
        }
    }
    if (vlSymsp->TOP__or1k_pu.dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__rd_fifo__RST) {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg5 = 0U;
    } else {
        if ((((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__r_fifo_en) 
              & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rpp)) 
             & (8U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter)))) {
            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg5 
                = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg4;
        }
    }
    if (vlSymsp->TOP__or1k_pu.dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__rd_fifo__RST) {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg4 = 0U;
    } else {
        if ((((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__r_fifo_en) 
              & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rpp)) 
             & (8U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter)))) {
            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg4 
                = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg3;
        }
    }
    if (vlSymsp->TOP__or1k_pu.dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__rd_fifo__RST) {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg3 = 0U;
    } else {
        if ((((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__r_fifo_en) 
              & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rpp)) 
             & (8U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter)))) {
            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg3 
                = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg2;
        }
    }
    if (vlSymsp->TOP__or1k_pu.dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__rd_fifo__RST) {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg2 = 0U;
    } else {
        if ((((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__r_fifo_en) 
              & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rpp)) 
             & (8U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter)))) {
            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg2 
                = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg1;
        }
    }
    if (vlSymsp->TOP__or1k_pu.dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__rd_fifo__RST) {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg1 = 0U;
    } else {
        if ((((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__r_fifo_en) 
              & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rpp)) 
             & (8U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter)))) {
            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg1 
                = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg0;
        }
    }
    if (vlSymsp->TOP__or1k_pu.dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__rd_fifo__RST) {
        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg0 = 0U;
    } else {
        if ((((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__r_fifo_en) 
              & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rpp)) 
             & (8U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter)))) {
            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg0 
                = (0xffU & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_dat_i 
                            >> 0x18U));
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter 
        = vlSymsp->TOP__or1k_pu.__Vdly__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter;
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__push_ok 
        = (8U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__pop_ok 
        = (0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter));
}

VL_INLINE_OPT void Vor1k_pu_or1k_pu::_sequent__TOP__or1k_pu__25(Vor1k_pu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vor1k_pu_or1k_pu::_sequent__TOP__or1k_pu__25\n"); );
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter 
        = vlSymsp->TOP__or1k_pu.__Vdly__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter;
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__push_ok 
        = (8U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__pop_ok 
        = (0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter));
}

VL_INLINE_OPT void Vor1k_pu_or1k_pu::_sequent__TOP__or1k_pu__26(Vor1k_pu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vor1k_pu_or1k_pu::_sequent__TOP__or1k_pu__26\n"); );
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg 
        = vlSymsp->TOP__or1k_pu.__Vdly__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg;
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__be_dec 
        = ((1U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_size_bytes))
            ? ((0U == (3U & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__address_counter))
                ? 8U : ((1U == (3U & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__address_counter))
                         ? 4U : ((2U == (3U & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__address_counter))
                                  ? 2U : 1U))) : ((2U 
                                                   == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_size_bytes))
                                                   ? 
                                                  ((2U 
                                                    & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__address_counter)
                                                    ? 3U
                                                    : 0xcU)
                                                   : 0xfU));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__internal_reg_status 
        = (((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__cpu_reset) 
            << 1U) | (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg));
}

VL_INLINE_OPT void Vor1k_pu_or1k_pu::_multiclk__TOP__or1k_pu__27(Vor1k_pu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vor1k_pu_or1k_pu::_multiclk__TOP__or1k_pu__27\n"); );
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_next_state 
        = ((8U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))
            ? ((4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))
                ? 0U : ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))
                         ? ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))
                             ? ((IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__update_dr)
                                 ? 0U : 0xbU) : ((IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__update_dr)
                                                  ? 0U
                                                  : 
                                                 ((0x20U 
                                                   == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__bit_count))
                                                   ? 0xbU
                                                   : 0xaU)))
                         : ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))
                             ? ((IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__update_dr)
                                 ? 0U : 9U) : ((IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__update_dr)
                                                ? 0U
                                                : (
                                                   (0U 
                                                    == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_count))
                                                    ? 0xaU
                                                    : 7U)))))
            : ((4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))
                ? ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))
                    ? ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))
                        ? ((IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__update_dr)
                            ? 0U : ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__bit_count_max)
                                     ? ((0U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_count))
                                         ? 0xaU : 7U)
                                     : 7U)) : ((IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__update_dr)
                                                ? 0U
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__module_selects) 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                                                  >> 0x34U))))
                                                    ? 7U
                                                    : 6U)))
                    : ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))
                        ? ((0U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_count))
                            ? 0U : (((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__module_selects) 
                                     & (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__capture_dr))
                                     ? 6U : 5U)) : 
                       ((IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__update_dr)
                         ? 0U : (((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__bit_count_max) 
                                  & (0U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_count)))
                                  ? 9U : 4U)))) : (
                                                   (2U 
                                                    & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__update_dr)
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_ready)
                                                       ? 4U
                                                       : 3U))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__module_selects) 
                                                      & (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__capture_dr))
                                                      ? 3U
                                                      : 2U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))
                                                     ? 
                                                    ((0U 
                                                      == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_count))
                                                      ? 0U
                                                      : 2U)
                                                     : 
                                                    ((((((~ (IData)(
                                                                    (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                                                     >> 0x34U))) 
                                                         & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__module_selects)) 
                                                        & (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__update_dr)) 
                                                       & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__burst_instruction)) 
                                                      & (IData)(
                                                                (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                                                 >> 0x32U)))
                                                      ? 1U
                                                      : 
                                                     (((((~ (IData)(
                                                                    (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                                                     >> 0x34U))) 
                                                         & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__module_selects)) 
                                                        & (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__update_dr)) 
                                                       & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__burst_instruction))
                                                       ? 5U
                                                       : 0U))))));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__op_reg_en = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state)))) {
                    if ((0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_next_state))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__op_reg_en = 1U;
                    }
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__bit_ct_en = 0U;
    if ((8U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state)))) {
                    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__bit_ct_en = 1U;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
            if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
                    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__bit_ct_en = 1U;
                } else {
                    if ((7U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_next_state))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__bit_ct_en = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state)))) {
                    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__bit_ct_en = 1U;
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__crc_clr = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state)))) {
                    if ((0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_next_state))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__crc_clr = 1U;
                    }
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__crc_en = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
            if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
                    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__crc_en = 1U;
                } else {
                    if ((7U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_next_state))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__crc_en = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state)))) {
                    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__crc_en = 1U;
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_ct_en = 0U;
    if ((8U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state)))) {
                    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_ct_en = 1U;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
            if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
                    if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__bit_count_max) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_ct_en = 1U;
                    }
                } else {
                    if ((7U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_next_state))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_ct_en = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state)))) {
                    if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__bit_count_max) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_ct_en = 1U;
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
                    if ((4U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_next_state))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_ct_en = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state)))) {
                    if ((0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_next_state))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_ct_en = 1U;
                    }
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__bit_ct_rst = 0U;
    if ((8U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state)))) {
                    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__bit_ct_rst = 1U;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
            if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
                    if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__bit_count_max) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__bit_ct_rst = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state)))) {
                    if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__bit_count_max) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__bit_ct_rst = 1U;
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
                    if ((4U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_next_state))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__bit_ct_rst = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state)))) {
                    if ((0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_next_state))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__bit_ct_rst = 1U;
                    }
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__error_reg_en = 0U;
    if ((8U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
                    if ((0U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_next_state))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__error_reg_en = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state)))) {
                    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__error_reg_en = 1U;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
            if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
                    if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__bit_count_max) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__error_reg_en = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state)))) {
                    if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__bit_count_max) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__error_reg_en = 1U;
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
                    if ((4U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_next_state))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__error_reg_en = 1U;
                    }
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_strobe = 0U;
    if ((8U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state)))) {
                    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_strobe = 1U;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
            if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
                    if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__bit_count_max) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_strobe = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state)))) {
                    if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__bit_count_max) {
                        if (((0U != (0xffffU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_count) 
                                                - (IData)(1U)))) 
                             & (0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_count)))) {
                            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_strobe = 1U;
                        }
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
                    if ((4U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_next_state))) {
                        if (((0U != (0xffffU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_count) 
                                                - (IData)(1U)))) 
                             & (0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_count)))) {
                            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_strobe = 1U;
                        }
                    }
                }
            } else {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
                    if ((0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_count))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_strobe = 1U;
                    }
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__addr_ct_en = 0U;
    if ((8U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state)))) {
                    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__addr_ct_en = 1U;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
            if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
                    if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__bit_count_max) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__addr_ct_en = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state)))) {
                    if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__bit_count_max) {
                        if (((0U != (0xffffU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_count) 
                                                - (IData)(1U)))) 
                             & (0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_count)))) {
                            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__addr_ct_en = 1U;
                        }
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
                    if ((4U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_next_state))) {
                        if (((0U != (0xffffU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_count) 
                                                - (IData)(1U)))) 
                             & (0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_count)))) {
                            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__addr_ct_en = 1U;
                        }
                    }
                }
            } else {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
                    if ((0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_count))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__addr_ct_en = 1U;
                    }
                } else {
                    if ((0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_next_state))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__addr_ct_en = 1U;
                    }
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__out_reg_ld_en = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state)))) {
                    if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__bit_count_max) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__out_reg_ld_en = 1U;
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
                    if ((4U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_next_state))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__out_reg_ld_en = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state)))) {
                    if (((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__module_selects) 
                         & (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__capture_dr))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__out_reg_ld_en = 1U;
                    }
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__out_reg_data_sel = 1U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state)))) {
                    if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__bit_count_max) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__out_reg_data_sel = 0U;
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
                    if ((4U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_next_state))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__out_reg_data_sel = 0U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state)))) {
                    if (((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__module_selects) 
                         & (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__capture_dr))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__out_reg_data_sel = 1U;
                    }
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_clr_err = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
            if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state)))) {
                    if ((7U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_next_state))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_clr_err = 1U;
                    }
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_ct_sel = 1U;
    if ((8U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state)))) {
                    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_ct_sel = 1U;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
            if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
                    if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__bit_count_max) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_ct_sel = 1U;
                    }
                } else {
                    if ((7U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_next_state))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_ct_sel = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state)))) {
                    if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__bit_count_max) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_ct_sel = 1U;
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
                    if ((4U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_next_state))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_ct_sel = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state)))) {
                    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_ct_sel = 0U;
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__addr_sel = 1U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state)))) {
                    if (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__bit_count_max) {
                        if (((0U != (0xffffU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_count) 
                                                - (IData)(1U)))) 
                             & (0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_count)))) {
                            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__addr_sel = 1U;
                        }
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
                    if ((4U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_next_state))) {
                        if (((0U != (0xffffU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_count) 
                                                - (IData)(1U)))) 
                             & (0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_count)))) {
                            vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__addr_sel = 1U;
                        }
                    }
                }
            } else {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
                    if ((0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_count))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__addr_sel = 1U;
                    }
                } else {
                    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__addr_sel = 0U;
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__tdo_output_sel = 1U;
    if ((8U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
                    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__tdo_output_sel = 2U;
                } else {
                    if ((0xbU == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_next_state))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__tdo_output_sel = 2U;
                    }
                }
            } else {
                vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__tdo_output_sel 
                    = ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))
                        ? 3U : 0U);
            }
        }
    } else {
        if ((4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
            if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
                vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__tdo_output_sel = 1U;
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state)))) {
                    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__tdo_output_sel = 1U;
                }
            }
        } else {
            if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
                    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__tdo_output_sel = 0U;
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__crc_in_sel = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
            if ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state))) {
                    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__crc_in_sel = 1U;
                } else {
                    if ((7U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_next_state))) {
                        vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__crc_in_sel = 1U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state)))) {
                    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__crc_in_sel = 0U;
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__data_to_word_counter 
        = (0xffffU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_ct_sel)
                       ? ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_count) 
                          - (IData)(1U)) : (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg)));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__data_to_addr_counter 
        = ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__addr_sel)
            ? (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__address_counter 
               + (IData)((QData)((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_size_bytes))))
            : (IData)((vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                       >> 0x10U)));
}

VL_INLINE_OPT void Vor1k_pu_or1k_pu::_combo__TOP__or1k_pu__28(Vor1k_pu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vor1k_pu_or1k_pu::_combo__TOP__or1k_pu__28\n"); );
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__or1k_pu.dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__rd_fifo__RST 
        = ((IData)(vlTOPp->wb_rst_i) | ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__reg_fcr_wren) 
                                        & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_dat_i 
                                           >> 0xaU)));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_rst 
        = ((IData)(vlTOPp->wb_rst_i) | (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_clr_err));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__crc_data_in 
        = (1U & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__crc_in_sel)
                  ? (IData)(vlTOPp->tdi_pad_i) : (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__data_out_shift_reg)));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc 
        = ((0xffffffdfU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc) 
           | (0x20U & (((0x7fffffe0U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc 
                                        >> 1U)) ^ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__crc_data_in) 
                                                   << 5U)) 
                       ^ (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc 
                          << 5U))));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc 
        = ((0xfffffeffU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc) 
           | (0x100U & (((0x7fffff00U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc 
                                         >> 1U)) ^ 
                         ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__crc_data_in) 
                          << 8U)) ^ (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc 
                                     << 8U))));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc 
        = ((0xfffffdffU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc) 
           | (0x200U & (((0x7ffffe00U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc 
                                         >> 1U)) ^ 
                         ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__crc_data_in) 
                          << 9U)) ^ (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc 
                                     << 9U))));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc 
        = ((0xffff7fffU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc) 
           | (0x8000U & (((0x7fff8000U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc 
                                          >> 1U)) ^ 
                          ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__crc_data_in) 
                           << 0xfU)) ^ (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc 
                                        << 0xfU))));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc 
        = ((0xfff7ffffU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc) 
           | (0x80000U & (((0x7ff80000U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc 
                                           >> 1U)) 
                           ^ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__crc_data_in) 
                              << 0x13U)) ^ (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc 
                                            << 0x13U))));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc 
        = ((0xffefffffU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc) 
           | (0x100000U & (((0x7ff00000U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc 
                                            >> 1U)) 
                            ^ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__crc_data_in) 
                               << 0x14U)) ^ (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc 
                                             << 0x14U))));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc 
        = ((0xffdfffffU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc) 
           | (0x200000U & (((0x7fe00000U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc 
                                            >> 1U)) 
                            ^ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__crc_data_in) 
                               << 0x15U)) ^ (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc 
                                             << 0x15U))));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc 
        = ((0xff7fffffU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc) 
           | (0x800000U & (((0x7f800000U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc 
                                            >> 1U)) 
                            ^ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__crc_data_in) 
                               << 0x17U)) ^ (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc 
                                             << 0x17U))));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc 
        = ((0xfeffffffU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc) 
           | (0x1000000U & (((0x7f000000U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc 
                                             >> 1U)) 
                             ^ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__crc_data_in) 
                                << 0x18U)) ^ (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc 
                                              << 0x18U))));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc 
        = ((0xfbffffffU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc) 
           | (0x4000000U & (((0x7c000000U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc 
                                             >> 1U)) 
                             ^ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__crc_data_in) 
                                << 0x1aU)) ^ (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc 
                                              << 0x1aU))));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc 
        = ((0xf7ffffffU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc) 
           | (0x8000000U & (((0x78000000U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc 
                                             >> 1U)) 
                             ^ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__crc_data_in) 
                                << 0x1bU)) ^ (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc 
                                              << 0x1bU))));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc 
        = ((0xdfffffffU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc) 
           | (0x20000000U & (((0x60000000U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc 
                                              >> 1U)) 
                              ^ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__crc_data_in) 
                                 << 0x1dU)) ^ (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc 
                                               << 0x1dU))));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc 
        = ((0xbfffffffU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc) 
           | (0x40000000U & (((0x40000000U & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc 
                                              >> 1U)) 
                              ^ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__crc_data_in) 
                                 << 0x1eU)) ^ (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc 
                                               << 0x1eU))));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc 
        = ((0x7fffffffU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc) 
           | (0x80000000U & (((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__crc_data_in) 
                              ^ vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc) 
                             << 0x1fU)));
}

VL_INLINE_OPT void Vor1k_pu_or1k_pu::_sequent__TOP__or1k_pu__29(Vor1k_pu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vor1k_pu_or1k_pu::_sequent__TOP__or1k_pu__29\n"); );
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__or1k_pu.__Vtableidx9 = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fsm_state;
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__ren_rst 
        = vlSymsp->TOP__or1k_pu.__Vtable9___PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__ren_rst
        [vlSymsp->TOP__or1k_pu.__Vtableidx9];
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rpp 
        = vlSymsp->TOP__or1k_pu.__Vtable9___PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rpp
        [vlSymsp->TOP__or1k_pu.__Vtableidx9];
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__r_fifo_en 
        = vlSymsp->TOP__or1k_pu.__Vtable9___PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__r_fifo_en
        [vlSymsp->TOP__or1k_pu.__Vtableidx9];
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rdata_en 
        = vlSymsp->TOP__or1k_pu.__Vtable9___PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rdata_en
        [vlSymsp->TOP__or1k_pu.__Vtableidx9];
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__r_wb_ack 
        = vlSymsp->TOP__or1k_pu.__Vtable9___PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__r_wb_ack
        [vlSymsp->TOP__or1k_pu.__Vtableidx9];
    vlSymsp->TOP__or1k_pu.__PVT__or1k_dbg_stall_i = 
        (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__du_stall_o) 
          | (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp)) 
         | (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg_cpu));
}

VL_INLINE_OPT void Vor1k_pu_or1k_pu::_multiclk__TOP__or1k_pu__30(Vor1k_pu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vor1k_pu_or1k_pu::_multiclk__TOP__or1k_pu__30\n"); );
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__A_enable 
        = (((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter) 
            != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__regA)) 
           & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__ack_sff__DOT__srflop) 
              | (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__ack_sff__DOT__syncxor)));
}

VL_INLINE_OPT void Vor1k_pu_or1k_pu::_multiclk__TOP__or1k_pu__31(Vor1k_pu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vor1k_pu_or1k_pu::_multiclk__TOP__or1k_pu__31\n"); );
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__or1k_pu.__Vtableidx8 = (((0U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter)) 
                                           << 4U) | 
                                          ((((((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__ren_sff__DOT__srflop) 
                                               | (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__ren_sff__DOT__syncxor)) 
                                              | (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__debug_select))) 
                                             & (0U 
                                                != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter))) 
                                            << 3U) 
                                           | (((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wb_wr) 
                                               << 2U) 
                                              | (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fsm_state))));
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__next_rd_fsm_state 
        = vlSymsp->TOP__or1k_pu.__Vtable8___PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__next_rd_fsm_state
        [vlSymsp->TOP__or1k_pu.__Vtableidx8];
}

VL_INLINE_OPT void Vor1k_pu_or1k_pu::_multiclk__TOP__or1k_pu__32(Vor1k_pu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vor1k_pu_or1k_pu::_multiclk__TOP__or1k_pu__32\n"); );
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__A_enable 
        = (((0xfU & ((IData)(8U) - (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))) 
            != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__regA)) 
           & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__ack_sff__DOT__srflop) 
              | (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__ack_sff__DOT__syncxor)));
}

VL_INLINE_OPT void Vor1k_pu_or1k_pu::_multiclk__TOP__or1k_pu__33(Vor1k_pu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vor1k_pu_or1k_pu::_multiclk__TOP__or1k_pu__33\n"); );
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__or1k_pu.__Vtableidx2 = (((IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__idcode_tdo) 
                                           << 8U) | 
                                          ((0x80U & 
                                            (((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__module_id_reg))
                                               ? ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__module_id_reg) 
                                                  & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__data_out_shift_reg))
                                               : ((1U 
                                                   & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__module_id_reg))
                                                   ? 
                                                  ((0U 
                                                    == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__tdo_output_sel))
                                                    ? (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__biu_ready)
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__tdo_output_sel))
                                                     ? vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__data_out_shift_reg
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__tdo_output_sel))
                                                      ? 
                                                     ((IData)(
                                                              (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                                               >> 0x15U)) 
                                                      == vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc)
                                                      : vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc)))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__tdo_output_sel))
                                                    ? (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_ready)
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__tdo_output_sel))
                                                     ? (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__data_out_shift_reg)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__tdo_output_sel))
                                                      ? 
                                                     ((IData)(
                                                              (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                                               >> 0x15U)) 
                                                      == vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc)
                                                      : vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc))))) 
                                             << 7U)) 
                                           | (((IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__bypassed_tdo) 
                                               << 6U) 
                                              | (((IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__latched_jtag_ir_neg) 
                                                  << 2U) 
                                                 | (((IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__instruction_tdo) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__shift_ir_neg))))));
    vlSymsp->TOP__or1k_pu.tdo_pad_o = vlSymsp->TOP__or1k_pu.__Vtable2_tdo_pad_o
        [vlSymsp->TOP__or1k_pu.__Vtableidx2];
}
