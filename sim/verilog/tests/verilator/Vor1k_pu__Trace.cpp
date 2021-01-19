// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vor1k_pu__Syms.h"


void Vor1k_pu::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vor1k_pu__Syms* __restrict vlSymsp = static_cast<Vor1k_pu__Syms*>(userp);
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vor1k_pu::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vor1k_pu__Syms* __restrict vlSymsp = static_cast<Vor1k_pu__Syms*>(userp);
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Variables
    WData/*95:0*/ __Vtemp12[3];
    WData/*95:0*/ __Vtemp13[3];
    WData/*95:0*/ __Vtemp14[3];
    WData/*95:0*/ __Vtemp15[3];
    WData/*95:0*/ __Vtemp16[3];
    WData/*95:0*/ __Vtemp17[3];
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0U])) {
            tracep->chgBit(oldp+0,(((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__reg_fcr_wren) 
                                    & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_dat_i 
                                       >> 9U))));
            tracep->chgBit(oldp+1,(((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__reg_fcr_wren) 
                                    & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_dat_i 
                                       >> 0xaU))));
            tracep->chgBit(oldp+2,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__reg_fcr_wren));
            tracep->chgBit(oldp+3,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__fifo_access));
            tracep->chgIData(oldp+4,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_vr),32);
            tracep->chgIData(oldp+5,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_vr2),32);
            tracep->chgIData(oldp+6,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_avr),32);
            tracep->chgIData(oldp+7,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_upr),32);
            tracep->chgIData(oldp+8,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_cpucfgr),32);
            tracep->chgIData(oldp+9,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_dmmucfgr),32);
            tracep->chgIData(oldp+10,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_immucfgr),32);
            tracep->chgIData(oldp+11,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_dccfgr),32);
            tracep->chgIData(oldp+12,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_iccfgr),32);
            tracep->chgIData(oldp+13,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_isr[0]),32);
            tracep->chgIData(oldp+14,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_isr[1]),32);
            tracep->chgIData(oldp+15,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_isr[2]),32);
            tracep->chgIData(oldp+16,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_isr[3]),32);
            tracep->chgIData(oldp+17,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_isr[4]),32);
            tracep->chgIData(oldp+18,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_isr[5]),32);
            tracep->chgIData(oldp+19,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_isr[6]),32);
            tracep->chgIData(oldp+20,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_isr[7]),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+21,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_adr),32);
            tracep->chgBit(oldp+22,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_req));
            tracep->chgIData(oldp+23,(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_or1k_i_dat),32);
            tracep->chgBit(oldp+24,(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_or1k_i_ack));
            tracep->chgBit(oldp+25,(0U));
            tracep->chgCData(oldp+26,(((5U >= (7U & 
                                               ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                                << 1U)))
                                        ? (3U & (0x28U 
                                                 >> 
                                                 (7U 
                                                  & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                                     << 1U))))
                                        : 0U)),2);
            tracep->chgIData(oldp+27,(vlSymsp->TOP__or1k_pu__wb_bfm_memory0__ram0.__PVT__dout),32);
            tracep->chgBit(oldp+28,(vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__wb_ack_o));
            tracep->chgBit(oldp+29,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__du__DOT__du_ack));
            tracep->chgBit(oldp+30,((1U & ((IData)(vlSymsp->TOP__or1k_pu.wb_interface0__DOT____Vcellout__wb_arbiter_mem__wbm_ack_o) 
                                           >> 1U))));
            tracep->chgBit(oldp+31,(((0U == (0xfe000000U 
                                             & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_adr)) 
                                     & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_req) 
                                        << (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_mux_or1k_i__DOT__slave_sel)))));
            tracep->chgBit(oldp+32,((1U & ((IData)(vlSymsp->TOP__or1k_pu.wb_interface0__DOT____Vcellout__wb_arbiter_mem__wbm_ack_o) 
                                           >> 2U))));
            tracep->chgBit(oldp+33,((1U & (IData)(vlSymsp->TOP__or1k_pu.wb_interface0__DOT____Vcellout__wb_arbiter_mem__wbm_ack_o))));
            tracep->chgBit(oldp+34,(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_mux_or1k_d__DOT__wbm_err));
            tracep->chgBit(oldp+35,(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_mux_or1k_i__DOT__wbm_err));
            tracep->chgBit(oldp+36,(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_mux_or1k_i__DOT__slave_sel));
            tracep->chgBit(oldp+37,((0U == (0xfe000000U 
                                            & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_adr))));
            tracep->chgBit(oldp+38,(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_mux_dbg__DOT__wbm_err));
            __Vtemp12[0U] = vlSymsp->TOP__or1k_pu__wb_bfm_memory0__ram0.__PVT__dout;
            __Vtemp12[1U] = vlSymsp->TOP__or1k_pu__wb_bfm_memory0__ram0.__PVT__dout;
            __Vtemp12[2U] = vlSymsp->TOP__or1k_pu__wb_bfm_memory0__ram0.__PVT__dout;
            tracep->chgWData(oldp+39,(__Vtemp12),96);
            tracep->chgCData(oldp+42,(vlSymsp->TOP__or1k_pu.wb_interface0__DOT____Vcellout__wb_arbiter_mem__wbm_ack_o),3);
            tracep->chgCData(oldp+43,(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__grant),3);
            tracep->chgCData(oldp+44,(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel),2);
            tracep->chgBit(oldp+45,(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__active));
            tracep->chgIData(oldp+46,(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__yy),32);
            tracep->chgCData(oldp+47,(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__token),3);
            tracep->chgCData(oldp+48,(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__token_lookahead[0]),3);
            tracep->chgCData(oldp+49,(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__token_lookahead[1]),3);
            tracep->chgCData(oldp+50,(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__token_lookahead[2]),3);
            tracep->chgCData(oldp+51,((0x3fU & (((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__token) 
                                                 << 3U) 
                                                | (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__token)))),6);
            tracep->chgBit(oldp+52,((((((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_cyc_i) 
                                        & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_stb_i)) 
                                       & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_we_i))) 
                                      & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__fifo_access)) 
                                     & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__reg_dlab_bit)))));
            tracep->chgBit(oldp+53,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wb_wr));
            tracep->chgBit(oldp+54,(((((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_cyc_i) 
                                       & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_stb_i)) 
                                      & (0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_sel_i))) 
                                     & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__reg_dlab_bit) 
                                        | (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__fifo_access))))));
            tracep->chgBit(oldp+55,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__reg_dlab_bit));
            tracep->chgCData(oldp+56,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__reg_ier),4);
            tracep->chgBit(oldp+57,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__thr_int_arm));
            tracep->chgBit(oldp+58,(((((((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_cyc_i) 
                                         & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_stb_i)) 
                                        & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_we_i)) 
                                       & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_sel_i) 
                                          >> 2U)) & 
                                      (~ (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_adr_i 
                                          >> 2U))) 
                                     & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__reg_dlab_bit)))));
            tracep->chgCData(oldp+59,((3U | ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__reg_dlab_bit) 
                                             << 7U))),8);
            tracep->chgCData(oldp+60,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
            tracep->chgCData(oldp+61,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
            tracep->chgCData(oldp+62,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
            tracep->chgCData(oldp+63,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
            tracep->chgCData(oldp+64,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
            tracep->chgCData(oldp+65,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
            tracep->chgCData(oldp+66,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
            tracep->chgCData(oldp+67,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
            tracep->chgCData(oldp+68,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
            tracep->chgCData(oldp+69,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
            tracep->chgCData(oldp+70,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
            tracep->chgCData(oldp+71,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
            tracep->chgCData(oldp+72,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
            tracep->chgCData(oldp+73,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
            tracep->chgCData(oldp+74,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
            tracep->chgCData(oldp+75,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
            tracep->chgCData(oldp+76,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
            tracep->chgCData(oldp+77,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
            tracep->chgCData(oldp+78,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
            tracep->chgCData(oldp+79,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
            tracep->chgCData(oldp+80,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
            tracep->chgCData(oldp+81,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
            tracep->chgCData(oldp+82,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
            tracep->chgCData(oldp+83,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
            tracep->chgCData(oldp+84,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
            tracep->chgCData(oldp+85,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
            tracep->chgCData(oldp+86,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
            tracep->chgCData(oldp+87,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
            tracep->chgCData(oldp+88,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
            tracep->chgCData(oldp+89,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
            tracep->chgCData(oldp+90,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
            tracep->chgCData(oldp+91,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
            tracep->chgBit(oldp+92,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__traceport_exec_valid_o));
            tracep->chgIData(oldp+93,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__traceport_exec_pc_o),32);
            tracep->chgIData(oldp+94,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__traceport_exec_insn_o),32);
            tracep->chgIData(oldp+95,(vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__adr_r),23);
            tracep->chgBit(oldp+96,(vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__valid_r));
            tracep->chgBit(oldp+97,(vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__is_last_r));
            tracep->chgIData(oldp+98,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__rf_result_o),32);
            tracep->chgIData(oldp+99,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_epcr),32);
            tracep->chgIData(oldp+100,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_eear),32);
            tracep->chgIData(oldp+101,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_esr),32);
            tracep->chgIData(oldp+102,(vlSymsp->TOP__or1k_pu__core__or1k_cpu.__PVT__cappuccino__DOT__monitor_execute_insn_reg),32);
            tracep->chgIData(oldp+103,((0x1fffffU & 
                                        (vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__adr_r 
                                         >> 2U))),21);
            tracep->chgIData(oldp+104,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pc_fetch_to_decode),32);
            tracep->chgIData(oldp+105,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pc_decode_to_execute),32);
            tracep->chgIData(oldp+106,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pc_execute_to_ctrl),32);
            tracep->chgBit(oldp+107,((1U & (~ (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_div_o) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_done) 
                                                    & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_valid_o))))) 
                                               | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_mul_o) 
                                                  & (~ 
                                                     (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__threestagemultiply__DOT__mul_valid_shr) 
                                                       >> 2U) 
                                                      & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_valid_o))))))))));
            tracep->chgBit(oldp+108,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__atomic_gen__DOT__atomic_flag_clear));
            tracep->chgBit(oldp+109,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__atomic_gen__DOT__atomic_flag_set));
            tracep->chgIData(oldp+110,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_alu_result_o),32);
            tracep->chgIData(oldp+111,((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_rfe_o) 
                                         | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__doing_rfe))
                                         ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_epcr
                                         : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__exception_pc_addr)),32);
            tracep->chgBit(oldp+112,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_branch_exception_o));
            tracep->chgBit(oldp+113,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_bubble_o));
            tracep->chgBit(oldp+114,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_carry_clear_o));
            tracep->chgBit(oldp+115,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_carry_set_o));
            tracep->chgIData(oldp+116,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_epcr_o),32);
            tracep->chgBit(oldp+117,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ibus_align_o));
            tracep->chgBit(oldp+118,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ibus_err_o));
            tracep->chgBit(oldp+119,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_illegal_o));
            tracep->chgBit(oldp+120,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ipagefault_o));
            tracep->chgBit(oldp+121,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_itlb_miss_o));
            tracep->chgBit(oldp+122,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_syscall_o));
            tracep->chgBit(oldp+123,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_trap_o));
            tracep->chgBit(oldp+124,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_flag_clear_o));
            tracep->chgBit(oldp+125,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_flag_set_o));
            tracep->chgCData(oldp+126,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_length_o),2);
            tracep->chgBit(oldp+127,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_zext_o));
            tracep->chgBit(oldp+128,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_lsu_atomic_o));
            tracep->chgBit(oldp+129,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_lsu_store_o));
            tracep->chgBit(oldp+130,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_mfspr_o));
            tracep->chgBit(oldp+131,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_msync_o));
            tracep->chgBit(oldp+132,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_mtspr_o));
            tracep->chgBit(oldp+133,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_mul_o));
            tracep->chgBit(oldp+134,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_rfe_o));
            tracep->chgBit(oldp+135,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_overflow_clear_o));
            tracep->chgBit(oldp+136,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_overflow_set_o));
            tracep->chgSData(oldp+137,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_fpcsr_o),12);
            tracep->chgBit(oldp+138,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_fpcsr_set_o));
            tracep->chgBit(oldp+139,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_rf_wb_o));
            tracep->chgIData(oldp+140,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_rfb_o),32);
            tracep->chgCData(oldp+141,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_rfd_adr_o),5);
            tracep->chgBit(oldp+142,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_except_ibus_err_o));
            tracep->chgBit(oldp+143,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_except_ipagefault_o));
            tracep->chgBit(oldp+144,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_except_itlb_miss_o));
            tracep->chgBit(oldp+145,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_valid_o));
            tracep->chgBit(oldp+146,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__doing_rfe));
            tracep->chgIData(oldp+147,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_npc),32);
            tracep->chgBit(oldp+148,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_adder_do_carry_o));
            tracep->chgBit(oldp+149,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_adder_do_sub_o));
            tracep->chgBit(oldp+150,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_bubble_o));
            tracep->chgBit(oldp+151,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_except_ibus_align_o));
            tracep->chgBit(oldp+152,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_except_ibus_err_o));
            tracep->chgBit(oldp+153,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_except_illegal_o));
            tracep->chgBit(oldp+154,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_except_ipagefault_o));
            tracep->chgBit(oldp+155,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_except_itlb_miss_o));
            tracep->chgBit(oldp+156,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_except_syscall_o));
            tracep->chgBit(oldp+157,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_except_trap_o));
            tracep->chgSData(oldp+158,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_imm16_o),16);
            tracep->chgIData(oldp+159,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_immediate_o),32);
            tracep->chgBit(oldp+160,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_immediate_sel_o));
            tracep->chgSData(oldp+161,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_immjbr_upper_o),10);
            tracep->chgIData(oldp+162,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_jal_result_o),32);
            tracep->chgCData(oldp+163,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_lsu_length_o),2);
            tracep->chgBit(oldp+164,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_lsu_zext_o));
            tracep->chgIData(oldp+165,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_mispredict_target_o),32);
            tracep->chgBit(oldp+166,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_add_o));
            tracep->chgBit(oldp+167,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_alu_o));
            tracep->chgBit(oldp+168,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_bf_o));
            tracep->chgBit(oldp+169,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_bnf_o));
            tracep->chgBit(oldp+170,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_branch_o));
            tracep->chgBit(oldp+171,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_brcond_o));
            tracep->chgBit(oldp+172,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_div_o));
            tracep->chgBit(oldp+173,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_div_signed_o));
            tracep->chgBit(oldp+174,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_div_unsigned_o));
            tracep->chgBit(oldp+175,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_ffl1_o));
            tracep->chgBit(oldp+176,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_jal_o));
            tracep->chgBit(oldp+177,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_jbr_o));
            tracep->chgBit(oldp+178,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_jr_o));
            tracep->chgBit(oldp+179,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_lsu_atomic_o));
            tracep->chgBit(oldp+180,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_mfspr_o));
            tracep->chgBit(oldp+181,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_movhi_o));
            tracep->chgBit(oldp+182,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_ext_o));
            tracep->chgBit(oldp+183,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_msync_o));
            tracep->chgBit(oldp+184,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_mtspr_o));
            tracep->chgBit(oldp+185,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_mul_o));
            tracep->chgBit(oldp+186,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_mul_signed_o));
            tracep->chgBit(oldp+187,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_mul_unsigned_o));
            tracep->chgBit(oldp+188,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_rfe_o));
            tracep->chgBit(oldp+189,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_setflag_o));
            tracep->chgBit(oldp+190,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_shift_o));
            tracep->chgCData(oldp+191,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_opc_alu_o),4);
            tracep->chgCData(oldp+192,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_opc_alu_secondary_o),4);
            tracep->chgCData(oldp+193,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_opc_insn_o),6);
            tracep->chgBit(oldp+194,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_predicted_flag_o));
            tracep->chgBit(oldp+195,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rf_wb_o));
            tracep->chgIData(oldp+196,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o),32);
            tracep->chgIData(oldp+197,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfb_o),32);
            tracep->chgCData(oldp+198,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfd_adr_o),5);
            tracep->chgBit(oldp+199,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__fetch_exception_taken_o));
            tracep->chgBit(oldp+200,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__fetch_valid_o));
            tracep->chgIData(oldp+201,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__threestagemultiply__DOT__mul_result2),32);
            tracep->chgBit(oldp+202,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__padv_ctrl));
            tracep->chgBit(oldp+203,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__spr_bus_ack_ic_i));
            tracep->chgIData(oldp+204,(((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_spr_cs_r)
                                         ? ((0U >= (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__spr_way_idx_r))
                                             ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_dout
                                            [vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__spr_way_idx_r]
                                             : 0U) : 
                                        ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_spr_cs_r)
                                          ? ((0U >= (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__spr_way_idx_r))
                                              ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_dout
                                             [vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__spr_way_idx_r]
                                              : 0U)
                                          : ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dmmucr_spr_cs_r)
                                              ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dmmucr
                                              : 0U)))),32);
            tracep->chgIData(oldp+205,((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__spr_bus_ack) 
                                         & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__spr_bus_ack_r)))
                                         ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__spr_bus_dat
                                         : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__spr_bus_dat_r)),32);
            tracep->chgIData(oldp+206,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__rfspr_gen__DOT__rfspr__DOT__rdata),32);
            tracep->chgBit(oldp+207,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__wb_rf_wb_o));
            tracep->chgCData(oldp+208,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__wb_rfd_adr_o),5);
            tracep->chgIData(oldp+209,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__traceport_stage_decode_insn),32);
            tracep->chgIData(oldp+210,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__traceport_stage_exec_insn),32);
            tracep->chgIData(oldp+211,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__pc_fetch),32);
            tracep->chgBit(oldp+212,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ctrl_branch_exception_r));
            tracep->chgBit(oldp+213,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__nop_ack));
            tracep->chgBit(oldp+214,((4U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state))));
            tracep->chgBit(oldp+215,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__refill_done));
            tracep->chgIData(oldp+216,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_phys_addr),32);
            tracep->chgBit(oldp+217,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_cache_inhibit));
            tracep->chgBit(oldp+218,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__tlb_reload_ack));
            tracep->chgIData(oldp+219,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__tlb_reload_data),32);
            tracep->chgBit(oldp+220,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__fetching_brcond));
            tracep->chgBit(oldp+221,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__fetching_mispredicted_branch));
            tracep->chgBit(oldp+222,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__exception_while_tlb_reload));
            tracep->chgBit(oldp+223,(((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_except_ipagefault_o) 
                                      & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_branch_exception_o))));
            tracep->chgCData(oldp+224,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__state),3);
            tracep->chgIData(oldp+225,(((0xffffffe0U 
                                         & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_adr) 
                                        | (0x1fU & 
                                           ((IData)(4U) 
                                            + vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_adr)))),32);
            tracep->chgIData(oldp+226,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_dat),32);
            tracep->chgBit(oldp+227,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_ack));
            tracep->chgBit(oldp+228,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__ic_enable_r));
            tracep->chgCData(oldp+229,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state),4);
            tracep->chgBit(oldp+230,((2U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state))));
            tracep->chgBit(oldp+231,((8U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state))));
            tracep->chgCData(oldp+232,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__invalidate_adr),8);
            tracep->chgCData(oldp+233,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__refill_valid),8);
            tracep->chgCData(oldp+234,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__refill_valid_r),8);
            tracep->chgQData(oldp+235,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_ram__DOT__rdata),41);
            tracep->chgBit(oldp+237,((1U & (IData)(
                                                   (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_ram__DOT__rdata 
                                                    >> 0x28U)))));
            tracep->chgIData(oldp+238,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_way_out[0]),20);
            tracep->chgIData(oldp+239,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_way_out[1]),20);
            tracep->chgIData(oldp+240,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_way_in[0]),20);
            tracep->chgIData(oldp+241,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_way_in[1]),20);
            tracep->chgIData(oldp+242,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_way_save[0]),20);
            tracep->chgIData(oldp+243,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_way_save[1]),20);
            tracep->chgIData(oldp+244,((0x7ffffU & 
                                        (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_adr 
                                         >> 0xdU))),19);
            tracep->chgSData(oldp+245,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_waddr[0]),11);
            tracep->chgSData(oldp+246,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_waddr[1]),11);
            tracep->chgIData(oldp+247,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_din[0]),32);
            tracep->chgIData(oldp+248,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_din[1]),32);
            tracep->chgIData(oldp+249,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_dout[0]),32);
            tracep->chgIData(oldp+250,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_dout[1]),32);
            tracep->chgCData(oldp+251,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_we),2);
            tracep->chgCData(oldp+252,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_save_lru),2);
            tracep->chgIData(oldp+253,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__check_way_tag[0]),19);
            tracep->chgIData(oldp+254,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__check_way_tag[1]),19);
            tracep->chgBit(oldp+255,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__check_way_valid[0]));
            tracep->chgBit(oldp+256,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__check_way_valid[1]));
            tracep->chgIData(oldp+257,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__w1),32);
            tracep->chgIData(oldp+258,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__w2),32);
            tracep->chgSData(oldp+259,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_waddr
                                       [0U]),11);
            tracep->chgBit(oldp+260,((1U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_we))));
            tracep->chgIData(oldp+261,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_din
                                       [0U]),32);
            tracep->chgIData(oldp+262,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_memories__BRA__0__KET____DOT__way_data_ram__DOT__rdata),32);
            tracep->chgSData(oldp+263,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_waddr
                                       [1U]),11);
            tracep->chgBit(oldp+264,((1U & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_we) 
                                            >> 1U))));
            tracep->chgIData(oldp+265,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_din
                                       [1U]),32);
            tracep->chgIData(oldp+266,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_memories__BRA__1__KET____DOT__way_data_ram__DOT__rdata),32);
            tracep->chgIData(oldp+267,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_dout[0]),32);
            tracep->chgIData(oldp+268,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_huge_dout[0]),32);
            tracep->chgBit(oldp+269,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_huge_we));
            tracep->chgIData(oldp+270,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_dout[0]),32);
            tracep->chgIData(oldp+271,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_huge_dout[0]),32);
            tracep->chgBit(oldp+272,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_huge_we));
            tracep->chgBit(oldp+273,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_reload_we));
            tracep->chgIData(oldp+274,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_reload_din),32);
            tracep->chgBit(oldp+275,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_reload_we));
            tracep->chgIData(oldp+276,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_reload_din),32);
            tracep->chgBit(oldp+277,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_spr_cs_r));
            tracep->chgBit(oldp+278,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_spr_cs_r));
            tracep->chgBit(oldp+279,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__immucr_spr_cs_r));
            tracep->chgIData(oldp+280,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__immucr),32);
            tracep->chgBit(oldp+281,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__spr_way_idx_r));
            tracep->chgBit(oldp+282,((3U == (3U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_huge_dout
                                             [0U]))));
            tracep->chgBit(oldp+283,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__way_hit));
            tracep->chgBit(oldp+284,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__way_huge_hit));
            tracep->chgBit(oldp+285,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__tlb_reload_pagefault));
            tracep->chgBit(oldp+286,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__tlb_reload_huge));
            tracep->chgBit(oldp+287,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__sxe));
            tracep->chgBit(oldp+288,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__uxe));
            tracep->chgBit(oldp+289,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__spr_bus_ack));
            tracep->chgBit(oldp+290,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__spr_bus_ack_r));
            tracep->chgIData(oldp+291,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__spr_bus_dat),32);
            tracep->chgIData(oldp+292,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__spr_bus_dat_r),32);
            tracep->chgIData(oldp+293,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_match_regs__DOT__rdata_a),32);
            tracep->chgIData(oldp+294,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_match_regs__DOT__rdata_b),32);
            tracep->chgIData(oldp+295,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_translate_regs__DOT__rdata_a),32);
            tracep->chgIData(oldp+296,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_translate_regs__DOT__rdata_b),32);
            tracep->chgIData(oldp+297,(((IData)(8U) 
                                        + vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pc_fetch_to_decode)),32);
            tracep->chgBit(oldp+298,((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_div_o) 
                                       & (~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_done) 
                                             & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_valid_o))))) 
                                      | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_mul_o) 
                                         & (~ (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__threestagemultiply__DOT__mul_valid_shr) 
                                                >> 2U) 
                                               & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_valid_o))))))));
            tracep->chgIData(oldp+299,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__b),32);
            tracep->chgIData(oldp+300,((~ vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__b)),32);
            tracep->chgIData(oldp+301,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__b_mux),32);
            tracep->chgBit(oldp+302,((vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o 
                                      == vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__b)));
            tracep->chgCData(oldp+303,((7U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_opc_alu_secondary_o))),3);
            tracep->chgIData(oldp+304,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__shift_result),32);
            tracep->chgBit(oldp+305,((0U != (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_lut))));
            tracep->chgIData(oldp+306,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result),32);
            tracep->chgBit(oldp+307,((1U & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__threestagemultiply__DOT__mul_valid_shr) 
                                             >> 2U) 
                                            & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_valid_o))))));
            tracep->chgBit(oldp+308,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__mul_signed_overflow));
            tracep->chgIData(oldp+309,(((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_neg)
                                         ? ((IData)(1U) 
                                            + (~ vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_n))
                                         : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_n)),32);
            tracep->chgBit(oldp+310,(((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_done) 
                                      & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_valid_o)))));
            tracep->chgBit(oldp+311,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_by_zero_r));
            tracep->chgIData(oldp+312,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk5__DOT__ffl1_result_wire),32);
            tracep->chgBit(oldp+313,(((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_alu_o) 
                                      & (0xeU == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_opc_alu_o)))));
            tracep->chgCData(oldp+314,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_lut),4);
            tracep->chgIData(oldp+315,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__threestagemultiply__DOT__mul_opa),32);
            tracep->chgIData(oldp+316,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__threestagemultiply__DOT__mul_opb),32);
            tracep->chgIData(oldp+317,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__threestagemultiply__DOT__mul_result1),32);
            tracep->chgCData(oldp+318,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__threestagemultiply__DOT__mul_valid_shr),3);
            tracep->chgCData(oldp+319,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_count),6);
            tracep->chgIData(oldp+320,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_n),32);
            tracep->chgIData(oldp+321,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_d),32);
            tracep->chgIData(oldp+322,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_r),32);
            tracep->chgQData(oldp+323,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_sub),33);
            tracep->chgBit(oldp+325,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_neg));
            tracep->chgBit(oldp+326,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_done));
            tracep->chgBit(oldp+327,((0U == (7U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_opc_alu_secondary_o)))));
            tracep->chgBit(oldp+328,((1U == (7U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_opc_alu_secondary_o)))));
            tracep->chgBit(oldp+329,((2U == (7U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_opc_alu_secondary_o)))));
            tracep->chgIData(oldp+330,((IData)(((((QData)((IData)(
                                                                  ((2U 
                                                                    == 
                                                                    (7U 
                                                                     & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_opc_alu_secondary_o)))
                                                                    ? 
                                                                   (- (IData)(
                                                                              (1U 
                                                                               & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o 
                                                                                >> 0x1fU))))
                                                                    : 0U))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__barrel_shifter__DOT__shift_lsw))) 
                                                >> 
                                                (0x1fU 
                                                 & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__b)))),32);
            tracep->chgIData(oldp+331,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__barrel_shifter__DOT__shift_lsw),32);
            tracep->chgIData(oldp+332,(((2U == (7U 
                                                & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_opc_alu_secondary_o)))
                                         ? (- (IData)(
                                                      (1U 
                                                       & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o 
                                                          >> 0x1fU))))
                                         : 0U)),32);
            tracep->chgQData(oldp+333,(((((QData)((IData)(
                                                          ((2U 
                                                            == 
                                                            (7U 
                                                             & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_opc_alu_secondary_o)))
                                                            ? 
                                                           (- (IData)(
                                                                      (1U 
                                                                       & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o 
                                                                          >> 0x1fU))))
                                                            : 0U))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__barrel_shifter__DOT__shift_lsw))) 
                                        >> (0x1fU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__b))),64);
            tracep->chgIData(oldp+335,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__lsu_sdat),32);
            tracep->chgBit(oldp+336,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_enable_r));
            tracep->chgBit(oldp+337,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__except_dtlb_miss_r));
            tracep->chgBit(oldp+338,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__except_dpagefault_r));
            tracep->chgBit(oldp+339,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_full));
            tracep->chgBit(oldp+340,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_write_pending));
            tracep->chgIData(oldp+341,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__atomic_addr),32);
            tracep->chgBit(oldp+342,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__atomic_reserve));
            tracep->chgBit(oldp+343,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_refill_r));
            tracep->chgSData(oldp+344,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__write_pointer),9);
            tracep->chgSData(oldp+345,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__read_pointer),9);
            tracep->chgCData(oldp+346,((0xffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__read_pointer))),8);
            tracep->chgCData(oldp+347,((0xffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__write_pointer))),8);
            tracep->chgWData(oldp+348,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_ram__DOT__rdata),101);
            tracep->chgWData(oldp+352,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_ram__DOT__bypass_gen__DOT__din_r),101);
            tracep->chgBit(oldp+356,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_ram__DOT__bypass_gen__DOT__bypass));
            tracep->chgCData(oldp+357,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__invalidate_adr),8);
            tracep->chgCData(oldp+358,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__refill_valid),8);
            tracep->chgCData(oldp+359,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__refill_valid_r),8);
            tracep->chgQData(oldp+360,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_ram__DOT__rdata),39);
            tracep->chgBit(oldp+362,((1U & (IData)(
                                                   (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_ram__DOT__rdata 
                                                    >> 0x26U)))));
            tracep->chgIData(oldp+363,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_way_out[0]),19);
            tracep->chgIData(oldp+364,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_way_out[1]),19);
            tracep->chgIData(oldp+365,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_way_save[0]),19);
            tracep->chgIData(oldp+366,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_way_save[1]),19);
            tracep->chgIData(oldp+367,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_dout[0]),32);
            tracep->chgIData(oldp+368,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_dout[1]),32);
            tracep->chgCData(oldp+369,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_save_lru),2);
            tracep->chgIData(oldp+370,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__check_way_tag[0]),18);
            tracep->chgIData(oldp+371,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__check_way_tag[1]),18);
            tracep->chgBit(oldp+372,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__check_way_valid[0]));
            tracep->chgBit(oldp+373,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__check_way_valid[1]));
            tracep->chgBit(oldp+374,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__snoop_check));
            tracep->chgIData(oldp+375,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__w1),32);
            tracep->chgIData(oldp+376,(((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__0__KET____DOT__way_data_ram__DOT__bypass_gen__DOT__bypass)
                                         ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__0__KET____DOT__way_data_ram__DOT__bypass_gen__DOT__din_r
                                         : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__0__KET____DOT__way_data_ram__DOT__rdata)),32);
            tracep->chgIData(oldp+377,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__0__KET____DOT__way_data_ram__DOT__rdata),32);
            tracep->chgIData(oldp+378,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__0__KET____DOT__way_data_ram__DOT__bypass_gen__DOT__din_r),32);
            tracep->chgBit(oldp+379,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__0__KET____DOT__way_data_ram__DOT__bypass_gen__DOT__bypass));
            tracep->chgIData(oldp+380,(((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__1__KET____DOT__way_data_ram__DOT__bypass_gen__DOT__bypass)
                                         ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__1__KET____DOT__way_data_ram__DOT__bypass_gen__DOT__din_r
                                         : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__1__KET____DOT__way_data_ram__DOT__rdata)),32);
            tracep->chgIData(oldp+381,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__1__KET____DOT__way_data_ram__DOT__rdata),32);
            tracep->chgIData(oldp+382,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__1__KET____DOT__way_data_ram__DOT__bypass_gen__DOT__din_r),32);
            tracep->chgBit(oldp+383,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__1__KET____DOT__way_data_ram__DOT__bypass_gen__DOT__bypass));
            tracep->chgIData(oldp+384,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_dout[0]),32);
            tracep->chgIData(oldp+385,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_huge_dout[0]),32);
            tracep->chgBit(oldp+386,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_huge_we));
            tracep->chgIData(oldp+387,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_dout[0]),32);
            tracep->chgIData(oldp+388,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_huge_dout[0]),32);
            tracep->chgBit(oldp+389,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_huge_we));
            tracep->chgBit(oldp+390,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_reload_we));
            tracep->chgIData(oldp+391,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_reload_din),32);
            tracep->chgBit(oldp+392,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_reload_we));
            tracep->chgIData(oldp+393,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_reload_din),32);
            tracep->chgBit(oldp+394,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_spr_cs_r));
            tracep->chgBit(oldp+395,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_spr_cs_r));
            tracep->chgBit(oldp+396,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dmmucr_spr_cs_r));
            tracep->chgIData(oldp+397,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dmmucr),32);
            tracep->chgBit(oldp+398,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__spr_way_idx_r));
            tracep->chgBit(oldp+399,((3U == (3U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_huge_dout
                                             [0U]))));
            tracep->chgBit(oldp+400,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__tlb_reload_pagefault));
            tracep->chgBit(oldp+401,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__spr_bus_ack));
            tracep->chgIData(oldp+402,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_match_regs__DOT__rdata_a),32);
            tracep->chgIData(oldp+403,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_match_regs__DOT__rdata_b),32);
            tracep->chgIData(oldp+404,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_translate_regs__DOT__rdata_a),32);
            tracep->chgIData(oldp+405,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_translate_regs__DOT__rdata_b),32);
            tracep->chgIData(oldp+406,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_wb_mux_cappuccino__DOT__rf_result),32);
            tracep->chgBit(oldp+407,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_wb_mux_cappuccino__DOT__wb_op_mul));
            tracep->chgIData(oldp+408,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__rfa__DOT__rdata),32);
            tracep->chgIData(oldp+409,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__rfb__DOT__rdata),32);
            tracep->chgIData(oldp+410,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__wb_hazard_result),32);
            tracep->chgIData(oldp+411,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__execute_rfa),32);
            tracep->chgIData(oldp+412,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__execute_rfb),32);
            tracep->chgBit(oldp+413,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__flushing));
            tracep->chgBit(oldp+414,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__execute_hazard_a));
            tracep->chgBit(oldp+415,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__execute_hazard_b));
            tracep->chgIData(oldp+416,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__execute_hazard_result_r),32);
            tracep->chgIData(oldp+417,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__execute_hazard_result),32);
            tracep->chgBit(oldp+418,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__ctrl_hazard_a));
            tracep->chgBit(oldp+419,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__ctrl_hazard_b));
            tracep->chgIData(oldp+420,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__ctrl_hazard_result_r),32);
            tracep->chgIData(oldp+421,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__ctrl_hazard_result),32);
            tracep->chgBit(oldp+422,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__wb_hazard_a));
            tracep->chgBit(oldp+423,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__wb_hazard_b));
            tracep->chgBit(oldp+424,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__use_last_wb_a));
            tracep->chgBit(oldp+425,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__wb_to_decode_bypass_a));
            tracep->chgIData(oldp+426,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__wb_to_decode_result_a),32);
            tracep->chgIData(oldp+427,(((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__use_last_wb_a)
                                         ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__wb_to_decode_result_a
                                         : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__rf_result_o)),32);
            tracep->chgBit(oldp+428,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__use_last_wb_b));
            tracep->chgBit(oldp+429,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__wb_to_decode_bypass_b));
            tracep->chgIData(oldp+430,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__wb_to_decode_result_b),32);
            tracep->chgIData(oldp+431,(((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__use_last_wb_b)
                                         ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__wb_to_decode_result_b
                                         : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__rf_result_o)),32);
            tracep->chgBit(oldp+432,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__genblk1__DOT__spr_gpr_read_ack));
            tracep->chgCData(oldp+433,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__genblk1__DOT__wb_rfd_adr_expand),6);
            tracep->chgSData(oldp+434,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_esr),16);
            tracep->chgIData(oldp+435,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_evbar),32);
            tracep->chgIData(oldp+436,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picmr),32);
            tracep->chgIData(oldp+437,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__spr_ttmr),32);
            tracep->chgIData(oldp+438,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__spr_ttcr),32);
            tracep->chgSData(oldp+439,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_fpcsr),12);
            tracep->chgIData(oldp+440,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_ppc),32);
            tracep->chgBit(oldp+441,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__execute_delay_slot));
            tracep->chgBit(oldp+442,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__ctrl_delay_slot));
            tracep->chgBit(oldp+443,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__execute_waiting_r));
            tracep->chgBit(oldp+444,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__decode_execute_halt));
            tracep->chgBit(oldp+445,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__exception_taken));
            tracep->chgIData(oldp+446,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__last_branch_insn_pc),32);
            tracep->chgIData(oldp+447,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__last_branch_target_pc),32);
            tracep->chgBit(oldp+448,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__exception_r));
            tracep->chgIData(oldp+449,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__exception_pc_addr),32);
            tracep->chgBit(oldp+450,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__waiting_for_fetch));
            tracep->chgBit(oldp+451,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__doing_rfe_r));
            tracep->chgBit(oldp+452,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__deassert_doing_rfe));
            tracep->chgBit(oldp+453,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__ctrl_stage_exceptions));
            tracep->chgBit(oldp+454,(((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__fetch_exception_taken_o) 
                                      & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__decode_execute_halt))));
            tracep->chgIData(oldp+455,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_dmr1),32);
            tracep->chgIData(oldp+456,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_dmr2),32);
            tracep->chgIData(oldp+457,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_dsr),32);
            tracep->chgIData(oldp+458,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_drr),32);
            tracep->chgBit(oldp+459,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__cpu_stall));
            tracep->chgCData(oldp+460,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pstep),6);
            tracep->chgBit(oldp+461,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__stepping));
            tracep->chgBit(oldp+462,((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__du__DOT__branch_step) 
                                       >> 1U) & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__stepping))));
            tracep->chgBit(oldp+463,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__stepped_into_exception));
            tracep->chgBit(oldp+464,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__stepped_into_rfe));
            tracep->chgBit(oldp+465,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__du_npc_written));
            tracep->chgBit(oldp+466,((1U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_dsr 
                                            >> 0xdU))));
            tracep->chgBit(oldp+467,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__ctrl_flag_clear));
            tracep->chgBit(oldp+468,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__ctrl_flag_set));
            tracep->chgBit(oldp+469,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__du__DOT__du_stall_r));
            tracep->chgCData(oldp+470,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__du__DOT__branch_step),2);
            tracep->chgBit(oldp+471,(((1U == (3U & 
                                              (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__spr_ttmr 
                                               >> 0x1eU))) 
                                      & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__ttcr_match))));
            tracep->chgBit(oldp+472,((((0U != (3U & 
                                               (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__spr_ttmr 
                                                >> 0x1eU))) 
                                       & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__ttcr_match))) 
                                      | (3U == (3U 
                                                & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__spr_ttmr 
                                                   >> 0x1eU))))));
            tracep->chgBit(oldp+473,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__ttcr_match));
        }
        if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
                          [1U] | vlTOPp->__Vm_traceActivity
                          [2U]) | vlTOPp->__Vm_traceActivity
                         [0xaU]))) {
            __Vtemp13[0U] = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__addr_reg;
            __Vtemp13[1U] = (IData)((((QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_adr)) 
                                      << 0x20U) | (QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_adr))));
            __Vtemp13[2U] = (IData)(((((QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_adr)) 
                                       << 0x20U) | (QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_adr))) 
                                     >> 0x20U));
            tracep->chgIData(oldp+474,(((0x5fU >= (0x7fU 
                                                   & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                                      << 5U)))
                                         ? (((0U == 
                                              (0x1fU 
                                               & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                                  << 5U)))
                                              ? 0U : 
                                             (__Vtemp13[
                                              ((IData)(1U) 
                                               + (3U 
                                                  & (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                                      << 5U))))) 
                                            | (__Vtemp13[
                                               (3U 
                                                & (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel))] 
                                               >> (0x1fU 
                                                   & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                                      << 5U))))
                                         : 0U)),32);
            __Vtemp14[0U] = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__data_in_reg;
            __Vtemp14[1U] = (IData)((QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat)));
            __Vtemp14[2U] = (IData)(((QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat)) 
                                     >> 0x20U));
            tracep->chgIData(oldp+475,(((0x5fU >= (0x7fU 
                                                   & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                                      << 5U)))
                                         ? (((0U == 
                                              (0x1fU 
                                               & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                                  << 5U)))
                                              ? 0U : 
                                             (__Vtemp14[
                                              ((IData)(1U) 
                                               + (3U 
                                                  & (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                                      << 5U))))) 
                                            | (__Vtemp14[
                                               (3U 
                                                & (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel))] 
                                               >> (0x1fU 
                                                   & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                                      << 5U))))
                                         : 0U)),32);
            tracep->chgBit(oldp+476,(((2U >= (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel)) 
                                      & ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_we_o) 
                                           << 1U) | (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__wr_reg)) 
                                         >> (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel)))));
            __Vtemp15[0U] = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__addr_reg;
            __Vtemp15[1U] = (IData)((((QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_adr)) 
                                      << 0x20U) | (QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_adr))));
            __Vtemp15[2U] = (IData)(((((QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_adr)) 
                                       << 0x20U) | (QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_adr))) 
                                     >> 0x20U));
            tracep->chgWData(oldp+477,(__Vtemp15),96);
            __Vtemp16[0U] = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__addr_reg;
            __Vtemp16[1U] = (IData)((((QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_adr)) 
                                      << 0x20U) | (QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_adr))));
            __Vtemp16[2U] = (IData)(((((QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_adr)) 
                                       << 0x20U) | (QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_adr))) 
                                     >> 0x20U));
            tracep->chgIData(oldp+480,(((0x5fU >= (0x7fU 
                                                   & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                                      << 5U)))
                                         ? (0x7fffffU 
                                            & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                                     << 5U)))
                                                 ? 0U
                                                 : 
                                                (__Vtemp16[
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
                                               | (__Vtemp16[
                                                  (3U 
                                                   & (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                                      << 5U)))))
                                         : 0U)),23);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [1U] | vlTOPp->__Vm_traceActivity
                         [0xaU]))) {
            tracep->chgBit(oldp+481,(((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__flag_set) 
                                      & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_setflag_o))));
            tracep->chgBit(oldp+482,(((~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__flag_set)) 
                                      & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_setflag_o))));
            tracep->chgBit(oldp+483,((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__flag_set) 
                                       & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_setflag_o))
                                       ? 1U : (((~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__flag_set)) 
                                                & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_setflag_o))
                                                ? 0U
                                                : (1U 
                                                   & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_flag_o))))));
            tracep->chgBit(oldp+484,(((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_add_o) 
                                        & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__adder_carryout))) 
                                       | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_mul_unsigned_o)) 
                                      | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_div_unsigned_o) 
                                         & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_by_zero_r))))));
            tracep->chgBit(oldp+485,((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_add_o) 
                                       & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__adder_carryout)) 
                                      | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_div_unsigned_o) 
                                         & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_by_zero_r)))));
            tracep->chgBit(oldp+486,((1U & (((~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_carry_clear_o)) 
                                             & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr) 
                                                >> 0xaU)) 
                                            | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_carry_set_o)))));
            tracep->chgIData(oldp+487,((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_rf_wb_o) 
                                         & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_rfd_adr_o) 
                                            == (0x1fU 
                                                & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                   >> 0x10U))))
                                         ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_alu_result_o
                                         : (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__use_last_wb_a) 
                                             | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__wb_rf_wb_o) 
                                                & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__wb_rfd_adr_o) 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                       >> 0x10U)))))
                                             ? ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__use_last_wb_a)
                                                 ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__wb_to_decode_result_a
                                                 : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__rf_result_o)
                                             : ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__wb_to_decode_bypass_a)
                                                 ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__wb_to_decode_result_a
                                                 : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__rfa__DOT__rdata)))),32);
            tracep->chgIData(oldp+488,(((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_zext_o)
                                         ? ((2U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_length_o))
                                             ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat_aligned
                                             : ((1U 
                                                 & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_length_o))
                                                 ? 
                                                (0xffffU 
                                                 & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat_aligned 
                                                    >> 0x10U))
                                                 : 
                                                (0xffU 
                                                 & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat_aligned 
                                                    >> 0x18U))))
                                         : ((2U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_length_o))
                                             ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat_aligned
                                             : ((1U 
                                                 & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_length_o))
                                                 ? 
                                                ((0xffff0000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat_aligned 
                                                                    >> 0x1fU)))) 
                                                     << 0x10U)) 
                                                 | (0xffffU 
                                                    & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat_aligned 
                                                       >> 0x10U)))
                                                 : 
                                                ((0xffffff00U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat_aligned 
                                                                    >> 0x1fU)))) 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat_aligned 
                                                       >> 0x18U))))))),32);
            tracep->chgBit(oldp+489,(((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_msync_o) 
                                      & (2U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__state)))));
            tracep->chgBit(oldp+490,(((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_add_o) 
                                        & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__adder_signed_overflow))) 
                                       | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_mul_signed_o) 
                                          & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__mul_signed_overflow)))) 
                                      | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_div_signed_o) 
                                         & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_by_zero_r))))));
            tracep->chgBit(oldp+491,(((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_add_o) 
                                        & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__adder_signed_overflow)) 
                                       | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_mul_signed_o) 
                                          & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__mul_signed_overflow))) 
                                      | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_div_signed_o) 
                                         & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_by_zero_r)))));
            tracep->chgBit(oldp+492,((((2U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state)) 
                                       & (0U != (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_hit))) 
                                      | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__refill_hit) 
                                         & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ic_access)))));
            tracep->chgBit(oldp+493,((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr) 
                                       >> 4U) & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__ic_enable_r))));
            tracep->chgCData(oldp+494,((0xffU & ((2U 
                                                  == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state))
                                                  ? 
                                                 (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ic_addr_match 
                                                  >> 5U)
                                                  : 
                                                 ((8U 
                                                   == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state))
                                                   ? (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__invalidate_adr)
                                                   : 
                                                  (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_adr 
                                                   >> 5U))))),8);
            tracep->chgQData(oldp+495,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_din),41);
            tracep->chgBit(oldp+497,(((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_jr_o) 
                                      & (~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_decode_execute_cappuccino__DOT__ctrl_to_decode_interlock) 
                                            | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rf_wb_o) 
                                               & ((0x1fU 
                                                   & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                      >> 0xbU)) 
                                                  == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfd_adr_o))))))));
            tracep->chgIData(oldp+498,(((((4U == (0x3fU 
                                                  & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                     >> 0x1aU))) 
                                          & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__predicted_flag_o))) 
                                         | ((3U == 
                                             (0x3fU 
                                              & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                 >> 0x1aU))) 
                                            & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__predicted_flag_o)))
                                         ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_decode_execute_cappuccino__DOT__branch_to_imm_target
                                         : ((IData)(8U) 
                                            + vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pc_fetch_to_decode))),32);
            tracep->chgIData(oldp+499,(((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_flag_o)
                                         ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o
                                         : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__b)),32);
            tracep->chgBit(oldp+500,((((2U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_length_o)) 
                                       & (0U != (3U 
                                                 & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_adr_o))) 
                                      | ((1U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_length_o)) 
                                         & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_adr_o))));
            tracep->chgCData(oldp+501,((0xffU & (((2U 
                                                   == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state)) 
                                                  | (4U 
                                                     == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state)))
                                                  ? 
                                                 (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_adr_match 
                                                  >> 5U)
                                                  : 
                                                 ((0x10U 
                                                   == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state))
                                                   ? (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__invalidate_adr)
                                                   : 
                                                  (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_adr 
                                                   >> 5U))))),8);
            tracep->chgBit(oldp+502,(((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_rf_wb_o) 
                                      & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_rfd_adr_o) 
                                         == (0x1fU 
                                             & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                >> 0x10U))))));
            tracep->chgBit(oldp+503,(((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__use_last_wb_a) 
                                      | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__wb_rf_wb_o) 
                                         & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__wb_rfd_adr_o) 
                                            == (0x1fU 
                                                & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                   >> 0x10U)))))));
            tracep->chgBit(oldp+504,(((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_rf_wb_o) 
                                      & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_rfd_adr_o) 
                                         == (0x1fU 
                                             & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                >> 0xbU))))));
            tracep->chgBit(oldp+505,(((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__use_last_wb_b) 
                                      | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__wb_rf_wb_o) 
                                         & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__wb_rfd_adr_o) 
                                            == (0x1fU 
                                                & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                   >> 0xbU)))))));
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [1U] | vlTOPp->__Vm_traceActivity
                         [0xcU]))) {
            tracep->chgCData(oldp+506,(((((~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_access)) 
                                          & (4U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state))) 
                                         & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__refill_done)))
                                         ? 2U : 7U)),3);
            tracep->chgBit(oldp+507,((((~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_access)) 
                                       & (4U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state))) 
                                      & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__refill_done)))));
            tracep->chgBit(oldp+508,((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__spr_bus_ack) 
                                       & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__dmmu_spr_bus_stb)) 
                                      & (1U == (0x1fU 
                                                & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr) 
                                                   >> 0xbU))))));
            tracep->chgBit(oldp+509,((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__spr_bus_ack) 
                                       & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__immu_spr_bus_stb)) 
                                      & (2U == (0x1fU 
                                                & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr) 
                                                   >> 0xbU))))));
            tracep->chgBit(oldp+510,((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__genblk1__DOT__spr_gpr_we) 
                                       & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__wb_rf_wb_o))) 
                                      | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__genblk1__DOT__spr_gpr_re) 
                                         & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__genblk1__DOT__spr_gpr_read_ack)))));
            tracep->chgBit(oldp+511,(((~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_fetch_o)) 
                                      & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__fetch_valid_o))));
            tracep->chgIData(oldp+512,(((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access) 
                                          >> 0xaU) 
                                         & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__spr_ttcr_access))
                                         ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__spr_ttcr
                                         : ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access) 
                                              >> 0xaU) 
                                             & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__spr_ttmr_access))
                                             ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__spr_ttmr
                                             : 0U))),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgIData(oldp+513,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__addr_reg),32);
            tracep->chgIData(oldp+514,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__data_in_reg),32);
            tracep->chgBit(oldp+515,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__wr_reg));
            tracep->chgBit(oldp+516,(0U));
            tracep->chgBit(oldp+517,(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_mux_dbg__DOT__slave_sel));
            tracep->chgBit(oldp+518,((0U == (0xfe000000U 
                                             & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__addr_reg))));
            tracep->chgBit(oldp+519,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__rdy_sync_tff1));
            tracep->chgBit(oldp+520,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__rdy_sync_tff2));
            tracep->chgBit(oldp+521,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__rdy_sync_tff2q));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[3U])) {
            tracep->chgBit(oldp+522,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__rdy_sync));
            tracep->chgBit(oldp+523,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__str_sync_wbff1));
            tracep->chgBit(oldp+524,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__str_sync_wbff2));
            tracep->chgBit(oldp+525,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__str_sync_wbff2q));
            tracep->chgBit(oldp+526,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__start_toggle));
            tracep->chgBit(oldp+527,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__wb_fsm_state));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[4U])) {
            tracep->chgBit(oldp+528,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__tms_q1));
            tracep->chgBit(oldp+529,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__tms_q2));
            tracep->chgBit(oldp+530,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__tms_q3));
            tracep->chgBit(oldp+531,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__tms_q4));
            tracep->chgIData(oldp+532,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__idcode_reg),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[5U])) {
            tracep->chgBit(oldp+533,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__tdo_padoe_o));
            tracep->chgBit(oldp+534,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__shift_ir_neg));
            tracep->chgCData(oldp+535,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__latched_jtag_ir_neg),4);
            tracep->chgBit(oldp+536,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__instruction_tdo));
            tracep->chgBit(oldp+537,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__idcode_tdo));
            tracep->chgBit(oldp+538,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__bypassed_tdo));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[6U])) {
            tracep->chgCData(oldp+539,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg0),8);
            tracep->chgCData(oldp+540,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg1),8);
            tracep->chgCData(oldp+541,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg2),8);
            tracep->chgCData(oldp+542,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg3),8);
            tracep->chgCData(oldp+543,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg4),8);
            tracep->chgCData(oldp+544,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg5),8);
            tracep->chgCData(oldp+545,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg6),8);
            tracep->chgCData(oldp+546,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg7),8);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[7U])) {
            tracep->chgCData(oldp+547,(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_uart_dat),8);
            tracep->chgBit(oldp+548,(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_uart_ack));
            tracep->chgBit(oldp+549,(vlSymsp->TOP__or1k_pu.__PVT__or1k_dbg_rst));
            tracep->chgIData(oldp+550,(vlSymsp->TOP__or1k_pu.__PVT__or1k_irq),32);
            tracep->chgBit(oldp+551,(vlSymsp->TOP__or1k_pu.__PVT__uart_irq));
            tracep->chgBit(oldp+552,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__cpu_reset_csff));
            tracep->chgBit(oldp+553,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync_wbff1));
            tracep->chgBit(oldp+554,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync_wbff2));
            tracep->chgBit(oldp+555,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync_wbff2q));
            tracep->chgBit(oldp+556,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__start_toggle));
            tracep->chgBit(oldp+557,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_fsm_state));
            tracep->chgBit(oldp+558,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__next_fsm_state));
            tracep->chgBit(oldp+559,(((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__ren_sff__DOT__srflop) 
                                      | (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__ren_sff__DOT__syncxor))));
            tracep->chgBit(oldp+560,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wda_rst));
            tracep->chgBit(oldp+561,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wpp));
            tracep->chgBit(oldp+562,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__w_fifo_en));
            tracep->chgBit(oldp+563,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__w_wb_ack));
            tracep->chgBit(oldp+564,(((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wen_sff__DOT__srflop) 
                                      | (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wen_sff__DOT__syncxor))));
            tracep->chgCData(oldp+565,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fsm_state),2);
            tracep->chgCData(oldp+566,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fsm_state),2);
            tracep->chgCData(oldp+567,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__next_wr_fsm_state),2);
            tracep->chgBit(oldp+568,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wen_sff__DOT__sync1));
            tracep->chgBit(oldp+569,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wen_sff__DOT__sync2));
            tracep->chgBit(oldp+570,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wen_sff__DOT__syncprev));
            tracep->chgBit(oldp+571,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wen_sff__DOT__srflop));
            tracep->chgBit(oldp+572,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wen_sff__DOT__syncxor));
            tracep->chgBit(oldp+573,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__ren_sff__DOT__sync1));
            tracep->chgBit(oldp+574,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__ren_sff__DOT__sync2));
            tracep->chgBit(oldp+575,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__ren_sff__DOT__syncprev));
            tracep->chgBit(oldp+576,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__ren_sff__DOT__srflop));
            tracep->chgBit(oldp+577,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__ren_sff__DOT__syncxor));
            tracep->chgBit(oldp+578,(((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__ack_sff__DOT__srflop) 
                                      | (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__ack_sff__DOT__syncxor))));
            tracep->chgBit(oldp+579,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__ack_sff__DOT__sync1));
            tracep->chgBit(oldp+580,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__ack_sff__DOT__sync2));
            tracep->chgBit(oldp+581,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__ack_sff__DOT__syncprev));
            tracep->chgBit(oldp+582,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__ack_sff__DOT__srflop));
            tracep->chgBit(oldp+583,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__ack_sff__DOT__syncxor));
            tracep->chgBit(oldp+584,(((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__ack_sff__DOT__srflop) 
                                      | (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__ack_sff__DOT__syncxor))));
            tracep->chgBit(oldp+585,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__ack_sff__DOT__sync1));
            tracep->chgBit(oldp+586,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__ack_sff__DOT__sync2));
            tracep->chgBit(oldp+587,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__ack_sff__DOT__syncprev));
            tracep->chgBit(oldp+588,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__ack_sff__DOT__srflop));
            tracep->chgBit(oldp+589,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__ack_sff__DOT__syncxor));
            tracep->chgBit(oldp+590,((1U & (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__mcr) 
                                             >> 4U) 
                                            | ((~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lcr) 
                                                   >> 6U)) 
                                               & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__stx_o_tmp))))));
            tracep->chgBit(oldp+591,((1U & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__mcr) 
                                            >> 1U))));
            tracep->chgBit(oldp+592,((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__mcr))));
            tracep->chgBit(oldp+593,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__enable));
            tracep->chgCData(oldp+594,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_dat_is),8);
            tracep->chgCData(oldp+595,((0xffU & ((4U 
                                                  & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_adr_is))
                                                  ? 
                                                 ((2U 
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
                                                  : 
                                                 ((2U 
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
                                                     >> 3U))))))),8);
            tracep->chgCData(oldp+596,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_adr_is),3);
            tracep->chgBit(oldp+597,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__we_o));
            tracep->chgBit(oldp+598,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__re_o));
            tracep->chgBit(oldp+599,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_we_is));
            tracep->chgBit(oldp+600,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_cyc_is));
            tracep->chgBit(oldp+601,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_stb_is));
            tracep->chgBit(oldp+602,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wre));
            tracep->chgCData(oldp+603,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wbstate),2);
            tracep->chgBit(oldp+604,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__srx_pad));
            tracep->chgCData(oldp+605,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__ier),4);
            tracep->chgCData(oldp+606,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__iir),4);
            tracep->chgCData(oldp+607,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__fcr),2);
            tracep->chgCData(oldp+608,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__mcr),5);
            tracep->chgCData(oldp+609,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lcr),8);
            tracep->chgCData(oldp+610,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__msr),8);
            tracep->chgSData(oldp+611,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__dl),16);
            tracep->chgCData(oldp+612,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__scratch),8);
            tracep->chgBit(oldp+613,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__start_dlc));
            tracep->chgBit(oldp+614,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr_mask_d));
            tracep->chgBit(oldp+615,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__msi_reset));
            tracep->chgSData(oldp+616,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__dlc),16);
            tracep->chgCData(oldp+617,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__trigger_level),4);
            tracep->chgBit(oldp+618,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rx_reset));
            tracep->chgBit(oldp+619,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__tx_reset));
            tracep->chgBit(oldp+620,((1U & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lcr) 
                                            >> 7U))));
            tracep->chgBit(oldp+621,((1U & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__mcr) 
                                            >> 4U))));
            tracep->chgBit(oldp+622,((1U & (((0x10U 
                                              & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__mcr))
                                              ? ((0xcU 
                                                  & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__mcr) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__mcr) 
                                                        >> 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__mcr) 
                                                          >> 3U))))
                                              : 0U) 
                                            >> 3U))));
            tracep->chgBit(oldp+623,((1U & (((0x10U 
                                              & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__mcr))
                                              ? ((0xcU 
                                                  & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__mcr) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__mcr) 
                                                        >> 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__mcr) 
                                                          >> 3U))))
                                              : 0U) 
                                            >> 2U))));
            tracep->chgBit(oldp+624,((1U & (((0x10U 
                                              & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__mcr))
                                              ? ((0xcU 
                                                  & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__mcr) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__mcr) 
                                                        >> 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__mcr) 
                                                          >> 3U))))
                                              : 0U) 
                                            >> 1U))));
            tracep->chgBit(oldp+625,(((0x10U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__mcr))
                                       ? (1U & ((0xcU 
                                                 & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__mcr) 
                                                    << 2U)) 
                                                | ((2U 
                                                    & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__mcr) 
                                                       >> 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__mcr) 
                                                         >> 3U)))))
                                       : 0U)));
            tracep->chgCData(oldp+626,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr),8);
            tracep->chgBit(oldp+627,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr0));
            tracep->chgBit(oldp+628,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rf_overrun));
            tracep->chgBit(oldp+629,((1U & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rf_data_out) 
                                            >> 1U))));
            tracep->chgBit(oldp+630,((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rf_data_out))));
            tracep->chgBit(oldp+631,((1U & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rf_data_out) 
                                            >> 2U))));
            tracep->chgBit(oldp+632,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr5));
            tracep->chgBit(oldp+633,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr6));
            tracep->chgBit(oldp+634,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr7));
            tracep->chgBit(oldp+635,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr0r));
            tracep->chgBit(oldp+636,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr1r));
            tracep->chgBit(oldp+637,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr2r));
            tracep->chgBit(oldp+638,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr3r));
            tracep->chgBit(oldp+639,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr4r));
            tracep->chgBit(oldp+640,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr5r));
            tracep->chgBit(oldp+641,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr6r));
            tracep->chgBit(oldp+642,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr7r));
            tracep->chgBit(oldp+643,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr_mask));
            tracep->chgBit(oldp+644,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rls_int));
            tracep->chgBit(oldp+645,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rda_int));
            tracep->chgBit(oldp+646,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__ti_int));
            tracep->chgBit(oldp+647,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__thre_int));
            tracep->chgBit(oldp+648,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__ms_int));
            tracep->chgBit(oldp+649,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__tf_push));
            tracep->chgBit(oldp+650,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rf_pop));
            tracep->chgSData(oldp+651,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rf_data_out),11);
            tracep->chgBit(oldp+652,((0U != (((((((
                                                   ((((((((vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                           [0U] 
                                                           | vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                           [1U]) 
                                                          | vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                          [2U]) 
                                                         | vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                         [3U]) 
                                                        | vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                        [4U]) 
                                                       | vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                       [5U]) 
                                                      | vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                      [6U]) 
                                                     | vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                     [7U]) 
                                                    | vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                    [8U]) 
                                                   | vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                   [9U]) 
                                                  | vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                  [0xaU]) 
                                                 | vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                 [0xbU]) 
                                                | vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                [0xcU]) 
                                               | vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                               [0xdU]) 
                                              | vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                              [0xeU]) 
                                             | vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                             [0xfU]))));
            tracep->chgBit(oldp+653,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rf_push_pulse));
            tracep->chgCData(oldp+654,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rf_count),5);
            tracep->chgCData(oldp+655,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__tf_count),5);
            tracep->chgCData(oldp+656,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__tstate),3);
            tracep->chgCData(oldp+657,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rstate),4);
            tracep->chgSData(oldp+658,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__counter_t),10);
            tracep->chgBit(oldp+659,((1U & (~ (IData)(
                                                      (0U 
                                                       != (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__block_cnt)))))));
            tracep->chgCData(oldp+660,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__block_cnt),8);
            tracep->chgCData(oldp+661,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__block_value),8);
            tracep->chgBit(oldp+662,(((~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lcr) 
                                          >> 6U)) & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__stx_o_tmp))));
            tracep->chgBit(oldp+663,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__serial_in));
            tracep->chgBit(oldp+664,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr_mask_condition));
            tracep->chgBit(oldp+665,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__iir_read));
            tracep->chgBit(oldp+666,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__msr_read));
            tracep->chgBit(oldp+667,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__fifo_read));
            tracep->chgBit(oldp+668,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__fifo_write));
            tracep->chgCData(oldp+669,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__delayed_modem_signals),4);
            tracep->chgBit(oldp+670,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr0_d));
            tracep->chgBit(oldp+671,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr1_d));
            tracep->chgBit(oldp+672,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr2_d));
            tracep->chgBit(oldp+673,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr3_d));
            tracep->chgBit(oldp+674,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr4_d));
            tracep->chgBit(oldp+675,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr5_d));
            tracep->chgBit(oldp+676,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr6_d));
            tracep->chgBit(oldp+677,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr7_d));
            tracep->chgBit(oldp+678,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rls_int_d));
            tracep->chgBit(oldp+679,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__thre_int_d));
            tracep->chgBit(oldp+680,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__ms_int_d));
            tracep->chgBit(oldp+681,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__ti_int_d));
            tracep->chgBit(oldp+682,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rda_int_d));
            tracep->chgBit(oldp+683,(((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rls_int) 
                                      & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rls_int_d)))));
            tracep->chgBit(oldp+684,(((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__thre_int) 
                                      & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__thre_int_d)))));
            tracep->chgBit(oldp+685,(((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__ms_int) 
                                      & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__ms_int_d)))));
            tracep->chgBit(oldp+686,(((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__ti_int) 
                                      & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__ti_int_d)))));
            tracep->chgBit(oldp+687,(((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rda_int) 
                                      & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rda_int_d)))));
            tracep->chgBit(oldp+688,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rls_int_pnd));
            tracep->chgBit(oldp+689,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rda_int_pnd));
            tracep->chgBit(oldp+690,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__thre_int_pnd));
            tracep->chgBit(oldp+691,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__ms_int_pnd));
            tracep->chgBit(oldp+692,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__ti_int_pnd));
            tracep->chgCData(oldp+693,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__counter),5);
            tracep->chgCData(oldp+694,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__bit_counter),3);
            tracep->chgCData(oldp+695,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__shift_out),7);
            tracep->chgBit(oldp+696,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__stx_o_tmp));
            tracep->chgBit(oldp+697,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__parity_xor));
            tracep->chgBit(oldp+698,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__tf_pop));
            tracep->chgBit(oldp+699,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__bit_out));
            tracep->chgCData(oldp+700,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__tf_data_out),8);
            tracep->chgBit(oldp+701,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__tf_overrun));
            tracep->chgCData(oldp+702,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
            tracep->chgCData(oldp+703,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
            tracep->chgCData(oldp+704,((0xfU & ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
            tracep->chgBit(oldp+705,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__i_uart_sync_flops__DOT__flop_0));
            tracep->chgCData(oldp+706,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rcounter16),4);
            tracep->chgCData(oldp+707,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rbit_counter),3);
            tracep->chgCData(oldp+708,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rshift),8);
            tracep->chgBit(oldp+709,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rparity));
            tracep->chgBit(oldp+710,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rparity_error));
            tracep->chgBit(oldp+711,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rframing_error));
            tracep->chgBit(oldp+712,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rparity_xor));
            tracep->chgCData(oldp+713,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__counter_b),8);
            tracep->chgBit(oldp+714,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rf_push_q));
            tracep->chgSData(oldp+715,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rf_data_in),11);
            tracep->chgBit(oldp+716,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rf_push));
            tracep->chgBit(oldp+717,((0U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__counter_b))));
            tracep->chgBit(oldp+718,((7U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rcounter16))));
            tracep->chgBit(oldp+719,((0U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rcounter16))));
            tracep->chgCData(oldp+720,((0xfU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rcounter16) 
                                                - (IData)(1U)))),4);
            tracep->chgSData(oldp+721,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__toc_value),10);
            tracep->chgCData(oldp+722,((0xffU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__toc_value) 
                                                 >> 2U))),8);
            tracep->chgCData(oldp+723,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
            tracep->chgCData(oldp+724,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
            tracep->chgCData(oldp+725,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
            tracep->chgCData(oldp+726,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
            tracep->chgCData(oldp+727,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
            tracep->chgCData(oldp+728,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
            tracep->chgCData(oldp+729,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
            tracep->chgCData(oldp+730,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
            tracep->chgCData(oldp+731,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
            tracep->chgCData(oldp+732,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
            tracep->chgCData(oldp+733,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
            tracep->chgCData(oldp+734,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
            tracep->chgCData(oldp+735,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
            tracep->chgCData(oldp+736,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
            tracep->chgCData(oldp+737,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
            tracep->chgCData(oldp+738,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
            tracep->chgCData(oldp+739,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
            tracep->chgCData(oldp+740,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
            tracep->chgCData(oldp+741,((0xfU & ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
            tracep->chgCData(oldp+742,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                       [0U]),3);
            tracep->chgCData(oldp+743,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                       [1U]),3);
            tracep->chgCData(oldp+744,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                       [2U]),3);
            tracep->chgCData(oldp+745,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                       [3U]),3);
            tracep->chgCData(oldp+746,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                       [4U]),3);
            tracep->chgCData(oldp+747,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                       [5U]),3);
            tracep->chgCData(oldp+748,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                       [6U]),3);
            tracep->chgCData(oldp+749,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                       [7U]),3);
            tracep->chgCData(oldp+750,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                       [8U]),3);
            tracep->chgCData(oldp+751,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                       [9U]),3);
            tracep->chgCData(oldp+752,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                       [0xaU]),3);
            tracep->chgCData(oldp+753,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                       [0xbU]),3);
            tracep->chgCData(oldp+754,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                       [0xcU]),3);
            tracep->chgCData(oldp+755,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                       [0xdU]),3);
            tracep->chgCData(oldp+756,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                       [0xeU]),3);
            tracep->chgCData(oldp+757,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                       [0xfU]),3);
            tracep->chgCData(oldp+758,((0xffU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rf_data_in) 
                                                 >> 3U))),8);
            tracep->chgIData(oldp+759,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr),32);
            tracep->chgIData(oldp+760,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__irq_unmasked),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[8U])) {
            tracep->chgBit(oldp+761,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__debug_select));
            tracep->chgBit(oldp+762,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__shift_dr));
            tracep->chgBit(oldp+763,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__pause_dr));
            tracep->chgBit(oldp+764,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__update_dr));
            tracep->chgBit(oldp+765,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__capture_dr));
            tracep->chgIData(oldp+766,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__addr_reg),32);
            tracep->chgIData(oldp+767,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_in_reg),32);
            tracep->chgBit(oldp+768,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__wr_reg));
            tracep->chgBit(oldp+769,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__extest_select));
            tracep->chgBit(oldp+770,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__sample_preload_select));
            tracep->chgBit(oldp+771,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__mbist_select));
            tracep->chgBit(oldp+772,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__test_logic_reset));
            tracep->chgBit(oldp+773,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__run_test_idle));
            tracep->chgBit(oldp+774,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__select_dr_scan));
            tracep->chgBit(oldp+775,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__exit1_dr));
            tracep->chgBit(oldp+776,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__exit2_dr));
            tracep->chgBit(oldp+777,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__select_ir_scan));
            tracep->chgBit(oldp+778,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__capture_ir));
            tracep->chgBit(oldp+779,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__shift_ir));
            tracep->chgBit(oldp+780,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__exit1_ir));
            tracep->chgBit(oldp+781,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__pause_ir));
            tracep->chgBit(oldp+782,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__exit2_ir));
            tracep->chgBit(oldp+783,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__update_ir));
            tracep->chgBit(oldp+784,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__idcode_select));
            tracep->chgBit(oldp+785,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__bypass_select));
            tracep->chgCData(oldp+786,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__jtag_ir),4);
            tracep->chgCData(oldp+787,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__latched_jtag_ir),4);
            tracep->chgBit(oldp+788,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__bypass_reg));
            tracep->chgBit(oldp+789,((1U & ((0U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__tdo_output_sel))
                                             ? (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__biu_ready)
                                             : ((1U 
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
                                                  : vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc))))));
            tracep->chgBit(oldp+790,((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__data_out_shift_reg))));
            tracep->chgQData(oldp+791,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg),53);
            tracep->chgCData(oldp+793,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__module_id_reg),2);
            tracep->chgBit(oldp+794,((1U & (IData)(
                                                   (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                                    >> 0x34U)))));
            tracep->chgCData(oldp+795,((3U & (IData)(
                                                     (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                                      >> 0x32U)))),2);
            tracep->chgCData(oldp+796,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__module_selects),4);
            tracep->chgBit(oldp+797,((0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__module_inhibit))));
            tracep->chgCData(oldp+798,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__module_inhibit),4);
            tracep->chgBit(oldp+799,((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__module_selects))));
            tracep->chgBit(oldp+800,(vlSymsp->TOP__or1k_pu.dbg_if0__DOT____Vcellout__wb__DOT__i_dbg_wb__top_inhibit_o));
            tracep->chgIData(oldp+801,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__address_counter),32);
            tracep->chgCData(oldp+802,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__bit_count),6);
            tracep->chgSData(oldp+803,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_count),16);
            tracep->chgCData(oldp+804,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__operation),4);
            tracep->chgQData(oldp+805,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__data_out_shift_reg),33);
            tracep->chgQData(oldp+807,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__internal_reg_error),33);
            tracep->chgBit(oldp+809,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__internal_register_select));
            tracep->chgBit(oldp+810,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__out_reg_shift_en));
            tracep->chgBit(oldp+811,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__crc_shift_en));
            tracep->chgBit(oldp+812,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__regsel_ld_en));
            tracep->chgBit(oldp+813,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__intreg_ld_en));
            tracep->chgBit(oldp+814,((0U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_count))));
            tracep->chgBit(oldp+815,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__bit_count_max));
            tracep->chgBit(oldp+816,((1U & (~ (IData)(
                                                      (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                                       >> 0x34U))))));
            tracep->chgBit(oldp+817,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__burst_instruction));
            tracep->chgBit(oldp+818,(((9U == (0xfU 
                                              & (IData)(
                                                        (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                                         >> 0x30U)))) 
                                      | (0xdU == (0xfU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                                             >> 0x30U)))))));
            tracep->chgBit(oldp+819,((9U == (0xfU & (IData)(
                                                            (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                                             >> 0x30U))))));
            tracep->chgBit(oldp+820,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__rd_op));
            tracep->chgBit(oldp+821,(((IData)((vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                               >> 0x15U)) 
                                      == vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc)));
            tracep->chgBit(oldp+822,((0x20U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__bit_count))));
            tracep->chgCData(oldp+823,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_size_bits),6);
            tracep->chgCData(oldp+824,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_size_bytes),3);
            tracep->chgQData(oldp+825,((0x1ffffffffULL 
                                        & ((QData)((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__address_counter)) 
                                           + (QData)((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_size_bytes))))),33);
            tracep->chgSData(oldp+827,((0xffffU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_count) 
                                                   - (IData)(1U)))),16);
            tracep->chgIData(oldp+828,((IData)((vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                                >> 0x10U))),32);
            tracep->chgSData(oldp+829,((0xffffU & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg))),16);
            tracep->chgCData(oldp+830,((0xfU & (IData)(
                                                       (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                                        >> 0x30U)))),4);
            tracep->chgIData(oldp+831,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc),32);
            tracep->chgBit(oldp+832,((1U & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc)));
            tracep->chgBit(oldp+833,((1U & (IData)(
                                                   (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                                    >> 0x2fU)))));
            tracep->chgCData(oldp+834,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state),4);
            tracep->chgBit(oldp+835,((1U & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__module_selects) 
                                            >> 1U))));
            tracep->chgBit(oldp+836,(vlSymsp->TOP__or1k_pu.dbg_if0__DOT____Vcellout__cpu0__DOT__i_dbg_cpu_or1k__top_inhibit_o));
            tracep->chgIData(oldp+837,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__address_counter),32);
            tracep->chgCData(oldp+838,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__bit_count),6);
            tracep->chgSData(oldp+839,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__word_count),16);
            tracep->chgCData(oldp+840,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__operation),4);
            tracep->chgIData(oldp+841,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__data_out_shift_reg),32);
            tracep->chgBit(oldp+842,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__internal_register_select));
            tracep->chgBit(oldp+843,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__addr_sel));
            tracep->chgBit(oldp+844,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__addr_ct_en));
            tracep->chgBit(oldp+845,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__op_reg_en));
            tracep->chgBit(oldp+846,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__bit_ct_en));
            tracep->chgBit(oldp+847,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__bit_ct_rst));
            tracep->chgBit(oldp+848,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__word_ct_sel));
            tracep->chgBit(oldp+849,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__word_ct_en));
            tracep->chgBit(oldp+850,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__out_reg_ld_en));
            tracep->chgBit(oldp+851,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__out_reg_shift_en));
            tracep->chgBit(oldp+852,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__out_reg_data_sel));
            tracep->chgCData(oldp+853,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__tdo_output_sel),2);
            tracep->chgBit(oldp+854,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__biu_strobe));
            tracep->chgBit(oldp+855,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__crc_clr));
            tracep->chgBit(oldp+856,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__crc_en));
            tracep->chgBit(oldp+857,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__crc_in_sel));
            tracep->chgBit(oldp+858,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__crc_shift_en));
            tracep->chgBit(oldp+859,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__regsel_ld_en));
            tracep->chgBit(oldp+860,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__intreg_ld_en));
            tracep->chgBit(oldp+861,((0U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__word_count))));
            tracep->chgBit(oldp+862,((0x1fU == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__bit_count))));
            tracep->chgBit(oldp+863,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__biu_ready));
            tracep->chgBit(oldp+864,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__burst_instruction));
            tracep->chgBit(oldp+865,((1U & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__operation) 
                                            >> 2U))));
            tracep->chgBit(oldp+866,(((IData)((vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                               >> 0x15U)) 
                                      == vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc)));
            tracep->chgBit(oldp+867,((0x20U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__bit_count))));
            tracep->chgQData(oldp+868,((0x1ffffffffULL 
                                        & (1ULL + (QData)((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__address_counter))))),33);
            tracep->chgIData(oldp+870,(((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__addr_sel)
                                         ? ((IData)(1U) 
                                            + vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__address_counter)
                                         : (IData)(
                                                   (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                                    >> 0x10U)))),32);
            tracep->chgSData(oldp+871,((0xffffU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__word_ct_sel)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__word_count) 
                                                    - (IData)(1U))
                                                    : (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg)))),16);
            tracep->chgSData(oldp+872,((0xffffU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__word_count) 
                                                   - (IData)(1U)))),16);
            tracep->chgIData(oldp+873,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc),32);
            tracep->chgBit(oldp+874,((1U & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc)));
            tracep->chgBit(oldp+875,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__status_reg_wr));
            tracep->chgCData(oldp+876,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state),4);
            tracep->chgCData(oldp+877,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_next_state),4);
            tracep->chgCData(oldp+878,((3U & (IData)(
                                                     (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                                      >> 0x2dU)))),2);
            tracep->chgBit(oldp+879,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__cpu_reset));
            tracep->chgBit(oldp+880,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp_csff));
            tracep->chgBit(oldp+881,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp_tck));
            tracep->chgBit(oldp+882,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync));
            tracep->chgBit(oldp+883,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_tff1));
            tracep->chgBit(oldp+884,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_tff2));
            tracep->chgBit(oldp+885,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_tff2q));
            tracep->chgBit(oldp+886,((1U & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__module_selects) 
                                            >> 3U))));
            tracep->chgCData(oldp+887,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__read_bit_count),4);
            tracep->chgCData(oldp+888,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__write_bit_count),4);
            tracep->chgCData(oldp+889,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__input_word_count),4);
            tracep->chgCData(oldp+890,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__output_word_count),4);
            tracep->chgCData(oldp+891,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__user_word_count),4);
            tracep->chgCData(oldp+892,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__data_out_shift_reg),8);
            tracep->chgBit(oldp+893,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_bit_ct_en));
            tracep->chgBit(oldp+894,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_bit_ct_rst));
            tracep->chgBit(oldp+895,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__wr_bit_ct_en));
            tracep->chgBit(oldp+896,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__in_word_ct_sel));
            tracep->chgBit(oldp+897,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__out_word_ct_sel));
            tracep->chgBit(oldp+898,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__out_word_ct_en));
            tracep->chgBit(oldp+899,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__user_word_ct_en));
            tracep->chgBit(oldp+900,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__user_word_ct_sel));
            tracep->chgBit(oldp+901,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__out_reg_ld_en));
            tracep->chgBit(oldp+902,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__out_reg_shift_en));
            tracep->chgBit(oldp+903,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__out_reg_data_sel));
            tracep->chgBit(oldp+904,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__biu_rd_strobe));
            tracep->chgBit(oldp+905,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__biu_wr_strobe));
            tracep->chgBit(oldp+906,((0U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__input_word_count))));
            tracep->chgBit(oldp+907,((0U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__output_word_count))));
            tracep->chgBit(oldp+908,((0U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__user_word_count))));
            tracep->chgBit(oldp+909,((7U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__read_bit_count))));
            tracep->chgBit(oldp+910,((7U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__write_bit_count))));
            tracep->chgCData(oldp+911,((0xfU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__in_word_ct_sel)
                                                 ? 
                                                ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__input_word_count) 
                                                 - (IData)(1U))
                                                 : (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__regB)))),4);
            tracep->chgCData(oldp+912,((0xfU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__out_word_ct_sel)
                                                 ? 
                                                ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__output_word_count) 
                                                 - (IData)(1U))
                                                 : (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__regB)))),4);
            tracep->chgCData(oldp+913,((0xfU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__input_word_count) 
                                                - (IData)(1U)))),4);
            tracep->chgCData(oldp+914,((0xfU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__output_word_count) 
                                                - (IData)(1U)))),4);
            tracep->chgCData(oldp+915,((0xfU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__user_word_count) 
                                                - (IData)(1U)))),4);
            tracep->chgCData(oldp+916,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__regB),4);
            tracep->chgCData(oldp+917,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__regB),4);
            tracep->chgCData(oldp+918,((((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__regB) 
                                         << 4U) | (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__regB))),8);
            tracep->chgCData(oldp+919,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__wr_module_state),3);
            tracep->chgCData(oldp+920,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_module_state),3);
            tracep->chgCData(oldp+921,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_module_next_state),3);
            tracep->chgCData(oldp+922,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__data_in),8);
            tracep->chgBit(oldp+923,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wen_tff));
            tracep->chgBit(oldp+924,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__ren_tff));
            tracep->chgBit(oldp+925,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__ack_toggle));
            tracep->chgBit(oldp+926,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__strobe_sff_out));
            tracep->chgBit(oldp+927,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__strobe_sff__DOT__sync1));
            tracep->chgBit(oldp+928,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__strobe_sff__DOT__sync2));
            tracep->chgBit(oldp+929,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__strobe_sff__DOT__syncprev));
            tracep->chgBit(oldp+930,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__strobe_sff__DOT__srflop));
            tracep->chgBit(oldp+931,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__strobe_sff__DOT__syncxor));
            tracep->chgBit(oldp+932,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__ack_toggle));
            tracep->chgBit(oldp+933,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__strobe_sff_out));
            tracep->chgBit(oldp+934,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__strobe_sff__DOT__sync1));
            tracep->chgBit(oldp+935,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__strobe_sff__DOT__sync2));
            tracep->chgBit(oldp+936,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__strobe_sff__DOT__syncprev));
            tracep->chgBit(oldp+937,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__strobe_sff__DOT__srflop));
            tracep->chgBit(oldp+938,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__strobe_sff__DOT__syncxor));
            tracep->chgSData(oldp+939,((0xffffU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__addr_reg)),16);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[9U])) {
            tracep->chgBit(oldp+940,(vlSymsp->TOP__or1k_pu.__PVT__or1k_rst));
            tracep->chgBit(oldp+941,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__tms_reset));
            tracep->chgIData(oldp+942,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__data_to_biu),32);
            tracep->chgBit(oldp+943,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__crc_data_in));
            tracep->chgBit(oldp+944,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_rst));
            tracep->chgBit(oldp+945,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__crc_data_in));
            tracep->chgBit(oldp+946,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__wr_bit_ct_rst));
            tracep->chgBit(oldp+947,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__in_word_ct_en));
            tracep->chgCData(oldp+948,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__wr_module_next_state),3);
            tracep->chgBit(oldp+949,(vlSymsp->TOP__or1k_pu.dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__wr_fifo__RST));
            tracep->chgBit(oldp+950,(vlSymsp->TOP__or1k_pu.dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__rd_fifo__RST));
            tracep->chgIData(oldp+951,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__pc_addr),32);
            tracep->chgIData(oldp+952,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ic_addr),32);
            tracep->chgCData(oldp+953,((0xffU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ic_addr 
                                                 >> 5U))),8);
            tracep->chgSData(oldp+954,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_raddr[0]),11);
            tracep->chgSData(oldp+955,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_raddr[1]),11);
            tracep->chgSData(oldp+956,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_raddr
                                       [0U]),11);
            tracep->chgSData(oldp+957,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_raddr
                                       [1U]),11);
            tracep->chgCData(oldp+958,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_addr),6);
            tracep->chgCData(oldp+959,((0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ic_addr 
                                                 >> 0x18U))),6);
            tracep->chgCData(oldp+960,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_addr),6);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xaU])) {
            tracep->chgIData(oldp+961,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_adr),32);
            tracep->chgIData(oldp+962,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat),32);
            tracep->chgCData(oldp+963,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_bsel_o),4);
            tracep->chgBit(oldp+964,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_we_o));
            tracep->chgBit(oldp+965,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_req_o));
            tracep->chgCData(oldp+966,((((4U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__state)) 
                                         & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__refill_done)))
                                         ? 2U : 7U)),3);
            tracep->chgBit(oldp+967,(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_or1k_d_err));
            tracep->chgBit(oldp+968,(0U));
            tracep->chgBit(oldp+969,(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_or1k_i_err));
            tracep->chgIData(oldp+970,(vlSymsp->TOP__or1k_pu.__PVT__wb_m2s_uart_adr),32);
            tracep->chgCData(oldp+971,((0xffU & ((8U 
                                                  & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_bsel_o))
                                                  ? 
                                                 (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat 
                                                  >> 0x18U)
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_bsel_o))
                                                   ? 
                                                  (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat 
                                                   >> 0x10U)
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_bsel_o))
                                                    ? 
                                                   (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat 
                                                    >> 8U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_bsel_o))
                                                     ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat
                                                     : 0U)))))),8);
            tracep->chgBit(oldp+972,((1U & (IData)(vlSymsp->TOP__or1k_pu.wb_interface0__DOT____Vcellout__wb_mux_or1k_d__wbs_cyc_o))));
            tracep->chgBit(oldp+973,((1U & ((IData)(vlSymsp->TOP__or1k_pu.wb_interface0__DOT____Vcellout__wb_mux_or1k_d__wbs_cyc_o) 
                                            >> 1U))));
            tracep->chgQData(oldp+974,((((QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_adr)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_adr)))),64);
            tracep->chgQData(oldp+976,((((QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat)))),64);
            tracep->chgCData(oldp+978,((0xffU & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_bsel_o) 
                                                  << 4U) 
                                                 | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_bsel_o)))),8);
            tracep->chgCData(oldp+979,((3U & (- (IData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_we_o))))),2);
            tracep->chgCData(oldp+980,(vlSymsp->TOP__or1k_pu.wb_interface0__DOT____Vcellout__wb_mux_or1k_d__wbs_cyc_o),2);
            tracep->chgCData(oldp+981,((3U & (- (IData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_req_o))))),2);
            tracep->chgCData(oldp+982,((0x3fU & (((
                                                   ((4U 
                                                     == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__state)) 
                                                    & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__refill_done)))
                                                    ? 2U
                                                    : 7U) 
                                                  << 3U) 
                                                 | (((4U 
                                                      == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__state)) 
                                                     & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__refill_done)))
                                                     ? 2U
                                                     : 7U)))),6);
            tracep->chgBit(oldp+983,(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_mux_or1k_d__DOT__slave_sel));
            tracep->chgCData(oldp+984,(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_mux_or1k_d__DOT__match),2);
            tracep->chgCData(oldp+985,((7U & vlSymsp->TOP__or1k_pu.__PVT__wb_m2s_uart_adr)),3);
            tracep->chgBit(oldp+986,(((4U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__state)) 
                                      & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__refill_done)))));
            tracep->chgSData(oldp+987,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr),16);
            tracep->chgBit(oldp+988,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_flag_o));
            tracep->chgIData(oldp+989,(((0xfc00U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr)) 
                                        | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_flag_o) 
                                            << 9U) 
                                           | (0x1ffU 
                                              & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr))))),32);
            tracep->chgBit(oldp+990,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__branch_mispredict_o));
            tracep->chgIData(oldp+991,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode),32);
            tracep->chgIData(oldp+992,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__adder_result),32);
            tracep->chgIData(oldp+993,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__alu_result_o),32);
            tracep->chgBit(oldp+994,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_align_o));
            tracep->chgBit(oldp+995,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dbus_o));
            tracep->chgBit(oldp+996,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dpagefault_o));
            tracep->chgBit(oldp+997,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dtlb_miss_o));
            tracep->chgIData(oldp+998,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_adr_o),32);
            tracep->chgBit(oldp+999,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_lsu_load_o));
            tracep->chgBit(oldp+1000,((((0x38U == (0x3fU 
                                                   & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                      >> 0x1aU))) 
                                        & (1U == (0xfU 
                                                  & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode))) 
                                       | (0x28U == 
                                          (0x3fU & 
                                           (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                            >> 0x1aU))))));
            tracep->chgBit(oldp+1001,((((0x38U == (0x3fU 
                                                   & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                      >> 0x1aU))) 
                                        & (2U == (0xfU 
                                                  & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode))) 
                                       | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_setflag_o))));
            tracep->chgIData(oldp+1002,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_branch_target_o),32);
            tracep->chgBit(oldp+1003,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_except_illegal_o));
            tracep->chgBit(oldp+1004,(((8U == (0x3fU 
                                               & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                  >> 0x1aU))) 
                                       & (0U == (7U 
                                                 & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                    >> 0x17U))))));
            tracep->chgBit(oldp+1005,(((8U == (0x3fU 
                                               & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                  >> 0x1aU))) 
                                       & (2U == (7U 
                                                 & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                    >> 0x17U))))));
            tracep->chgSData(oldp+1006,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_imm16_o),16);
            tracep->chgIData(oldp+1007,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_immediate_o),32);
            tracep->chgBit(oldp+1008,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_immediate_sel_o));
            tracep->chgSData(oldp+1009,((0x3ffU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                   >> 0x10U))),10);
            tracep->chgCData(oldp+1010,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_lsu_length_o),2);
            tracep->chgBit(oldp+1011,((1U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1012,(((((0x38U == 
                                          (0x3fU & 
                                           (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                            >> 0x1aU))) 
                                         & (((1U == 
                                              (0xfU 
                                               & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode)) 
                                             | (0U 
                                                == 
                                                (0xfU 
                                                 & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode))) 
                                            | (2U == 
                                               (0xfU 
                                                & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode)))) 
                                        | (0x28U == 
                                           (0x3fU & 
                                            (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                             >> 0x1aU)))) 
                                       | (0x27U == 
                                          (0x3fU & 
                                           (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                            >> 0x1aU))))));
            tracep->chgBit(oldp+1013,(((((0x38U == 
                                          (0x3fU & 
                                           (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                            >> 0x1aU))) 
                                         | (0x2aU == 
                                            (0x3fU 
                                             & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                >> 0x1aU)))) 
                                        | (0x29U == 
                                           (0x3fU & 
                                            (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                             >> 0x1aU)))) 
                                       | (0x2bU == 
                                          (0x3fU & 
                                           (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                            >> 0x1aU))))));
            tracep->chgBit(oldp+1014,((4U == (0x3fU 
                                              & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                 >> 0x1aU)))));
            tracep->chgBit(oldp+1015,((3U == (0x3fU 
                                              & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                 >> 0x1aU)))));
            tracep->chgBit(oldp+1016,((((5U > (0x3fU 
                                               & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                  >> 0x1aU))) 
                                        | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_jr_o)) 
                                       | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_jal_o))));
            tracep->chgBit(oldp+1017,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_brcond_o));
            tracep->chgBit(oldp+1018,(((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_div_signed_o) 
                                       | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_div_unsigned_o))));
            tracep->chgBit(oldp+1019,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_div_signed_o));
            tracep->chgBit(oldp+1020,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_div_unsigned_o));
            tracep->chgBit(oldp+1021,((((0x38U == (0x3fU 
                                                   & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                      >> 0x1aU))) 
                                        & ((0U == (3U 
                                                   & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                      >> 8U))) 
                                           | (1U == 
                                              (3U & 
                                               (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                >> 8U))))) 
                                       & (0xfU == (0xfU 
                                                   & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode)))));
            tracep->chgBit(oldp+1022,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_jal_o));
            tracep->chgBit(oldp+1023,((5U > (0x3fU 
                                             & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                >> 0x1aU)))));
            tracep->chgBit(oldp+1024,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_jr_o));
            tracep->chgBit(oldp+1025,(((0x1bU == (0x3fU 
                                                  & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                     >> 0x1aU))) 
                                       | (0x33U == 
                                          (0x3fU & 
                                           (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                            >> 0x1aU))))));
            tracep->chgBit(oldp+1026,(((((2U == (3U 
                                                 & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                    >> 0x1eU))) 
                                         & (~ (IData)(
                                                      (7U 
                                                       == 
                                                       (7U 
                                                        & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                           >> 0x1aU)))))) 
                                        & (~ (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                              >> 0x1dU))) 
                                       | (0x1bU == 
                                          (0x3fU & 
                                           (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                            >> 0x1aU))))));
            tracep->chgBit(oldp+1027,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_lsu_store_o));
            tracep->chgBit(oldp+1028,((0x2dU == (0x3fU 
                                                 & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                    >> 0x1aU)))));
            tracep->chgBit(oldp+1029,((6U == (0x3fU 
                                              & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                 >> 0x1aU)))));
            tracep->chgBit(oldp+1030,(((8U == (0x3fU 
                                               & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                  >> 0x1aU))) 
                                       & (4U == (7U 
                                                 & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                    >> 0x17U))))));
            tracep->chgBit(oldp+1031,((0x30U == (0x3fU 
                                                 & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                    >> 0x1aU)))));
            tracep->chgBit(oldp+1032,(((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_mul_signed_o) 
                                       | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_mul_unsigned_o))));
            tracep->chgBit(oldp+1033,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_mul_signed_o));
            tracep->chgBit(oldp+1034,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_mul_unsigned_o));
            tracep->chgBit(oldp+1035,((9U == (0x3fU 
                                              & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                 >> 0x1aU)))));
            tracep->chgBit(oldp+1036,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_setflag_o));
            tracep->chgBit(oldp+1037,((((0x38U == (0x3fU 
                                                   & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                      >> 0x1aU))) 
                                        & (8U == (0xfU 
                                                  & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode))) 
                                       | (0x2eU == 
                                          (0x3fU & 
                                           (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                            >> 0x1aU))))));
            tracep->chgCData(oldp+1038,(((0x2aU == 
                                          (0x3fU & 
                                           (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                            >> 0x1aU)))
                                          ? 4U : ((0x29U 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                       >> 0x1aU)))
                                                   ? 3U
                                                   : 
                                                  ((0x2bU 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                        >> 0x1aU)))
                                                    ? 5U
                                                    : 
                                                   (0xfU 
                                                    & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode))))),4);
            tracep->chgCData(oldp+1039,((0xfU & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_setflag_o)
                                                  ? 
                                                 (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                  >> 0x15U)
                                                  : 
                                                 (7U 
                                                  & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                     >> 6U))))),4);
            tracep->chgCData(oldp+1040,((0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                  >> 0x1aU))),6);
            tracep->chgBit(oldp+1041,(((((((1U == (0x3fU 
                                                   & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                      >> 0x1aU))) 
                                           | (6U == 
                                              (0x3fU 
                                               & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                  >> 0x1aU)))) 
                                          | (0x12U 
                                             == (0x3fU 
                                                 & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                    >> 0x1aU)))) 
                                         | (0x1bU == 
                                            (0x3fU 
                                             & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                >> 0x1aU)))) 
                                        | ((2U == (3U 
                                                   & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                      >> 0x1eU))) 
                                           & (0x2fU 
                                              != (0x3fU 
                                                  & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                     >> 0x1aU))))) 
                                       | ((3U == (3U 
                                                  & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                     >> 0x1eU))) 
                                          & (~ (((0x39U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                      >> 0x1aU))) 
                                                 | (0x30U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                        >> 0x1aU)))) 
                                                | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_lsu_store_o)))))));
            tracep->chgCData(oldp+1042,((0x1fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                  >> 0x10U))),5);
            tracep->chgCData(oldp+1043,((0x1fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                  >> 0xbU))),5);
            tracep->chgIData(oldp+1044,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_rfb_o),32);
            tracep->chgCData(oldp+1045,(((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_jal_o)
                                          ? 9U : (0x1fU 
                                                  & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                     >> 0x15U)))),5);
            tracep->chgBit(oldp+1046,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_lsu_load_o));
            tracep->chgBit(oldp+1047,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_lsu_store_o));
            tracep->chgBit(oldp+1048,((0U != (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_hit))));
            tracep->chgBit(oldp+1049,(((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__except_dbus) 
                                       | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__store_buffer_err_o))));
            tracep->chgBit(oldp+1050,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__predicted_flag_o));
            tracep->chgBit(oldp+1051,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__invalidate_ack));
            tracep->chgIData(oldp+1052,(((vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_dout[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_dout[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1053,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__store_buffer_err_o));
            tracep->chgBit(oldp+1054,((1U & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr) 
                                             >> 4U))));
            tracep->chgBit(oldp+1055,((1U & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr) 
                                             >> 6U))));
            tracep->chgBit(oldp+1056,((1U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr))));
            tracep->chgBit(oldp+1057,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ctrl_branch_exception_edge));
            tracep->chgBit(oldp+1058,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__flush));
            tracep->chgBit(oldp+1059,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__imem_err));
            tracep->chgIData(oldp+1060,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ic_dat),32);
            tracep->chgIData(oldp+1061,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ic_addr_match),32);
            tracep->chgBit(oldp+1062,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ic_access));
            tracep->chgBit(oldp+1063,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__tlb_reload_req));
            tracep->chgIData(oldp+1064,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__tlb_reload_addr),32);
            tracep->chgBit(oldp+1065,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__mispredict_stall));
            tracep->chgBit(oldp+1066,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__refill_hit));
            tracep->chgBit(oldp+1067,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_lru_in));
            tracep->chgBit(oldp+1068,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_we));
            tracep->chgIData(oldp+1069,((0x7ffffU & 
                                         (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ic_addr_match 
                                          >> 0xdU))),19);
            tracep->chgCData(oldp+1070,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_hit),2);
            tracep->chgCData(oldp+1071,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__lru),2);
            tracep->chgCData(oldp+1072,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__access),2);
            tracep->chgBit(oldp+1073,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__next_lru_history));
            tracep->chgBit(oldp+1074,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__check_way_match[0]));
            tracep->chgBit(oldp+1075,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__check_way_match[1]));
            tracep->chgCData(oldp+1076,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__gen_u_lru__DOT__u_lru__DOT__lru_post),2);
            tracep->chgCData(oldp+1077,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__gen_u_lru__DOT__u_lru__DOT__expand[0]),2);
            tracep->chgCData(oldp+1078,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__gen_u_lru__DOT__u_lru__DOT__expand[1]),2);
            tracep->chgIData(oldp+1079,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__gen_u_lru__DOT__u_lru__DOT__j),32);
            tracep->chgIData(oldp+1080,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__gen_u_lru__DOT__u_lru__DOT__offset),32);
            tracep->chgCData(oldp+1081,((0xfU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode)),4);
            tracep->chgIData(oldp+1082,(((0xffff0000U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_imm16_o) 
                                                            >> 0xfU)))) 
                                             << 0x10U)) 
                                         | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_imm16_o))),32);
            tracep->chgBit(oldp+1083,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_decode__DOT__imm_sext_sel));
            tracep->chgIData(oldp+1084,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_imm16_o),32);
            tracep->chgBit(oldp+1085,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_decode__DOT__imm_zext_sel));
            tracep->chgIData(oldp+1086,(((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_imm16_o) 
                                         << 0x10U)),32);
            tracep->chgBit(oldp+1087,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_decode_execute_cappuccino__DOT__ctrl_to_decode_interlock));
            tracep->chgBit(oldp+1088,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_decode_execute_cappuccino__DOT__branch_to_imm));
            tracep->chgIData(oldp+1089,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_decode_execute_cappuccino__DOT__branch_to_imm_target),32);
            tracep->chgBit(oldp+1090,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__adder_carryout));
            tracep->chgBit(oldp+1091,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__adder_signed_overflow));
            tracep->chgBit(oldp+1092,((1U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__adder_result 
                                             >> 0x1fU))));
            tracep->chgBit(oldp+1093,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__carry_in));
            tracep->chgBit(oldp+1094,(((1U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__adder_result 
                                              >> 0x1fU)) 
                                       != (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__adder_signed_overflow))));
            tracep->chgBit(oldp+1095,((1U & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__adder_carryout)))));
            tracep->chgBit(oldp+1096,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__flag_set));
            tracep->chgIData(oldp+1097,(((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_immediate_sel_o)
                                          ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_immediate_o
                                          : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_rfb_o)),32);
            tracep->chgBit(oldp+1098,((1U & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr) 
                                             >> 3U))));
            tracep->chgBit(oldp+1099,((1U & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr) 
                                             >> 5U))));
            tracep->chgIData(oldp+1100,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat_aligned),32);
            tracep->chgBit(oldp+1101,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__access_done));
            tracep->chgBit(oldp+1102,((0U != (3U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_adr_o))));
            tracep->chgBit(oldp+1103,((1U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_adr_o)));
            tracep->chgBit(oldp+1104,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__except_align));
            tracep->chgBit(oldp+1105,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__except_dbus));
            tracep->chgBit(oldp+1106,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_ack));
            tracep->chgBit(oldp+1107,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_err));
            tracep->chgIData(oldp+1108,(((0xffffffe0U 
                                          & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_adr) 
                                         | (0x1fU & 
                                            ((IData)(4U) 
                                             + vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_adr)))),32);
            tracep->chgBit(oldp+1109,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_we));
            tracep->chgCData(oldp+1110,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_bsel),4);
            tracep->chgBit(oldp+1111,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_access));
            tracep->chgIData(oldp+1112,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__lsu_ldat),32);
            tracep->chgIData(oldp+1113,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_ldat),32);
            tracep->chgIData(oldp+1114,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_adr_match),32);
            tracep->chgBit(oldp+1115,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_access));
            tracep->chgBit(oldp+1116,((0U != (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_hit))));
            tracep->chgBit(oldp+1117,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_refill_allowed));
            tracep->chgBit(oldp+1118,((8U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state))));
            tracep->chgBit(oldp+1119,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__refill_done));
            tracep->chgBit(oldp+1120,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_enabled));
            tracep->chgBit(oldp+1121,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__ctrl_op_lsu));
            tracep->chgBit(oldp+1122,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__tlb_miss));
            tracep->chgBit(oldp+1123,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__pagefault));
            tracep->chgIData(oldp+1124,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_phys_addr),32);
            tracep->chgBit(oldp+1125,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__except_dtlb_miss));
            tracep->chgBit(oldp+1126,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__except_dpagefault));
            tracep->chgBit(oldp+1127,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_cache_inhibit));
            tracep->chgBit(oldp+1128,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__tlb_reload_ack));
            tracep->chgIData(oldp+1129,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__tlb_reload_data),32);
            tracep->chgBit(oldp+1130,((1U & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__ctrl_op_lsu)))));
            tracep->chgBit(oldp+1131,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__tlb_reload_done));
            tracep->chgBit(oldp+1132,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_empty));
            tracep->chgIData(oldp+1133,(((vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_dout[3U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_dout[2U] 
                                            >> 5U))),32);
            tracep->chgIData(oldp+1134,(((vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_dout[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_dout[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1135,((0xfU & ((vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_dout[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_dout[1U] 
                                                    >> 1U)))),4);
            tracep->chgBit(oldp+1136,((1U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_dout[0U])));
            tracep->chgBit(oldp+1137,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_atomic));
            tracep->chgBit(oldp+1138,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__last_write));
            tracep->chgBit(oldp+1139,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__write_done));
            tracep->chgBit(oldp+1140,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__swa_success));
            tracep->chgCData(oldp+1141,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__state),3);
            tracep->chgWData(oldp+1142,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_dout),101);
            tracep->chgWData(oldp+1146,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_din),101);
            tracep->chgCData(oldp+1150,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state),5);
            tracep->chgBit(oldp+1151,((2U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state))));
            tracep->chgBit(oldp+1152,((4U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state))));
            tracep->chgBit(oldp+1153,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__refill_hit));
            tracep->chgIData(oldp+1154,((0x3ffffU & 
                                         (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_adr 
                                          >> 0xdU))),18);
            tracep->chgIData(oldp+1155,((0x3ffffU & 
                                         (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_adr_match 
                                          >> 0xdU))),18);
            tracep->chgSData(oldp+1156,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_waddr[0]),11);
            tracep->chgSData(oldp+1157,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_waddr[1]),11);
            tracep->chgCData(oldp+1158,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_hit),2);
            tracep->chgBit(oldp+1159,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__check_way_match[0]));
            tracep->chgBit(oldp+1160,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__check_way_match[1]));
            tracep->chgBit(oldp+1161,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__write_pending));
            tracep->chgSData(oldp+1162,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_waddr
                                        [0U]),11);
            tracep->chgSData(oldp+1163,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_waddr
                                        [1U]),11);
            tracep->chgBit(oldp+1164,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__way_hit));
            tracep->chgBit(oldp+1165,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__way_huge_hit));
            tracep->chgBit(oldp+1166,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__ure));
            tracep->chgBit(oldp+1167,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__uwe));
            tracep->chgBit(oldp+1168,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__sre));
            tracep->chgBit(oldp+1169,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__swe));
            tracep->chgBit(oldp+1170,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_ticktimer));
            tracep->chgBit(oldp+1171,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_range));
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0xaU] | vlTOPp->__Vm_traceActivity
                         [0xbU]))) {
            tracep->chgBit(oldp+1172,(((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__except_align) 
                                       & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o)))));
            tracep->chgBit(oldp+1173,(((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__except_dpagefault) 
                                       & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o)))));
            tracep->chgBit(oldp+1174,(((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__except_dtlb_miss) 
                                       & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o)))));
            tracep->chgBit(oldp+1175,((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o) 
                                        | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ctrl_branch_exception_edge)) 
                                       | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__flush))));
            tracep->chgBit(oldp+1176,((1U & ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr) 
                                               >> 6U) 
                                              & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o))) 
                                             & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__mispredict_stall))))));
            tracep->chgBit(oldp+1177,(((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_branch_o) 
                                       & (0U != (3U 
                                                 & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_branch_target_o)))));
            tracep->chgBit(oldp+1178,(((((((2U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state)) 
                                           | (8U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state))) 
                                          & (0U != (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_hit))) 
                                         & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__write_pending))) 
                                        | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__refill_hit)) 
                                       & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__dc_req))));
            tracep->chgBit(oldp+1179,(((((((2U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state)) 
                                           & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__dc_req)) 
                                          & (~ (IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_hit))))) 
                                         & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__write_pending))) 
                                        & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_refill_allowed)) 
                                       | (8U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state)))));
            tracep->chgBit(oldp+1180,((1U & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr) 
                                              >> 5U) 
                                             & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o))))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xbU])) {
            tracep->chgIData(oldp+1181,(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_or1k_d_dat),32);
            tracep->chgBit(oldp+1182,(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_or1k_d_ack));
            tracep->chgIData(oldp+1183,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_out_reg),32);
            tracep->chgBit(oldp+1184,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp));
            tracep->chgBit(oldp+1185,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg_csff));
            tracep->chgBit(oldp+1186,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg_cpu));
            tracep->chgBit(oldp+1187,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync));
            tracep->chgCData(oldp+1188,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rdata),8);
            tracep->chgCData(oldp+1189,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__regA),4);
            tracep->chgBit(oldp+1190,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__strobe_toggle));
            tracep->chgCData(oldp+1191,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__regA),4);
            tracep->chgBit(oldp+1192,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__strobe_toggle));
            tracep->chgBit(oldp+1193,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_branch_o));
            tracep->chgBit(oldp+1194,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__lsu_valid_o));
            tracep->chgBit(oldp+1195,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o));
            tracep->chgBit(oldp+1196,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_stall));
            tracep->chgBit(oldp+1197,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__lsu_ack));
            tracep->chgBit(oldp+1198,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_write));
            tracep->chgBit(oldp+1199,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_read));
            tracep->chgBit(oldp+1200,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__dc_req));
            tracep->chgIData(oldp+1201,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_wr_dat),32);
            tracep->chgQData(oldp+1202,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_din),39);
            tracep->chgBit(oldp+1204,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_lru_in));
            tracep->chgIData(oldp+1205,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_way_in[0]),19);
            tracep->chgIData(oldp+1206,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_way_in[1]),19);
            tracep->chgBit(oldp+1207,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_we));
            tracep->chgIData(oldp+1208,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_din[0]),32);
            tracep->chgIData(oldp+1209,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_din[1]),32);
            tracep->chgCData(oldp+1210,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_we),2);
            tracep->chgCData(oldp+1211,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__lru),2);
            tracep->chgCData(oldp+1212,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__access),2);
            tracep->chgBit(oldp+1213,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__next_lru_history));
            tracep->chgIData(oldp+1214,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__w2),32);
            tracep->chgBit(oldp+1215,((1U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_we))));
            tracep->chgIData(oldp+1216,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_din
                                        [0U]),32);
            tracep->chgBit(oldp+1217,((1U & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_we) 
                                             >> 1U))));
            tracep->chgIData(oldp+1218,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_din
                                        [1U]),32);
            tracep->chgCData(oldp+1219,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__gen_u_lru__DOT__u_lru__DOT__lru_post),2);
            tracep->chgCData(oldp+1220,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__gen_u_lru__DOT__u_lru__DOT__expand[0]),2);
            tracep->chgCData(oldp+1221,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__gen_u_lru__DOT__u_lru__DOT__expand[1]),2);
            tracep->chgIData(oldp+1222,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__gen_u_lru__DOT__u_lru__DOT__j),32);
            tracep->chgIData(oldp+1223,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__gen_u_lru__DOT__u_lru__DOT__offset),32);
            tracep->chgBit(oldp+1224,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__exception));
            tracep->chgBit(oldp+1225,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__exception_re));
            tracep->chgBit(oldp+1226,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_pic));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xcU])) {
            tracep->chgCData(oldp+1227,(vlSymsp->TOP__or1k_pu.__PVT__wb_m2s_mem_cti),3);
            tracep->chgBit(oldp+1228,(vlSymsp->TOP__or1k_pu.__PVT__or1k_dbg_stb_i));
            tracep->chgBit(oldp+1229,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_o_en));
            tracep->chgBit(oldp+1230,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_en));
            tracep->chgSData(oldp+1231,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr),16);
            tracep->chgIData(oldp+1232,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_write_dat),32);
            tracep->chgBit(oldp+1233,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__spr_bus_stb_o));
            tracep->chgBit(oldp+1234,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__spr_bus_we_o));
            tracep->chgIData(oldp+1235,(vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__next_adr),23);
            tracep->chgBit(oldp+1236,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_execute_o));
            tracep->chgBit(oldp+1237,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_ack));
            tracep->chgBit(oldp+1238,((1U & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_ctrl_cappuccino__DOT__ctrl_stall)))));
            tracep->chgBit(oldp+1239,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_bubble_o));
            tracep->chgBit(oldp+1240,((1U & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_ctrl_cappuccino__DOT__execute_stall)))));
            tracep->chgBit(oldp+1241,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__fetch_rf_adr_valid_o));
            tracep->chgCData(oldp+1242,((0x1fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__imem_dat 
                                                  >> 0x10U))),5);
            tracep->chgCData(oldp+1243,((0x1fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__imem_dat 
                                                  >> 0xbU))),5);
            tracep->chgBit(oldp+1244,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o));
            tracep->chgBit(oldp+1245,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_fetch_o));
            tracep->chgBit(oldp+1246,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__bus_access_done));
            tracep->chgBit(oldp+1247,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__addr_valid));
            tracep->chgIData(oldp+1248,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__imem_dat),32);
            tracep->chgBit(oldp+1249,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ic_invalidate));
            tracep->chgBit(oldp+1250,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__pagefault));
            tracep->chgBit(oldp+1251,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__tlb_miss));
            tracep->chgBit(oldp+1252,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__except_itlb_miss));
            tracep->chgBit(oldp+1253,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__except_ipagefault));
            tracep->chgBit(oldp+1254,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_busy));
            tracep->chgBit(oldp+1255,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_access));
            tracep->chgBit(oldp+1256,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__ic_req));
            tracep->chgBit(oldp+1257,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__immu_spr_bus_stb));
            tracep->chgBit(oldp+1258,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_we));
            tracep->chgIData(oldp+1259,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_din),32);
            tracep->chgBit(oldp+1260,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_we));
            tracep->chgIData(oldp+1261,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_din),32);
            tracep->chgBit(oldp+1262,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_spr_cs));
            tracep->chgBit(oldp+1263,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_spr_cs));
            tracep->chgCData(oldp+1264,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__spr_way_idx_full),2);
            tracep->chgBit(oldp+1265,((1U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__spr_way_idx_full))));
            tracep->chgIData(oldp+1266,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_adr),32);
            tracep->chgBit(oldp+1267,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_we));
            tracep->chgBit(oldp+1268,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__dmmu_spr_bus_stb));
            tracep->chgBit(oldp+1269,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__invalidate));
            tracep->chgCData(oldp+1270,((0xffU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_adr 
                                                  >> 5U))),8);
            tracep->chgSData(oldp+1271,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_raddr[0]),11);
            tracep->chgSData(oldp+1272,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_raddr[1]),11);
            tracep->chgSData(oldp+1273,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_raddr
                                        [0U]),11);
            tracep->chgSData(oldp+1274,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_raddr
                                        [1U]),11);
            tracep->chgCData(oldp+1275,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_addr),6);
            tracep->chgBit(oldp+1276,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_we));
            tracep->chgIData(oldp+1277,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_din),32);
            tracep->chgCData(oldp+1278,((0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_adr 
                                                  >> 0x18U))),6);
            tracep->chgCData(oldp+1279,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_addr),6);
            tracep->chgBit(oldp+1280,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_we));
            tracep->chgIData(oldp+1281,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_din),32);
            tracep->chgBit(oldp+1282,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_spr_cs));
            tracep->chgBit(oldp+1283,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_spr_cs));
            tracep->chgCData(oldp+1284,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__spr_way_idx_full),2);
            tracep->chgBit(oldp+1285,((1U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__spr_way_idx_full))));
            tracep->chgCData(oldp+1286,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__rfa_rdad),6);
            tracep->chgCData(oldp+1287,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__rfb_rdad),6);
            tracep->chgBit(oldp+1288,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__rf_wren));
            tracep->chgCData(oldp+1289,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__rf_wradr),6);
            tracep->chgIData(oldp+1290,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__rf_wrdat),32);
            tracep->chgBit(oldp+1291,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__genblk1__DOT__spr_gpr_we));
            tracep->chgBit(oldp+1292,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__genblk1__DOT__spr_gpr_re));
            tracep->chgCData(oldp+1293,((0x3fU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr))),6);
            tracep->chgBit(oldp+1294,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_ctrl_cappuccino__DOT__ctrl_stall));
            tracep->chgBit(oldp+1295,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_ctrl_cappuccino__DOT__execute_stall));
            tracep->chgBit(oldp+1296,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__du_npc_write));
            tracep->chgBit(oldp+1297,((0U != (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access))));
            tracep->chgBit(oldp+1298,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_we));
            tracep->chgSData(oldp+1299,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access),12);
            tracep->chgSData(oldp+1300,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access_ack),12);
            tracep->chgIData(oldp+1301,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat[0]),32);
            tracep->chgIData(oldp+1302,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat[1]),32);
            tracep->chgIData(oldp+1303,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat[2]),32);
            tracep->chgIData(oldp+1304,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat[3]),32);
            tracep->chgIData(oldp+1305,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat[4]),32);
            tracep->chgIData(oldp+1306,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat[5]),32);
            tracep->chgIData(oldp+1307,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat[6]),32);
            tracep->chgIData(oldp+1308,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat[7]),32);
            tracep->chgIData(oldp+1309,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat[8]),32);
            tracep->chgIData(oldp+1310,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat[9]),32);
            tracep->chgIData(oldp+1311,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat[10]),32);
            tracep->chgIData(oldp+1312,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat[11]),32);
            tracep->chgBit(oldp+1313,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_write_access));
            tracep->chgBit(oldp+1314,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_bus_access));
            tracep->chgIData(oldp+1315,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sys_group_read),32);
            tracep->chgCData(oldp+1316,((0xfU & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr) 
                                                 >> 0xbU))),4);
            tracep->chgIData(oldp+1317,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat
                                        [0U]),32);
            tracep->chgIData(oldp+1318,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat
                                        [1U]),32);
            tracep->chgIData(oldp+1319,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat
                                        [2U]),32);
            tracep->chgIData(oldp+1320,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat
                                        [3U]),32);
            tracep->chgIData(oldp+1321,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat
                                        [4U]),32);
            tracep->chgIData(oldp+1322,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat
                                        [5U]),32);
            tracep->chgIData(oldp+1323,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat
                                        [6U]),32);
            tracep->chgIData(oldp+1324,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat
                                        [7U]),32);
            tracep->chgIData(oldp+1325,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat
                                        [8U]),32);
            tracep->chgIData(oldp+1326,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat
                                        [9U]),32);
            tracep->chgBit(oldp+1327,((1U & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access) 
                                             >> 9U))));
            tracep->chgBit(oldp+1328,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picmr_access));
            tracep->chgBit(oldp+1329,((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access) 
                                        >> 9U) & (2U 
                                                  == 
                                                  (0x7ffU 
                                                   & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr))))));
            tracep->chgBit(oldp+1330,((1U & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1331,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__spr_ttmr_access));
            tracep->chgBit(oldp+1332,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__spr_ttcr_access));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xdU])) {
            tracep->chgBit(oldp+1333,(vlSymsp->TOP__or1k_pu.__PVT__wb_m2s_dbg_cyc));
            tracep->chgBit(oldp+1334,(vlSymsp->TOP__or1k_pu.__PVT__wb_m2s_dbg_stb));
            tracep->chgIData(oldp+1335,(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_dbg_dat),32);
            tracep->chgBit(oldp+1336,(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_dbg_err));
            tracep->chgCData(oldp+1337,(vlSymsp->TOP__or1k_pu.wb_interface0__DOT____Vcellinp__wb_arbiter_mem__wbm_cyc_i),3);
            tracep->chgBit(oldp+1338,(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__next));
            tracep->chgCData(oldp+1339,(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__order),3);
            tracep->chgBit(oldp+1340,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__data_o_en));
            tracep->chgBit(oldp+1341,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__rdy_sync_en));
            tracep->chgBit(oldp+1342,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__err_en));
            tracep->chgBit(oldp+1343,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__next_fsm_state));
            tracep->chgBit(oldp+1344,(vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__valid));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xeU])) {
            tracep->chgCData(oldp+1345,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter),4);
            tracep->chgBit(oldp+1346,((0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter))));
            tracep->chgCData(oldp+1347,(((8U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter))
                                          ? ((4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter))
                                              ? 0U : 
                                             ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter))
                                                   ? 0U
                                                   : (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg7))))
                                          : ((4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter))
                                              ? ((2U 
                                                  & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter))
                                                   ? (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg6)
                                                   : (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg5))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter))
                                                   ? (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg4)
                                                   : (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg3)))
                                              : ((2U 
                                                  & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter))
                                                   ? (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg2)
                                                   : (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg1))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter))
                                                   ? (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg0)
                                                   : 0U))))),8);
            tracep->chgBit(oldp+1348,((0U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter))));
            tracep->chgBit(oldp+1349,((8U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter))));
            tracep->chgCData(oldp+1350,((0xfU & ((IData)(8U) 
                                                 - (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter)))),4);
            tracep->chgCData(oldp+1351,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg0),8);
            tracep->chgCData(oldp+1352,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg1),8);
            tracep->chgCData(oldp+1353,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg2),8);
            tracep->chgCData(oldp+1354,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg3),8);
            tracep->chgCData(oldp+1355,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg4),8);
            tracep->chgCData(oldp+1356,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg5),8);
            tracep->chgCData(oldp+1357,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg6),8);
            tracep->chgCData(oldp+1358,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg7),8);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xfU])) {
            tracep->chgCData(oldp+1359,((0xfU & ((IData)(8U) 
                                                 - (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter)))),4);
            tracep->chgCData(oldp+1360,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter),4);
            tracep->chgBit(oldp+1361,((0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))));
            tracep->chgBit(oldp+1362,((8U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x10U])) {
            tracep->chgCData(oldp+1363,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__be_dec),4);
            tracep->chgCData(oldp+1364,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__internal_reg_status),2);
            tracep->chgBit(oldp+1365,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x11U])) {
            tracep->chgBit(oldp+1366,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__addr_sel));
            tracep->chgBit(oldp+1367,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__addr_ct_en));
            tracep->chgBit(oldp+1368,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__op_reg_en));
            tracep->chgBit(oldp+1369,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__bit_ct_en));
            tracep->chgBit(oldp+1370,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__bit_ct_rst));
            tracep->chgBit(oldp+1371,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_ct_sel));
            tracep->chgBit(oldp+1372,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_ct_en));
            tracep->chgBit(oldp+1373,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__out_reg_ld_en));
            tracep->chgBit(oldp+1374,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__out_reg_data_sel));
            tracep->chgCData(oldp+1375,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__tdo_output_sel),2);
            tracep->chgBit(oldp+1376,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_strobe));
            tracep->chgBit(oldp+1377,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__crc_clr));
            tracep->chgBit(oldp+1378,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__crc_en));
            tracep->chgBit(oldp+1379,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__crc_in_sel));
            tracep->chgBit(oldp+1380,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__error_reg_en));
            tracep->chgBit(oldp+1381,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_clr_err));
            tracep->chgCData(oldp+1382,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_next_state),4);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x12U])) {
            tracep->chgBit(oldp+1383,(vlSymsp->TOP__or1k_pu.__PVT__or1k_dbg_stall_i));
            tracep->chgBit(oldp+1384,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__ren_rst));
            tracep->chgBit(oldp+1385,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rdata_en));
            tracep->chgBit(oldp+1386,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rpp));
            tracep->chgBit(oldp+1387,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__r_fifo_en));
            tracep->chgBit(oldp+1388,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__r_wb_ack));
            tracep->chgBit(oldp+1389,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__du_restart_from_stall));
        }
        tracep->chgBit(oldp+1390,(vlTOPp->wb_clk_i));
        tracep->chgBit(oldp+1391,(vlTOPp->wb_rst_i));
        tracep->chgBit(oldp+1392,(vlTOPp->tdo_pad_o));
        tracep->chgBit(oldp+1393,(vlTOPp->tms_pad_i));
        tracep->chgBit(oldp+1394,(vlTOPp->tck_pad_i));
        tracep->chgBit(oldp+1395,(vlTOPp->tdi_pad_i));
        tracep->chgBit(oldp+1396,(vlSymsp->TOP__or1k_pu.tdo_pad_o));
        tracep->chgCData(oldp+1397,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__sel_reg),4);
        tracep->chgBit(oldp+1398,(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_dbg_ack));
        tracep->chgCData(oldp+1399,(((0xbU >= (0xfU 
                                               & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                                  << 2U)))
                                      ? (0xfU & ((0xf00U 
                                                  | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_bsel_o) 
                                                      << 4U) 
                                                     | (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__sel_reg))) 
                                                 >> 
                                                 (0xfU 
                                                  & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                                     << 2U))))
                                      : 0U)),4);
        tracep->chgBit(oldp+1400,((((2U >= (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel)) 
                                    & ((IData)(vlSymsp->TOP__or1k_pu.wb_interface0__DOT____Vcellinp__wb_arbiter_mem__wbm_cyc_i) 
                                       >> (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel))) 
                                   & (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__active))));
        tracep->chgBit(oldp+1401,(((2U >= (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel)) 
                                   & ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_req) 
                                        << 2U) | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_req_o) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_m2s_dbg_stb))) 
                                      >> (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel)))));
        tracep->chgBit(oldp+1402,((1U & ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__module_id_reg))
                                          ? ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__module_id_reg) 
                                             & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__data_out_shift_reg))
                                          : ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__module_id_reg))
                                              ? ((0U 
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
                                              : ((0U 
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
                                                    : vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc))))))));
        tracep->chgIData(oldp+1403,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__du__DOT__du_read_dat),32);
        tracep->chgBit(oldp+1404,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__du_stall_o));
        tracep->chgBit(oldp+1405,(((0U == (0xfe000000U 
                                           & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__addr_reg)) 
                                   & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_m2s_dbg_cyc) 
                                      << (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_mux_dbg__DOT__slave_sel)))));
        tracep->chgIData(oldp+1406,(((8U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_bsel_o))
                                      ? ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_uart_dat) 
                                         << 0x18U) : 
                                     ((4U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_bsel_o))
                                       ? ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_uart_dat) 
                                          << 0x10U)
                                       : ((2U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_bsel_o))
                                           ? ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_uart_dat) 
                                              << 8U)
                                           : (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_uart_dat))))),32);
        tracep->chgQData(oldp+1407,((((QData)((IData)(vlSymsp->TOP__or1k_pu__wb_bfm_memory0__ram0.__PVT__dout)) 
                                      << 0x20U) | (QData)((IData)(
                                                                  ((8U 
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
                                                                      : (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_uart_dat)))))))),64);
        tracep->chgCData(oldp+1409,(((2U & (IData)(vlSymsp->TOP__or1k_pu.wb_interface0__DOT____Vcellout__wb_arbiter_mem__wbm_ack_o)) 
                                     | (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_uart_ack))),2);
        __Vtemp17[0U] = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__data_in_reg;
        __Vtemp17[1U] = (IData)((QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat)));
        __Vtemp17[2U] = (IData)(((QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat)) 
                                 >> 0x20U));
        tracep->chgWData(oldp+1410,(__Vtemp17),96);
        tracep->chgSData(oldp+1413,((0xf00U | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_bsel_o) 
                                                << 4U) 
                                               | (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__sel_reg)))),12);
        tracep->chgCData(oldp+1414,((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_we_o) 
                                      << 1U) | (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__wr_reg))),3);
        tracep->chgCData(oldp+1415,((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_req) 
                                      << 2U) | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_req_o) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_m2s_dbg_stb)))),3);
        tracep->chgSData(oldp+1416,(((((((~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_access)) 
                                         & (4U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state))) 
                                        & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__refill_done)))
                                        ? 2U : 7U) 
                                      << 6U) | ((((4U 
                                                   == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__state)) 
                                                  & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__refill_done)))
                                                  ? 2U
                                                  : 7U) 
                                                << 3U))),9);
        tracep->chgIData(oldp+1417,(((4U & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_adr_i)
                                      ? (0xb000U | 
                                         (((8U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter)) 
                                           << 0x16U) 
                                          | (((8U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter)) 
                                              << 0x15U) 
                                             | ((0U 
                                                 != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter)) 
                                                << 0x10U))))
                                      : (3U | ((((8U 
                                                  & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                                  ? 
                                                 ((4U 
                                                   & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                                     ? 0U
                                                     : (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg7))))
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                                     ? (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg6)
                                                     : (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg5))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                                     ? (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg4)
                                                     : (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg3)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                                     ? (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg2)
                                                     : (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg1))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                                     ? (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg0)
                                                     : 0U)))) 
                                                << 0x18U) 
                                               | (((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__reg_ier) 
                                                   << 0x10U) 
                                                  | ((((0U 
                                                        != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                                        ? 4U
                                                        : 
                                                       (((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__thr_int_arm) 
                                                         & (8U 
                                                            != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter)))
                                                         ? 2U
                                                         : 1U)) 
                                                      << 8U) 
                                                     | ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__reg_dlab_bit) 
                                                        << 7U))))))),32);
        tracep->chgBit(oldp+1418,((((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__r_wb_ack) 
                                    | (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__w_wb_ack)) 
                                   | ((((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_cyc_i) 
                                        & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_stb_i)) 
                                       & (0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_sel_i))) 
                                      & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__reg_dlab_bit) 
                                         | (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__fifo_access)))))));
        tracep->chgBit(oldp+1419,(((((8U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter)) 
                                     & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__thr_int_arm)) 
                                    & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__reg_ier) 
                                       >> 1U)) | ((0U 
                                                   != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter)) 
                                                  & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__reg_ier)))));
        tracep->chgBit(oldp+1420,((1U & ((0U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__tdo_output_sel))
                                          ? (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_ready)
                                          : ((1U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__tdo_output_sel))
                                              ? (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__data_out_shift_reg)
                                              : ((2U 
                                                  == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__tdo_output_sel))
                                                  ? 
                                                 ((IData)(
                                                          (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                                           >> 0x15U)) 
                                                  == vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc)
                                                  : vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc))))));
        tracep->chgBit(oldp+1421,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_ready));
        tracep->chgBit(oldp+1422,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__err_reg));
        tracep->chgIData(oldp+1423,(((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__addr_sel)
                                      ? (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__address_counter 
                                         + (IData)((QData)((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_size_bytes))))
                                      : (IData)((vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                                 >> 0x10U)))),32);
        tracep->chgSData(oldp+1424,((0xffffU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_ct_sel)
                                                 ? 
                                                ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_count) 
                                                 - (IData)(1U))
                                                 : (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg)))),16);
        tracep->chgIData(oldp+1425,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__data_out_reg),32);
        tracep->chgQData(oldp+1426,(((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__out_reg_data_sel)
                                      ? vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__internal_reg_error
                                      : (QData)((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__data_out_reg)))),33);
        tracep->chgBit(oldp+1428,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__str_sync));
        tracep->chgIData(oldp+1429,(((8U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__be_dec))
                                      ? ((4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__be_dec))
                                          ? vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__data_to_biu
                                          : ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__be_dec))
                                              ? vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__data_to_biu
                                              : ((1U 
                                                  & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__be_dec))
                                                  ? vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__data_to_biu
                                                  : 
                                                 (0xff000000U 
                                                  & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__data_to_biu))))
                                      : ((4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__be_dec))
                                          ? ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__be_dec))
                                              ? vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__data_to_biu
                                              : ((1U 
                                                  & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__be_dec))
                                                  ? vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__data_to_biu
                                                  : 
                                                 (0xff0000U 
                                                  & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__data_to_biu 
                                                     >> 8U))))
                                          : ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__be_dec))
                                              ? ((1U 
                                                  & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__be_dec))
                                                  ? 
                                                 (0xffffU 
                                                  & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__data_to_biu 
                                                     >> 0x10U))
                                                  : 
                                                 (0xff00U 
                                                  & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__data_to_biu 
                                                     >> 0x10U)))
                                              : ((1U 
                                                  & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__be_dec))
                                                  ? 
                                                 (0xffU 
                                                  & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__data_to_biu 
                                                     >> 0x18U))
                                                  : vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__data_to_biu))))),32);
        tracep->chgIData(oldp+1430,(((8U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__sel_reg))
                                      ? ((4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__sel_reg))
                                          ? ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__sel_reg))
                                              ? vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_dbg_dat
                                              : ((1U 
                                                  & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__sel_reg))
                                                  ? vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_dbg_dat
                                                  : 
                                                 (0xffffU 
                                                  & (vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_dbg_dat 
                                                     >> 0x10U))))
                                          : ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__sel_reg))
                                              ? vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_dbg_dat
                                              : ((1U 
                                                  & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__sel_reg))
                                                  ? vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_dbg_dat
                                                  : 
                                                 (0xffU 
                                                  & (vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_dbg_dat 
                                                     >> 0x18U)))))
                                      : ((4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__sel_reg))
                                          ? ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__sel_reg))
                                              ? vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_dbg_dat
                                              : ((1U 
                                                  & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__sel_reg))
                                                  ? vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_dbg_dat
                                                  : 
                                                 (0xffffU 
                                                  & (vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_dbg_dat 
                                                     >> 0x10U))))
                                          : ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__sel_reg))
                                              ? ((1U 
                                                  & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__sel_reg))
                                                  ? vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_dbg_dat
                                                  : 
                                                 (0xffU 
                                                  & (vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_dbg_dat 
                                                     >> 8U)))
                                              : vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_dbg_dat)))),32);
        tracep->chgIData(oldp+1431,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc),32);
        tracep->chgIData(oldp+1432,((((IData)(vlTOPp->tdi_pad_i) 
                                      << 0x1fU) | (0x7fffffffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                                              >> 0x16U))))),32);
        tracep->chgIData(oldp+1433,(((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__out_reg_data_sel)
                                      ? (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__internal_reg_status)
                                      : vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_out_reg)),32);
        tracep->chgIData(oldp+1434,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__internal_reg_status),32);
        tracep->chgIData(oldp+1435,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc),32);
        tracep->chgCData(oldp+1436,((0xfU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__user_word_ct_sel)
                                              ? ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__user_word_count) 
                                                 - (IData)(1U))
                                              : (((IData)(vlTOPp->tdi_pad_i) 
                                                  << 3U) 
                                                 | (7U 
                                                    & (IData)(
                                                              (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                                               >> 0x32U))))))),4);
        tracep->chgCData(oldp+1437,((((IData)(vlTOPp->tdi_pad_i) 
                                      << 3U) | (7U 
                                                & (IData)(
                                                          (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                                           >> 0x32U))))),4);
        tracep->chgCData(oldp+1438,((((IData)(vlTOPp->tdi_pad_i) 
                                      << 7U) | (0x7fU 
                                                & (IData)(
                                                          (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                                           >> 0x2eU))))),8);
        tracep->chgCData(oldp+1439,(((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__out_reg_data_sel)
                                      ? (((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__regB) 
                                          << 4U) | (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__regB))
                                      : (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rdata))),8);
        tracep->chgBit(oldp+1440,(((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__r_wb_ack) 
                                   | (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__w_wb_ack))));
        tracep->chgCData(oldp+1441,(((8U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                      ? ((4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                          ? 0U : ((2U 
                                                   & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                                    ? 0U
                                                    : (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg7))))
                                      : ((4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                          ? ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                              ? ((1U 
                                                  & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                                  ? (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg6)
                                                  : (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg5))
                                              : ((1U 
                                                  & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                                  ? (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg4)
                                                  : (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg3)))
                                          : ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                              ? ((1U 
                                                  & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                                  ? (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg2)
                                                  : (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg1))
                                              : ((1U 
                                                  & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                                  ? (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg0)
                                                  : 0U))))),8);
        tracep->chgBit(oldp+1442,(((((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__ren_sff__DOT__srflop) 
                                     | (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__ren_sff__DOT__syncxor)) 
                                    | (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__debug_select))) 
                                   & (0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter)))));
        tracep->chgCData(oldp+1443,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__next_rd_fsm_state),2);
        tracep->chgIData(oldp+1444,((3U | ((((8U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                              ? ((4U 
                                                  & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                                  ? 0U
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                                    ? 0U
                                                    : (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg7))))
                                              : ((4U 
                                                  & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                                    ? (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg6)
                                                    : (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg5))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                                    ? (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg4)
                                                    : (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg3)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                                    ? (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg2)
                                                    : (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg1))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                                    ? (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg0)
                                                    : 0U)))) 
                                            << 0x18U) 
                                           | (((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__reg_ier) 
                                               << 0x10U) 
                                              | ((((0U 
                                                    != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                                    ? 4U
                                                    : 
                                                   (((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__thr_int_arm) 
                                                     & (8U 
                                                        != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter)))
                                                     ? 2U
                                                     : 1U)) 
                                                  << 8U) 
                                                 | ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__reg_dlab_bit) 
                                                    << 7U)))))),32);
        tracep->chgIData(oldp+1445,((0xb000U | (((8U 
                                                  != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter)) 
                                                 << 0x16U) 
                                                | (((8U 
                                                     != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter)) 
                                                    << 0x15U) 
                                                   | ((0U 
                                                       != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter)) 
                                                      << 0x10U))))),32);
        tracep->chgCData(oldp+1446,(((0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                      ? 4U : (((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__thr_int_arm) 
                                               & (8U 
                                                  != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter)))
                                               ? 2U
                                               : 1U))),3);
        tracep->chgBit(oldp+1447,((((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__r_fifo_en) 
                                    & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rpp))) 
                                   & (1U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter)))));
        tracep->chgCData(oldp+1448,((((8U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter)) 
                                      << 6U) | (((8U 
                                                  != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter)) 
                                                 << 5U) 
                                                | (0U 
                                                   != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))))),8);
        tracep->chgBit(oldp+1449,(((0xfU & ((IData)(8U) 
                                            - (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))) 
                                   != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__regA))));
        tracep->chgBit(oldp+1450,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__A_enable));
        tracep->chgBit(oldp+1451,(((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter) 
                                   != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__regA))));
        tracep->chgBit(oldp+1452,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__A_enable));
        tracep->chgCData(oldp+1453,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                    [vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
        tracep->chgBit(oldp+1454,((((IData)(vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__valid) 
                                    & (~ (IData)(vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__valid_r))) 
                                   | (IData)(vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__is_last_r))));
        tracep->chgIData(oldp+1455,(vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__adr),23);
        tracep->chgBit(oldp+1456,(((((2U >= (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel)) 
                                     & ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_we_o) 
                                          << 1U) | (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__wr_reg)) 
                                        >> (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel))) 
                                    & (IData)(vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__valid)) 
                                   & (IData)(vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__wb_ack_o))));
        tracep->chgIData(oldp+1457,(vlSymsp->TOP__or1k_pu__core__or1k_cpu.monitor_execute_insn),32);
        tracep->chgIData(oldp+1458,(vlSymsp->TOP__or1k_pu__core__or1k_cpu.monitor_execute_pc),32);
        tracep->chgCData(oldp+1459,((0xfU & ((- (IData)(
                                                        ((((2U 
                                                            >= (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel)) 
                                                           & ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_we_o) 
                                                                << 1U) 
                                                               | (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__wr_reg)) 
                                                              >> (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel))) 
                                                          & (IData)(vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__valid)) 
                                                         & (IData)(vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__wb_ack_o)))) 
                                             & ((0xbU 
                                                 >= 
                                                 (0xfU 
                                                  & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                                     << 2U)))
                                                 ? 
                                                ((0xf00U 
                                                  | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_bsel_o) 
                                                      << 4U) 
                                                     | (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__sel_reg))) 
                                                 >> 
                                                 (0xfU 
                                                  & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                                     << 2U)))
                                                 : 0U)))),4);
        tracep->chgIData(oldp+1460,((0x1fffffU & (vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__adr 
                                                  >> 2U))),21);
        tracep->chgIData(oldp+1461,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__mfspr_dat_o),32);
        tracep->chgBit(oldp+1462,(((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_access)
                                    ? (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_ack)
                                    : (((2U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state)) 
                                        & (0U != (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_hit))) 
                                       | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__refill_hit) 
                                          & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ic_access))))));
        tracep->chgBit(oldp+1463,(((((2U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state)) 
                                     & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__ic_req)) 
                                    & (~ (IData)((0U 
                                                  != (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_hit))))) 
                                   | (4U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state)))));
        tracep->chgBit(oldp+1464,((1U & ((((((~ (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__tlb_miss) 
                                                  | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__pagefault)) 
                                                 & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr) 
                                                    >> 6U))) 
                                             & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_branch_exception_o))) 
                                            & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o))) 
                                           & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__mispredict_stall))) 
                                          | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__doing_rfe)) 
                                         & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_busy))))));
        tracep->chgBit(oldp+1465,(((((((((((((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ibus_err_o) 
                                               | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ibus_align_o)) 
                                              | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_illegal_o)) 
                                             | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_syscall_o)) 
                                            | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dbus_o)) 
                                           | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_align_o)) 
                                          | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_ticktimer)) 
                                         | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_range)) 
                                        | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_pic)) 
                                       | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_trap_o)) 
                                      | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_itlb_miss_o)) 
                                     | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ipagefault_o)) 
                                    | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dtlb_miss_o)) 
                                   | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dpagefault_o))));
        tracep->chgBit(oldp+1466,((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_mfspr_o) 
                                    | ((IData)(vlSymsp->TOP__or1k_pu.__PVT__or1k_dbg_stb_i) 
                                       & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__wr_reg)))) 
                                   & (0U != (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access)))));
        tracep->chgBit(oldp+1467,(((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_mfspr_o) 
                                   | ((IData)(vlSymsp->TOP__or1k_pu.__PVT__or1k_dbg_stb_i) 
                                      & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__wr_reg))))));
        tracep->chgBit(oldp+1468,(((~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dcache_hit_o)) 
                                   & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_lsu_load_o) 
                                       | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_lsu_store_o)) 
                                      & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_execute_o)))));
        tracep->chgIData(oldp+1469,(((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access) 
                                       >> 9U) & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access) 
                                                  >> 9U) 
                                                 & (2U 
                                                    == 
                                                    (0x7ffU 
                                                     & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr)))))
                                      ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr
                                      : ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access) 
                                           >> 9U) & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picmr_access))
                                          ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picmr
                                          : 0U))),32);
    }
}

void Vor1k_pu::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vor1k_pu__Syms* __restrict vlSymsp = static_cast<Vor1k_pu__Syms*>(userp);
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
        vlTOPp->__Vm_traceActivity[3U] = 0U;
        vlTOPp->__Vm_traceActivity[4U] = 0U;
        vlTOPp->__Vm_traceActivity[5U] = 0U;
        vlTOPp->__Vm_traceActivity[6U] = 0U;
        vlTOPp->__Vm_traceActivity[7U] = 0U;
        vlTOPp->__Vm_traceActivity[8U] = 0U;
        vlTOPp->__Vm_traceActivity[9U] = 0U;
        vlTOPp->__Vm_traceActivity[0xaU] = 0U;
        vlTOPp->__Vm_traceActivity[0xbU] = 0U;
        vlTOPp->__Vm_traceActivity[0xcU] = 0U;
        vlTOPp->__Vm_traceActivity[0xdU] = 0U;
        vlTOPp->__Vm_traceActivity[0xeU] = 0U;
        vlTOPp->__Vm_traceActivity[0xfU] = 0U;
        vlTOPp->__Vm_traceActivity[0x10U] = 0U;
        vlTOPp->__Vm_traceActivity[0x11U] = 0U;
        vlTOPp->__Vm_traceActivity[0x12U] = 0U;
    }
}
