// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vor1k_pu.h for the primary calling header

#include "Vor1k_pu_or1k_cpu_cappuccino__pi5.h"
#include "Vor1k_pu__Syms.h"

#include "verilated_dpi.h"

//==========
CData/*1:0*/ Vor1k_pu_or1k_cpu_cappuccino__pi5::__Vtable1___PVT__decode_lsu_length_o[64];
CData/*0:0*/ Vor1k_pu_or1k_cpu_cappuccino__pi5::__Vtable2___PVT__or1k_execute_alu__DOT__flag_set[128];
CData/*3:0*/ Vor1k_pu_or1k_cpu_cappuccino__pi5::__Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[128];

VL_CTOR_IMP(Vor1k_pu_or1k_cpu_cappuccino__pi5) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vor1k_pu_or1k_cpu_cappuccino__pi5::__Vconfigure(Vor1k_pu__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vor1k_pu_or1k_cpu_cappuccino__pi5::~Vor1k_pu_or1k_cpu_cappuccino__pi5() {
}

void Vor1k_pu_or1k_cpu_cappuccino__pi5::_settle__TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu__1(Vor1k_pu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vor1k_pu_or1k_cpu_cappuccino__pi5::_settle__TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu__1\n"); );
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__genblk1__DOT__wb_rfd_adr_expand 
        = (0x1fU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__genblk1__DOT__wb_rfd_adr_expand));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat[7U] = 0U;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat[5U] = 0U;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat[8U] = 0U;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat[0xbU] = 0U;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_vr2 = 0x1050000U;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_avr = 0x1010000U;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_dmmucfgr = 0x18U;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_immucfgr = 0x18U;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_dccfgr = 0x24c1U;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_iccfgr 
        = (0x1fffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_iccfgr);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_iccfgr 
        = (0xfffffeffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_iccfgr);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_iccfgr 
        = (0x400U | (0xffffe1ffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_iccfgr));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_iccfgr 
        = (0xc1U | (0xffffff00U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_iccfgr));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_vr 
        = (0xffffffc0U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_vr);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_vr 
        = (0x40U | vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_vr);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_vr 
        = (0xffff007fU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_vr);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_vr 
        = (0xff00ffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_vr);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_vr 
        = (0x10000000U | (0xffffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_vr));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_isr[0U] = 0U;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_isr[1U] = 0U;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_isr[2U] = 0U;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_isr[3U] = 0U;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_isr[4U] = 0U;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_isr[5U] = 0U;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_isr[6U] = 0U;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_isr[7U] = 0U;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_upr 
        = (1U | vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_upr);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_upr 
        = (2U | vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_upr);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_upr 
        = (4U | vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_upr);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_upr 
        = (8U | vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_upr);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_upr 
        = (0x10U | vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_upr);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_upr 
        = (0xffffffdfU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_upr);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_upr 
        = (0x40U | vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_upr);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_upr 
        = (0xffffff7fU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_upr);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_upr 
        = (0x100U | vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_upr);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_upr 
        = (0xfffffdffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_upr);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_upr 
        = (0x400U | vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_upr);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_upr 
        = (0xff0007ffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_upr);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_upr 
        = (0xffffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_upr);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_cpucfgr 
        = (1U | (0xfffffff0U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_cpucfgr));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_cpucfgr 
        = (0xffffffefU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_cpucfgr);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_cpucfgr 
        = (0x20U | vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_cpucfgr);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_cpucfgr 
        = (0xffffffbfU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_cpucfgr);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_cpucfgr 
        = (0xffffff7fU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_cpucfgr);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_cpucfgr 
        = (0xfffffeffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_cpucfgr);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_cpucfgr 
        = (0xfffffdffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_cpucfgr);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_cpucfgr 
        = (0xfffffbffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_cpucfgr);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_cpucfgr 
        = (0x800U | vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_cpucfgr);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_cpucfgr 
        = (0x1000U | vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_cpucfgr);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_cpucfgr 
        = (0x2000U | vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_cpucfgr);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_cpucfgr 
        = (0xffffbfffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_cpucfgr);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_cpucfgr 
        = (0x7fffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_cpucfgr);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access_ack 
        = (0xfdfU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access_ack));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access_ack 
        = (0xeffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access_ack));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access_ack 
        = (0x7ffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access_ack));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_huge_we 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_reload_we) 
           & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__tlb_reload_huge));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_huge_we 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_reload_we) 
           & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__tlb_reload_huge));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_huge_we 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_reload_we) 
           & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__tlb_reload_huge));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_huge_we 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_reload_we) 
           & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__tlb_reload_huge));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__deassert_decode_execute_halt 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__fetch_exception_taken_o) 
           & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__decode_execute_halt));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__ttcr_match 
        = ((0xfffffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__spr_ttcr) 
           == (0xfffffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__spr_ttmr));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_sub 
        = (0x1ffffffffULL & ((QData)((IData)(((0xfffffffeU 
                                               & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_r 
                                                  << 1U)) 
                                              | (1U 
                                                 & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_n 
                                                    >> 0x1fU))))) 
                             - (QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_d))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_dout[0U] 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_memories__BRA__0__KET____DOT__way_data_ram__DOT__rdata;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_dout[1U] 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_memories__BRA__1__KET____DOT__way_data_ram__DOT__rdata;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_dout[0U] 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__0__KET____DOT__way_data_ram__DOT__bypass_gen__DOT__bypass)
            ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__0__KET____DOT__way_data_ram__DOT__bypass_gen__DOT__din_r
            : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__0__KET____DOT__way_data_ram__DOT__rdata);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_dout[1U] 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__1__KET____DOT__way_data_ram__DOT__bypass_gen__DOT__bypass)
            ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__1__KET____DOT__way_data_ram__DOT__bypass_gen__DOT__din_r
            : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__1__KET____DOT__way_data_ram__DOT__rdata);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__ctrl_flag_clear 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_flag_clear_o) 
           | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__atomic_gen__DOT__atomic_flag_clear));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__ctrl_flag_set 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_flag_set_o) 
           | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__atomic_gen__DOT__atomic_flag_set));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_full 
        = (((1U & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__write_pointer) 
                   >> 8U)) != (1U & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__read_pointer) 
                                     >> 8U))) & ((0xffU 
                                                  & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__write_pointer)) 
                                                 == 
                                                 (0xffU 
                                                  & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__read_pointer))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_way_out[0U] 
        = (0xfffffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_ram__DOT__rdata));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_way_out[1U] 
        = (0xfffffU & (IData)((vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_ram__DOT__rdata 
                               >> 0x14U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_huge_dout[0U] 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_translate_regs__DOT__rdata_b;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_dout[0U] 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_translate_regs__DOT__rdata_a;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_dout[0U] 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_match_regs__DOT__rdata_a;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_huge_dout[0U] 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_match_regs__DOT__rdata_b;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_huge_dout[0U] 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_translate_regs__DOT__rdata_b;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_dout[0U] 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_translate_regs__DOT__rdata_a;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__deassert_doing_rfe 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__fetch_exception_taken_o) 
           & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__doing_rfe_r));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_dout[0U] 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_match_regs__DOT__rdata_a;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_huge_dout[0U] 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_match_regs__DOT__rdata_b;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__du_npc_write 
        = (((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__wr_reg) 
            & (0x10U == (0xffffU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__addr_reg))) 
           & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__du__DOT__du_ack));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__rf_result_o 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_wb_mux_cappuccino__DOT__wb_op_mul)
            ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__threestagemultiply__DOT__mul_result2
            : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_wb_mux_cappuccino__DOT__rf_result);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_way_out[0U] 
        = (0x7ffffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_ram__DOT__rdata));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_way_out[1U] 
        = (0x7ffffU & (IData)((vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_ram__DOT__rdata 
                               >> 0x13U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__next_ibus_adr 
        = ((0xffffffe0U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_adr) 
           | (0x1fU & ((IData)(4U) + vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_adr)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__refill 
        = (4U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_waddr[0U] 
        = (0x7ffU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_adr 
                     >> 2U));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_waddr[1U] 
        = (0x7ffU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_adr 
                     >> 2U));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__lsu_sdat 
        = ((0U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_length_o))
            ? ((0xff000000U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_rfb_o 
                               << 0x18U)) | ((0xff0000U 
                                              & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_rfb_o 
                                                 << 0x10U)) 
                                             | ((0xff00U 
                                                 & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_rfb_o 
                                                    << 8U)) 
                                                | (0xffU 
                                                   & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_rfb_o))))
            : ((1U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_length_o))
                ? ((0xffff0000U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_rfb_o 
                                   << 0x10U)) | (0xffffU 
                                                 & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_rfb_o))
                : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_rfb_o));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__refill_done 
        = (1U & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__refill_valid) 
                 >> (7U & (((IData)(4U) + vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_adr) 
                           >> 2U))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__genblk1__DOT__wb_rfd_adr_expand 
        = ((0x20U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__genblk1__DOT__wb_rfd_adr_expand)) 
           | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__wb_rfd_adr_o));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_epcr_o 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__ctrl_delay_slot)
            ? (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pc_execute_to_ctrl 
               - (IData)(4U)) : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pc_execute_to_ctrl);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__stepping 
        = (1U & ((vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_dmr1 
                  >> 0x16U) & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_dsr 
                               >> 0xdU)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__execute_hazard_result 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_valid_o)
            ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_alu_result_o
            : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__execute_hazard_result_r);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vtableidx3 
        = (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_mtspr_o) 
            << 6U) | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_mfspr_o) 
                       << 5U) | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_alu_o) 
                                  << 4U) | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_opc_alu_o))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_lut 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vtable3___PVT__or1k_execute_alu__DOT__logic_lut
        [vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vtableidx3];
    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_ram__DOT__bypass_gen__DOT__bypass) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_dout[0U] 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_ram__DOT__bypass_gen__DOT__din_r[0U];
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_dout[1U] 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_ram__DOT__bypass_gen__DOT__din_r[1U];
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_dout[2U] 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_ram__DOT__bypass_gen__DOT__din_r[2U];
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_dout[3U] 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_ram__DOT__bypass_gen__DOT__din_r[3U];
    } else {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_dout[0U] 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_ram__DOT__rdata[0U];
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_dout[1U] 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_ram__DOT__rdata[1U];
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_dout[2U] 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_ram__DOT__rdata[2U];
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_dout[3U] 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_ram__DOT__rdata[3U];
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_empty 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__write_pointer) 
           == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__read_pointer));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__next_dbus_adr 
        = ((0xffffffe0U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_adr) 
           | (0x1fU & ((IData)(4U) + vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_adr)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_refill_allowed 
        = (1U & (~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_lsu_store_o) 
                    | (2U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__state)))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__swa_success 
        = ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_lsu_store_o) 
             & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_lsu_atomic_o)) 
            & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__atomic_reserve)) 
           & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_adr 
              == vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__atomic_addr));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__refill_done 
        = (1U & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__refill_valid) 
                 >> (7U & (((IData)(4U) + vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_adr) 
                           >> 2U))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__carry_in 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_adder_do_sub_o) 
           | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_adder_do_carry_o) 
              & (((~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_carry_clear_o)) 
                  & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr) 
                     >> 0xaU)) | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_carry_set_o))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__invalidate_ack = 0U;
    if ((0x10U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state)))) {
                        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__invalidate_ack = 1U;
                    }
                }
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state))) {
                        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__invalidate_ack = 1U;
                    }
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_enabled 
        = (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr) 
            >> 3U) & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_enable_r));
    if ((2U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_length_o))) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_bsel = 0xfU;
    } else {
        if ((1U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_length_o))) {
            if ((2U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_adr_o)) {
                if ((2U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_adr_o)) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_bsel = 3U;
                }
            } else {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_bsel = 0xcU;
            }
        } else {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_bsel 
                = ((2U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_adr_o)
                    ? ((1U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_adr_o)
                        ? 1U : 2U) : ((1U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_adr_o)
                                       ? 4U : 8U));
        }
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__ctrl_op_lsu 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_lsu_load_o) 
           | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_lsu_store_o));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_we_o 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_we) 
           & ((~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_atomic)) 
              | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__atomic_reserve)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_setflag_o 
        = ((0x39U == (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                               >> 0x1aU))) | (0x2fU 
                                              == (0x3fU 
                                                  & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                     >> 0x1aU))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_jal_o 
        = ((0x12U == (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                               >> 0x1aU))) | (1U == 
                                              (0x3fU 
                                               & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                  >> 0x1aU))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_brcond_o 
        = ((4U == (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                            >> 0x1aU))) | (3U == (0x3fU 
                                                  & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                     >> 0x1aU))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_mul_signed_o 
        = (((0x38U == (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                >> 0x1aU))) & (6U == 
                                               (0xfU 
                                                & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode))) 
           | (0x2cU == (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                 >> 0x1aU))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_mul_unsigned_o 
        = ((0x38U == (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                               >> 0x1aU))) & (0xbU 
                                              == (0xfU 
                                                  & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_div_signed_o 
        = ((0x38U == (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                               >> 0x1aU))) & (9U == 
                                              (0xfU 
                                               & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_div_unsigned_o 
        = ((0x38U == (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                               >> 0x1aU))) & (0xaU 
                                              == (0xfU 
                                                  & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_except_illegal_o 
        = (1U & ((0x80000000U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode)
                  ? ((0x40000000U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode)
                      ? ((0x20000000U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode)
                          ? ((vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                              >> 0x1cU) | ((vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                            >> 0x1bU) 
                                           | ((~ (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                  >> 0x1aU)) 
                                              & ((8U 
                                                  & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode)
                                                  ? 
                                                 ((4U 
                                                   & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode)
                                                   ? 
                                                  (~ 
                                                   (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                    >> 1U))
                                                   : 
                                                  ((~ 
                                                    (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                     >> 1U)) 
                                                   & ((~ vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode) 
                                                      & ((vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                          >> 8U) 
                                                         | ((vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                             >> 7U) 
                                                            & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                               >> 6U))))))
                                                  : 
                                                 ((vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                   >> 2U) 
                                                  & ((vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                      >> 1U) 
                                                     & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode))))))
                          : ((0x10000000U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode)
                              ? ((~ (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                     >> 0x1bU)) & (~ 
                                                   (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                    >> 0x1aU)))
                              : ((0x8000000U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode)
                                  ? (~ (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                        >> 0x1aU)) : 
                                 (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                  >> 0x1aU)))) : ((0x20000000U 
                                                   & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode)
                                                   ? 
                                                  ((vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                    >> 0x1cU) 
                                                   & ((vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                       >> 0x1bU) 
                                                      & ((~ 
                                                          (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                           >> 0x1aU)) 
                                                         & ((vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                             >> 8U) 
                                                            | ((vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                                >> 7U) 
                                                               & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                                  >> 6U))))))
                                                   : 
                                                  ((~ 
                                                    (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                     >> 0x1cU)) 
                                                   & ((~ 
                                                       (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                        >> 0x1bU)) 
                                                      & (~ 
                                                         (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                          >> 0x1aU))))))
                  : ((0x40000000U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode)
                      ? ((0x20000000U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode)
                          ? ((vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                              >> 0x1cU) | ((~ (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                               >> 0x1bU)) 
                                           | (~ (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                 >> 0x1aU))))
                          : ((vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                              >> 0x1cU) | ((0x8000000U 
                                            & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode)
                                            ? (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                               >> 0x1aU)
                                            : (~ (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                  >> 0x1aU)))))
                      : ((0x20000000U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode)
                          ? ((vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                              >> 0x1cU) | ((vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                            >> 0x1bU) 
                                           | ((~ (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                  >> 0x1aU)) 
                                              & (~ 
                                                 (((0U 
                                                    == 
                                                    (7U 
                                                     & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                        >> 0x17U))) 
                                                   | (2U 
                                                      == 
                                                      (7U 
                                                       & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                          >> 0x17U)))) 
                                                  | (4U 
                                                     == 
                                                     (7U 
                                                      & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                         >> 0x17U))))))))
                          : ((0x10000000U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode)
                              ? ((vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                  >> 0x1bU) & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                               >> 0x1aU))
                              : ((vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                  >> 0x1bU) & (~ (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                  >> 0x1aU))))))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vtableidx1 
        = (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                    >> 0x1aU));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_lsu_length_o 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vtable1___PVT__decode_lsu_length_o
        [vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vtableidx1];
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_decode__DOT__imm_sext_sel 
        = ((((((((2U == (3U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                               >> 0x1eU))) & (0x2aU 
                                              != (0x3fU 
                                                  & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                     >> 0x1aU)))) 
                & (0x29U != (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                      >> 0x1aU)))) 
               | (0x33U == (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                     >> 0x1aU)))) | 
              (0x1bU == (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                  >> 0x1aU)))) | (0x35U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                      >> 0x1aU)))) 
            | (0x37U == (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                  >> 0x1aU)))) | (0x36U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                      >> 0x1aU))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_decode__DOT__imm_zext_sel 
        = (((2U == (3U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                          >> 0x1eU))) & ((0x2aU == 
                                          (0x3fU & 
                                           (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                            >> 0x1aU))) 
                                         | (0x29U == 
                                            (0x3fU 
                                             & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                >> 0x1aU))))) 
           | (0x30U == (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                 >> 0x1aU))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_jr_o 
        = ((0x11U == (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                               >> 0x1aU))) | (0x12U 
                                              == (0x3fU 
                                                  & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                     >> 0x1aU))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_decode_execute_cappuccino__DOT__ctrl_to_decode_interlock 
        = (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_lsu_load_o) 
            | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_mfspr_o)) 
           & (((0x1fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                         >> 0x10U)) == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_rfd_adr_o)) 
              | ((0x1fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                           >> 0xbU)) == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_rfd_adr_o))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__predicted_flag_o 
        = (((4U == (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                             >> 0x1aU))) & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                            >> 0x19U)) 
           | ((3U == (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                               >> 0x1aU))) & (~ (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                 >> 0x19U))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_lsu_store_o 
        = ((((0x35U == (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                 >> 0x1aU))) | (0x36U 
                                                == 
                                                (0x3fU 
                                                 & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                    >> 0x1aU)))) 
            | (0x37U == (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                  >> 0x1aU)))) | (0x33U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                      >> 0x1aU))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_flag_o 
        = (1U & (((~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__ctrl_flag_clear)) 
                  & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr) 
                     >> 9U)) | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__ctrl_flag_set)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__check_way_valid[0U] 
        = (1U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_way_out
                 [0U] >> 0x13U));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__check_way_valid[1U] 
        = (1U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_way_out
                 [1U] >> 0x13U));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__check_way_tag[0U] 
        = (0x7ffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_way_out
           [0U]);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__check_way_tag[1U] 
        = (0x7ffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_way_out
           [1U]);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__spr_bus_dat 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_spr_cs_r)
            ? ((0U >= (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__spr_way_idx_r))
                ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_dout
               [vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__spr_way_idx_r]
                : 0U) : ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_spr_cs_r)
                          ? ((0U >= (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__spr_way_idx_r))
                              ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_dout
                             [vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__spr_way_idx_r]
                              : 0U) : ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__immucr_spr_cs_r)
                                        ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__immucr
                                        : 0U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__way_hit 
        = (((0x7ffffU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_dout
                         [0U] >> 0xdU)) == (0x7ffffU 
                                            & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__pc_fetch 
                                               >> 0xdU))) 
           & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_dout
           [0U]);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__way_huge_hit 
        = (((0xffU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_huge_dout
                      [0U] >> 0x18U)) == (0xffU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__pc_fetch 
                                                   >> 0x18U))) 
           & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_huge_dout
           [0U]);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__doing_rfe 
        = ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__padv_ctrl) 
             & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_rfe_o)) 
            | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__doing_rfe_r)) 
           & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__deassert_doing_rfe)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__way_hit 
        = (((0x7ffffU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_dout
                         [0U] >> 0xdU)) == (0x7ffffU 
                                            & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_adr_o 
                                               >> 0xdU))) 
           & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_dout
           [0U]);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__way_huge_hit 
        = (((0xffU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_huge_dout
                      [0U] >> 0x18U)) == (0xffU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_adr_o 
                                                   >> 0x18U))) 
           & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_huge_dout
           [0U]);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__ctrl_hazard_result 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_valid_o)
            ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__rf_result_o
            : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__ctrl_hazard_result_r);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_rfb_o 
        = (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_rf_wb_o) 
            & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_rfd_adr_o) 
               == (0x1fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                            >> 0xbU)))) ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_alu_result_o
            : (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__use_last_wb_b) 
                | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__wb_rf_wb_o) 
                   & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__wb_rfd_adr_o) 
                      == (0x1fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                   >> 0xbU))))) ? ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__use_last_wb_b)
                                                    ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__wb_to_decode_result_b
                                                    : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__rf_result_o)
                : ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__wb_to_decode_bypass_b)
                    ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__wb_to_decode_result_b
                    : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__rfb__DOT__rdata)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__check_way_valid[0U] 
        = (1U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_way_out
                 [0U] >> 0x12U));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__check_way_valid[1U] 
        = (1U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_way_out
                 [1U] >> 0x12U));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__check_way_tag[0U] 
        = (0x3ffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_way_out
           [0U]);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__check_way_tag[1U] 
        = (0x3ffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_way_out
           [1U]);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__du_stall_o 
        = (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__stepping) 
            & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pstep) 
               >> 4U)) | (((vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_dsr 
                            >> 0xdU) & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__padv_ctrl)) 
                          & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_trap_o)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__except_align 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__ctrl_op_lsu) 
           & (((2U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_length_o)) 
               & (0U != (3U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_adr_o))) 
              | ((1U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_length_o)) 
                 & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_adr_o)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_immediate_sel_o 
        = (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_decode__DOT__imm_sext_sel) 
            | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_decode__DOT__imm_zext_sel)) 
           | (6U == (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                              >> 0x1aU))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_decode_execute_cappuccino__DOT__branch_to_imm 
        = ((5U > (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                           >> 0x1aU))) & ((~ (IData)(
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                          >> 0x1bU))))) 
                                          | ((1U & 
                                              (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                               >> 0x1cU)) 
                                             == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__predicted_flag_o))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_imm16_o 
        = (0xffffU & (((0x30U == (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                           >> 0x1aU))) 
                       | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_lsu_store_o))
                       ? ((0xf800U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                      >> 0xaU)) | (0x7ffU 
                                                   & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode))
                       : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__branch_mispredict_o 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_brcond_o) 
           & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_flag_o) 
              != (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_predicted_flag_o)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__sxe = 0U;
    if (((3U == (3U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_huge_dout
                 [0U])) & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__way_huge_hit))) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__sxe 
            = (1U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_huge_dout
                     [0U] >> 6U));
    } else {
        if (((~ (IData)((3U == (3U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_huge_dout
                                [0U])))) & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__way_hit))) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__sxe 
                = (1U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_dout
                         [0U] >> 6U));
        }
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__uxe = 0U;
    if (((3U == (3U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_huge_dout
                 [0U])) & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__way_huge_hit))) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__uxe 
            = (1U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_huge_dout
                     [0U] >> 7U));
    } else {
        if (((~ (IData)((3U == (3U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_huge_dout
                                [0U])))) & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__way_hit))) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__uxe 
                = (1U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_dout
                         [0U] >> 7U));
        }
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_cache_inhibit = 0U;
    if (((3U == (3U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_huge_dout
                 [0U])) & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__way_huge_hit))) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_cache_inhibit 
            = (1U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_huge_dout
                     [0U] >> 1U));
    } else {
        if (((~ (IData)((3U == (3U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_huge_dout
                                [0U])))) & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__way_hit))) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_cache_inhibit 
                = (1U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_dout
                         [0U] >> 1U));
        }
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_phys_addr = 0U;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_phys_addr 
        = ((0xff000000U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_phys_addr) 
           | (0xffffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__pc_fetch));
    if (((3U == (3U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_huge_dout
                 [0U])) & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__way_huge_hit))) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_phys_addr 
            = ((0xff000000U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_huge_dout
                [0U]) | (0xffffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__pc_fetch));
    } else {
        if (((~ (IData)((3U == (3U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_huge_dout
                                [0U])))) & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__way_hit))) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_phys_addr 
                = ((0xffffe000U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_dout
                    [0U]) | (0x1fffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__pc_fetch));
        }
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_branch_exception_o 
        = ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__exception_r) 
             | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_rfe_o)) 
            | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__doing_rfe)) 
           & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__exception_taken)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_range 
        = (1U & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr) 
                  >> 0xcU) & ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr) 
                                >> 0xbU) | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_overflow_set_o)) 
                              & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__doing_rfe)))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_ticktimer 
        = (1U & ((((vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__spr_ttmr 
                    >> 0x1cU) & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr) 
                                 >> 1U)) & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_mtspr_o))) 
                 & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__doing_rfe))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_cache_inhibit = 0U;
    if (((3U == (3U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_huge_dout
                 [0U])) & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__way_huge_hit))) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_cache_inhibit 
            = (1U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_huge_dout
                     [0U] >> 1U));
    } else {
        if (((~ (IData)((3U == (3U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_huge_dout
                                [0U])))) & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__way_hit))) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_cache_inhibit 
                = (1U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_dout
                         [0U] >> 1U));
        }
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__tlb_miss 
        = (1U & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__tlb_reload_pagefault)));
    if ((((3U == (3U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_huge_dout
                  [0U])) & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__way_huge_hit)) 
         | ((~ (IData)((3U == (3U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_huge_dout
                               [0U])))) & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__way_hit)))) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__tlb_miss = 0U;
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__ure = 0U;
    if (((3U == (3U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_huge_dout
                 [0U])) & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__way_huge_hit))) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__ure 
            = (1U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_huge_dout
                     [0U] >> 6U));
    } else {
        if (((~ (IData)((3U == (3U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_huge_dout
                                [0U])))) & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__way_hit))) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__ure 
                = (1U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_dout
                         [0U] >> 6U));
        }
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__swe = 0U;
    if (((3U == (3U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_huge_dout
                 [0U])) & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__way_huge_hit))) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__swe 
            = (1U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_huge_dout
                     [0U] >> 9U));
    } else {
        if (((~ (IData)((3U == (3U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_huge_dout
                                [0U])))) & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__way_hit))) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__swe 
                = (1U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_dout
                         [0U] >> 9U));
        }
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__uwe = 0U;
    if (((3U == (3U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_huge_dout
                 [0U])) & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__way_huge_hit))) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__uwe 
            = (1U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_huge_dout
                     [0U] >> 7U));
    } else {
        if (((~ (IData)((3U == (3U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_huge_dout
                                [0U])))) & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__way_hit))) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__uwe 
                = (1U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_dout
                         [0U] >> 7U));
        }
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__sre = 0U;
    if (((3U == (3U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_huge_dout
                 [0U])) & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__way_huge_hit))) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__sre 
            = (1U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_huge_dout
                     [0U] >> 8U));
    } else {
        if (((~ (IData)((3U == (3U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_huge_dout
                                [0U])))) & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__way_hit))) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__sre 
                = (1U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_dout
                         [0U] >> 8U));
        }
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_phys_addr = 0U;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_phys_addr 
        = ((0xff000000U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_phys_addr) 
           | (0xffffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_adr_o));
    if (((3U == (3U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_huge_dout
                 [0U])) & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__way_huge_hit))) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_phys_addr 
            = ((0xff000000U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_huge_dout
                [0U]) | (0xffffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_adr_o));
    } else {
        if (((~ (IData)((3U == (3U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_huge_dout
                                [0U])))) & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__way_hit))) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_phys_addr 
                = ((0xffffe000U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_dout
                    [0U]) | (0x1fffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_adr_o));
        }
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__execute_hazard_a)
            ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__execute_hazard_result
            : ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__ctrl_hazard_a)
                ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__ctrl_hazard_result
                : ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__wb_hazard_a)
                    ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__wb_hazard_result
                    : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__execute_rfa)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfb_o 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__execute_hazard_b)
            ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__execute_hazard_result
            : ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__ctrl_hazard_b)
                ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__ctrl_hazard_result
                : ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__wb_hazard_b)
                    ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__wb_hazard_result
                    : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__execute_rfb)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_immediate_o 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_decode__DOT__imm_sext_sel)
            ? ((0xffff0000U & ((- (IData)((1U & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_imm16_o) 
                                                 >> 0xfU)))) 
                               << 0x10U)) | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_imm16_o))
            : ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_decode__DOT__imm_zext_sel)
                ? (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_imm16_o)
                : ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_imm16_o) 
                   << 0x10U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_decode_execute_cappuccino__DOT__branch_to_imm_target 
        = (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pc_fetch_to_decode 
           + ((0xf0000000U & ((- (IData)((1U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                >> 0x19U)))) 
                              << 0x1cU)) | ((0xffc0000U 
                                             & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                << 2U)) 
                                            | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_imm16_o) 
                                               << 2U))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__mispredict_stall 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__fetching_mispredicted_branch) 
           | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__branch_mispredict_o) 
              & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__fetching_brcond)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ic_access 
        = ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr) 
             >> 4U) & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__ic_enable_r)) 
           & (~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_cache_inhibit) 
                 & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr) 
                    >> 6U))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ic_addr_match 
        = ((0x40U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr))
            ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_phys_addr
            : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__pc_fetch);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__except_ipagefault_clear 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_except_ipagefault_o) 
           & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_branch_exception_o));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ctrl_branch_exception_edge 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_branch_exception_o) 
           & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ctrl_branch_exception_r)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__except_dtlb_miss 
        = (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__ctrl_op_lsu) 
            & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__tlb_miss)) 
           & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr) 
              >> 5U));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__pagefault 
        = ((1U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr))
            ? (((~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__swe)) 
                & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_lsu_store_o)) 
               | ((~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__sre)) 
                  & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_lsu_load_o)))
            : (((~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__uwe)) 
                & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_lsu_store_o)) 
               | ((~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__ure)) 
                  & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_lsu_load_o))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_adr_match 
        = ((0x20U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr))
            ? (0xfffffffcU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_phys_addr)
            : (0xfffffffcU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_adr_o));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk5__DOT__ffl1_result_wire 
        = ((4U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_opc_alu_secondary_o))
            ? ((0x80000000U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                ? 0x20U : ((0x40000000U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                            ? 0x1fU : ((0x20000000U 
                                        & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                                        ? 0x1eU : (
                                                   (0x10000000U 
                                                    & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                                                    ? 0x1dU
                                                    : 
                                                   ((0x8000000U 
                                                     & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                                                     ? 0x1cU
                                                     : 
                                                    ((0x4000000U 
                                                      & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                                                      ? 0x1bU
                                                      : 
                                                     ((0x2000000U 
                                                       & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                                                       ? 0x1aU
                                                       : 
                                                      ((0x1000000U 
                                                        & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                                                        ? 0x19U
                                                        : 
                                                       ((0x800000U 
                                                         & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                                                         ? 0x18U
                                                         : 
                                                        ((0x400000U 
                                                          & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                                                          ? 0x17U
                                                          : 
                                                         ((0x200000U 
                                                           & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                                                           ? 0x16U
                                                           : 
                                                          ((0x100000U 
                                                            & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                                                            ? 0x15U
                                                            : 
                                                           ((0x80000U 
                                                             & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                                                             ? 0x14U
                                                             : 
                                                            ((0x40000U 
                                                              & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                                                              ? 0x13U
                                                              : 
                                                             ((0x20000U 
                                                               & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                                                               ? 0x12U
                                                               : 
                                                              ((0x10000U 
                                                                & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                                                                ? 0x11U
                                                                : 
                                                               ((0x8000U 
                                                                 & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                                                                 ? 0x10U
                                                                 : 
                                                                ((0x4000U 
                                                                  & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                                                                  ? 0xfU
                                                                  : 
                                                                 ((0x2000U 
                                                                   & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                                                                   ? 0xeU
                                                                   : 
                                                                  ((0x1000U 
                                                                    & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                                                                    ? 0xdU
                                                                    : 
                                                                   ((0x800U 
                                                                     & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                                                                     ? 0xcU
                                                                     : 
                                                                    ((0x400U 
                                                                      & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                                                                      ? 0xbU
                                                                      : 
                                                                     ((0x200U 
                                                                       & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                                                                       ? 0xaU
                                                                       : 
                                                                      ((0x100U 
                                                                        & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                                                                        ? 9U
                                                                        : 
                                                                       ((0x80U 
                                                                         & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                                                                         ? 8U
                                                                         : 
                                                                        ((0x40U 
                                                                          & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                                                                          ? 7U
                                                                          : 
                                                                         ((0x20U 
                                                                           & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                                                                           ? 6U
                                                                           : 
                                                                          ((0x10U 
                                                                            & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                                                                            ? 5U
                                                                            : 
                                                                           ((8U 
                                                                             & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                                                                             ? 4U
                                                                             : 
                                                                            ((4U 
                                                                              & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                                                                              ? 3U
                                                                              : 
                                                                             ((2U 
                                                                               & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                                                                               ? 2U
                                                                               : 
                                                                              ((1U 
                                                                                & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                                                                                ? 1U
                                                                                : 0U))))))))))))))))))))))))))))))))
            : ((1U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                ? 1U : ((2U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                         ? 2U : ((4U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                                  ? 3U : ((8U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                                           ? 4U : (
                                                   (0x10U 
                                                    & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                                                    ? 5U
                                                    : 
                                                   ((0x20U 
                                                     & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                                                     ? 6U
                                                     : 
                                                    ((0x40U 
                                                      & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                                                      ? 7U
                                                      : 
                                                     ((0x80U 
                                                       & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                                                       ? 8U
                                                       : 
                                                      ((0x100U 
                                                        & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                                                        ? 9U
                                                        : 
                                                       ((0x200U 
                                                         & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                                                         ? 0xaU
                                                         : 
                                                        ((0x400U 
                                                          & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                                                          ? 0xbU
                                                          : 
                                                         ((0x800U 
                                                           & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                                                           ? 0xcU
                                                           : 
                                                          ((0x1000U 
                                                            & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                                                            ? 0xdU
                                                            : 
                                                           ((0x2000U 
                                                             & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                                                             ? 0xeU
                                                             : 
                                                            ((0x4000U 
                                                              & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                                                              ? 0xfU
                                                              : 
                                                             ((0x8000U 
                                                               & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                                                               ? 0x10U
                                                               : 
                                                              ((0x10000U 
                                                                & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                                                                ? 0x11U
                                                                : 
                                                               ((0x20000U 
                                                                 & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                                                                 ? 0x12U
                                                                 : 
                                                                ((0x40000U 
                                                                  & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                                                                  ? 0x13U
                                                                  : 
                                                                 ((0x80000U 
                                                                   & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                                                                   ? 0x14U
                                                                   : 
                                                                  ((0x100000U 
                                                                    & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                                                                    ? 0x15U
                                                                    : 
                                                                   ((0x200000U 
                                                                     & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                                                                     ? 0x16U
                                                                     : 
                                                                    ((0x400000U 
                                                                      & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                                                                      ? 0x17U
                                                                      : 
                                                                     ((0x800000U 
                                                                       & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                                                                       ? 0x18U
                                                                       : 
                                                                      ((0x1000000U 
                                                                        & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                                                                        ? 0x19U
                                                                        : 
                                                                       ((0x2000000U 
                                                                         & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                                                                         ? 0x1aU
                                                                         : 
                                                                        ((0x4000000U 
                                                                          & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                                                                          ? 0x1bU
                                                                          : 
                                                                         ((0x8000000U 
                                                                           & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                                                                           ? 0x1cU
                                                                           : 
                                                                          ((0x10000000U 
                                                                            & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                                                                            ? 0x1dU
                                                                            : 
                                                                           ((0x20000000U 
                                                                             & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                                                                             ? 0x1eU
                                                                             : 
                                                                            ((0x40000000U 
                                                                              & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                                                                              ? 0x1fU
                                                                              : 
                                                                             ((0x80000000U 
                                                                               & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)
                                                                               ? 0x20U
                                                                               : 0U)))))))))))))))))))))))))))))))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__in 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout 
        = ((0x7fffffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout) 
           | (0x80000000U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__in 
                             << 0x1fU)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout 
        = ((0xbfffffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout) 
           | (0x40000000U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__in 
                             << 0x1dU)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout 
        = ((0xdfffffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout) 
           | (0x20000000U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__in 
                             << 0x1bU)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout 
        = ((0xefffffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout) 
           | (0x10000000U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__in 
                             << 0x19U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout 
        = ((0xf7ffffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout) 
           | (0x8000000U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__in 
                            << 0x17U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout 
        = ((0xfbffffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout) 
           | (0x4000000U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__in 
                            << 0x15U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout 
        = ((0xfdffffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout) 
           | (0x2000000U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__in 
                            << 0x13U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout 
        = ((0xfeffffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout) 
           | (0x1000000U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__in 
                            << 0x11U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout 
        = ((0xff7fffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout) 
           | (0x800000U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__in 
                           << 0xfU)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout 
        = ((0xffbfffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout) 
           | (0x400000U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__in 
                           << 0xdU)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout 
        = ((0xffdfffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout) 
           | (0x200000U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__in 
                           << 0xbU)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout 
        = ((0xffefffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout) 
           | (0x100000U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__in 
                           << 9U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout 
        = ((0xfff7ffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout) 
           | (0x80000U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__in 
                          << 7U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout 
        = ((0xfffbffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout) 
           | (0x40000U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__in 
                          << 5U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout 
        = ((0xfffdffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout) 
           | (0x20000U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__in 
                          << 3U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout 
        = ((0xfffeffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout) 
           | (0x10000U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__in 
                          << 1U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout 
        = ((0xffff7fffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout) 
           | (0x8000U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__in 
                         >> 1U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout 
        = ((0xffffbfffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout) 
           | (0x4000U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__in 
                         >> 3U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout 
        = ((0xffffdfffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout) 
           | (0x2000U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__in 
                         >> 5U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout 
        = ((0xffffefffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout) 
           | (0x1000U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__in 
                         >> 7U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout 
        = ((0xfffff7ffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout) 
           | (0x800U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__in 
                        >> 9U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout 
        = ((0xfffffbffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout) 
           | (0x400U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__in 
                        >> 0xbU)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout 
        = ((0xfffffdffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout) 
           | (0x200U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__in 
                        >> 0xdU)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout 
        = ((0xfffffeffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout) 
           | (0x100U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__in 
                        >> 0xfU)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout 
        = ((0xffffff7fU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout) 
           | (0x80U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__in 
                       >> 0x11U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout 
        = ((0xffffffbfU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout) 
           | (0x40U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__in 
                       >> 0x13U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout 
        = ((0xffffffdfU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout) 
           | (0x20U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__in 
                       >> 0x15U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout 
        = ((0xffffffefU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout) 
           | (0x10U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__in 
                       >> 0x17U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout 
        = ((0xfffffff7U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout) 
           | (8U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__in 
                    >> 0x19U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout 
        = ((0xfffffffbU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout) 
           | (4U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__in 
                    >> 0x1bU)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout 
        = ((0xfffffffdU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout) 
           | (2U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__in 
                    >> 0x1dU)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout 
        = ((0xfffffffeU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout) 
           | (1U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__in 
                    >> 0x1fU)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__barrel_shifter__DOT__shift_lsw 
        = ((0U == (7U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_opc_alu_secondary_o)))
            ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout
            : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__b 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_immediate_sel_o)
            ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_immediate_o
            : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfb_o);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_branch_target_o 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_decode_execute_cappuccino__DOT__branch_to_imm)
            ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_decode_execute_cappuccino__DOT__branch_to_imm_target
            : (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_bubble_o) 
                | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_jr_o))
                ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfb_o
                : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_rfb_o));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__refill_hit 
        = ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__refill_valid_r) 
             >> (7U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ic_addr_match 
                       >> 2U))) & ((0x7ffffffU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ic_addr_match 
                                                  >> 5U)) 
                                   == (0x7ffffffU & 
                                       (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_adr 
                                        >> 5U)))) & 
           (4U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__check_way_match[0U] 
        = (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__check_way_tag
           [0U] == (0x7ffffU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ic_addr_match 
                                >> 0xdU)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__check_way_match[1U] 
        = (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__check_way_tag
           [1U] == (0x7ffffU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ic_addr_match 
                                >> 0xdU)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__except_dpagefault 
        = (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__ctrl_op_lsu) 
            & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__pagefault)) 
           & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr) 
              >> 5U));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_din[0U] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_bsel)) 
                    << 0x21U) | (((QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_epcr_o)) 
                                  << 1U) | (QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_lsu_atomic_o)))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_din[1U] 
        = ((0xffffffe0U & ((IData)((((QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_adr_match)) 
                                     << 0x20U) | (QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__lsu_sdat)))) 
                           << 5U)) | (IData)(((((QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_bsel)) 
                                                << 0x21U) 
                                               | (((QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_epcr_o)) 
                                                   << 1U) 
                                                  | (QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_lsu_atomic_o)))) 
                                              >> 0x20U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_din[2U] 
        = ((0x1fU & ((IData)((((QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_adr_match)) 
                               << 0x20U) | (QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__lsu_sdat)))) 
                     >> 0x1bU)) | (0xffffffe0U & ((IData)(
                                                          ((((QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_adr_match)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__lsu_sdat))) 
                                                           >> 0x20U)) 
                                                  << 5U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_din[3U] 
        = (0x1fU & ((IData)(((((QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_adr_match)) 
                               << 0x20U) | (QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__lsu_sdat))) 
                             >> 0x20U)) >> 0x1bU));
    if ((4U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state))) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_waddr[0U] 
            = (0x7ffU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_adr_match 
                         >> 2U));
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_waddr[1U] 
            = (0x7ffU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_adr_match 
                         >> 2U));
    } else {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_waddr[0U] 
            = (0x7ffU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_adr 
                         >> 2U));
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_waddr[1U] 
            = (0x7ffU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_adr 
                         >> 2U));
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__refill_hit 
        = (((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__refill_valid_r) 
              >> (7U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_adr_match 
                        >> 2U))) & ((0x3ffffffU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_adr_match 
                                                   >> 5U)) 
                                    == (0x3ffffffU 
                                        & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_adr 
                                           >> 5U)))) 
            & (8U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state))) 
           & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__write_pending)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_access 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_lsu_store_o) 
           | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_enabled) 
               & (~ (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_adr_match 
                     >> 0x1fU))) & (~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_cache_inhibit) 
                                       & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr) 
                                          >> 5U)))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__check_way_match[0U] 
        = (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__check_way_tag
           [0U] == (0x3ffffU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_adr_match 
                                >> 0xdU)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__check_way_match[1U] 
        = (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__check_way_tag
           [1U] == (0x3ffffU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_adr_match 
                                >> 0xdU)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__mul_signed_overflow 
        = (1U & ((((1U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o 
                          >> 0x1fU)) == (1U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__b 
                                               >> 0x1fU))) 
                  & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__threestagemultiply__DOT__mul_result2 
                     >> 0x1fU)) | (((vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o 
                                     ^ vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__b) 
                                    >> 0x1fU) & (~ 
                                                 (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__threestagemultiply__DOT__mul_result2 
                                                  >> 0x1fU)))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result 
        = ((0xfffffffeU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result) 
           | (1U & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_lut) 
                    >> ((2U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o 
                               << 1U)) | (1U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__b)))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result 
        = ((0xfffffffdU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result) 
           | (2U & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_lut) 
                     >> ((2U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o) 
                         | (1U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__b 
                                  >> 1U)))) << 1U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result 
        = ((0xfffffffbU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result) 
           | (4U & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_lut) 
                     >> ((2U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o 
                                >> 1U)) | (1U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__b 
                                                 >> 2U)))) 
                    << 2U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result 
        = ((0xfffffff7U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result) 
           | (8U & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_lut) 
                     >> ((2U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o 
                                >> 2U)) | (1U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__b 
                                                 >> 3U)))) 
                    << 3U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result 
        = ((0xffffffefU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result) 
           | (0x10U & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_lut) 
                        >> ((2U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o 
                                   >> 3U)) | (1U & 
                                              (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__b 
                                               >> 4U)))) 
                       << 4U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result 
        = ((0xffffffdfU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result) 
           | (0x20U & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_lut) 
                        >> ((2U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o 
                                   >> 4U)) | (1U & 
                                              (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__b 
                                               >> 5U)))) 
                       << 5U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result 
        = ((0xffffffbfU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result) 
           | (0x40U & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_lut) 
                        >> ((2U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o 
                                   >> 5U)) | (1U & 
                                              (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__b 
                                               >> 6U)))) 
                       << 6U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result 
        = ((0xffffff7fU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result) 
           | (0x80U & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_lut) 
                        >> ((2U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o 
                                   >> 6U)) | (1U & 
                                              (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__b 
                                               >> 7U)))) 
                       << 7U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result 
        = ((0xfffffeffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result) 
           | (0x100U & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_lut) 
                         >> ((2U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o 
                                    >> 7U)) | (1U & 
                                               (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__b 
                                                >> 8U)))) 
                        << 8U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result 
        = ((0xfffffdffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result) 
           | (0x200U & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_lut) 
                         >> ((2U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o 
                                    >> 8U)) | (1U & 
                                               (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__b 
                                                >> 9U)))) 
                        << 9U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result 
        = ((0xfffffbffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result) 
           | (0x400U & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_lut) 
                         >> ((2U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o 
                                    >> 9U)) | (1U & 
                                               (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__b 
                                                >> 0xaU)))) 
                        << 0xaU)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result 
        = ((0xfffff7ffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result) 
           | (0x800U & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_lut) 
                         >> ((2U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o 
                                    >> 0xaU)) | (1U 
                                                 & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__b 
                                                    >> 0xbU)))) 
                        << 0xbU)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result 
        = ((0xffffefffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result) 
           | (0x1000U & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_lut) 
                          >> ((2U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o 
                                     >> 0xbU)) | (1U 
                                                  & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__b 
                                                     >> 0xcU)))) 
                         << 0xcU)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result 
        = ((0xffffdfffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result) 
           | (0x2000U & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_lut) 
                          >> ((2U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o 
                                     >> 0xcU)) | (1U 
                                                  & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__b 
                                                     >> 0xdU)))) 
                         << 0xdU)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result 
        = ((0xffffbfffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result) 
           | (0x4000U & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_lut) 
                          >> ((2U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o 
                                     >> 0xdU)) | (1U 
                                                  & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__b 
                                                     >> 0xeU)))) 
                         << 0xeU)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result 
        = ((0xffff7fffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result) 
           | (0x8000U & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_lut) 
                          >> ((2U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o 
                                     >> 0xeU)) | (1U 
                                                  & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__b 
                                                     >> 0xfU)))) 
                         << 0xfU)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result 
        = ((0xfffeffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result) 
           | (0x10000U & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_lut) 
                           >> ((2U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o 
                                      >> 0xfU)) | (1U 
                                                   & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__b 
                                                      >> 0x10U)))) 
                          << 0x10U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result 
        = ((0xfffdffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result) 
           | (0x20000U & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_lut) 
                           >> ((2U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o 
                                      >> 0x10U)) | 
                               (1U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__b 
                                      >> 0x11U)))) 
                          << 0x11U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result 
        = ((0xfffbffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result) 
           | (0x40000U & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_lut) 
                           >> ((2U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o 
                                      >> 0x11U)) | 
                               (1U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__b 
                                      >> 0x12U)))) 
                          << 0x12U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result 
        = ((0xfff7ffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result) 
           | (0x80000U & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_lut) 
                           >> ((2U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o 
                                      >> 0x12U)) | 
                               (1U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__b 
                                      >> 0x13U)))) 
                          << 0x13U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result 
        = ((0xffefffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result) 
           | (0x100000U & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_lut) 
                            >> ((2U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o 
                                       >> 0x13U)) | 
                                (1U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__b 
                                       >> 0x14U)))) 
                           << 0x14U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result 
        = ((0xffdfffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result) 
           | (0x200000U & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_lut) 
                            >> ((2U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o 
                                       >> 0x14U)) | 
                                (1U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__b 
                                       >> 0x15U)))) 
                           << 0x15U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result 
        = ((0xffbfffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result) 
           | (0x400000U & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_lut) 
                            >> ((2U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o 
                                       >> 0x15U)) | 
                                (1U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__b 
                                       >> 0x16U)))) 
                           << 0x16U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result 
        = ((0xff7fffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result) 
           | (0x800000U & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_lut) 
                            >> ((2U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o 
                                       >> 0x16U)) | 
                                (1U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__b 
                                       >> 0x17U)))) 
                           << 0x17U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result 
        = ((0xfeffffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result) 
           | (0x1000000U & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_lut) 
                             >> ((2U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o 
                                        >> 0x17U)) 
                                 | (1U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__b 
                                          >> 0x18U)))) 
                            << 0x18U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result 
        = ((0xfdffffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result) 
           | (0x2000000U & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_lut) 
                             >> ((2U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o 
                                        >> 0x18U)) 
                                 | (1U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__b 
                                          >> 0x19U)))) 
                            << 0x19U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result 
        = ((0xfbffffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result) 
           | (0x4000000U & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_lut) 
                             >> ((2U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o 
                                        >> 0x19U)) 
                                 | (1U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__b 
                                          >> 0x1aU)))) 
                            << 0x1aU)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result 
        = ((0xf7ffffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result) 
           | (0x8000000U & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_lut) 
                             >> ((2U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o 
                                        >> 0x1aU)) 
                                 | (1U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__b 
                                          >> 0x1bU)))) 
                            << 0x1bU)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result 
        = ((0xefffffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result) 
           | (0x10000000U & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_lut) 
                              >> ((2U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o 
                                         >> 0x1bU)) 
                                  | (1U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__b 
                                           >> 0x1cU)))) 
                             << 0x1cU)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result 
        = ((0xdfffffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result) 
           | (0x20000000U & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_lut) 
                              >> ((2U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o 
                                         >> 0x1cU)) 
                                  | (1U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__b 
                                           >> 0x1dU)))) 
                             << 0x1dU)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result 
        = ((0xbfffffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result) 
           | (0x40000000U & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_lut) 
                              >> ((2U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o 
                                         >> 0x1dU)) 
                                  | (1U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__b 
                                           >> 0x1eU)))) 
                             << 0x1eU)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result 
        = ((0x7fffffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result) 
           | (0x80000000U & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_lut) 
                              >> ((2U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o 
                                         >> 0x1eU)) 
                                  | (1U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__b 
                                           >> 0x1fU)))) 
                             << 0x1fU)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__in 
        = (IData)(((((QData)((IData)(((2U == (7U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_opc_alu_secondary_o)))
                                       ? (- (IData)(
                                                    (1U 
                                                     & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o 
                                                        >> 0x1fU))))
                                       : 0U))) << 0x20U) 
                    | (QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__barrel_shifter__DOT__shift_lsw))) 
                   >> (0x1fU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__b)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout 
        = ((0x7fffffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout) 
           | (0x80000000U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__in 
                             << 0x1fU)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout 
        = ((0xbfffffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout) 
           | (0x40000000U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__in 
                             << 0x1dU)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout 
        = ((0xdfffffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout) 
           | (0x20000000U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__in 
                             << 0x1bU)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout 
        = ((0xefffffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout) 
           | (0x10000000U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__in 
                             << 0x19U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout 
        = ((0xf7ffffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout) 
           | (0x8000000U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__in 
                            << 0x17U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout 
        = ((0xfbffffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout) 
           | (0x4000000U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__in 
                            << 0x15U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout 
        = ((0xfdffffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout) 
           | (0x2000000U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__in 
                            << 0x13U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout 
        = ((0xfeffffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout) 
           | (0x1000000U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__in 
                            << 0x11U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout 
        = ((0xff7fffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout) 
           | (0x800000U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__in 
                           << 0xfU)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout 
        = ((0xffbfffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout) 
           | (0x400000U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__in 
                           << 0xdU)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout 
        = ((0xffdfffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout) 
           | (0x200000U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__in 
                           << 0xbU)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout 
        = ((0xffefffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout) 
           | (0x100000U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__in 
                           << 9U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout 
        = ((0xfff7ffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout) 
           | (0x80000U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__in 
                          << 7U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout 
        = ((0xfffbffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout) 
           | (0x40000U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__in 
                          << 5U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout 
        = ((0xfffdffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout) 
           | (0x20000U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__in 
                          << 3U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout 
        = ((0xfffeffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout) 
           | (0x10000U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__in 
                          << 1U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout 
        = ((0xffff7fffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout) 
           | (0x8000U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__in 
                         >> 1U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout 
        = ((0xffffbfffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout) 
           | (0x4000U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__in 
                         >> 3U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout 
        = ((0xffffdfffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout) 
           | (0x2000U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__in 
                         >> 5U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout 
        = ((0xffffefffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout) 
           | (0x1000U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__in 
                         >> 7U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout 
        = ((0xfffff7ffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout) 
           | (0x800U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__in 
                        >> 9U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout 
        = ((0xfffffbffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout) 
           | (0x400U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__in 
                        >> 0xbU)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout 
        = ((0xfffffdffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout) 
           | (0x200U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__in 
                        >> 0xdU)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout 
        = ((0xfffffeffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout) 
           | (0x100U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__in 
                        >> 0xfU)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout 
        = ((0xffffff7fU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout) 
           | (0x80U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__in 
                       >> 0x11U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout 
        = ((0xffffffbfU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout) 
           | (0x40U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__in 
                       >> 0x13U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout 
        = ((0xffffffdfU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout) 
           | (0x20U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__in 
                       >> 0x15U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout 
        = ((0xffffffefU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout) 
           | (0x10U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__in 
                       >> 0x17U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout 
        = ((0xfffffff7U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout) 
           | (8U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__in 
                    >> 0x19U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout 
        = ((0xfffffffbU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout) 
           | (4U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__in 
                    >> 0x1bU)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout 
        = ((0xfffffffdU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout) 
           | (2U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__in 
                    >> 0x1dU)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout 
        = ((0xfffffffeU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout) 
           | (1U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__in 
                    >> 0x1fU)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__shift_result 
        = ((0U == (7U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_opc_alu_secondary_o)))
            ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout
            : (IData)(((((QData)((IData)(((2U == (7U 
                                                  & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_opc_alu_secondary_o)))
                                           ? (- (IData)(
                                                        (1U 
                                                         & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o 
                                                            >> 0x1fU))))
                                           : 0U))) 
                         << 0x20U) | (QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__barrel_shifter__DOT__shift_lsw))) 
                       >> (0x1fU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__b))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__b_mux 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_adder_do_sub_o)
            ? (~ vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__b)
            : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__b);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_hit 
        = ((2U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_hit)) 
           | (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__check_way_valid
              [0U] & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__check_way_match
              [0U]));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_hit 
        = ((1U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_hit)) 
           | ((vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__check_way_valid
               [1U] & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__check_way_match
               [1U]) << 1U));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_access 
        = ((((~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_access)) 
             | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_lsu_store_o)) 
            & (4U != (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__state))) 
           | (2U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__state)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_hit 
        = ((2U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_hit)) 
           | (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__check_way_valid
              [0U] & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__check_way_match
              [0U]));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_hit 
        = ((1U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_hit)) 
           | ((vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__check_way_valid
               [1U] & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__check_way_match
               [1U]) << 1U));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__adder_carryout 
        = (1U & (IData)((1ULL & ((((QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)) 
                                   + (QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__b_mux))) 
                                  + (QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__carry_in))) 
                                 >> 0x20U))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__adder_result 
        = ((vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o 
            + vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__b_mux) 
           + (IData)((QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__carry_in))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ic_dat = 0U;
    if ((1U & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_hit) 
               | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__refill_hit) 
                  & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_save_lru))))) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ic_dat 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_dout
            [0U];
    }
    if ((1U & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_hit) 
                >> 1U) | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__refill_hit) 
                          & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_save_lru) 
                             >> 1U))))) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ic_dat 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_dout
            [1U];
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_ldat = 0U;
    if ((1U & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_hit) 
               | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__refill_hit) 
                  & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_save_lru))))) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_ldat 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_dout
            [0U];
    }
    if ((1U & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_hit) 
                >> 1U) | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__refill_hit) 
                          & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_save_lru) 
                             >> 1U))))) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_ldat 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_dout
            [1U];
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__alu_result_o 
        = ((0U != (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_lut))
            ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result
            : (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_alu_o) 
                & (0xeU == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_opc_alu_o)))
                ? ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_flag_o)
                    ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o
                    : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__b)
                : ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_movhi_o)
                    ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_immediate_o
                    : ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_ext_o)
                        ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__ext_result
                        : ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_mul_o)
                            ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__threestagemultiply__DOT__mul_result2
                            : ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_shift_o)
                                ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__shift_result
                                : ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_div_o)
                                    ? ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_neg)
                                        ? ((IData)(1U) 
                                           + (~ vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_n))
                                        : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_n)
                                    : ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_ffl1_o)
                                        ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk5__DOT__ffl1_result_wire
                                        : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__adder_result))))))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__adder_signed_overflow 
        = (((1U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o 
                   >> 0x1fU)) == (1U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__b_mux 
                                        >> 0x1fU))) 
           & ((vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o 
               ^ vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__adder_result) 
              >> 0x1fU));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__lsu_ldat 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_access)
            ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat
            : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_ldat);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vtableidx2 
        = ((0x40U & ((~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__adder_carryout)) 
                     << 6U)) | ((((1U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__adder_result 
                                         >> 0x1fU)) 
                                  != (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__adder_signed_overflow)) 
                                 << 5U) | (((vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o 
                                             == vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__b) 
                                            << 4U) 
                                           | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_opc_alu_secondary_o))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__flag_set 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vtable2___PVT__or1k_execute_alu__DOT__flag_set
        [vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vtableidx2];
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat_aligned 
        = ((2U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_adr_o)
            ? ((1U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_adr_o)
                ? (0xff000000U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__lsu_ldat 
                                  << 0x18U)) : (0xffff0000U 
                                                & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__lsu_ldat 
                                                   << 0x10U)))
            : ((1U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_adr_o)
                ? (0xffffff00U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__lsu_ldat 
                                  << 8U)) : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__lsu_ldat));
}

void Vor1k_pu_or1k_cpu_cappuccino__pi5::_settle__TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu__2(Vor1k_pu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vor1k_pu_or1k_cpu_cappuccino__pi5::_settle__TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu__2\n"); );
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__irq_unmasked 
        = (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picmr 
           & vlSymsp->TOP__or1k_pu.__PVT__or1k_irq);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__du_restart_from_stall 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__du__DOT__du_stall_r) 
           & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__or1k_dbg_stall_i)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_din[0U] 
        = vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_or1k_i_dat;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_din[1U] 
        = vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_or1k_i_dat;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_we = 0U;
    if ((2U != (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state))) {
        if ((4U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state))) {
            if (vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_or1k_i_ack) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_we 
                    = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_save_lru;
            }
        }
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__w2 = 2U;
    if ((2U != (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state))) {
        if ((4U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state))) {
            if (vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_or1k_i_ack) {
                if ((0U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__refill_valid))) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__w2 = 2U;
                }
                if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__refill_done) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__w2 = 2U;
                }
            }
        } else {
            if ((8U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state))) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__w2 = 2U;
            }
        }
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_way_in[0U] 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_way_out
        [0U];
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_way_in[1U] 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_way_out
        [1U];
    if ((2U != (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state))) {
        if ((4U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state))) {
            if (vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_or1k_i_ack) {
                if ((0U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__refill_valid))) {
                    if ((1U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_save_lru))) {
                        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_way_in[0U] 
                            = (0x7ffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_way_in
                               [0U]);
                    }
                    if ((2U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_save_lru))) {
                        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_way_in[1U] 
                            = (0x7ffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_way_in
                               [1U]);
                    }
                }
                if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__refill_done) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_way_in[0U] 
                        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_way_save
                        [0U];
                    if ((1U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_save_lru))) {
                        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_way_in[0U] 
                            = (0x80000U | (0x7ffffU 
                                           & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_adr 
                                              >> 0xdU)));
                    }
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_way_in[1U] 
                        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_way_save
                        [1U];
                    if ((2U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_save_lru))) {
                        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_way_in[1U] 
                            = (0x80000U | (0x7ffffU 
                                           & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_adr 
                                              >> 0xdU)));
                    }
                }
            }
        } else {
            if ((8U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state))) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_way_in[0U] = 0U;
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_way_in[1U] = 0U;
            }
        }
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_we = 0U;
    if ((2U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state))) {
        if ((0U != (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_hit))) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_we = 1U;
        }
    } else {
        if ((4U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state))) {
            if (vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_or1k_i_ack) {
                if ((0U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__refill_valid))) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_we = 1U;
                }
                if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__refill_done) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_we = 1U;
                }
            }
        } else {
            if ((8U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state))) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_we = 1U;
            }
        }
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__access = 0U;
    if ((2U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state))) {
        if ((0U != (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_hit))) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__access 
                = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_hit;
        }
    } else {
        if ((4U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state))) {
            if (vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_or1k_i_ack) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__access 
                    = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_save_lru;
            }
        }
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_write_dat 
        = ((IData)(vlSymsp->TOP__or1k_pu.__PVT__or1k_dbg_stb_i)
            ? vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_in_reg
            : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_rfb_o);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_write_access 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_mtspr_o) 
           | ((IData)(vlSymsp->TOP__or1k_pu.__PVT__or1k_dbg_stb_i) 
              & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__wr_reg)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr 
        = (0xffffU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__or1k_dbg_stb_i)
                       ? vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__addr_reg
                       : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_alu_result_o));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__w2 = 2U;
    if ((0x10U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state)))) {
                        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__w2 = 2U;
                    }
                }
            }
        }
    } else {
        if ((8U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state)))) {
                        if (vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_or1k_d_ack) {
                            if ((0U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__refill_valid))) {
                                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__w2 = 2U;
                            }
                            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__refill_done) {
                                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__w2 = 2U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_way_in[0U] 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_way_out
        [0U];
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_way_in[1U] 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_way_out
        [1U];
    if ((0x10U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state)))) {
                        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_way_in[0U] = 0U;
                        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_way_in[1U] = 0U;
                    }
                }
            }
        }
    } else {
        if ((8U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state)))) {
                        if (vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_or1k_d_ack) {
                            if ((0U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__refill_valid))) {
                                if ((1U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_save_lru))) {
                                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_way_in[0U] 
                                        = (0x3ffffU 
                                           & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_way_in
                                           [0U]);
                                }
                                if ((2U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_save_lru))) {
                                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_way_in[1U] 
                                        = (0x3ffffU 
                                           & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_way_in
                                           [1U]);
                                }
                            }
                            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__refill_done) {
                                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_way_in[0U] 
                                    = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_way_save
                                    [0U];
                                if ((1U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_save_lru))) {
                                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_way_in[0U] 
                                        = (0x40000U 
                                           | (0x3ffffU 
                                              & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_adr 
                                                 >> 0xdU)));
                                }
                                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_way_in[1U] 
                                    = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_way_save
                                    [1U];
                                if ((2U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_save_lru))) {
                                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_way_in[1U] 
                                        = (0x40000U 
                                           | (0x3ffffU 
                                              & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_adr 
                                                 >> 0xdU)));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__access = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state)))) {
                        if (vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_or1k_d_ack) {
                            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__access 
                                = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_save_lru;
                        }
                    }
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state)))) {
                        if ((0U != (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_hit))) {
                            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__access 
                                = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_hit;
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr 
        = ((0xfffffffeU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr) 
           | (1U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__irq_unmasked));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr 
        = ((0xfffffffdU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr) 
           | (2U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__irq_unmasked));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr 
        = ((0xfffffffbU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr) 
           | (4U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__irq_unmasked));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr 
        = ((0xfffffff7U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr) 
           | (8U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__irq_unmasked));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr 
        = ((0xffffffefU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr) 
           | (0x10U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__irq_unmasked));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr 
        = ((0xffffffdfU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr) 
           | (0x20U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__irq_unmasked));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr 
        = ((0xffffffbfU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr) 
           | (0x40U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__irq_unmasked));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr 
        = ((0xffffff7fU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr) 
           | (0x80U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__irq_unmasked));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr 
        = ((0xfffffeffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr) 
           | (0x100U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__irq_unmasked));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr 
        = ((0xfffffdffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr) 
           | (0x200U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__irq_unmasked));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr 
        = ((0xfffffbffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr) 
           | (0x400U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__irq_unmasked));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr 
        = ((0xfffff7ffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr) 
           | (0x800U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__irq_unmasked));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr 
        = ((0xffffefffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr) 
           | (0x1000U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__irq_unmasked));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr 
        = ((0xffffdfffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr) 
           | (0x2000U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__irq_unmasked));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr 
        = ((0xffffbfffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr) 
           | (0x4000U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__irq_unmasked));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr 
        = ((0xffff7fffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr) 
           | (0x8000U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__irq_unmasked));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr 
        = ((0xfffeffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr) 
           | (0x10000U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__irq_unmasked));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr 
        = ((0xfffdffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr) 
           | (0x20000U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__irq_unmasked));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr 
        = ((0xfffbffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr) 
           | (0x40000U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__irq_unmasked));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr 
        = ((0xfff7ffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr) 
           | (0x80000U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__irq_unmasked));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr 
        = ((0xffefffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr) 
           | (0x100000U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__irq_unmasked));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr 
        = ((0xffdfffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr) 
           | (0x200000U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__irq_unmasked));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr 
        = ((0xffbfffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr) 
           | (0x400000U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__irq_unmasked));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr 
        = ((0xff7fffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr) 
           | (0x800000U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__irq_unmasked));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr 
        = ((0xfeffffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr) 
           | (0x1000000U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__irq_unmasked));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr 
        = ((0xfdffffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr) 
           | (0x2000000U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__irq_unmasked));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr 
        = ((0xfbffffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr) 
           | (0x4000000U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__irq_unmasked));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr 
        = ((0xf7ffffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr) 
           | (0x8000000U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__irq_unmasked));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr 
        = ((0xefffffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr) 
           | (0x10000000U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__irq_unmasked));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr 
        = ((0xdfffffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr) 
           | (0x20000000U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__irq_unmasked));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr 
        = ((0xbfffffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr) 
           | (0x40000000U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__irq_unmasked));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr 
        = ((0x7fffffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr) 
           | (0x80000000U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__irq_unmasked));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_din 
        = ((0x1fffff00000ULL & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_din) 
           | (IData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_way_in
                             [0U])));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_din 
        = ((0x100000fffffULL & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_din) 
           | ((QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_way_in
                              [1U])) << 0x14U));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__gen_u_lru__DOT__u_lru__DOT__j = 1U;
    if ((1U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__access))) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__gen_u_lru__DOT__u_lru__DOT__j = 2U;
    }
    if ((2U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__access))) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__gen_u_lru__DOT__u_lru__DOT__j = 2U;
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__gen_u_lru__DOT__u_lru__DOT__j = 2U;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__gen_u_lru__DOT__u_lru__DOT__expand[0U] 
        = (1U | vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__gen_u_lru__DOT__u_lru__DOT__expand
           [0U]);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__gen_u_lru__DOT__u_lru__DOT__expand[0U] 
        = ((1U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__gen_u_lru__DOT__u_lru__DOT__expand
            [0U]) | (2U & ((IData)((vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_ram__DOT__rdata 
                                    >> 0x28U)) << 1U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__gen_u_lru__DOT__u_lru__DOT__expand[1U] 
        = (2U | vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__gen_u_lru__DOT__u_lru__DOT__expand
           [1U]);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__gen_u_lru__DOT__u_lru__DOT__expand[1U] 
        = ((2U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__gen_u_lru__DOT__u_lru__DOT__expand
            [1U]) | (1U & (~ (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__gen_u_lru__DOT__u_lru__DOT__expand
                              [0U] >> 1U))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__lru 
        = ((2U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__lru)) 
           | (3U == vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__gen_u_lru__DOT__u_lru__DOT__expand
              [0U]));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__lru 
        = ((1U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__lru)) 
           | ((IData)((3U == vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__gen_u_lru__DOT__u_lru__DOT__expand
                       [1U])) << 1U));
    if ((1U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__access))) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__gen_u_lru__DOT__u_lru__DOT__expand[0U] 
            = (1U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__gen_u_lru__DOT__u_lru__DOT__expand
               [0U]);
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__gen_u_lru__DOT__u_lru__DOT__expand[1U] 
            = (1U | vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__gen_u_lru__DOT__u_lru__DOT__expand
               [1U]);
    }
    if ((2U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__access))) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__gen_u_lru__DOT__u_lru__DOT__expand[1U] 
            = (2U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__gen_u_lru__DOT__u_lru__DOT__expand
               [1U]);
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__gen_u_lru__DOT__u_lru__DOT__expand[0U] 
            = (2U | vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__gen_u_lru__DOT__u_lru__DOT__expand
               [0U]);
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__gen_u_lru__DOT__u_lru__DOT____Vlvbound1 
        = (1U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__gen_u_lru__DOT__u_lru__DOT__expand
                 [0U] >> 1U));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__next_lru_history 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__gen_u_lru__DOT__u_lru__DOT____Vlvbound1;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__gen_u_lru__DOT__u_lru__DOT__offset = 1U;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__gen_u_lru__DOT__u_lru__DOT__lru_post 
        = ((2U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__gen_u_lru__DOT__u_lru__DOT__lru_post)) 
           | (3U == vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__gen_u_lru__DOT__u_lru__DOT__expand
              [0U]));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__gen_u_lru__DOT__u_lru__DOT__lru_post 
        = ((1U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__gen_u_lru__DOT__u_lru__DOT__lru_post)) 
           | ((IData)((3U == vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__gen_u_lru__DOT__u_lru__DOT__expand
                       [1U])) << 1U));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_din 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_reload_we)
            ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_reload_din
            : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_write_dat);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_din 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_reload_we)
            ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_reload_din
            : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_write_dat);
    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__wb_rf_wb_o) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__rf_wrdat 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__rf_result_o;
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__rf_wradr 
            = (0x3fU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__genblk1__DOT__wb_rfd_adr_expand));
    } else {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__rf_wrdat 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_write_dat;
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__rf_wradr 
            = (0x3fU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr));
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat[6U] 
        = ((0x3010U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr))
            ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_dmr1
            : ((0x3011U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr))
                ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_dmr2
                : ((0x3014U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr))
                    ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_dsr
                    : ((0x3015U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr))
                        ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_drr
                        : 0U))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__spr_way_idx_full 
        = ((2U & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr) 
                  >> 9U)) | (1U & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr) 
                                   >> 8U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__spr_way_idx_full 
        = ((2U & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr) 
                  >> 9U)) | (1U & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr) 
                                   >> 8U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access = 0U;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access 
        = ((0x4000U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr))
            ? ((0x2000U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr))
                ? 0U : ((0x1000U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr))
                         ? ((0x800U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr))
                             ? (0x7ffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access))
                             : (0x400U | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access)))
                         : ((0x800U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr))
                             ? (0x200U | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access))
                             : (0xeffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access)))))
            : ((0x2000U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr))
                ? ((0x1000U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr))
                    ? ((0x800U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr))
                        ? (0xf7fU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access))
                        : (0x40U | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access)))
                    : ((0x800U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr))
                        ? (0xfdfU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access))
                        : (0x10U | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access))))
                : ((0x1000U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr))
                    ? ((0x800U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr))
                        ? (8U | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access))
                        : (4U | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access)))
                    : ((0x800U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr))
                        ? (2U | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access))
                        : (1U | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access))))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_din 
        = ((0x7ffff80000ULL & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_din) 
           | (IData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_way_in
                             [0U])));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_din 
        = ((0x400007ffffULL & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_din) 
           | ((QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_way_in
                              [1U])) << 0x13U));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__gen_u_lru__DOT__u_lru__DOT__j = 1U;
    if ((1U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__access))) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__gen_u_lru__DOT__u_lru__DOT__j = 2U;
    }
    if ((2U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__access))) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__gen_u_lru__DOT__u_lru__DOT__j = 2U;
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__gen_u_lru__DOT__u_lru__DOT__j = 2U;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__gen_u_lru__DOT__u_lru__DOT__expand[0U] 
        = (1U | vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__gen_u_lru__DOT__u_lru__DOT__expand
           [0U]);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__gen_u_lru__DOT__u_lru__DOT__expand[0U] 
        = ((1U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__gen_u_lru__DOT__u_lru__DOT__expand
            [0U]) | (2U & ((IData)((vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_ram__DOT__rdata 
                                    >> 0x26U)) << 1U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__gen_u_lru__DOT__u_lru__DOT__expand[1U] 
        = (2U | vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__gen_u_lru__DOT__u_lru__DOT__expand
           [1U]);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__gen_u_lru__DOT__u_lru__DOT__expand[1U] 
        = ((2U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__gen_u_lru__DOT__u_lru__DOT__expand
            [1U]) | (1U & (~ (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__gen_u_lru__DOT__u_lru__DOT__expand
                              [0U] >> 1U))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__lru 
        = ((2U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__lru)) 
           | (3U == vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__gen_u_lru__DOT__u_lru__DOT__expand
              [0U]));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__lru 
        = ((1U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__lru)) 
           | ((IData)((3U == vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__gen_u_lru__DOT__u_lru__DOT__expand
                       [1U])) << 1U));
    if ((1U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__access))) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__gen_u_lru__DOT__u_lru__DOT__expand[0U] 
            = (1U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__gen_u_lru__DOT__u_lru__DOT__expand
               [0U]);
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__gen_u_lru__DOT__u_lru__DOT__expand[1U] 
            = (1U | vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__gen_u_lru__DOT__u_lru__DOT__expand
               [1U]);
    }
    if ((2U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__access))) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__gen_u_lru__DOT__u_lru__DOT__expand[1U] 
            = (2U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__gen_u_lru__DOT__u_lru__DOT__expand
               [1U]);
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__gen_u_lru__DOT__u_lru__DOT__expand[0U] 
            = (2U | vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__gen_u_lru__DOT__u_lru__DOT__expand
               [0U]);
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__gen_u_lru__DOT__u_lru__DOT____Vlvbound1 
        = (1U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__gen_u_lru__DOT__u_lru__DOT__expand
                 [0U] >> 1U));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__next_lru_history 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__gen_u_lru__DOT__u_lru__DOT____Vlvbound1;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__gen_u_lru__DOT__u_lru__DOT__offset = 1U;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__gen_u_lru__DOT__u_lru__DOT__lru_post 
        = ((2U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__gen_u_lru__DOT__u_lru__DOT__lru_post)) 
           | (3U == vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__gen_u_lru__DOT__u_lru__DOT__expand
              [0U]));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__gen_u_lru__DOT__u_lru__DOT__lru_post 
        = ((1U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__gen_u_lru__DOT__u_lru__DOT__lru_post)) 
           | ((IData)((3U == vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__gen_u_lru__DOT__u_lru__DOT__expand
                       [1U])) << 1U));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_pic 
        = ((((0U != vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr) 
             & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr) 
                >> 2U)) & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_mtspr_o))) 
           & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__doing_rfe)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_lru_in 
        = (1U & (IData)((vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_ram__DOT__rdata 
                         >> 0x28U)));
    if ((2U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state))) {
        if ((0U != (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_hit))) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_lru_in 
                = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__next_lru_history;
        }
    } else {
        if ((4U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state))) {
            if (vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_or1k_i_ack) {
                if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__refill_done) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_lru_in 
                        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__next_lru_history;
                }
            }
        } else {
            if ((8U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state))) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_lru_in = 0U;
            }
        }
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_we 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_write_access) 
           & (0U != (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat[3U] 
        = (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__spr_bus_dat_dc_i 
           & (- (IData)((1U & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access) 
                               >> 3U)))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat[4U] 
        = (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__spr_bus_dat_ic_i 
           & (- (IData)((1U & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access) 
                               >> 4U)))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat[2U] 
        = ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__spr_bus_ack) 
             & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__spr_bus_ack_r)))
             ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__spr_bus_dat
             : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__spr_bus_dat_r) 
           & (- (IData)((1U & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access) 
                               >> 2U)))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat[1U] 
        = (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_spr_cs_r)
             ? ((0U >= (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__spr_way_idx_r))
                 ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_dout
                [vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__spr_way_idx_r]
                 : 0U) : ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_spr_cs_r)
                           ? ((0U >= (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__spr_way_idx_r))
                               ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_dout
                              [vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__spr_way_idx_r]
                               : 0U) : ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dmmucr_spr_cs_r)
                                         ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dmmucr
                                         : 0U))) & 
           (- (IData)((1U & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access) 
                             >> 1U)))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picmr_access 
        = (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access) 
            >> 9U) & (0U == (0x7ffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__spr_ttmr_access 
        = (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access) 
            >> 0xaU) & (0U == (0x7ffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__spr_ttcr_access 
        = (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access) 
            >> 0xaU) & (1U == (0x7ffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access_ack 
        = ((0xf3fU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access_ack)) 
           | (0x40U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access_ack 
        = ((0xdffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access_ack)) 
           | (0x200U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access_ack 
        = ((0xbffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access_ack)) 
           | (0x400U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access_ack 
        = ((0xfefU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access_ack)) 
           | (0xfffffff0U & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__spr_bus_ack_ic_i) 
                              << 4U) & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_bus_access 
        = (1U & ((~ ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access) 
                       | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access) 
                          >> 6U)) | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access) 
                                     >> 9U)) | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access) 
                                                >> 0xaU))) 
                 | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access) 
                    & (2U == (3U & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr) 
                                    >> 9U))))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sys_group_read = 0U;
    if ((1U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access))) {
        if (((((((((0U == (0x7ffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr))) 
                   | (9U == (0x7ffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr)))) 
                  | (0xaU == (0x7ffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr)))) 
                 | (1U == (0x7ffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr)))) 
                | (2U == (0x7ffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr)))) 
               | (3U == (0x7ffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr)))) 
              | (4U == (0x7ffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr)))) 
             | (5U == (0x7ffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr))))) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sys_group_read 
                = ((0U == (0x7ffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr)))
                    ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_vr
                    : ((9U == (0x7ffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr)))
                        ? (1U | (0xffffff00U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_vr2))
                        : ((0xaU == (0x7ffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr)))
                            ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_avr
                            : ((1U == (0x7ffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr)))
                                ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_upr
                                : ((2U == (0x7ffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr)))
                                    ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_cpucfgr
                                    : ((3U == (0x7ffU 
                                               & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr)))
                                        ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_dmmucfgr
                                        : ((4U == (0x7ffU 
                                                   & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr)))
                                            ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_immucfgr
                                            : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_dccfgr)))))));
        } else {
            if (((((((((6U == (0x7ffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr))) 
                       | (7U == (0x7ffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr)))) 
                      | (8U == (0x7ffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr)))) 
                     | (0x10U == (0x7ffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr)))) 
                    | (0x11U == (0x7ffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr)))) 
                   | (0x12U == (0x7ffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr)))) 
                  | (0x14U == (0x7ffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr)))) 
                 | (0x20U == (0x7ffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr))))) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sys_group_read 
                    = ((6U == (0x7ffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr)))
                        ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_iccfgr
                        : ((7U == (0x7ffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr)))
                            ? 0U : ((8U == (0x7ffU 
                                            & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr)))
                                     ? 0U : ((0x10U 
                                              == (0x7ffU 
                                                  & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr)))
                                              ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_npc
                                              : ((0x11U 
                                                  == 
                                                  (0x7ffU 
                                                   & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr)))
                                                  ? (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr)
                                                  : 
                                                 ((0x12U 
                                                   == 
                                                   (0x7ffU 
                                                    & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr)))
                                                   ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_ppc
                                                   : 
                                                  ((0x14U 
                                                    == 
                                                    (0x7ffU 
                                                     & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr)))
                                                    ? (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_fpcsr)
                                                    : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_epcr)))))));
            } else {
                if (((((((((0x30U == (0x7ffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr))) 
                           | (0x40U == (0x7ffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr)))) 
                          | (0xbU == (0x7ffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr)))) 
                         | (0x15U == (0x7ffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr)))) 
                        | (0x16U == (0x7ffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr)))) 
                       | (0x17U == (0x7ffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr)))) 
                      | (0x18U == (0x7ffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr)))) 
                     | (0x19U == (0x7ffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr))))) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sys_group_read 
                        = ((0x30U == (0x7ffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr)))
                            ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_eear
                            : ((0x40U == (0x7ffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr)))
                                ? (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_esr)
                                : ((0xbU == (0x7ffU 
                                             & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr)))
                                    ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_evbar
                                    : ((0x15U == (0x7ffU 
                                                  & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr)))
                                        ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_isr
                                       [0U] : ((0x16U 
                                                == 
                                                (0x7ffU 
                                                 & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr)))
                                                ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_isr
                                               [1U]
                                                : (
                                                   (0x17U 
                                                    == 
                                                    (0x7ffU 
                                                     & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr)))
                                                    ? 
                                                   vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_isr
                                                   [2U]
                                                    : 
                                                   ((0x18U 
                                                     == 
                                                     (0x7ffU 
                                                      & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr)))
                                                     ? 
                                                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_isr
                                                    [3U]
                                                     : 
                                                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_isr
                                                    [4U])))))));
                } else {
                    if ((0x1aU == (0x7ffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr)))) {
                        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sys_group_read 
                            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_isr
                            [5U];
                    } else {
                        if ((0x1bU == (0x7ffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr)))) {
                            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sys_group_read 
                                = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_isr
                                [6U];
                        } else {
                            if ((0x1cU == (0x7ffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr)))) {
                                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sys_group_read 
                                    = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_isr
                                    [7U];
                            } else {
                                if ((0x80U == (0x7ffU 
                                               & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr)))) {
                                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sys_group_read = 0U;
                                } else {
                                    if ((0x81U == (0x7ffU 
                                                   & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr)))) {
                                        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sys_group_read = 0U;
                                    } else {
                                        if ((2U == 
                                             (3U & 
                                              ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr) 
                                               >> 9U)))) {
                                            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sys_group_read 
                                                = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__rfspr_gen__DOT__rfspr__DOT__rdata;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access_ack 
        = ((0xff7U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access_ack)) 
           | (0xfffffff8U & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__invalidate_ack) 
                              << 3U) & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__exception 
        = (((((((((((((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ibus_err_o) 
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
            | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dpagefault_o)) 
           & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__padv_ctrl) 
               & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_bubble_o))) 
              | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__ctrl_stage_exceptions)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_din 
        = ((0xffffffffffULL & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_din) 
           | ((QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_lru_in)) 
              << 0x28U));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat[9U] 
        = ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access) 
             >> 9U) & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access) 
                        >> 9U) & (2U == (0x7ffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr)))))
            ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr
            : ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access) 
                 >> 9U) & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picmr_access))
                ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picmr
                : 0U));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat[0xaU] 
        = ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access) 
             >> 0xaU) & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__spr_ttcr_access))
            ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__spr_ttcr
            : ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access) 
                 >> 0xaU) & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__spr_ttmr_access))
                ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__spr_ttmr
                : 0U));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__spr_bus_we_o 
        = (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_write_access) 
            & (0U != (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access))) 
           & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_bus_access));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__spr_bus_stb_o 
        = (((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_mfspr_o) 
              | ((IData)(vlSymsp->TOP__or1k_pu.__PVT__or1k_dbg_stb_i) 
                 & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__wr_reg)))) 
             | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_write_access)) 
            & (0U != (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access))) 
           & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_bus_access));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat[0U] 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sys_group_read;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__exception_re 
        = (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__exception) 
            & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__exception_r))) 
           & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__exception_taken)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__invalidate 
        = (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__spr_bus_stb_o) 
            & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__spr_bus_we_o)) 
           & ((0x1802U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr)) 
              | (0x1803U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ic_invalidate 
        = (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__spr_bus_stb_o) 
            & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__spr_bus_we_o)) 
           & (0x2002U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__genblk1__DOT__spr_gpr_re 
        = ((((2U == (0x7fU & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr) 
                              >> 9U))) & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__spr_bus_stb_o)) 
            & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__spr_bus_we_o))) 
           & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__padv_ctrl)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__genblk1__DOT__spr_gpr_we 
        = (((2U == (0x7fU & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr) 
                             >> 9U))) & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__spr_bus_stb_o)) 
           & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__spr_bus_we_o));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__dmmu_spr_bus_stb 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__spr_bus_stb_o) 
           & ((~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__padv_ctrl)) 
              | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__spr_bus_we_o)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__immu_spr_bus_stb 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__spr_bus_stb_o) 
           & ((~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__padv_ctrl)) 
              | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__spr_bus_we_o)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__mfspr_dat_o 
        = (((((((((((vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat
                     [0U] | vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat
                     [1U]) | vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat
                    [2U]) | vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat
                   [3U]) | vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat
                  [4U]) | vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat
                 [5U]) | vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat
                [6U]) | vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat
               [7U]) | vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat
              [8U]) | vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat
             [9U]) | vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat
            [0xaU]) | vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat
           [0xbU]);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o 
        = ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__padv_ctrl) 
             & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_rfe_o)) 
            | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__exception_re)) 
           | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__cpu_stall));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_access 
        = (((((~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ic_access)) 
              | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ic_invalidate)) 
             & (4U != (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state))) 
            | ((0U != (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__state)) 
               & (3U != (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__state)))) 
           | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_ack));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__rf_wren 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__wb_rf_wb_o) 
           | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__genblk1__DOT__spr_gpr_we));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access_ack 
        = ((0xffeU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access_ack)) 
           | (1U & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access) 
                    & ((2U == (3U & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr) 
                                     >> 9U))) ? (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__genblk1__DOT__spr_gpr_we) 
                                                  & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__wb_rf_wb_o))) 
                                                 | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__genblk1__DOT__spr_gpr_re) 
                                                    & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__genblk1__DOT__spr_gpr_read_ack)))
                        : 1U))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_spr_cs 
        = ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__dmmu_spr_bus_stb) 
             & (1U == (0x1fU & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr) 
                                >> 0xbU)))) & (0U != 
                                               (3U 
                                                & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr) 
                                                   >> 9U)))) 
           & (~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr) 
                 >> 7U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_spr_cs 
        = ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__dmmu_spr_bus_stb) 
             & (1U == (0x1fU & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr) 
                                >> 0xbU)))) & (0U != 
                                               (3U 
                                                & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr) 
                                                   >> 9U)))) 
           & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr) 
              >> 7U));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access_ack 
        = ((0xffdU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access_ack)) 
           | (0xfffffffeU & (((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__spr_bus_ack) 
                                & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__dmmu_spr_bus_stb)) 
                               & (1U == (0x1fU & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr) 
                                                  >> 0xbU)))) 
                              << 1U) & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_spr_cs 
        = ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__immu_spr_bus_stb) 
             & (2U == (0x1fU & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr) 
                                >> 0xbU)))) & (0U != 
                                               (3U 
                                                & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr) 
                                                   >> 9U)))) 
           & (~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr) 
                 >> 7U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_spr_cs 
        = ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__immu_spr_bus_stb) 
             & (2U == (0x1fU & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr) 
                                >> 0xbU)))) & (0U != 
                                               (3U 
                                                & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr) 
                                                   >> 9U)))) 
           & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr) 
              >> 7U));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access_ack 
        = ((0xffbU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access_ack)) 
           | (0xfffffffcU & (((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__spr_bus_ack) 
                                & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__immu_spr_bus_stb)) 
                               & (2U == (0x1fU & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr) 
                                                  >> 0xbU)))) 
                              << 2U) & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_branch_o 
        = (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_decode_execute_cappuccino__DOT__branch_to_imm) 
            | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_jr_o) 
               & (~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_decode_execute_cappuccino__DOT__ctrl_to_decode_interlock) 
                     | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rf_wb_o) 
                        & ((0x1fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                     >> 0xbU)) == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfd_adr_o))))))) 
           & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_stall 
        = (((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__except_align) 
              | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__except_dbus)) 
             | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__except_dtlb_miss)) 
            | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__except_dpagefault)) 
           | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_we = 0U;
    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_reload_we) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_we = 1U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__spr_way_idx_full)))) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT____Vlvbound3 
            = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_spr_cs) 
               & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__spr_bus_we_o));
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_we 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT____Vlvbound3;
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_we = 0U;
    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_reload_we) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_we = 1U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__spr_way_idx_full)))) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT____Vlvbound6 
            = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_spr_cs) 
               & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__spr_bus_we_o));
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_we 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT____Vlvbound6;
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_din 
        = ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_spr_cs) 
             & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__spr_bus_we_o)) 
            & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__spr_bus_ack)))
            ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_write_dat
            : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_reload_din);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_we = 0U;
    if (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_reload_we) 
         & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__tlb_reload_huge)))) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_we = 1U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__spr_way_idx_full)))) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT____Vlvbound3 
            = (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_spr_cs) 
                & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__spr_bus_we_o)) 
               & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__spr_bus_ack)));
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_we 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT____Vlvbound3;
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_din 
        = ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_spr_cs) 
             & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__spr_bus_we_o)) 
            & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__spr_bus_ack)))
            ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_write_dat
            : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_reload_din);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_we = 0U;
    if (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_reload_we) 
         & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__tlb_reload_huge)))) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_we = 1U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__spr_way_idx_full)))) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT____Vlvbound6 
            = (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_spr_cs) 
                & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__spr_bus_we_o)) 
               & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__spr_bus_ack)));
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_we 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT____Vlvbound6;
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_busy 
        = (((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_spr_cs) 
              | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_spr_cs)) 
             & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__spr_bus_ack))) 
            | ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_spr_cs_r) 
                 | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_spr_cs_r)) 
                & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__spr_bus_ack)) 
               & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__spr_bus_ack_r)))) 
           & ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr) 
                >> 6U) & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o))) 
              & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__mispredict_stall))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_ack 
        = (1U & ((0U != (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access_ack)) 
                 | (~ (IData)((0U != (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access))))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__pc_addr 
        = ((IData)(vlSymsp->TOP__or1k_pu.__PVT__or1k_rst)
            ? 0x100U : ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__du_restart_from_stall)
                         ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_npc
                         : (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_branch_exception_o) 
                             & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__fetch_exception_taken_o)))
                             ? (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_rfe_o) 
                                 | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__doing_rfe))
                                 ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_epcr
                                 : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__exception_pc_addr)
                             : (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__branch_mispredict_o) 
                                 | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__fetching_mispredicted_branch))
                                 ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_mispredict_target_o
                                 : ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_branch_o)
                                     ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_branch_target_o
                                     : ((IData)(4U) 
                                        + vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__pc_fetch))))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_write 
        = (((((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_lsu_store_o) 
                & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__padv_ctrl) 
                   | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__tlb_reload_done))) 
               | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_write_pending)) 
              & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_full))) 
             & (8U != (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state))) 
            & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_refill_r))) 
           & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_stall)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__dc_req 
        = (((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__ctrl_op_lsu) 
              & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_access)) 
             & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__access_done))) 
            & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_stall))) 
           & (~ (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_atomic) 
                  & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_we)) 
                 & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__atomic_reserve)))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__pagefault 
        = (1U & (((1U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr))
                   ? (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__sxe))
                   : (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__uxe))) 
                 & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_busy))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__tlb_miss 
        = (1U & ((~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__tlb_reload_pagefault)) 
                 & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_busy))));
    if ((((3U == (3U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_huge_dout
                  [0U])) & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__way_huge_hit)) 
         | ((~ (IData)((3U == (3U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_huge_dout
                               [0U])))) & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__way_hit)))) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__tlb_miss = 0U;
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__bus_access_done 
        = (((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_access)
               ? (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_ack)
               : (((2U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state)) 
                   & (0U != (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_hit))) 
                  | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__refill_hit) 
                     & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ic_access)))) 
             | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__imem_err)) 
            | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__nop_ack)) 
           & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_busy)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_read 
        = (((((0U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__state)) 
              & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_write)) 
             | ((0U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__state)) 
                & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_empty)))) 
            | ((((2U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__state)) 
                 & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_or1k_d_ack) 
                    | (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_req_o)))) 
                & ((~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_empty)) 
                   | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_write))) 
               & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__last_write)))) 
           | (((2U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__state)) 
               & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__last_write)) 
              & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_write)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_we = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state)))) {
                        if (vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_or1k_d_ack) {
                            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_we 
                                = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_save_lru;
                        }
                    }
                }
            }
        } else {
            if ((4U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state))) {
                if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state)))) {
                        if (((0U != (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_hit)) 
                             & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__dc_req))) {
                            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_we 
                                = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_hit;
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_we = 0U;
    if ((0x10U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state)))) {
                        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_we = 1U;
                    }
                }
            }
        }
    } else {
        if ((8U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state)))) {
                        if (vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_or1k_d_ack) {
                            if ((0U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__refill_valid))) {
                                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_we = 1U;
                            }
                            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__refill_done) {
                                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_we = 1U;
                            }
                        }
                    }
                }
            }
        } else {
            if ((4U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state))) {
                if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state)))) {
                        if (((0U != (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_hit)) 
                             & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__dc_req))) {
                            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_we = 1U;
                        }
                    }
                }
            } else {
                if ((2U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state)))) {
                        if ((0U != (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_hit))) {
                            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_we = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_lru_in 
        = (1U & (IData)((vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_ram__DOT__rdata 
                         >> 0x26U)));
    if ((0x10U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state)))) {
                        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_lru_in = 0U;
                    }
                }
            }
        }
    } else {
        if ((8U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state)))) {
                        if (vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_or1k_d_ack) {
                            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__refill_done) {
                                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_lru_in 
                                    = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__next_lru_history;
                            }
                        }
                    }
                }
            }
        } else {
            if ((4U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state))) {
                if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state)))) {
                        if (((0U != (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_hit)) 
                             & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__dc_req))) {
                            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_lru_in 
                                = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__next_lru_history;
                        }
                    }
                }
            } else {
                if ((2U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state)))) {
                        if ((0U != (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_hit))) {
                            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_lru_in 
                                = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__next_lru_history;
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_wr_dat 
        = vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_or1k_d_dat;
    if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state) 
                  >> 4U)))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state))) {
                if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state)))) {
                        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_wr_dat 
                            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__lsu_sdat;
                        if (((0U != (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_hit)) 
                             & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__dc_req))) {
                            if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_bsel) 
                                          >> 3U)))) {
                                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_wr_dat 
                                    = ((0xffffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_wr_dat) 
                                       | (0xff000000U 
                                          & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_ldat));
                            }
                            if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_bsel) 
                                          >> 2U)))) {
                                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_wr_dat 
                                    = ((0xff00ffffU 
                                        & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_wr_dat) 
                                       | (0xff0000U 
                                          & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_ldat));
                            }
                            if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_bsel) 
                                          >> 1U)))) {
                                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_wr_dat 
                                    = ((0xffff00ffU 
                                        & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_wr_dat) 
                                       | (0xff00U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_ldat));
                            }
                            if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_bsel)))) {
                                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_wr_dat 
                                    = ((0xffffff00U 
                                        & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_wr_dat) 
                                       | (0xffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_ldat));
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__lsu_ack 
        = (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_lsu_store_o) 
            | (2U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__state)))
            ? (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_write) 
                & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_lsu_atomic_o))) 
               | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__write_done) 
                  & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_lsu_atomic_o)))
            : ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_access)
                ? (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_ack)
                : ((((((2U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state)) 
                       | (8U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state))) 
                      & (0U != (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_hit))) 
                     & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__write_pending))) 
                    | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__refill_hit)) 
                   & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__dc_req))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__except_itlb_miss 
        = (((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__tlb_miss) 
              & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr) 
                 >> 6U)) & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__bus_access_done)) 
            & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__mispredict_stall))) 
           & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__doing_rfe)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__except_ipagefault 
        = (((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__pagefault) 
              & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr) 
                 >> 6U)) & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__bus_access_done)) 
            & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__mispredict_stall))) 
           & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__doing_rfe)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_din 
        = ((0x3fffffffffULL & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_din) 
           | ((QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_lru_in)) 
              << 0x26U));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_din[0U] 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_wr_dat;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_din[1U] 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_wr_dat;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__lsu_valid_o 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__lsu_ack) 
           | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__access_done));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__imem_dat 
        = ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__nop_ack) 
             | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__except_itlb_miss)) 
            | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__except_ipagefault))
            ? 0x14000000U : ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_access)
                              ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_dat
                              : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ic_dat));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_ctrl_cappuccino__DOT__ctrl_stall 
        = ((((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_lsu_load_o) 
               | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_lsu_store_o)) 
              & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__lsu_valid_o))) 
             | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_msync_o) 
                & (2U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__state)))) 
            | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_mfspr_o) 
               & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_ack)))) 
           | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_mtspr_o) 
              & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_ack))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__rfa_rdad 
        = (0x1fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__imem_dat 
                    >> 0x10U));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__rfb_rdad 
        = (0x1fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__imem_dat 
                    >> 0xbU));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_ctrl_cappuccino__DOT__execute_stall 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_ctrl_cappuccino__DOT__ctrl_stall) 
           | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_div_o) 
               & (~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_done) 
                     & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_valid_o))))) 
              | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_mul_o) 
                 & (~ (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__threestagemultiply__DOT__mul_valid_shr) 
                        >> 2U) & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_valid_o)))))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_execute_o 
        = ((((((((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_valid_o) 
                   & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_ctrl_cappuccino__DOT__execute_stall))) 
                  & (~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__exception_r) 
                        & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__fetch_exception_taken_o)))) 
                 | (((~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_ctrl_cappuccino__DOT__execute_stall)) 
                     & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__execute_waiting_r)) 
                    & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__fetch_valid_o))) 
                | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__waiting_for_fetch) 
                   & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__fetch_valid_o))) 
               & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__decode_execute_halt))) 
              & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__exception_re))) 
             & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_rfe_o))) 
            & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__cpu_stall))) 
           & ((~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__stepping)) 
              | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__stepping) 
                 & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pstep) 
                    >> 2U))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o 
        = (((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__fetch_valid_o) 
              & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_ctrl_cappuccino__DOT__execute_stall))) 
             & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__decode_execute_halt))) 
            & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__cpu_stall))) 
           & ((~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__stepping)) 
              | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__stepping) 
                 & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pstep) 
                    >> 1U))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_we 
        = ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_lsu_store_o) 
             & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_lsu_atomic_o))) 
            & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_execute_o)) 
           | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_atomic) 
               & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_we_o)) 
              & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__write_done))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_adr 
        = (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_execute_o) 
            & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_lsu_load_o) 
               | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_lsu_store_o)))
            ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__adder_result
            : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_adr_o);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_bubble_o 
        = (((((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_lsu_load_o) 
                | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_mfspr_o)) 
               & (((0x1fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                             >> 0x10U)) == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfd_adr_o)) 
                  | ((0x1fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                               >> 0xbU)) == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfd_adr_o)))) 
              | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_jr_o) 
                 & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_decode_execute_cappuccino__DOT__ctrl_to_decode_interlock) 
                    | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rf_wb_o) 
                       & ((0x1fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                    >> 0xbU)) == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfd_adr_o)))))) 
             | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_lsu_store_o) 
                & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_lsu_atomic_o))) 
            | (9U == (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                               >> 0x1aU)))) & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_raddr[0U] 
        = (0x7ffU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_adr 
                     >> 2U));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_raddr[1U] 
        = (0x7ffU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_adr 
                     >> 2U));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_addr 
        = (0x3fU & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_spr_cs)
                     ? (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr)
                     : (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_adr 
                        >> 0xdU)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_addr 
        = (0x3fU & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_spr_cs)
                     ? (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr)
                     : (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_adr 
                        >> 0xdU)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_fetch_o 
        = (1U & ((((~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_ctrl_cappuccino__DOT__execute_stall)) 
                   & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__cpu_stall))) 
                  & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_bubble_o))) 
                 & ((~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__stepping)) 
                    | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__stepping) 
                        & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pstep)) 
                       & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__fetch_valid_o))))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__stall_fetch_valid 
        = ((~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_fetch_o)) 
           & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__fetch_valid_o));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__fetch_rf_adr_valid_o 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__bus_access_done) 
           & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_fetch_o));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__ic_req 
        = ((((((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_fetch_o) 
                 & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_except_ibus_err_o))) 
                & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_except_itlb_miss_o))) 
               & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__except_itlb_miss))) 
              & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_except_ipagefault_o))) 
             & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__except_ipagefault))) 
            & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ic_access)) 
           & ((((((~ (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__tlb_miss) 
                       | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__pagefault)) 
                      & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr) 
                         >> 6U))) & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_branch_exception_o))) 
                 & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o))) 
                & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__mispredict_stall))) 
               | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__doing_rfe)) 
              & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_busy))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__addr_valid 
        = ((((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__bus_access_done) 
               & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_fetch_o)) 
              & (~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__except_itlb_miss) 
                    | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__except_ipagefault)))) 
             | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_except_itlb_miss_o) 
                & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_branch_exception_o))) 
            | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_except_ipagefault_o) 
               & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_branch_exception_o))) 
           | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__doing_rfe));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ic_addr 
        = (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__addr_valid) 
            | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__du_restart_from_stall))
            ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__pc_addr
            : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__pc_fetch);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_raddr[0U] 
        = (0x7ffU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ic_addr 
                     >> 2U));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_raddr[1U] 
        = (0x7ffU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ic_addr 
                     >> 2U));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_addr 
        = (0x3fU & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_spr_cs) 
                     & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__spr_bus_ack)))
                     ? (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr)
                     : (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ic_addr 
                        >> 0xdU)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_addr 
        = (0x3fU & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_spr_cs) 
                     & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__spr_bus_ack)))
                     ? (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr)
                     : (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ic_addr 
                        >> 0xdU)));
}

void Vor1k_pu_or1k_cpu_cappuccino__pi5::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vor1k_pu_or1k_cpu_cappuccino__pi5::_ctor_var_reset\n"); );
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
    __PVT__pc_fetch_to_decode = VL_RAND_RESET_I(32);
    __PVT__insn_fetch_to_decode = VL_RAND_RESET_I(32);
    __PVT__pc_decode_to_execute = VL_RAND_RESET_I(32);
    __PVT__pc_execute_to_ctrl = VL_RAND_RESET_I(32);
    __PVT__alu_result_o = VL_RAND_RESET_I(32);
    __PVT__branch_mispredict_o = VL_RAND_RESET_I(1);
    __PVT__ctrl_alu_result_o = VL_RAND_RESET_I(32);
    __PVT__ctrl_branch_exception_o = VL_RAND_RESET_I(1);
    __PVT__ctrl_bubble_o = VL_RAND_RESET_I(1);
    __PVT__ctrl_carry_clear_o = VL_RAND_RESET_I(1);
    __PVT__ctrl_carry_set_o = VL_RAND_RESET_I(1);
    __PVT__ctrl_epcr_o = VL_RAND_RESET_I(32);
    __PVT__ctrl_except_align_o = VL_RAND_RESET_I(1);
    __PVT__ctrl_except_dbus_o = VL_RAND_RESET_I(1);
    __PVT__ctrl_except_dpagefault_o = VL_RAND_RESET_I(1);
    __PVT__ctrl_except_dtlb_miss_o = VL_RAND_RESET_I(1);
    __PVT__ctrl_except_ibus_align_o = VL_RAND_RESET_I(1);
    __PVT__ctrl_except_ibus_err_o = VL_RAND_RESET_I(1);
    __PVT__ctrl_except_illegal_o = VL_RAND_RESET_I(1);
    __PVT__ctrl_except_ipagefault_o = VL_RAND_RESET_I(1);
    __PVT__ctrl_except_itlb_miss_o = VL_RAND_RESET_I(1);
    __PVT__ctrl_except_syscall_o = VL_RAND_RESET_I(1);
    __PVT__ctrl_except_trap_o = VL_RAND_RESET_I(1);
    __PVT__ctrl_flag_clear_o = VL_RAND_RESET_I(1);
    __PVT__ctrl_flag_o = VL_RAND_RESET_I(1);
    __PVT__ctrl_flag_set_o = VL_RAND_RESET_I(1);
    __PVT__ctrl_lsu_adr_o = VL_RAND_RESET_I(32);
    __PVT__ctrl_lsu_length_o = VL_RAND_RESET_I(2);
    __PVT__ctrl_lsu_zext_o = VL_RAND_RESET_I(1);
    __PVT__ctrl_op_lsu_atomic_o = VL_RAND_RESET_I(1);
    __PVT__ctrl_op_lsu_load_o = VL_RAND_RESET_I(1);
    __PVT__ctrl_op_lsu_store_o = VL_RAND_RESET_I(1);
    __PVT__ctrl_op_mfspr_o = VL_RAND_RESET_I(1);
    __PVT__ctrl_op_msync_o = VL_RAND_RESET_I(1);
    __PVT__ctrl_op_mtspr_o = VL_RAND_RESET_I(1);
    __PVT__ctrl_op_mul_o = VL_RAND_RESET_I(1);
    __PVT__ctrl_op_rfe_o = VL_RAND_RESET_I(1);
    __PVT__ctrl_overflow_clear_o = VL_RAND_RESET_I(1);
    __PVT__ctrl_overflow_set_o = VL_RAND_RESET_I(1);
    __PVT__ctrl_fpcsr_o = VL_RAND_RESET_I(12);
    __PVT__ctrl_fpcsr_set_o = VL_RAND_RESET_I(1);
    __PVT__ctrl_rf_wb_o = VL_RAND_RESET_I(1);
    __PVT__ctrl_rfb_o = VL_RAND_RESET_I(32);
    __PVT__ctrl_rfd_adr_o = VL_RAND_RESET_I(5);
    __PVT__decode_branch_o = VL_RAND_RESET_I(1);
    __PVT__decode_branch_target_o = VL_RAND_RESET_I(32);
    __PVT__decode_bubble_o = VL_RAND_RESET_I(1);
    __PVT__decode_except_ibus_err_o = VL_RAND_RESET_I(1);
    __PVT__decode_except_illegal_o = VL_RAND_RESET_I(1);
    __PVT__decode_except_ipagefault_o = VL_RAND_RESET_I(1);
    __PVT__decode_except_itlb_miss_o = VL_RAND_RESET_I(1);
    __PVT__decode_imm16_o = VL_RAND_RESET_I(16);
    __PVT__decode_immediate_o = VL_RAND_RESET_I(32);
    __PVT__decode_immediate_sel_o = VL_RAND_RESET_I(1);
    __PVT__decode_lsu_length_o = VL_RAND_RESET_I(2);
    __PVT__decode_op_brcond_o = VL_RAND_RESET_I(1);
    __PVT__decode_op_div_signed_o = VL_RAND_RESET_I(1);
    __PVT__decode_op_div_unsigned_o = VL_RAND_RESET_I(1);
    __PVT__decode_op_jal_o = VL_RAND_RESET_I(1);
    __PVT__decode_op_jr_o = VL_RAND_RESET_I(1);
    __PVT__decode_op_lsu_store_o = VL_RAND_RESET_I(1);
    __PVT__decode_op_mul_signed_o = VL_RAND_RESET_I(1);
    __PVT__decode_op_mul_unsigned_o = VL_RAND_RESET_I(1);
    __PVT__decode_op_setflag_o = VL_RAND_RESET_I(1);
    __PVT__decode_rfb_o = VL_RAND_RESET_I(32);
    __PVT__decode_valid_o = VL_RAND_RESET_I(1);
    __PVT__execute_adder_do_carry_o = VL_RAND_RESET_I(1);
    __PVT__execute_adder_do_sub_o = VL_RAND_RESET_I(1);
    __PVT__execute_bubble_o = VL_RAND_RESET_I(1);
    __PVT__execute_except_ibus_align_o = VL_RAND_RESET_I(1);
    __PVT__execute_except_ibus_err_o = VL_RAND_RESET_I(1);
    __PVT__execute_except_illegal_o = VL_RAND_RESET_I(1);
    __PVT__execute_except_ipagefault_o = VL_RAND_RESET_I(1);
    __PVT__execute_except_itlb_miss_o = VL_RAND_RESET_I(1);
    __PVT__execute_except_syscall_o = VL_RAND_RESET_I(1);
    __PVT__execute_except_trap_o = VL_RAND_RESET_I(1);
    __PVT__execute_imm16_o = VL_RAND_RESET_I(16);
    __PVT__execute_immediate_o = VL_RAND_RESET_I(32);
    __PVT__execute_immediate_sel_o = VL_RAND_RESET_I(1);
    __PVT__execute_immjbr_upper_o = VL_RAND_RESET_I(10);
    __PVT__execute_jal_result_o = VL_RAND_RESET_I(32);
    __PVT__execute_lsu_length_o = VL_RAND_RESET_I(2);
    __PVT__execute_lsu_zext_o = VL_RAND_RESET_I(1);
    __PVT__execute_mispredict_target_o = VL_RAND_RESET_I(32);
    __PVT__execute_op_add_o = VL_RAND_RESET_I(1);
    __PVT__execute_op_alu_o = VL_RAND_RESET_I(1);
    __PVT__execute_op_bf_o = VL_RAND_RESET_I(1);
    __PVT__execute_op_bnf_o = VL_RAND_RESET_I(1);
    __PVT__execute_op_branch_o = VL_RAND_RESET_I(1);
    __PVT__execute_op_brcond_o = VL_RAND_RESET_I(1);
    __PVT__execute_op_div_o = VL_RAND_RESET_I(1);
    __PVT__execute_op_div_signed_o = VL_RAND_RESET_I(1);
    __PVT__execute_op_div_unsigned_o = VL_RAND_RESET_I(1);
    __PVT__execute_op_ffl1_o = VL_RAND_RESET_I(1);
    __PVT__execute_op_jal_o = VL_RAND_RESET_I(1);
    __PVT__execute_op_jbr_o = VL_RAND_RESET_I(1);
    __PVT__execute_op_jr_o = VL_RAND_RESET_I(1);
    __PVT__execute_op_lsu_atomic_o = VL_RAND_RESET_I(1);
    __PVT__execute_op_lsu_load_o = VL_RAND_RESET_I(1);
    __PVT__execute_op_lsu_store_o = VL_RAND_RESET_I(1);
    __PVT__execute_op_mfspr_o = VL_RAND_RESET_I(1);
    __PVT__execute_op_movhi_o = VL_RAND_RESET_I(1);
    __PVT__execute_op_ext_o = VL_RAND_RESET_I(1);
    __PVT__execute_op_msync_o = VL_RAND_RESET_I(1);
    __PVT__execute_op_mtspr_o = VL_RAND_RESET_I(1);
    __PVT__execute_op_mul_o = VL_RAND_RESET_I(1);
    __PVT__execute_op_mul_signed_o = VL_RAND_RESET_I(1);
    __PVT__execute_op_mul_unsigned_o = VL_RAND_RESET_I(1);
    __PVT__execute_op_rfe_o = VL_RAND_RESET_I(1);
    __PVT__execute_op_setflag_o = VL_RAND_RESET_I(1);
    __PVT__execute_op_shift_o = VL_RAND_RESET_I(1);
    __PVT__execute_opc_alu_o = VL_RAND_RESET_I(4);
    __PVT__execute_opc_alu_secondary_o = VL_RAND_RESET_I(4);
    __PVT__execute_opc_insn_o = VL_RAND_RESET_I(6);
    __PVT__execute_predicted_flag_o = VL_RAND_RESET_I(1);
    __PVT__execute_rf_wb_o = VL_RAND_RESET_I(1);
    __PVT__execute_rfa_o = VL_RAND_RESET_I(32);
    __PVT__execute_rfb_o = VL_RAND_RESET_I(32);
    __PVT__execute_rfd_adr_o = VL_RAND_RESET_I(5);
    __PVT__fetch_exception_taken_o = VL_RAND_RESET_I(1);
    __PVT__fetch_rf_adr_valid_o = VL_RAND_RESET_I(1);
    __PVT__fetch_valid_o = VL_RAND_RESET_I(1);
    __PVT__dcache_hit_o = VL_RAND_RESET_I(1);
    __PVT__lsu_valid_o = VL_RAND_RESET_I(1);
    __PVT__mfspr_dat_o = VL_RAND_RESET_I(32);
    __PVT__padv_decode_o = VL_RAND_RESET_I(1);
    __PVT__padv_execute_o = VL_RAND_RESET_I(1);
    __PVT__padv_fetch_o = VL_RAND_RESET_I(1);
    __PVT__pipeline_flush_o = VL_RAND_RESET_I(1);
    __PVT__predicted_flag_o = VL_RAND_RESET_I(1);
    __PVT__rf_result_o = VL_RAND_RESET_I(32);
    __PVT__spr_bus_ack_ic_i = VL_RAND_RESET_I(1);
    __PVT__spr_bus_dat_dc_i = VL_RAND_RESET_I(32);
    __PVT__spr_bus_dat_ic_i = VL_RAND_RESET_I(32);
    __PVT__store_buffer_err_o = VL_RAND_RESET_I(1);
    __PVT__wb_rf_wb_o = VL_RAND_RESET_I(1);
    __PVT__wb_rfd_adr_o = VL_RAND_RESET_I(5);
    __PVT__traceport_stage_decode_insn = VL_RAND_RESET_I(32);
    __PVT__traceport_stage_exec_insn = VL_RAND_RESET_I(32);
    __PVT__traceport_jal_execute_to_ctrl = VL_RAND_RESET_I(1);
    __PVT__traceport_jr_execute_to_ctrl = VL_RAND_RESET_I(1);
    __PVT__traceport_jbtarget_decode_to_execute = VL_RAND_RESET_I(32);
    __PVT__traceport_jbtarget_execute_to_ctrl = VL_RAND_RESET_I(32);
    __PVT__traceport_waitexec = VL_RAND_RESET_I(1);
    __PVT__or1k_fetch_cappuccino__DOT__pc_fetch = VL_RAND_RESET_I(32);
    __PVT__or1k_fetch_cappuccino__DOT__pc_addr = VL_RAND_RESET_I(32);
    __PVT__or1k_fetch_cappuccino__DOT__ctrl_branch_exception_r = VL_RAND_RESET_I(1);
    __PVT__or1k_fetch_cappuccino__DOT__bus_access_done = VL_RAND_RESET_I(1);
    __PVT__or1k_fetch_cappuccino__DOT__ctrl_branch_exception_edge = VL_RAND_RESET_I(1);
    __PVT__or1k_fetch_cappuccino__DOT__stall_fetch_valid = VL_RAND_RESET_I(1);
    __PVT__or1k_fetch_cappuccino__DOT__addr_valid = VL_RAND_RESET_I(1);
    __PVT__or1k_fetch_cappuccino__DOT__flush = VL_RAND_RESET_I(1);
    __PVT__or1k_fetch_cappuccino__DOT__nop_ack = VL_RAND_RESET_I(1);
    __PVT__or1k_fetch_cappuccino__DOT__imem_err = VL_RAND_RESET_I(1);
    __PVT__or1k_fetch_cappuccino__DOT__imem_dat = VL_RAND_RESET_I(32);
    __PVT__or1k_fetch_cappuccino__DOT__ic_dat = VL_RAND_RESET_I(32);
    __PVT__or1k_fetch_cappuccino__DOT__ic_invalidate = VL_RAND_RESET_I(1);
    __PVT__or1k_fetch_cappuccino__DOT__ic_addr = VL_RAND_RESET_I(32);
    __PVT__or1k_fetch_cappuccino__DOT__ic_addr_match = VL_RAND_RESET_I(32);
    __PVT__or1k_fetch_cappuccino__DOT__ic_access = VL_RAND_RESET_I(1);
    __PVT__or1k_fetch_cappuccino__DOT__immu_phys_addr = VL_RAND_RESET_I(32);
    __PVT__or1k_fetch_cappuccino__DOT__immu_cache_inhibit = VL_RAND_RESET_I(1);
    __PVT__or1k_fetch_cappuccino__DOT__pagefault = VL_RAND_RESET_I(1);
    __PVT__or1k_fetch_cappuccino__DOT__tlb_miss = VL_RAND_RESET_I(1);
    __PVT__or1k_fetch_cappuccino__DOT__except_itlb_miss = VL_RAND_RESET_I(1);
    __PVT__or1k_fetch_cappuccino__DOT__except_ipagefault = VL_RAND_RESET_I(1);
    __PVT__or1k_fetch_cappuccino__DOT__immu_busy = VL_RAND_RESET_I(1);
    __PVT__or1k_fetch_cappuccino__DOT__tlb_reload_ack = VL_RAND_RESET_I(1);
    __PVT__or1k_fetch_cappuccino__DOT__tlb_reload_data = VL_RAND_RESET_I(32);
    __PVT__or1k_fetch_cappuccino__DOT__fetching_brcond = VL_RAND_RESET_I(1);
    __PVT__or1k_fetch_cappuccino__DOT__fetching_mispredicted_branch = VL_RAND_RESET_I(1);
    __PVT__or1k_fetch_cappuccino__DOT__mispredict_stall = VL_RAND_RESET_I(1);
    __PVT__or1k_fetch_cappuccino__DOT__exception_while_tlb_reload = VL_RAND_RESET_I(1);
    __PVT__or1k_fetch_cappuccino__DOT__except_ipagefault_clear = VL_RAND_RESET_I(1);
    __PVT__or1k_fetch_cappuccino__DOT__state = VL_RAND_RESET_I(3);
    __PVT__or1k_fetch_cappuccino__DOT__ibus_adr = VL_RAND_RESET_I(32);
    __PVT__or1k_fetch_cappuccino__DOT__next_ibus_adr = VL_RAND_RESET_I(32);
    __PVT__or1k_fetch_cappuccino__DOT__ibus_dat = VL_RAND_RESET_I(32);
    __PVT__or1k_fetch_cappuccino__DOT__ibus_req = VL_RAND_RESET_I(1);
    __PVT__or1k_fetch_cappuccino__DOT__ibus_ack = VL_RAND_RESET_I(1);
    __PVT__or1k_fetch_cappuccino__DOT__ibus_access = VL_RAND_RESET_I(1);
    __PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__ic_enable_r = VL_RAND_RESET_I(1);
    __PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__ic_req = VL_RAND_RESET_I(1);
    __PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__immu_spr_bus_stb = VL_RAND_RESET_I(1);
    __PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state = VL_RAND_RESET_I(4);
    __PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__refill = VL_RAND_RESET_I(1);
    __PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__invalidate_adr = VL_RAND_RESET_I(8);
    __PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__refill_done = VL_RAND_RESET_I(1);
    __PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__refill_hit = VL_RAND_RESET_I(1);
    __PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__refill_valid = VL_RAND_RESET_I(8);
    __PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__refill_valid_r = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        __PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_way_out[__Vi0] = VL_RAND_RESET_I(20);
    }
    __PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_din = VL_RAND_RESET_Q(41);
    __PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_lru_in = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        __PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_way_in[__Vi0] = VL_RAND_RESET_I(20);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        __PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_way_save[__Vi0] = VL_RAND_RESET_I(20);
    }
    __PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_we = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        __PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_raddr[__Vi0] = VL_RAND_RESET_I(11);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        __PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_waddr[__Vi0] = VL_RAND_RESET_I(11);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        __PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_din[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        __PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_dout[__Vi0] = VL_RAND_RESET_I(32);
    }
    __PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_we = VL_RAND_RESET_I(2);
    __PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_hit = VL_RAND_RESET_I(2);
    __PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__lru = VL_RAND_RESET_I(2);
    __PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_save_lru = VL_RAND_RESET_I(2);
    __PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__access = VL_RAND_RESET_I(2);
    __PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__next_lru_history = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        __PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__check_way_tag[__Vi0] = VL_RAND_RESET_I(19);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        __PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__check_way_match[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        __PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__check_way_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    __PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__w1 = VL_RAND_RESET_I(32);
    __PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__w2 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        __PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_ram__DOT__mem[__Vi0] = VL_RAND_RESET_Q(41);
    }
    __PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_ram__DOT__rdata = VL_RAND_RESET_Q(41);
    for (int __Vi0=0; __Vi0<2048; ++__Vi0) {
        __PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_memories__BRA__0__KET____DOT__way_data_ram__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    __PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_memories__BRA__0__KET____DOT__way_data_ram__DOT__rdata = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2048; ++__Vi0) {
        __PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_memories__BRA__1__KET____DOT__way_data_ram__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    __PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_memories__BRA__1__KET____DOT__way_data_ram__DOT__rdata = VL_RAND_RESET_I(32);
    __PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__gen_u_lru__DOT__u_lru__DOT__lru_post = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        __PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__gen_u_lru__DOT__u_lru__DOT__expand[__Vi0] = VL_RAND_RESET_I(2);
    }
    __PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__gen_u_lru__DOT__u_lru__DOT__j = VL_RAND_RESET_I(32);
    __PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__gen_u_lru__DOT__u_lru__DOT__offset = VL_RAND_RESET_I(32);
    or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__gen_u_lru__DOT__u_lru__DOT____Vlvbound1 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        __PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_dout[__Vi0] = VL_RAND_RESET_I(32);
    }
    __PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_addr = VL_RAND_RESET_I(6);
    __PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_we = VL_RAND_RESET_I(1);
    __PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_din = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        __PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_huge_dout[__Vi0] = VL_RAND_RESET_I(32);
    }
    __PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_huge_we = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        __PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_dout[__Vi0] = VL_RAND_RESET_I(32);
    }
    __PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_addr = VL_RAND_RESET_I(6);
    __PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_we = VL_RAND_RESET_I(1);
    __PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_din = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        __PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_huge_dout[__Vi0] = VL_RAND_RESET_I(32);
    }
    __PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_huge_we = VL_RAND_RESET_I(1);
    __PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_reload_we = VL_RAND_RESET_I(1);
    __PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_reload_din = VL_RAND_RESET_I(32);
    __PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_reload_we = VL_RAND_RESET_I(1);
    __PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_reload_din = VL_RAND_RESET_I(32);
    __PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_spr_cs = VL_RAND_RESET_I(1);
    __PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_spr_cs_r = VL_RAND_RESET_I(1);
    __PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_spr_cs = VL_RAND_RESET_I(1);
    __PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_spr_cs_r = VL_RAND_RESET_I(1);
    __PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__immucr_spr_cs_r = VL_RAND_RESET_I(1);
    __PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__immucr = VL_RAND_RESET_I(32);
    __PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__spr_way_idx_full = VL_RAND_RESET_I(2);
    __PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__spr_way_idx_r = VL_RAND_RESET_I(1);
    __PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__way_hit = VL_RAND_RESET_I(1);
    __PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__way_huge_hit = VL_RAND_RESET_I(1);
    __PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__tlb_reload_pagefault = VL_RAND_RESET_I(1);
    __PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__tlb_reload_huge = VL_RAND_RESET_I(1);
    __PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__sxe = VL_RAND_RESET_I(1);
    __PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__uxe = VL_RAND_RESET_I(1);
    __PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__spr_bus_ack = VL_RAND_RESET_I(1);
    __PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__spr_bus_ack_r = VL_RAND_RESET_I(1);
    __PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__spr_bus_dat = VL_RAND_RESET_I(32);
    __PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__spr_bus_dat_r = VL_RAND_RESET_I(32);
    or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT____Vlvbound3 = VL_RAND_RESET_I(1);
    or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT____Vlvbound6 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        __PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_match_regs__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    __PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_match_regs__DOT__rdata_a = VL_RAND_RESET_I(32);
    __PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_match_regs__DOT__rdata_b = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        __PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_translate_regs__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    __PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_translate_regs__DOT__rdata_a = VL_RAND_RESET_I(32);
    __PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_translate_regs__DOT__rdata_b = VL_RAND_RESET_I(32);
    __PVT__or1k_decode__DOT__imm_sext_sel = VL_RAND_RESET_I(1);
    __PVT__or1k_decode__DOT__imm_zext_sel = VL_RAND_RESET_I(1);
    __PVT__or1k_decode__DOT__decode_except_ibus_align = VL_RAND_RESET_I(1);
    __PVT__or1k_decode_execute_cappuccino__DOT__ctrl_to_decode_interlock = VL_RAND_RESET_I(1);
    __PVT__or1k_decode_execute_cappuccino__DOT__branch_to_imm = VL_RAND_RESET_I(1);
    __PVT__or1k_decode_execute_cappuccino__DOT__branch_to_imm_target = VL_RAND_RESET_I(32);
    __PVT__or1k_execute_alu__DOT__b = VL_RAND_RESET_I(32);
    __PVT__or1k_execute_alu__DOT__adder_result = VL_RAND_RESET_I(32);
    __PVT__or1k_execute_alu__DOT__adder_carryout = VL_RAND_RESET_I(1);
    __PVT__or1k_execute_alu__DOT__adder_signed_overflow = VL_RAND_RESET_I(1);
    __PVT__or1k_execute_alu__DOT__b_mux = VL_RAND_RESET_I(32);
    __PVT__or1k_execute_alu__DOT__carry_in = VL_RAND_RESET_I(1);
    __PVT__or1k_execute_alu__DOT__shift_result = VL_RAND_RESET_I(32);
    __PVT__or1k_execute_alu__DOT__flag_set = VL_RAND_RESET_I(1);
    __PVT__or1k_execute_alu__DOT__logic_result = VL_RAND_RESET_I(32);
    __PVT__or1k_execute_alu__DOT__mul_signed_overflow = VL_RAND_RESET_I(1);
    __PVT__or1k_execute_alu__DOT__ext_result = VL_RAND_RESET_I(32);
    __PVT__or1k_execute_alu__DOT__logic_lut = VL_RAND_RESET_I(4);
    __PVT__or1k_execute_alu__DOT__threestagemultiply__DOT__mul_opa = VL_RAND_RESET_I(32);
    __PVT__or1k_execute_alu__DOT__threestagemultiply__DOT__mul_opb = VL_RAND_RESET_I(32);
    __PVT__or1k_execute_alu__DOT__threestagemultiply__DOT__mul_result1 = VL_RAND_RESET_I(32);
    __PVT__or1k_execute_alu__DOT__threestagemultiply__DOT__mul_result2 = VL_RAND_RESET_I(32);
    __PVT__or1k_execute_alu__DOT__threestagemultiply__DOT__mul_valid_shr = VL_RAND_RESET_I(3);
    __PVT__or1k_execute_alu__DOT__genblk3__DOT__div_count = VL_RAND_RESET_I(6);
    __PVT__or1k_execute_alu__DOT__genblk3__DOT__div_n = VL_RAND_RESET_I(32);
    __PVT__or1k_execute_alu__DOT__genblk3__DOT__div_d = VL_RAND_RESET_I(32);
    __PVT__or1k_execute_alu__DOT__genblk3__DOT__div_r = VL_RAND_RESET_I(32);
    __PVT__or1k_execute_alu__DOT__genblk3__DOT__div_sub = VL_RAND_RESET_Q(33);
    __PVT__or1k_execute_alu__DOT__genblk3__DOT__div_neg = VL_RAND_RESET_I(1);
    __PVT__or1k_execute_alu__DOT__genblk3__DOT__div_done = VL_RAND_RESET_I(1);
    __PVT__or1k_execute_alu__DOT__genblk3__DOT__div_by_zero_r = VL_RAND_RESET_I(1);
    __PVT__or1k_execute_alu__DOT__genblk5__DOT__ffl1_result_wire = VL_RAND_RESET_I(32);
    __PVT__or1k_execute_alu__DOT__barrel_shifter__DOT__shift_lsw = VL_RAND_RESET_I(32);
    __PVT__or1k_lsu_cappuccino__DOT__dbus_dat_aligned = VL_RAND_RESET_I(32);
    __PVT__or1k_lsu_cappuccino__DOT__access_done = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__except_align = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__except_dbus = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__dbus_ack = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__dbus_err = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__dbus_dat = VL_RAND_RESET_I(32);
    __PVT__or1k_lsu_cappuccino__DOT__dbus_adr = VL_RAND_RESET_I(32);
    __PVT__or1k_lsu_cappuccino__DOT__next_dbus_adr = VL_RAND_RESET_I(32);
    __PVT__or1k_lsu_cappuccino__DOT__dbus_we = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__dbus_bsel = VL_RAND_RESET_I(4);
    __PVT__or1k_lsu_cappuccino__DOT__dbus_access = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__dbus_stall = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__lsu_ldat = VL_RAND_RESET_I(32);
    __PVT__or1k_lsu_cappuccino__DOT__lsu_sdat = VL_RAND_RESET_I(32);
    __PVT__or1k_lsu_cappuccino__DOT__lsu_ack = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__dc_err = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__dc_ldat = VL_RAND_RESET_I(32);
    __PVT__or1k_lsu_cappuccino__DOT__dc_sdat = VL_RAND_RESET_I(32);
    __PVT__or1k_lsu_cappuccino__DOT__dc_adr = VL_RAND_RESET_I(32);
    __PVT__or1k_lsu_cappuccino__DOT__dc_adr_match = VL_RAND_RESET_I(32);
    __PVT__or1k_lsu_cappuccino__DOT__dc_we = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__dc_access = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__dc_refill_allowed = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__dc_enable_r = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__dc_enabled = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__ctrl_op_lsu = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__tlb_miss = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__pagefault = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__dmmu_phys_addr = VL_RAND_RESET_I(32);
    __PVT__or1k_lsu_cappuccino__DOT__except_dtlb_miss = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__except_dtlb_miss_r = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__except_dpagefault = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__except_dpagefault_r = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__dmmu_cache_inhibit = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__tlb_reload_req = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__tlb_reload_addr = VL_RAND_RESET_I(32);
    __PVT__or1k_lsu_cappuccino__DOT__tlb_reload_ack = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__tlb_reload_data = VL_RAND_RESET_I(32);
    __PVT__or1k_lsu_cappuccino__DOT__tlb_reload_done = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__store_buffer_write = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__store_buffer_read = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__store_buffer_full = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__store_buffer_empty = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__store_buffer_write_pending = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__dbus_atomic = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__last_write = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__write_done = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__atomic_addr = VL_RAND_RESET_I(32);
    __PVT__or1k_lsu_cappuccino__DOT__atomic_reserve = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__swa_success = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__state = VL_RAND_RESET_I(3);
    __PVT__or1k_lsu_cappuccino__DOT__dc_refill_r = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__atomic_gen__DOT__atomic_flag_set = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__atomic_gen__DOT__atomic_flag_clear = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__dc_req = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__dmmu_spr_bus_stb = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(101, __PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_dout);
    VL_RAND_RESET_W(101, __PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_din);
    __PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__write_pointer = VL_RAND_RESET_I(9);
    __PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__read_pointer = VL_RAND_RESET_I(9);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        VL_RAND_RESET_W(101, __PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_ram__DOT__mem[__Vi0]);
    }
    VL_RAND_RESET_W(101, __PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_ram__DOT__rdata);
    VL_RAND_RESET_W(101, __PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_ram__DOT__bypass_gen__DOT__din_r);
    __PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_ram__DOT__bypass_gen__DOT__bypass = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state = VL_RAND_RESET_I(5);
    __PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__invalidate_adr = VL_RAND_RESET_I(8);
    __PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_wr_dat = VL_RAND_RESET_I(32);
    __PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__refill_done = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__refill_hit = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__refill_valid = VL_RAND_RESET_I(8);
    __PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__refill_valid_r = VL_RAND_RESET_I(8);
    __PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__invalidate = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        __PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_way_out[__Vi0] = VL_RAND_RESET_I(19);
    }
    __PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_din = VL_RAND_RESET_Q(39);
    __PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_lru_in = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        __PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_way_in[__Vi0] = VL_RAND_RESET_I(19);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        __PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_way_save[__Vi0] = VL_RAND_RESET_I(19);
    }
    __PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_we = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        __PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_raddr[__Vi0] = VL_RAND_RESET_I(11);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        __PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_waddr[__Vi0] = VL_RAND_RESET_I(11);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        __PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_din[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        __PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_dout[__Vi0] = VL_RAND_RESET_I(32);
    }
    __PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_we = VL_RAND_RESET_I(2);
    __PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_hit = VL_RAND_RESET_I(2);
    __PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__lru = VL_RAND_RESET_I(2);
    __PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_save_lru = VL_RAND_RESET_I(2);
    __PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__access = VL_RAND_RESET_I(2);
    __PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__next_lru_history = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        __PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__check_way_tag[__Vi0] = VL_RAND_RESET_I(18);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        __PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__check_way_match[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        __PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__check_way_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    __PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__write_pending = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__snoop_check = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__snoop_tag = VL_RAND_RESET_I(18);
    __PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__snoop_windex = VL_RAND_RESET_I(8);
    __PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__snoop_dout = VL_RAND_RESET_Q(39);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        __PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__snoop_way_out[__Vi0] = VL_RAND_RESET_I(19);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        __PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__snoop_check_way_tag[__Vi0] = VL_RAND_RESET_I(18);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        __PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__snoop_check_way_match[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        __PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__snoop_check_way_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    __PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__snoop_way_hit = VL_RAND_RESET_I(2);
    __PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__invalidate_ack = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__w1 = VL_RAND_RESET_I(32);
    __PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__w2 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        __PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_ram__DOT__mem[__Vi0] = VL_RAND_RESET_Q(39);
    }
    __PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_ram__DOT__rdata = VL_RAND_RESET_Q(39);
    for (int __Vi0=0; __Vi0<2048; ++__Vi0) {
        __PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__0__KET____DOT__way_data_ram__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    __PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__0__KET____DOT__way_data_ram__DOT__rdata = VL_RAND_RESET_I(32);
    __PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__0__KET____DOT__way_data_ram__DOT__bypass_gen__DOT__din_r = VL_RAND_RESET_I(32);
    __PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__0__KET____DOT__way_data_ram__DOT__bypass_gen__DOT__bypass = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2048; ++__Vi0) {
        __PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__1__KET____DOT__way_data_ram__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    __PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__1__KET____DOT__way_data_ram__DOT__rdata = VL_RAND_RESET_I(32);
    __PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__1__KET____DOT__way_data_ram__DOT__bypass_gen__DOT__din_r = VL_RAND_RESET_I(32);
    __PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__1__KET____DOT__way_data_ram__DOT__bypass_gen__DOT__bypass = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__gen_u_lru__DOT__u_lru__DOT__lru_post = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        __PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__gen_u_lru__DOT__u_lru__DOT__expand[__Vi0] = VL_RAND_RESET_I(2);
    }
    __PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__gen_u_lru__DOT__u_lru__DOT__j = VL_RAND_RESET_I(32);
    __PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__gen_u_lru__DOT__u_lru__DOT__offset = VL_RAND_RESET_I(32);
    or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__gen_u_lru__DOT__u_lru__DOT____Vlvbound1 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        __PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_dout[__Vi0] = VL_RAND_RESET_I(32);
    }
    __PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_addr = VL_RAND_RESET_I(6);
    __PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_we = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_din = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        __PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_huge_dout[__Vi0] = VL_RAND_RESET_I(32);
    }
    __PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_huge_we = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        __PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_dout[__Vi0] = VL_RAND_RESET_I(32);
    }
    __PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_addr = VL_RAND_RESET_I(6);
    __PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_we = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_din = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        __PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_huge_dout[__Vi0] = VL_RAND_RESET_I(32);
    }
    __PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_huge_we = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_reload_we = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_reload_din = VL_RAND_RESET_I(32);
    __PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_reload_we = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_reload_din = VL_RAND_RESET_I(32);
    __PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_spr_cs = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_spr_cs_r = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_spr_cs = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_spr_cs_r = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dmmucr_spr_cs_r = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dmmucr = VL_RAND_RESET_I(32);
    __PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__spr_way_idx_full = VL_RAND_RESET_I(2);
    __PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__spr_way_idx_r = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__way_hit = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__way_huge_hit = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__tlb_reload_pagefault = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__tlb_reload_huge = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__ure = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__uwe = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__sre = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__swe = VL_RAND_RESET_I(1);
    __PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__spr_bus_ack = VL_RAND_RESET_I(1);
    or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT____Vlvbound3 = VL_RAND_RESET_I(1);
    or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT____Vlvbound6 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        __PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_match_regs__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    __PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_match_regs__DOT__rdata_a = VL_RAND_RESET_I(32);
    __PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_match_regs__DOT__rdata_b = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        __PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_translate_regs__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    __PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_translate_regs__DOT__rdata_a = VL_RAND_RESET_I(32);
    __PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_translate_regs__DOT__rdata_b = VL_RAND_RESET_I(32);
    __PVT__or1k_wb_mux_cappuccino__DOT__rf_result = VL_RAND_RESET_I(32);
    __PVT__or1k_wb_mux_cappuccino__DOT__wb_op_mul = VL_RAND_RESET_I(1);
    __PVT__or1k_rf_cappuccino__DOT__wb_hazard_result = VL_RAND_RESET_I(32);
    __PVT__or1k_rf_cappuccino__DOT__execute_rfa = VL_RAND_RESET_I(32);
    __PVT__or1k_rf_cappuccino__DOT__execute_rfb = VL_RAND_RESET_I(32);
    __PVT__or1k_rf_cappuccino__DOT__rfa_rdad = VL_RAND_RESET_I(6);
    __PVT__or1k_rf_cappuccino__DOT__rfb_rdad = VL_RAND_RESET_I(6);
    __PVT__or1k_rf_cappuccino__DOT__rf_wren = VL_RAND_RESET_I(1);
    __PVT__or1k_rf_cappuccino__DOT__rf_wradr = VL_RAND_RESET_I(6);
    __PVT__or1k_rf_cappuccino__DOT__rf_wrdat = VL_RAND_RESET_I(32);
    __PVT__or1k_rf_cappuccino__DOT__flushing = VL_RAND_RESET_I(1);
    __PVT__or1k_rf_cappuccino__DOT__execute_hazard_a = VL_RAND_RESET_I(1);
    __PVT__or1k_rf_cappuccino__DOT__execute_hazard_b = VL_RAND_RESET_I(1);
    __PVT__or1k_rf_cappuccino__DOT__execute_hazard_result_r = VL_RAND_RESET_I(32);
    __PVT__or1k_rf_cappuccino__DOT__execute_hazard_result = VL_RAND_RESET_I(32);
    __PVT__or1k_rf_cappuccino__DOT__ctrl_hazard_a = VL_RAND_RESET_I(1);
    __PVT__or1k_rf_cappuccino__DOT__ctrl_hazard_b = VL_RAND_RESET_I(1);
    __PVT__or1k_rf_cappuccino__DOT__ctrl_hazard_result_r = VL_RAND_RESET_I(32);
    __PVT__or1k_rf_cappuccino__DOT__ctrl_hazard_result = VL_RAND_RESET_I(32);
    __PVT__or1k_rf_cappuccino__DOT__wb_hazard_a = VL_RAND_RESET_I(1);
    __PVT__or1k_rf_cappuccino__DOT__wb_hazard_b = VL_RAND_RESET_I(1);
    __PVT__or1k_rf_cappuccino__DOT__use_last_wb_a = VL_RAND_RESET_I(1);
    __PVT__or1k_rf_cappuccino__DOT__wb_to_decode_bypass_a = VL_RAND_RESET_I(1);
    __PVT__or1k_rf_cappuccino__DOT__wb_to_decode_result_a = VL_RAND_RESET_I(32);
    __PVT__or1k_rf_cappuccino__DOT__use_last_wb_b = VL_RAND_RESET_I(1);
    __PVT__or1k_rf_cappuccino__DOT__wb_to_decode_bypass_b = VL_RAND_RESET_I(1);
    __PVT__or1k_rf_cappuccino__DOT__wb_to_decode_result_b = VL_RAND_RESET_I(32);
    __PVT__or1k_rf_cappuccino__DOT__genblk1__DOT__spr_gpr_we = VL_RAND_RESET_I(1);
    __PVT__or1k_rf_cappuccino__DOT__genblk1__DOT__spr_gpr_re = VL_RAND_RESET_I(1);
    __PVT__or1k_rf_cappuccino__DOT__genblk1__DOT__spr_gpr_read_ack = VL_RAND_RESET_I(1);
    __PVT__or1k_rf_cappuccino__DOT__genblk1__DOT__wb_rfd_adr_expand = VL_RAND_RESET_I(6);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        __PVT__or1k_rf_cappuccino__DOT__rfa__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    __PVT__or1k_rf_cappuccino__DOT__rfa__DOT__rdata = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        __PVT__or1k_rf_cappuccino__DOT__rfb__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    __PVT__or1k_rf_cappuccino__DOT__rfb__DOT__rdata = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        __PVT__or1k_rf_cappuccino__DOT__rfspr_gen__DOT__rfspr__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    __PVT__or1k_rf_cappuccino__DOT__rfspr_gen__DOT__rfspr__DOT__rdata = VL_RAND_RESET_I(32);
    __PVT__or1k_execute_ctrl_cappuccino__DOT__ctrl_stall = VL_RAND_RESET_I(1);
    __PVT__or1k_execute_ctrl_cappuccino__DOT__execute_stall = VL_RAND_RESET_I(1);
    __PVT__or1k_ctrl_cappuccino__DOT__spr_sr = VL_RAND_RESET_I(16);
    __PVT__or1k_ctrl_cappuccino__DOT__spr_esr = VL_RAND_RESET_I(16);
    __PVT__or1k_ctrl_cappuccino__DOT__spr_epcr = VL_RAND_RESET_I(32);
    __PVT__or1k_ctrl_cappuccino__DOT__spr_eear = VL_RAND_RESET_I(32);
    __PVT__or1k_ctrl_cappuccino__DOT__spr_evbar = VL_RAND_RESET_I(32);
    __PVT__or1k_ctrl_cappuccino__DOT__spr_fpcsr = VL_RAND_RESET_I(12);
    __PVT__or1k_ctrl_cappuccino__DOT__spr_ppc = VL_RAND_RESET_I(32);
    __PVT__or1k_ctrl_cappuccino__DOT__spr_npc = VL_RAND_RESET_I(32);
    __PVT__or1k_ctrl_cappuccino__DOT__execute_delay_slot = VL_RAND_RESET_I(1);
    __PVT__or1k_ctrl_cappuccino__DOT__ctrl_delay_slot = VL_RAND_RESET_I(1);
    __PVT__or1k_ctrl_cappuccino__DOT__execute_waiting_r = VL_RAND_RESET_I(1);
    __PVT__or1k_ctrl_cappuccino__DOT__decode_execute_halt = VL_RAND_RESET_I(1);
    __PVT__or1k_ctrl_cappuccino__DOT__exception_taken = VL_RAND_RESET_I(1);
    __PVT__or1k_ctrl_cappuccino__DOT__last_branch_insn_pc = VL_RAND_RESET_I(32);
    __PVT__or1k_ctrl_cappuccino__DOT__last_branch_target_pc = VL_RAND_RESET_I(32);
    __PVT__or1k_ctrl_cappuccino__DOT__padv_ctrl = VL_RAND_RESET_I(1);
    __PVT__or1k_ctrl_cappuccino__DOT__exception_r = VL_RAND_RESET_I(1);
    __PVT__or1k_ctrl_cappuccino__DOT__exception_pc_addr = VL_RAND_RESET_I(32);
    __PVT__or1k_ctrl_cappuccino__DOT__waiting_for_fetch = VL_RAND_RESET_I(1);
    __PVT__or1k_ctrl_cappuccino__DOT__doing_rfe_r = VL_RAND_RESET_I(1);
    __PVT__or1k_ctrl_cappuccino__DOT__doing_rfe = VL_RAND_RESET_I(1);
    __PVT__or1k_ctrl_cappuccino__DOT__deassert_doing_rfe = VL_RAND_RESET_I(1);
    __PVT__or1k_ctrl_cappuccino__DOT__exception = VL_RAND_RESET_I(1);
    __PVT__or1k_ctrl_cappuccino__DOT__ctrl_stage_exceptions = VL_RAND_RESET_I(1);
    __PVT__or1k_ctrl_cappuccino__DOT__exception_re = VL_RAND_RESET_I(1);
    __PVT__or1k_ctrl_cappuccino__DOT__except_ticktimer = VL_RAND_RESET_I(1);
    __PVT__or1k_ctrl_cappuccino__DOT__except_pic = VL_RAND_RESET_I(1);
    __PVT__or1k_ctrl_cappuccino__DOT__except_range = VL_RAND_RESET_I(1);
    __PVT__or1k_ctrl_cappuccino__DOT__spr_addr = VL_RAND_RESET_I(16);
    __PVT__or1k_ctrl_cappuccino__DOT__deassert_decode_execute_halt = VL_RAND_RESET_I(1);
    __PVT__or1k_ctrl_cappuccino__DOT__spr_dmr1 = VL_RAND_RESET_I(32);
    __PVT__or1k_ctrl_cappuccino__DOT__spr_dmr2 = VL_RAND_RESET_I(32);
    __PVT__or1k_ctrl_cappuccino__DOT__spr_dsr = VL_RAND_RESET_I(32);
    __PVT__or1k_ctrl_cappuccino__DOT__spr_drr = VL_RAND_RESET_I(32);
    __PVT__or1k_ctrl_cappuccino__DOT__cpu_stall = VL_RAND_RESET_I(1);
    __PVT__or1k_ctrl_cappuccino__DOT__du_restart_from_stall = VL_RAND_RESET_I(1);
    __PVT__or1k_ctrl_cappuccino__DOT__pstep = VL_RAND_RESET_I(6);
    __PVT__or1k_ctrl_cappuccino__DOT__stepping = VL_RAND_RESET_I(1);
    __PVT__or1k_ctrl_cappuccino__DOT__stepped_into_exception = VL_RAND_RESET_I(1);
    __PVT__or1k_ctrl_cappuccino__DOT__stepped_into_rfe = VL_RAND_RESET_I(1);
    __PVT__or1k_ctrl_cappuccino__DOT__du_npc_write = VL_RAND_RESET_I(1);
    __PVT__or1k_ctrl_cappuccino__DOT__du_npc_written = VL_RAND_RESET_I(1);
    __PVT__or1k_ctrl_cappuccino__DOT__spr_we = VL_RAND_RESET_I(1);
    __PVT__or1k_ctrl_cappuccino__DOT__spr_ack = VL_RAND_RESET_I(1);
    __PVT__or1k_ctrl_cappuccino__DOT__spr_write_dat = VL_RAND_RESET_I(32);
    __PVT__or1k_ctrl_cappuccino__DOT__spr_access = VL_RAND_RESET_I(12);
    __PVT__or1k_ctrl_cappuccino__DOT__spr_access_ack = VL_RAND_RESET_I(12);
    for (int __Vi0=0; __Vi0<12; ++__Vi0) {
        __PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat[__Vi0] = VL_RAND_RESET_I(32);
    }
    __PVT__or1k_ctrl_cappuccino__DOT__spr_write_access = VL_RAND_RESET_I(1);
    __PVT__or1k_ctrl_cappuccino__DOT__spr_bus_access = VL_RAND_RESET_I(1);
    __PVT__or1k_ctrl_cappuccino__DOT__spr_sys_group_read = VL_RAND_RESET_I(32);
    __PVT__or1k_ctrl_cappuccino__DOT__spr_vr = VL_RAND_RESET_I(32);
    __PVT__or1k_ctrl_cappuccino__DOT__spr_vr2 = VL_RAND_RESET_I(32);
    __PVT__or1k_ctrl_cappuccino__DOT__spr_avr = VL_RAND_RESET_I(32);
    __PVT__or1k_ctrl_cappuccino__DOT__spr_upr = VL_RAND_RESET_I(32);
    __PVT__or1k_ctrl_cappuccino__DOT__spr_cpucfgr = VL_RAND_RESET_I(32);
    __PVT__or1k_ctrl_cappuccino__DOT__spr_dmmucfgr = VL_RAND_RESET_I(32);
    __PVT__or1k_ctrl_cappuccino__DOT__spr_immucfgr = VL_RAND_RESET_I(32);
    __PVT__or1k_ctrl_cappuccino__DOT__spr_dccfgr = VL_RAND_RESET_I(32);
    __PVT__or1k_ctrl_cappuccino__DOT__spr_iccfgr = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        __PVT__or1k_ctrl_cappuccino__DOT__spr_isr[__Vi0] = VL_RAND_RESET_I(32);
    }
    __PVT__or1k_ctrl_cappuccino__DOT__ctrl_flag_clear = VL_RAND_RESET_I(1);
    __PVT__or1k_ctrl_cappuccino__DOT__ctrl_flag_set = VL_RAND_RESET_I(1);
    __PVT__or1k_ctrl_cappuccino__DOT__du__DOT__du_read_dat = VL_RAND_RESET_I(32);
    __PVT__or1k_ctrl_cappuccino__DOT__du__DOT__du_ack = VL_RAND_RESET_I(1);
    __PVT__or1k_ctrl_cappuccino__DOT__du__DOT__du_stall_r = VL_RAND_RESET_I(1);
    __PVT__or1k_ctrl_cappuccino__DOT__du__DOT__branch_step = VL_RAND_RESET_I(2);
    __PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picmr = VL_RAND_RESET_I(32);
    __PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr = VL_RAND_RESET_I(32);
    __PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picmr_access = VL_RAND_RESET_I(1);
    __PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__irq_unmasked = VL_RAND_RESET_I(32);
    __PVT__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__spr_ttmr = VL_RAND_RESET_I(32);
    __PVT__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__spr_ttcr = VL_RAND_RESET_I(32);
    __PVT__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__spr_ttmr_access = VL_RAND_RESET_I(1);
    __PVT__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__spr_ttcr_access = VL_RAND_RESET_I(1);
    __PVT__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__ttcr_match = VL_RAND_RESET_I(1);
    __Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__0__in = VL_RAND_RESET_I(32);
    __Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_or1k_execute_alu__DOT__barrel_shifter__DOT__reverse__1__in = VL_RAND_RESET_I(32);
    __Vtableidx1 = 0;
    __Vtable1___PVT__decode_lsu_length_o[0] = 2U;
    __Vtable1___PVT__decode_lsu_length_o[1] = 2U;
    __Vtable1___PVT__decode_lsu_length_o[2] = 2U;
    __Vtable1___PVT__decode_lsu_length_o[3] = 2U;
    __Vtable1___PVT__decode_lsu_length_o[4] = 2U;
    __Vtable1___PVT__decode_lsu_length_o[5] = 2U;
    __Vtable1___PVT__decode_lsu_length_o[6] = 2U;
    __Vtable1___PVT__decode_lsu_length_o[7] = 2U;
    __Vtable1___PVT__decode_lsu_length_o[8] = 2U;
    __Vtable1___PVT__decode_lsu_length_o[9] = 2U;
    __Vtable1___PVT__decode_lsu_length_o[10] = 2U;
    __Vtable1___PVT__decode_lsu_length_o[11] = 2U;
    __Vtable1___PVT__decode_lsu_length_o[12] = 2U;
    __Vtable1___PVT__decode_lsu_length_o[13] = 2U;
    __Vtable1___PVT__decode_lsu_length_o[14] = 2U;
    __Vtable1___PVT__decode_lsu_length_o[15] = 2U;
    __Vtable1___PVT__decode_lsu_length_o[16] = 2U;
    __Vtable1___PVT__decode_lsu_length_o[17] = 2U;
    __Vtable1___PVT__decode_lsu_length_o[18] = 2U;
    __Vtable1___PVT__decode_lsu_length_o[19] = 2U;
    __Vtable1___PVT__decode_lsu_length_o[20] = 2U;
    __Vtable1___PVT__decode_lsu_length_o[21] = 2U;
    __Vtable1___PVT__decode_lsu_length_o[22] = 2U;
    __Vtable1___PVT__decode_lsu_length_o[23] = 2U;
    __Vtable1___PVT__decode_lsu_length_o[24] = 2U;
    __Vtable1___PVT__decode_lsu_length_o[25] = 2U;
    __Vtable1___PVT__decode_lsu_length_o[26] = 2U;
    __Vtable1___PVT__decode_lsu_length_o[27] = 2U;
    __Vtable1___PVT__decode_lsu_length_o[28] = 2U;
    __Vtable1___PVT__decode_lsu_length_o[29] = 2U;
    __Vtable1___PVT__decode_lsu_length_o[30] = 2U;
    __Vtable1___PVT__decode_lsu_length_o[31] = 2U;
    __Vtable1___PVT__decode_lsu_length_o[32] = 2U;
    __Vtable1___PVT__decode_lsu_length_o[33] = 2U;
    __Vtable1___PVT__decode_lsu_length_o[34] = 2U;
    __Vtable1___PVT__decode_lsu_length_o[35] = 0U;
    __Vtable1___PVT__decode_lsu_length_o[36] = 0U;
    __Vtable1___PVT__decode_lsu_length_o[37] = 1U;
    __Vtable1___PVT__decode_lsu_length_o[38] = 1U;
    __Vtable1___PVT__decode_lsu_length_o[39] = 2U;
    __Vtable1___PVT__decode_lsu_length_o[40] = 2U;
    __Vtable1___PVT__decode_lsu_length_o[41] = 2U;
    __Vtable1___PVT__decode_lsu_length_o[42] = 2U;
    __Vtable1___PVT__decode_lsu_length_o[43] = 2U;
    __Vtable1___PVT__decode_lsu_length_o[44] = 2U;
    __Vtable1___PVT__decode_lsu_length_o[45] = 2U;
    __Vtable1___PVT__decode_lsu_length_o[46] = 2U;
    __Vtable1___PVT__decode_lsu_length_o[47] = 2U;
    __Vtable1___PVT__decode_lsu_length_o[48] = 2U;
    __Vtable1___PVT__decode_lsu_length_o[49] = 2U;
    __Vtable1___PVT__decode_lsu_length_o[50] = 2U;
    __Vtable1___PVT__decode_lsu_length_o[51] = 2U;
    __Vtable1___PVT__decode_lsu_length_o[52] = 2U;
    __Vtable1___PVT__decode_lsu_length_o[53] = 2U;
    __Vtable1___PVT__decode_lsu_length_o[54] = 0U;
    __Vtable1___PVT__decode_lsu_length_o[55] = 1U;
    __Vtable1___PVT__decode_lsu_length_o[56] = 2U;
    __Vtable1___PVT__decode_lsu_length_o[57] = 2U;
    __Vtable1___PVT__decode_lsu_length_o[58] = 2U;
    __Vtable1___PVT__decode_lsu_length_o[59] = 2U;
    __Vtable1___PVT__decode_lsu_length_o[60] = 2U;
    __Vtable1___PVT__decode_lsu_length_o[61] = 2U;
    __Vtable1___PVT__decode_lsu_length_o[62] = 2U;
    __Vtable1___PVT__decode_lsu_length_o[63] = 2U;
    __Vtableidx2 = 0;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[0] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[1] = 1U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[2] = 1U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[3] = 1U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[4] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[5] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[6] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[7] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[8] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[9] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[10] = 1U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[11] = 1U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[12] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[13] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[14] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[15] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[16] = 1U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[17] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[18] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[19] = 1U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[20] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[21] = 1U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[22] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[23] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[24] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[25] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[26] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[27] = 1U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[28] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[29] = 1U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[30] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[31] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[32] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[33] = 1U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[34] = 1U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[35] = 1U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[36] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[37] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[38] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[39] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[40] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[41] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[42] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[43] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[44] = 1U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[45] = 1U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[46] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[47] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[48] = 1U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[49] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[50] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[51] = 1U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[52] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[53] = 1U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[54] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[55] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[56] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[57] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[58] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[59] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[60] = 1U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[61] = 1U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[62] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[63] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[64] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[65] = 1U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[66] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[67] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[68] = 1U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[69] = 1U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[70] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[71] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[72] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[73] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[74] = 1U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[75] = 1U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[76] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[77] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[78] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[79] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[80] = 1U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[81] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[82] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[83] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[84] = 1U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[85] = 1U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[86] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[87] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[88] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[89] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[90] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[91] = 1U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[92] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[93] = 1U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[94] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[95] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[96] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[97] = 1U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[98] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[99] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[100] = 1U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[101] = 1U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[102] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[103] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[104] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[105] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[106] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[107] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[108] = 1U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[109] = 1U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[110] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[111] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[112] = 1U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[113] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[114] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[115] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[116] = 1U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[117] = 1U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[118] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[119] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[120] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[121] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[122] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[123] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[124] = 1U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[125] = 1U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[126] = 0U;
    __Vtable2___PVT__or1k_execute_alu__DOT__flag_set[127] = 0U;
    __Vtableidx3 = 0;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[0] = 0U;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[1] = 0U;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[2] = 0U;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[3] = 0U;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[4] = 0U;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[5] = 0U;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[6] = 0U;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[7] = 0U;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[8] = 0U;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[9] = 0U;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[10] = 0U;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[11] = 0U;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[12] = 0U;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[13] = 0U;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[14] = 0U;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[15] = 0U;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[16] = 0U;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[17] = 0U;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[18] = 0U;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[19] = 8U;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[20] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[21] = 6U;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[22] = 0U;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[23] = 0U;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[24] = 0U;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[25] = 0U;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[26] = 0U;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[27] = 0U;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[28] = 0U;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[29] = 0U;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[30] = 0U;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[31] = 0U;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[32] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[33] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[34] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[35] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[36] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[37] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[38] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[39] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[40] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[41] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[42] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[43] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[44] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[45] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[46] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[47] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[48] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[49] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[50] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[51] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[52] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[53] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[54] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[55] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[56] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[57] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[58] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[59] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[60] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[61] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[62] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[63] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[64] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[65] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[66] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[67] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[68] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[69] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[70] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[71] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[72] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[73] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[74] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[75] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[76] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[77] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[78] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[79] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[80] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[81] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[82] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[83] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[84] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[85] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[86] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[87] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[88] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[89] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[90] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[91] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[92] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[93] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[94] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[95] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[96] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[97] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[98] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[99] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[100] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[101] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[102] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[103] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[104] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[105] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[106] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[107] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[108] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[109] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[110] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[111] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[112] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[113] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[114] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[115] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[116] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[117] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[118] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[119] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[120] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[121] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[122] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[123] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[124] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[125] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[126] = 0xeU;
    __Vtable3___PVT__or1k_execute_alu__DOT__logic_lut[127] = 0xeU;
    __Vdly__or1k_fetch_cappuccino__DOT__nop_ack = VL_RAND_RESET_I(1);
    __Vdly__or1k_fetch_cappuccino__DOT__ibus_ack = VL_RAND_RESET_I(1);
    __Vdly__or1k_fetch_cappuccino__DOT__tlb_reload_ack = VL_RAND_RESET_I(1);
    __Vdly__or1k_fetch_cappuccino__DOT__state = VL_RAND_RESET_I(3);
    __Vdly__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state = VL_RAND_RESET_I(4);
    __Vdly__or1k_lsu_cappuccino__DOT__dbus_ack = VL_RAND_RESET_I(1);
    __Vdly__or1k_lsu_cappuccino__DOT__tlb_reload_ack = VL_RAND_RESET_I(1);
    __Vdly__or1k_lsu_cappuccino__DOT__state = VL_RAND_RESET_I(3);
    __Vdly__dbus_req_o = VL_RAND_RESET_I(1);
    __Vdly__or1k_lsu_cappuccino__DOT__last_write = VL_RAND_RESET_I(1);
    __Vdly__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state = VL_RAND_RESET_I(5);
    __Vdly__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__write_pending = VL_RAND_RESET_I(1);
    __Vdly__or1k_ctrl_cappuccino__DOT__spr_sr = VL_RAND_RESET_I(16);
}
