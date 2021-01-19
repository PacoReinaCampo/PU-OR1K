// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vor1k_pu.h for the primary calling header

#include "Vor1k_pu_or1k_cpu_cappuccino__pi5.h"
#include "Vor1k_pu__Syms.h"

#include "verilated_dpi.h"

//==========

uint32_t Vor1k_pu_or1k_cpu_cappuccino__pi5::get_gpr(uint32_t gpr_num) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vor1k_pu_or1k_cpu_cappuccino__pi5::get_gpr\n"); );
    // Variables
    VL_OUT(get_gpr__Vfuncrtn,31,0);
    Vor1k_pu__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    get_gpr__Vfuncrtn = ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfd_adr_o) 
                           == (0x1fU & (IData)(gpr_num))) 
                          & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rf_wb_o))
                          ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__alu_result_o
                          : ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_rfd_adr_o) 
                               == (0x1fU & (IData)(gpr_num))) 
                              & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_rf_wb_o))
                              ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_alu_result_o
                              : ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__wb_rfd_adr_o) 
                                   == (0x1fU & (IData)(gpr_num))) 
                                  & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__wb_rf_wb_o))
                                  ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__rf_result_o
                                  : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__rfa__DOT__mem
                                 [gpr_num])));
    // Final
    return (get_gpr__Vfuncrtn);
}

VL_INLINE_OPT void Vor1k_pu_or1k_cpu_cappuccino__pi5::_sequent__TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu__3(Vor1k_pu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vor1k_pu_or1k_cpu_cappuccino__pi5::_sequent__TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu__3\n"); );
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdly__decode_except_ibus_err_o;
    CData/*0:0*/ __Vdly__decode_except_itlb_miss_o;
    CData/*0:0*/ __Vdlyvset__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_way_save__v0;
    CData/*0:0*/ __Vdlyvset__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_way_save__v1;
    CData/*7:0*/ __Vdlyvdim0__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_ram__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_ram__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_memories__BRA__0__KET____DOT__way_data_ram__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_memories__BRA__1__KET____DOT__way_data_ram__DOT__mem__v0;
    CData/*5:0*/ __Vdlyvdim0__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_match_regs__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_match_regs__DOT__mem__v0;
    CData/*5:0*/ __Vdlyvdim0__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_match_regs__DOT__mem__v1;
    CData/*0:0*/ __Vdlyvset__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_match_regs__DOT__mem__v1;
    CData/*5:0*/ __Vdlyvdim0__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_translate_regs__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_translate_regs__DOT__mem__v0;
    CData/*5:0*/ __Vdlyvdim0__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_translate_regs__DOT__mem__v1;
    CData/*0:0*/ __Vdlyvset__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_translate_regs__DOT__mem__v1;
    CData/*0:0*/ __Vdly__or1k_execute_alu__DOT__genblk3__DOT__div_done;
    CData/*5:0*/ __Vdly__or1k_execute_alu__DOT__genblk3__DOT__div_count;
    CData/*7:0*/ __Vdlyvdim0__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_ram__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_ram__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_way_save__v0;
    CData/*0:0*/ __Vdlyvset__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_way_save__v1;
    CData/*7:0*/ __Vdlyvdim0__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_ram__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_ram__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__0__KET____DOT__way_data_ram__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__1__KET____DOT__way_data_ram__DOT__mem__v0;
    CData/*5:0*/ __Vdlyvdim0__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_match_regs__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_match_regs__DOT__mem__v0;
    CData/*5:0*/ __Vdlyvdim0__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_match_regs__DOT__mem__v1;
    CData/*0:0*/ __Vdlyvset__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_match_regs__DOT__mem__v1;
    CData/*5:0*/ __Vdlyvdim0__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_translate_regs__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_translate_regs__DOT__mem__v0;
    CData/*5:0*/ __Vdlyvdim0__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_translate_regs__DOT__mem__v1;
    CData/*0:0*/ __Vdlyvset__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_translate_regs__DOT__mem__v1;
    CData/*5:0*/ __Vdlyvdim0__or1k_rf_cappuccino__DOT__rfa__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__or1k_rf_cappuccino__DOT__rfa__DOT__mem__v0;
    CData/*5:0*/ __Vdlyvdim0__or1k_rf_cappuccino__DOT__rfb__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__or1k_rf_cappuccino__DOT__rfb__DOT__mem__v0;
    CData/*5:0*/ __Vdlyvdim0__or1k_rf_cappuccino__DOT__rfspr_gen__DOT__rfspr__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__or1k_rf_cappuccino__DOT__rfspr_gen__DOT__rfspr__DOT__mem__v0;
    CData/*0:0*/ __Vdly__or1k_ctrl_cappuccino__DOT__decode_execute_halt;
    CData/*0:0*/ __Vdly__or1k_ctrl_cappuccino__DOT__exception_r;
    CData/*0:0*/ __Vdly__or1k_ctrl_cappuccino__DOT__exception_taken;
    CData/*0:0*/ __Vdly__or1k_ctrl_cappuccino__DOT__du__DOT__du_ack;
    CData/*5:0*/ __Vdly__or1k_ctrl_cappuccino__DOT__pstep;
    CData/*1:0*/ __Vdly__or1k_ctrl_cappuccino__DOT__du__DOT__branch_step;
    SData/*10:0*/ __Vdlyvdim0__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_memories__BRA__0__KET____DOT__way_data_ram__DOT__mem__v0;
    SData/*10:0*/ __Vdlyvdim0__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_memories__BRA__1__KET____DOT__way_data_ram__DOT__mem__v0;
    SData/*8:0*/ __Vdly__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__write_pointer;
    SData/*8:0*/ __Vdly__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__read_pointer;
    SData/*10:0*/ __Vdlyvdim0__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__0__KET____DOT__way_data_ram__DOT__mem__v0;
    SData/*10:0*/ __Vdlyvdim0__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__1__KET____DOT__way_data_ram__DOT__mem__v0;
    IData/*19:0*/ __Vdlyvval__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_way_save__v0;
    IData/*19:0*/ __Vdlyvval__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_way_save__v1;
    IData/*31:0*/ __Vdlyvval__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_memories__BRA__0__KET____DOT__way_data_ram__DOT__mem__v0;
    IData/*31:0*/ __Vdlyvval__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_memories__BRA__1__KET____DOT__way_data_ram__DOT__mem__v0;
    IData/*31:0*/ __Vdlyvval__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_match_regs__DOT__mem__v0;
    IData/*31:0*/ __Vdlyvval__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_match_regs__DOT__mem__v1;
    IData/*31:0*/ __Vdlyvval__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_translate_regs__DOT__mem__v0;
    IData/*31:0*/ __Vdlyvval__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_translate_regs__DOT__mem__v1;
    IData/*31:0*/ __Vdly__or1k_execute_alu__DOT__genblk3__DOT__div_n;
    IData/*31:0*/ __Vdly__or1k_execute_alu__DOT__genblk3__DOT__div_r;
    WData/*100:0*/ __Vdlyvval__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_ram__DOT__mem__v0[4];
    IData/*18:0*/ __Vdlyvval__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_way_save__v0;
    IData/*18:0*/ __Vdlyvval__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_way_save__v1;
    IData/*31:0*/ __Vdlyvval__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__0__KET____DOT__way_data_ram__DOT__mem__v0;
    IData/*31:0*/ __Vdlyvval__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__1__KET____DOT__way_data_ram__DOT__mem__v0;
    IData/*31:0*/ __Vdlyvval__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_match_regs__DOT__mem__v0;
    IData/*31:0*/ __Vdlyvval__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_match_regs__DOT__mem__v1;
    IData/*31:0*/ __Vdlyvval__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_translate_regs__DOT__mem__v0;
    IData/*31:0*/ __Vdlyvval__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_translate_regs__DOT__mem__v1;
    IData/*31:0*/ __Vdlyvval__or1k_rf_cappuccino__DOT__rfa__DOT__mem__v0;
    IData/*31:0*/ __Vdlyvval__or1k_rf_cappuccino__DOT__rfb__DOT__mem__v0;
    IData/*31:0*/ __Vdlyvval__or1k_rf_cappuccino__DOT__rfspr_gen__DOT__rfspr__DOT__mem__v0;
    IData/*31:0*/ __Vdly__or1k_ctrl_cappuccino__DOT__spr_npc;
    IData/*31:0*/ __Vdly__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__spr_ttmr;
    IData/*31:0*/ __Vdly__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__spr_ttcr;
    QData/*40:0*/ __Vdlyvval__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_ram__DOT__mem__v0;
    QData/*38:0*/ __Vdlyvval__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_ram__DOT__mem__v0;
    // Body
    __Vdlyvset__or1k_rf_cappuccino__DOT__rfspr_gen__DOT__rfspr__DOT__mem__v0 = 0U;
    __Vdlyvset__or1k_rf_cappuccino__DOT__rfb__DOT__mem__v0 = 0U;
    __Vdlyvset__or1k_rf_cappuccino__DOT__rfa__DOT__mem__v0 = 0U;
    __Vdlyvset__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_memories__BRA__1__KET____DOT__way_data_ram__DOT__mem__v0 = 0U;
    __Vdlyvset__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_memories__BRA__0__KET____DOT__way_data_ram__DOT__mem__v0 = 0U;
    __Vdlyvset__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__1__KET____DOT__way_data_ram__DOT__mem__v0 = 0U;
    __Vdlyvset__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__0__KET____DOT__way_data_ram__DOT__mem__v0 = 0U;
    __Vdlyvset__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_translate_regs__DOT__mem__v0 = 0U;
    __Vdlyvset__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_translate_regs__DOT__mem__v1 = 0U;
    __Vdlyvset__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_match_regs__DOT__mem__v0 = 0U;
    __Vdlyvset__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_match_regs__DOT__mem__v1 = 0U;
    __Vdlyvset__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_translate_regs__DOT__mem__v0 = 0U;
    __Vdlyvset__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_translate_regs__DOT__mem__v1 = 0U;
    __Vdlyvset__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_match_regs__DOT__mem__v0 = 0U;
    __Vdlyvset__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_match_regs__DOT__mem__v1 = 0U;
    __Vdly__decode_except_itlb_miss_o = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_except_itlb_miss_o;
    __Vdly__decode_except_ibus_err_o = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_except_ibus_err_o;
    __Vdlyvset__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_ram__DOT__mem__v0 = 0U;
    __Vdly__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__read_pointer 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__read_pointer;
    __Vdly__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__write_pointer 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__write_pointer;
    __Vdly__or1k_execute_alu__DOT__genblk3__DOT__div_count 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_count;
    __Vdly__or1k_execute_alu__DOT__genblk3__DOT__div_done 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_done;
    __Vdly__or1k_execute_alu__DOT__genblk3__DOT__div_r 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_r;
    __Vdly__or1k_execute_alu__DOT__genblk3__DOT__div_n 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_n;
    __Vdly__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__spr_ttcr 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__spr_ttcr;
    __Vdly__or1k_ctrl_cappuccino__DOT__exception_r 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__exception_r;
    __Vdly__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__spr_ttmr 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__spr_ttmr;
    __Vdly__or1k_ctrl_cappuccino__DOT__pstep = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pstep;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_fetch_cappuccino__DOT__tlb_reload_ack 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__tlb_reload_ack;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_fetch_cappuccino__DOT__state 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__state;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_fetch_cappuccino__DOT__ibus_ack 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_ack;
    __Vdlyvset__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_ram__DOT__mem__v0 = 0U;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state;
    __Vdly__or1k_ctrl_cappuccino__DOT__exception_taken 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__exception_taken;
    __Vdly__or1k_ctrl_cappuccino__DOT__decode_execute_halt 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__decode_execute_halt;
    __Vdly__or1k_ctrl_cappuccino__DOT__du__DOT__branch_step 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__du__DOT__branch_step;
    __Vdlyvset__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_way_save__v0 = 0U;
    __Vdlyvset__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_way_save__v1 = 0U;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_fetch_cappuccino__DOT__nop_ack 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__nop_ack;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_lsu_cappuccino__DOT__tlb_reload_ack 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__tlb_reload_ack;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_lsu_cappuccino__DOT__last_write 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__last_write;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__dbus_req_o 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_req_o;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_lsu_cappuccino__DOT__dbus_ack 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_ack;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_lsu_cappuccino__DOT__state 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__state;
    __Vdly__or1k_ctrl_cappuccino__DOT__du__DOT__du_ack 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__du__DOT__du_ack;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__write_pending 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__write_pending;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_ctrl_cappuccino__DOT__spr_sr 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr;
    __Vdlyvset__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_ram__DOT__mem__v0 = 0U;
    __Vdlyvset__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_way_save__v0 = 0U;
    __Vdlyvset__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_way_save__v1 = 0U;
    __Vdly__or1k_ctrl_cappuccino__DOT__spr_npc = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_npc;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__traceport_exec_valid_o = 0U;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__traceport_exec_pc_o = 0U;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__traceport_exec_insn_o = 0U;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__traceport_stage_decode_insn = 0U;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__traceport_stage_exec_insn = 0U;
    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__rf_wren) {
        __Vdlyvval__or1k_rf_cappuccino__DOT__rfspr_gen__DOT__rfspr__DOT__mem__v0 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__rf_wrdat;
        __Vdlyvset__or1k_rf_cappuccino__DOT__rfspr_gen__DOT__rfspr__DOT__mem__v0 = 1U;
        __Vdlyvdim0__or1k_rf_cappuccino__DOT__rfspr_gen__DOT__rfspr__DOT__mem__v0 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__rf_wradr;
    }
    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__rf_wren) {
        __Vdlyvval__or1k_rf_cappuccino__DOT__rfb__DOT__mem__v0 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__rf_wrdat;
        __Vdlyvset__or1k_rf_cappuccino__DOT__rfb__DOT__mem__v0 = 1U;
        __Vdlyvdim0__or1k_rf_cappuccino__DOT__rfb__DOT__mem__v0 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__rf_wradr;
    }
    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__rf_wren) {
        __Vdlyvval__or1k_rf_cappuccino__DOT__rfa__DOT__mem__v0 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__rf_wrdat;
        __Vdlyvset__or1k_rf_cappuccino__DOT__rfa__DOT__mem__v0 = 1U;
        __Vdlyvdim0__or1k_rf_cappuccino__DOT__rfa__DOT__mem__v0 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__rf_wradr;
    }
    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_read) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_ram__DOT__bypass_gen__DOT__din_r[0U] 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_din[0U];
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_ram__DOT__bypass_gen__DOT__din_r[1U] 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_din[1U];
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_ram__DOT__bypass_gen__DOT__din_r[2U] 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_din[2U];
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_ram__DOT__bypass_gen__DOT__din_r[3U] 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_din[3U];
    }
    if ((2U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_we))) {
        __Vdlyvval__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_memories__BRA__1__KET____DOT__way_data_ram__DOT__mem__v0 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_din
            [1U];
        __Vdlyvset__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_memories__BRA__1__KET____DOT__way_data_ram__DOT__mem__v0 = 1U;
        __Vdlyvdim0__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_memories__BRA__1__KET____DOT__way_data_ram__DOT__mem__v0 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_waddr
            [1U];
    }
    if ((1U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_we))) {
        __Vdlyvval__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_memories__BRA__0__KET____DOT__way_data_ram__DOT__mem__v0 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_din
            [0U];
        __Vdlyvset__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_memories__BRA__0__KET____DOT__way_data_ram__DOT__mem__v0 = 1U;
        __Vdlyvdim0__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_memories__BRA__0__KET____DOT__way_data_ram__DOT__mem__v0 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_waddr
            [0U];
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_reload_we = 0U;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_reload_we = 0U;
    if ((2U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_we))) {
        __Vdlyvval__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__1__KET____DOT__way_data_ram__DOT__mem__v0 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_din
            [1U];
        __Vdlyvset__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__1__KET____DOT__way_data_ram__DOT__mem__v0 = 1U;
        __Vdlyvdim0__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__1__KET____DOT__way_data_ram__DOT__mem__v0 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_waddr
            [1U];
    }
    if ((1U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_we))) {
        __Vdlyvval__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__0__KET____DOT__way_data_ram__DOT__mem__v0 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_din
            [0U];
        __Vdlyvset__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__0__KET____DOT__way_data_ram__DOT__mem__v0 = 1U;
        __Vdlyvdim0__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__0__KET____DOT__way_data_ram__DOT__mem__v0 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_waddr
            [0U];
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_reload_we = 0U;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_reload_we = 0U;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__tlb_reload_huge = 0U;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_dmr2 = 0U;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dmmucr = 0U;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dmmucr_spr_cs_r = 0U;
    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_we) {
        __Vdlyvval__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_translate_regs__DOT__mem__v0 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_din;
        __Vdlyvset__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_translate_regs__DOT__mem__v0 = 1U;
        __Vdlyvdim0__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_translate_regs__DOT__mem__v0 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_addr;
    }
    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_huge_we) {
        __Vdlyvval__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_translate_regs__DOT__mem__v1 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_reload_din;
        __Vdlyvset__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_translate_regs__DOT__mem__v1 = 1U;
        __Vdlyvdim0__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_translate_regs__DOT__mem__v1 
            = (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_adr 
                        >> 0x18U));
    }
    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_we) {
        __Vdlyvval__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_match_regs__DOT__mem__v0 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_din;
        __Vdlyvset__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_match_regs__DOT__mem__v0 = 1U;
        __Vdlyvdim0__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_match_regs__DOT__mem__v0 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_addr;
    }
    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_huge_we) {
        __Vdlyvval__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_match_regs__DOT__mem__v1 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_reload_din;
        __Vdlyvset__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_match_regs__DOT__mem__v1 = 1U;
        __Vdlyvdim0__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_match_regs__DOT__mem__v1 
            = (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_adr 
                        >> 0x18U));
    }
    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_we) {
        __Vdlyvval__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_translate_regs__DOT__mem__v0 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_din;
        __Vdlyvset__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_translate_regs__DOT__mem__v0 = 1U;
        __Vdlyvdim0__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_translate_regs__DOT__mem__v0 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_addr;
    }
    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_huge_we) {
        __Vdlyvval__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_translate_regs__DOT__mem__v1 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_reload_din;
        __Vdlyvset__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_translate_regs__DOT__mem__v1 = 1U;
        __Vdlyvdim0__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_translate_regs__DOT__mem__v1 
            = (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ic_addr 
                        >> 0x18U));
    }
    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_we) {
        __Vdlyvval__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_match_regs__DOT__mem__v0 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_din;
        __Vdlyvset__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_match_regs__DOT__mem__v0 = 1U;
        __Vdlyvdim0__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_match_regs__DOT__mem__v0 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_addr;
    }
    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_huge_we) {
        __Vdlyvval__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_match_regs__DOT__mem__v1 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_reload_din;
        __Vdlyvset__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_match_regs__DOT__mem__v1 = 1U;
        __Vdlyvdim0__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_match_regs__DOT__mem__v1 
            = (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ic_addr 
                        >> 0x18U));
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__immucr = 0U;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__immucr_spr_cs_r = 0U;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_memories__BRA__1__KET____DOT__way_data_ram__DOT__rdata 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_memories__BRA__1__KET____DOT__way_data_ram__DOT__mem
        [vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_raddr
        [1U]];
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_memories__BRA__0__KET____DOT__way_data_ram__DOT__rdata 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_memories__BRA__0__KET____DOT__way_data_ram__DOT__mem
        [vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_raddr
        [0U]];
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_fpcsr_set_o = 0U;
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_fpcsr_o = 0U;
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_spr_cs_r 
        = ((~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__or1k_rst)) 
           & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_spr_cs));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_spr_cs_r 
        = ((~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__or1k_rst)) 
           & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_spr_cs));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__spr_way_idx_r 
        = (1U & ((~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__or1k_rst)) 
                 & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__spr_way_idx_full)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__1__KET____DOT__way_data_ram__DOT__bypass_gen__DOT__din_r 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_din
        [1U];
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__0__KET____DOT__way_data_ram__DOT__bypass_gen__DOT__din_r 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_din
        [0U];
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__1__KET____DOT__way_data_ram__DOT__rdata 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__1__KET____DOT__way_data_ram__DOT__mem
        [vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_raddr
        [1U]];
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__0__KET____DOT__way_data_ram__DOT__rdata 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__0__KET____DOT__way_data_ram__DOT__mem
        [vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_raddr
        [0U]];
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_fpcsr = 0U;
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__1__KET____DOT__way_data_ram__DOT__bypass_gen__DOT__bypass 
        = ((vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_waddr
            [1U] == vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_raddr
            [1U]) & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_we) 
                     >> 1U));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__0__KET____DOT__way_data_ram__DOT__bypass_gen__DOT__bypass 
        = ((vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_waddr
            [0U] == vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_raddr
            [0U]) & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_we));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__spr_way_idx_r 
        = (1U & ((~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__or1k_rst)) 
                 & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__spr_way_idx_full)));
    if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__or1k_rst)))) {
        if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_err)))) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__snoop_check = 0U;
        }
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ctrl_branch_exception_r 
        = ((~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__or1k_rst)) 
           & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_branch_exception_o));
    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__fetch_rf_adr_valid_o) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__rfb__DOT__rdata 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__rfb__DOT__mem
            [vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__rfb_rdad];
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__tlb_reload_pagefault = 0U;
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        __Vdly__decode_except_itlb_miss_o = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__du_restart_from_stall) {
            __Vdly__decode_except_itlb_miss_o = 0U;
        } else {
            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__except_itlb_miss) {
                __Vdly__decode_except_itlb_miss_o = 1U;
            } else {
                if (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_except_itlb_miss_o) 
                     & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_branch_exception_o))) {
                    __Vdly__decode_except_itlb_miss_o = 0U;
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__du__DOT__du_stall_r 
        = ((~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__or1k_rst)) 
           & (IData)(vlSymsp->TOP__or1k_pu.__PVT__or1k_dbg_stall_i));
    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_imm16_o 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_imm16_o;
    }
    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_execute_o) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_rfb_o 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfb_o;
    }
    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_immediate_sel_o 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_immediate_sel_o;
    }
    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_immediate_o 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_immediate_o;
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        __Vdly__decode_except_ibus_err_o = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__du_restart_from_stall) {
            __Vdly__decode_except_ibus_err_o = 0U;
        } else {
            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__imem_err) {
                __Vdly__decode_except_ibus_err_o = 1U;
            } else {
                if (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_except_ibus_err_o) 
                     & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_branch_exception_o))) {
                    __Vdly__decode_except_ibus_err_o = 0U;
                }
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__execute_rfb 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_rfb_o;
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_spr_cs_r 
        = ((~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__or1k_rst)) 
           & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_spr_cs));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_spr_cs_r 
        = ((~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__or1k_rst)) 
           & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_spr_cs));
    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__wb_hazard_result 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__rf_result_o;
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_wb_mux_cappuccino__DOT__wb_op_mul 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_mul_o;
    if (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) 
         & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_brcond_o))) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_predicted_flag_o 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__predicted_flag_o;
    }
    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_read) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_ram__DOT__rdata[0U] 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_ram__DOT__mem
            [(0xffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__read_pointer))][0U];
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_ram__DOT__rdata[1U] 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_ram__DOT__mem
            [(0xffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__read_pointer))][1U];
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_ram__DOT__rdata[2U] 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_ram__DOT__mem
            [(0xffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__read_pointer))][2U];
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_ram__DOT__rdata[3U] 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_ram__DOT__mem
            [(0xffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__read_pointer))][3U];
    }
    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_valid_o) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__ctrl_hazard_result_r 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__rf_result_o;
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__genblk1__DOT__spr_gpr_read_ack 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__genblk1__DOT__spr_gpr_re;
    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_write) {
        __Vdlyvval__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_ram__DOT__mem__v0[0U] 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_din[0U];
        __Vdlyvval__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_ram__DOT__mem__v0[1U] 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_din[1U];
        __Vdlyvval__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_ram__DOT__mem__v0[2U] 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_din[2U];
        __Vdlyvval__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_ram__DOT__mem__v0[3U] 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_din[3U];
        __Vdlyvset__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_ram__DOT__mem__v0 = 1U;
        __Vdlyvdim0__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_ram__DOT__mem__v0 
            = (0xffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__write_pointer));
    }
    if (((((0xffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__write_pointer)) 
           == (0xffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__read_pointer))) 
          & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_write)) 
         & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_read))) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_ram__DOT__bypass_gen__DOT__bypass = 1U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_read) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_ram__DOT__bypass_gen__DOT__bypass = 0U;
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        __Vdly__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__read_pointer = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_read) {
            __Vdly__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__read_pointer 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__read_pointer)));
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__except_dpagefault_r = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_execute_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__except_dpagefault_r = 0U;
        } else {
            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__except_dpagefault) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__except_dpagefault_r = 1U;
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__except_dtlb_miss_r = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_execute_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__except_dtlb_miss_r = 0U;
        } else {
            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__except_dtlb_miss) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__except_dtlb_miss_r = 1U;
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_ext_o = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_ext_o = 0U;
        } else {
            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_ext_o = 0U;
                if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_bubble_o) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_ext_o = 0U;
                }
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_jr_o = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_jr_o = 0U;
        } else {
            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_jr_o 
                    = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_jr_o;
                if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_bubble_o) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_jr_o = 0U;
                }
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        __Vdly__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__write_pointer = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_write) {
            __Vdly__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__write_pointer 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__write_pointer)));
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_brcond_o = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_brcond_o = 0U;
        } else {
            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_brcond_o 
                    = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_brcond_o;
                if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_bubble_o) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_brcond_o = 0U;
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__threestagemultiply__DOT__mul_valid_shr 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_valid_o)
            ? (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_mul_o)
            : ((4U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__threestagemultiply__DOT__mul_valid_shr))
                ? (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__threestagemultiply__DOT__mul_valid_shr)
                : (6U & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__threestagemultiply__DOT__mul_valid_shr) 
                         << 1U))));
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        __Vdly__or1k_execute_alu__DOT__genblk3__DOT__div_done = 0U;
        __Vdly__or1k_execute_alu__DOT__genblk3__DOT__div_count = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_valid_o) 
             & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_div_o))) {
            __Vdly__or1k_execute_alu__DOT__genblk3__DOT__div_done = 0U;
            __Vdly__or1k_execute_alu__DOT__genblk3__DOT__div_count = 0x20U;
        } else {
            if ((1U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_count))) {
                __Vdly__or1k_execute_alu__DOT__genblk3__DOT__div_done = 1U;
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_done)))) {
                    __Vdly__or1k_execute_alu__DOT__genblk3__DOT__div_count 
                        = (0x3fU & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_count) 
                                    - (IData)(1U)));
                }
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__waiting_for_fetch = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__fetch_valid_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__waiting_for_fetch = 0U;
        } else {
            if ((((~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_ctrl_cappuccino__DOT__execute_stall)) 
                  & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__execute_waiting_r)) 
                 & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__fetch_valid_o)))) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__waiting_for_fetch = 1U;
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_flag_set_o = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_execute_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_flag_set_o 
                = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__flag_set) 
                   & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_setflag_o));
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_flag_clear_o = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_execute_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_flag_clear_o 
                = ((~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__flag_set)) 
                   & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_setflag_o));
        }
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_translate_regs__DOT__rdata_b 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_huge_we)
            ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_reload_din
            : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_translate_regs__DOT__mem
           [(0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ic_addr 
                      >> 0x18U))]);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_translate_regs__DOT__rdata_a 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_we)
            ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_din
            : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_translate_regs__DOT__mem
           [vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_addr]);
    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_immjbr_upper_o 
            = (0x3ffU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                         >> 0x10U));
    }
    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_opc_alu_o 
            = ((0x2aU == (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                   >> 0x1aU))) ? 4U
                : ((0x29U == (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                       >> 0x1aU))) ? 3U
                    : ((0x2bU == (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                           >> 0x1aU)))
                        ? 5U : (0xfU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode))));
    }
    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_opc_alu_secondary_o 
            = (0xfU & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_setflag_o)
                        ? (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                           >> 0x15U) : (7U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                              >> 6U))));
    }
    if (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_valid_o) 
         & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_div_o))) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_d 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfb_o;
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_div_signed_o) {
            if ((0x80000000U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfb_o)) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_d 
                    = ((IData)(1U) + (~ vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfb_o));
            }
        }
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__threestagemultiply__DOT__mul_result2 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__threestagemultiply__DOT__mul_result1;
    if (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_valid_o) 
         & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_div_o))) {
        __Vdly__or1k_execute_alu__DOT__genblk3__DOT__div_n 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o;
        __Vdly__or1k_execute_alu__DOT__genblk3__DOT__div_r = 0U;
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_div_signed_o) {
            if ((0x80000000U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)) {
                __Vdly__or1k_execute_alu__DOT__genblk3__DOT__div_n 
                    = ((IData)(1U) + (~ vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o));
            }
        }
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_done)))) {
            if ((1U & (IData)((vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_sub 
                               >> 0x20U)))) {
                __Vdly__or1k_execute_alu__DOT__genblk3__DOT__div_r 
                    = ((0xfffffffeU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_r 
                                       << 1U)) | (1U 
                                                  & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_n 
                                                     >> 0x1fU)));
                __Vdly__or1k_execute_alu__DOT__genblk3__DOT__div_n 
                    = (0xfffffffeU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_n 
                                      << 1U));
            } else {
                __Vdly__or1k_execute_alu__DOT__genblk3__DOT__div_n 
                    = (1U | (0xfffffffeU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_n 
                                            << 1U)));
                __Vdly__or1k_execute_alu__DOT__genblk3__DOT__div_r 
                    = (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_sub);
            }
        }
    }
    if (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_valid_o) 
         & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_div_o))) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_neg = 0U;
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_div_signed_o) {
            if ((0x80000000U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o 
                                ^ vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfb_o))) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_neg = 1U;
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__fetching_mispredicted_branch = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__fetching_mispredicted_branch = 0U;
        } else {
            if ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__bus_access_done) 
                  & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_fetch_o)) 
                 | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__du_restart_from_stall))) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__fetching_mispredicted_branch = 0U;
            } else {
                if ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__fetching_brcond) 
                      & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__branch_mispredict_o)) 
                     & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_fetch_o))) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__fetching_mispredicted_branch = 1U;
                }
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_opc_insn_o = 5U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_opc_insn_o = 5U;
        } else {
            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_opc_insn_o 
                    = (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                >> 0x1aU));
                if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_bubble_o) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_opc_insn_o = 5U;
                }
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_bf_o = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_bf_o = 0U;
        } else {
            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_bf_o 
                    = (4U == (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                       >> 0x1aU)));
                if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_bubble_o) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_bf_o = 0U;
                }
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_bnf_o = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_bnf_o = 0U;
        } else {
            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_bnf_o 
                    = (3U == (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                       >> 0x1aU)));
                if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_bubble_o) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_bnf_o = 0U;
                }
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_jbr_o = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_jbr_o = 0U;
        } else {
            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_jbr_o 
                    = (5U > (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                      >> 0x1aU)));
                if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_bubble_o) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_jbr_o = 0U;
                }
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_shift_o = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_shift_o = 0U;
        } else {
            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_shift_o 
                    = (((0x38U == (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                            >> 0x1aU))) 
                        & (8U == (0xfU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode))) 
                       | (0x2eU == (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                             >> 0x1aU))));
                if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_bubble_o) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_shift_o = 0U;
                }
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_ffl1_o = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_ffl1_o = 0U;
        } else {
            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_ffl1_o 
                    = (((0x38U == (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                            >> 0x1aU))) 
                        & ((0U == (3U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                         >> 8U))) | 
                           (1U == (3U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                         >> 8U))))) 
                       & (0xfU == (0xfU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode)));
                if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_bubble_o) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_ffl1_o = 0U;
                }
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_movhi_o = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_movhi_o = 0U;
        } else {
            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_movhi_o 
                    = (6U == (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                       >> 0x1aU)));
                if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_bubble_o) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_movhi_o = 0U;
                }
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_alu_o = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_alu_o = 0U;
        } else {
            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_alu_o 
                    = ((((0x38U == (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                             >> 0x1aU))) 
                         | (0x2aU == (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                               >> 0x1aU)))) 
                        | (0x29U == (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                              >> 0x1aU)))) 
                       | (0x2bU == (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                             >> 0x1aU))));
                if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_bubble_o) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_alu_o = 0U;
                }
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_adder_do_carry_o = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_adder_do_carry_o = 0U;
        } else {
            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_adder_do_carry_o 
                    = (((0x38U == (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                            >> 0x1aU))) 
                        & (1U == (0xfU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode))) 
                       | (0x28U == (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                             >> 0x1aU))));
                if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_bubble_o) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_adder_do_carry_o = 0U;
                }
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_adder_do_sub_o = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_adder_do_sub_o = 0U;
        } else {
            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_adder_do_sub_o 
                    = (((0x38U == (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                            >> 0x1aU))) 
                        & (2U == (0xfU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode))) 
                       | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_setflag_o));
                if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_bubble_o) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_adder_do_sub_o = 0U;
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_ram__DOT__rdata 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_ram__DOT__mem
        [(0xffU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ic_addr 
                   >> 5U))];
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_match_regs__DOT__rdata_a 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_we)
            ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_din
            : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_match_regs__DOT__mem
           [vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_addr]);
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_msync_o = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_execute_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_msync_o 
                = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_msync_o;
        } else {
            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_msync_o = 0U;
            }
        }
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__tlb_reload_pagefault = 0U;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_match_regs__DOT__rdata_b 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_huge_we)
            ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_reload_din
            : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_match_regs__DOT__mem
           [(0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ic_addr 
                      >> 0x18U))]);
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        __Vdly__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__spr_ttcr = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_we) 
             & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__spr_ttcr_access))) {
            __Vdly__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__spr_ttcr 
                = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_write_dat;
        } else {
            if (((1U == (3U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__spr_ttmr 
                               >> 0x1eU))) & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__ttcr_match))) {
                __Vdly__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__spr_ttcr = 0U;
            } else {
                if ((((0U != (3U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__spr_ttmr 
                                    >> 0x1eU))) & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__ttcr_match))) 
                     | (3U == (3U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__spr_ttmr 
                                     >> 0x1eU))))) {
                    __Vdly__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__spr_ttcr 
                        = ((IData)(1U) + vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__spr_ttcr);
                }
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__execute_hazard_a = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) 
             & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__flushing)))) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__execute_hazard_a 
                = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rf_wb_o) 
                   & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfd_adr_o) 
                      == (0x1fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                   >> 0x10U))));
        }
    }
    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__execute_hazard_b = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) 
             & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__flushing)))) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__execute_hazard_b 
                = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rf_wb_o) 
                   & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfd_adr_o) 
                      == (0x1fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                   >> 0xbU))));
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_bubble_o = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_execute_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_bubble_o 
                = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_bubble_o;
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        __Vdly__or1k_ctrl_cappuccino__DOT__exception_r = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__exception_taken) 
             | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__du_restart_from_stall))) {
            __Vdly__or1k_ctrl_cappuccino__DOT__exception_r = 0U;
        } else {
            if (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__exception) 
                 & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__exception_r)))) {
                __Vdly__or1k_ctrl_cappuccino__DOT__exception_r = 1U;
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        __Vdly__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__spr_ttmr = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_we) 
             & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__spr_ttmr_access))) {
            __Vdly__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__spr_ttmr 
                = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_write_dat;
        } else {
            if (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__ttcr_match) 
                 & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__spr_ttmr 
                    >> 0x1dU))) {
                __Vdly__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__spr_ttmr 
                    = (0x10000000U | __Vdly__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__spr_ttmr);
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_enable_r = 0U;
    } else {
        if ((1U & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr) 
                    >> 3U) & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_req_o))))) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_enable_r = 1U;
        } else {
            if (((~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr) 
                     >> 3U)) & (8U != (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state)))) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_enable_r = 0U;
            }
        }
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__rfspr_gen__DOT__rfspr__DOT__rdata 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__rfspr_gen__DOT__rfspr__DOT__mem
        [(0x3fU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr))];
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_dmr1 = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_we) 
             & (0x3010U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr)))) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_dmr1 
                = ((0xff000000U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_dmr1) 
                   | (0xffffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_write_dat));
        }
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__spr_bus_ack 
        = ((~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__or1k_rst)) 
           & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__dmmu_spr_bus_stb) 
              & (1U == (0x1fU & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr) 
                                 >> 0xbU)))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_ram__DOT__rdata 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_ram__DOT__mem
        [(0xffU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_adr 
                   >> 5U))];
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_mtspr_o = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_execute_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_mtspr_o 
                = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_mtspr_o;
        } else {
            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_mtspr_o = 0U;
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        __Vdly__or1k_ctrl_cappuccino__DOT__pstep = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__du_restart_from_stall) 
             & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__stepping))) {
            __Vdly__or1k_ctrl_cappuccino__DOT__pstep = 1U;
        } else {
            if ((1U & ((((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pstep) 
                           & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__fetch_valid_o)) 
                          | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pstep) 
                              >> 1U) & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o))) 
                         | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pstep) 
                             >> 2U) & ((~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_ctrl_cappuccino__DOT__execute_stall)) 
                                       | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__ctrl_stage_exceptions)))) 
                        | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pstep) 
                            >> 3U) & ((~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_ctrl_cappuccino__DOT__ctrl_stall)) 
                                      | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__ctrl_stage_exceptions)))) 
                       | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pstep) 
                          >> 4U)))) {
                __Vdly__or1k_ctrl_cappuccino__DOT__pstep 
                    = (0x3eU & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pstep) 
                                << 1U));
            }
        }
    }
    if (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__spr_bus_ack) 
         & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__spr_bus_ack_r)))) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__spr_bus_dat_r 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__spr_bus_dat;
    }
    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_we) {
        __Vdlyvval__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_ram__DOT__mem__v0 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_din;
        __Vdlyvset__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_ram__DOT__mem__v0 = 1U;
        __Vdlyvdim0__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_ram__DOT__mem__v0 
            = (0xffU & ((2U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state))
                         ? (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ic_addr_match 
                            >> 5U) : ((8U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state))
                                       ? (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__invalidate_adr)
                                       : (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_adr 
                                          >> 5U))));
    }
    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__ctrl_hazard_a 
            = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_rf_wb_o) 
               & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_rfd_adr_o) 
                  == (0x1fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                               >> 0x10U))));
    }
    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__ctrl_hazard_b 
            = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_rf_wb_o) 
               & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_rfd_adr_o) 
                  == (0x1fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                               >> 0xbU))));
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        __Vdly__or1k_ctrl_cappuccino__DOT__exception_taken = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__exception_taken) {
            __Vdly__or1k_ctrl_cappuccino__DOT__exception_taken = 0U;
        } else {
            if (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__exception_r) 
                 & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__fetch_exception_taken_o))) {
                __Vdly__or1k_ctrl_cappuccino__DOT__exception_taken = 1U;
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__ic_enable_r = 0U;
    } else {
        if ((1U & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr) 
                    >> 4U) & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_req))))) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__ic_enable_r = 1U;
        } else {
            if (((~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr) 
                     >> 4U)) & (4U != (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state)))) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__ic_enable_r = 0U;
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_valid_o) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__execute_hazard_result_r 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_alu_result_o;
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_translate_regs__DOT__rdata_b 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_huge_we)
            ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_reload_din
            : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_translate_regs__DOT__mem
           [(0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_adr 
                      >> 0x18U))]);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_translate_regs__DOT__rdata_a 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_we)
            ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_din
            : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_translate_regs__DOT__mem
           [vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_addr]);
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        __Vdly__or1k_ctrl_cappuccino__DOT__decode_execute_halt = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__du_restart_from_stall) {
            __Vdly__or1k_ctrl_cappuccino__DOT__decode_execute_halt = 0U;
        } else {
            if (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__decode_execute_halt) 
                 & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__deassert_decode_execute_halt))) {
                __Vdly__or1k_ctrl_cappuccino__DOT__decode_execute_halt = 0U;
            } else {
                if (((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_rfe_o) 
                       | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__exception)) 
                      & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__decode_execute_halt))) 
                     & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__exception_taken)))) {
                    __Vdly__or1k_ctrl_cappuccino__DOT__decode_execute_halt = 1U;
                }
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        __Vdly__or1k_ctrl_cappuccino__DOT__du__DOT__branch_step = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__du_npc_written) {
            __Vdly__or1k_ctrl_cappuccino__DOT__du__DOT__branch_step = 0U;
        } else {
            if (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__stepping) 
                 & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pstep) 
                    >> 2U))) {
                __Vdly__or1k_ctrl_cappuccino__DOT__du__DOT__branch_step 
                    = ((2U & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__du__DOT__branch_step) 
                              << 1U)) | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_branch_o));
            } else {
                if (((~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__stepping)) 
                     & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__padv_ctrl))) {
                    __Vdly__or1k_ctrl_cappuccino__DOT__du__DOT__branch_step 
                        = ((2U & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__du__DOT__branch_step) 
                                  << 1U)) | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__ctrl_delay_slot));
                }
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_ppc = 0x100U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__padv_ctrl) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_ppc 
                = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pc_execute_to_ctrl;
        }
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__refill_valid_r 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__refill_valid;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__spr_bus_ack_ic_i = 0U;
    if ((8U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state))) {
        if ((4U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state))) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state = 1U;
        } else {
            if ((2U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state))) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state = 1U;
            } else {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state))) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state = 1U;
                } else {
                    if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ic_invalidate)))) {
                        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state = 1U;
                    }
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__spr_bus_ack_ic_i = 1U;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state))) {
            if ((2U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state))) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state = 1U;
            } else {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state))) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state = 1U;
                } else {
                    if (vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_or1k_i_ack) {
                        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__refill_valid 
                            = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__refill_valid) 
                               | ((IData)(1U) << (7U 
                                                  & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_adr 
                                                     >> 2U))));
                        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__refill_done) {
                            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state = 1U;
                        }
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state))) {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state))) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state = 1U;
                } else {
                    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ic_access) {
                        if ((0U != (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_hit))) {
                            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state = 2U;
                        } else {
                            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__ic_req) {
                                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__w1 = 2U;
                                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__refill_valid = 0U;
                                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__refill_valid_r = 0U;
                                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_save_lru 
                                    = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__lru;
                                __Vdlyvval__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_way_save__v0 
                                    = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_way_out
                                    [0U];
                                __Vdlyvset__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_way_save__v0 = 1U;
                                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state = 4U;
                                __Vdlyvval__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_way_save__v1 
                                    = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_way_out
                                    [1U];
                                __Vdlyvset__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_way_save__v1 = 1U;
                            }
                        }
                    } else {
                        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state = 1U;
                    }
                }
            } else {
                if ((1U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state))) {
                    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__ic_req) {
                        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state = 2U;
                    }
                } else {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state = 1U;
                }
            }
        }
    }
    if (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ic_invalidate) 
         & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__refill)))) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__spr_bus_ack_ic_i = 1U;
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state = 8U;
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state = 1U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__imem_err) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state = 1U;
        }
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_fetch_cappuccino__DOT__nop_ack 
        = ((~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__or1k_rst)) 
           & ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_fetch_o) 
                & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__bus_access_done))) 
               & (~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_req) 
                     & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_access)))) 
              & ((((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr) 
                     >> 6U) & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__tlb_miss) 
                               | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__pagefault))) 
                   | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ctrl_branch_exception_edge)) 
                  | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__exception_while_tlb_reload)) 
                 | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__mispredict_stall))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_wb_mux_cappuccino__DOT__rf_result 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_mfspr_o)
            ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__mfspr_dat_o
            : ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_lsu_load_o)
                ? ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_zext_o)
                    ? ((2U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_length_o))
                        ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat_aligned
                        : ((1U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_length_o))
                            ? (0xffffU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat_aligned 
                                          >> 0x10U))
                            : (0xffU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat_aligned 
                                        >> 0x18U))))
                    : ((2U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_length_o))
                        ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat_aligned
                        : ((1U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_length_o))
                            ? ((0xffff0000U & ((- (IData)(
                                                          (1U 
                                                           & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat_aligned 
                                                              >> 0x1fU)))) 
                                               << 0x10U)) 
                               | (0xffffU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat_aligned 
                                             >> 0x10U)))
                            : ((0xffffff00U & ((- (IData)(
                                                          (1U 
                                                           & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat_aligned 
                                                              >> 0x1fU)))) 
                                               << 8U)) 
                               | (0xffU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat_aligned 
                                           >> 0x18U))))))
                : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_alu_result_o));
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_write_pending = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_write) 
             | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o))) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_write_pending = 0U;
        } else {
            if (((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_lsu_store_o) 
                   & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__padv_ctrl)) 
                  & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_stall))) 
                 & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_full) 
                     | (8U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state))) 
                    | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_refill_r)))) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_write_pending = 1U;
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_drr = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_we) 
             & (0x3015U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr)))) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_drr 
                = ((0xffffc000U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_drr) 
                   | (0x3fffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_write_dat));
        } else {
            if ((((vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_dsr 
                   >> 0xdU) & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__padv_ctrl)) 
                 & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_trap_o))) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_drr 
                    = (0x2000U | vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_drr);
            }
        }
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_match_regs__DOT__rdata_a 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_we)
            ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_din
            : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_match_regs__DOT__mem
           [vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_addr]);
    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__fetch_rf_adr_valid_o) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__wb_to_decode_bypass_b 
            = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__wb_rf_wb_o) 
               & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__wb_rfd_adr_o) 
                  == (0x1fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__imem_dat 
                               >> 0xbU))));
    }
    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__fetch_rf_adr_valid_o) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__use_last_wb_b = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__wb_rf_wb_o) {
            if (((0x1fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                           >> 0xbU)) == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__wb_rfd_adr_o))) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__use_last_wb_b = 1U;
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__wb_hazard_a = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__wb_hazard_a 
                = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__wb_rf_wb_o) 
                   & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__wb_rfd_adr_o) 
                      == (0x1fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                   >> 0x10U))));
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__wb_hazard_b = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__wb_hazard_b 
                = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__wb_rf_wb_o) 
                   & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__wb_rfd_adr_o) 
                      == (0x1fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                   >> 0xbU))));
        }
    }
    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__fetch_rf_adr_valid_o) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__wb_to_decode_result_b 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__rf_result_o;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__wb_rf_wb_o) {
            if (((0x1fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                           >> 0xbU)) == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__wb_rfd_adr_o))) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__wb_to_decode_result_b 
                    = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__rf_result_o;
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_eear = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__exception_re) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_eear 
                = ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ibus_err_o) 
                     | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_itlb_miss_o)) 
                    | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ipagefault_o))
                    ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pc_execute_to_ctrl
                    : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_adr_o);
        }
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__fetch_exception_taken_o 
        = ((~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__or1k_rst)) 
           & ((~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__fetch_exception_taken_o)) 
              & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_branch_exception_o) 
                  & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__bus_access_done)) 
                 & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_fetch_o))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_match_regs__DOT__rdata_b 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_huge_we)
            ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_reload_din
            : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_match_regs__DOT__mem
           [(0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_adr 
                      >> 0x18U))]);
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        __Vdly__or1k_ctrl_cappuccino__DOT__du__DOT__du_ack = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__du__DOT__du_ack) {
            __Vdly__or1k_ctrl_cappuccino__DOT__du__DOT__du_ack = 0U;
        } else {
            if (vlSymsp->TOP__or1k_pu.__PVT__or1k_dbg_stb_i) {
                __Vdly__or1k_ctrl_cappuccino__DOT__du__DOT__du_ack 
                    = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_ack;
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__padv_ctrl) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__atomic_gen__DOT__atomic_flag_set = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__write_done) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__atomic_gen__DOT__atomic_flag_set 
                = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__swa_success) 
                   & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__lsu_valid_o));
        }
    }
    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__padv_ctrl) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__atomic_gen__DOT__atomic_flag_clear = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__write_done) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__atomic_gen__DOT__atomic_flag_clear 
                = ((((~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__swa_success)) 
                     & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__lsu_valid_o)) 
                    & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_lsu_atomic_o)) 
                   & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_lsu_store_o));
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_ctrl_cappuccino__DOT__spr_sr = 0x8001U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__exception_re) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_ctrl_cappuccino__DOT__spr_sr 
                = (1U | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_ctrl_cappuccino__DOT__spr_sr));
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_ctrl_cappuccino__DOT__spr_sr 
                = (0xfffdU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_ctrl_cappuccino__DOT__spr_sr));
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_ctrl_cappuccino__DOT__spr_sr 
                = (0xfffbU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_ctrl_cappuccino__DOT__spr_sr));
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_ctrl_cappuccino__DOT__spr_sr 
                = (0xffdfU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_ctrl_cappuccino__DOT__spr_sr));
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_ctrl_cappuccino__DOT__spr_sr 
                = (0xffbfU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_ctrl_cappuccino__DOT__spr_sr));
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_ctrl_cappuccino__DOT__spr_sr 
                = ((0xdfffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_ctrl_cappuccino__DOT__spr_sr)) 
                   | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__ctrl_delay_slot) 
                      << 0xdU));
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_ctrl_cappuccino__DOT__spr_sr 
                = (0xefffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_ctrl_cappuccino__DOT__spr_sr));
        } else {
            if (((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_we) 
                   & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access)) 
                  & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr) 
                      & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__padv_ctrl)) 
                     | (IData)(vlSymsp->TOP__or1k_pu.__PVT__or1k_dbg_stb_i))) 
                 & (0x11U == (0x7ffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr))))) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_ctrl_cappuccino__DOT__spr_sr 
                    = ((0xfffeU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_ctrl_cappuccino__DOT__spr_sr)) 
                       | (1U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_write_dat));
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_ctrl_cappuccino__DOT__spr_sr 
                    = ((0xfdffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_ctrl_cappuccino__DOT__spr_sr)) 
                       | (0x200U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_write_dat));
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_ctrl_cappuccino__DOT__spr_sr 
                    = ((0xfffdU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_ctrl_cappuccino__DOT__spr_sr)) 
                       | (2U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_write_dat));
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_ctrl_cappuccino__DOT__spr_sr 
                    = ((0xfffbU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_ctrl_cappuccino__DOT__spr_sr)) 
                       | (4U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_write_dat));
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_ctrl_cappuccino__DOT__spr_sr 
                    = ((0xfff7U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_ctrl_cappuccino__DOT__spr_sr)) 
                       | (8U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_write_dat));
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_ctrl_cappuccino__DOT__spr_sr 
                    = ((0xffefU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_ctrl_cappuccino__DOT__spr_sr)) 
                       | (0x10U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_write_dat));
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_ctrl_cappuccino__DOT__spr_sr 
                    = ((0xffdfU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_ctrl_cappuccino__DOT__spr_sr)) 
                       | (0x20U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_write_dat));
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_ctrl_cappuccino__DOT__spr_sr 
                    = ((0xffbfU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_ctrl_cappuccino__DOT__spr_sr)) 
                       | (0x40U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_write_dat));
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_ctrl_cappuccino__DOT__spr_sr 
                    = ((0xfbffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_ctrl_cappuccino__DOT__spr_sr)) 
                       | (0x400U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_write_dat));
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_ctrl_cappuccino__DOT__spr_sr 
                    = ((0xf7ffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_ctrl_cappuccino__DOT__spr_sr)) 
                       | (0x800U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_write_dat));
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_ctrl_cappuccino__DOT__spr_sr 
                    = ((0xefffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_ctrl_cappuccino__DOT__spr_sr)) 
                       | (0x1000U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_write_dat));
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_ctrl_cappuccino__DOT__spr_sr 
                    = ((0xdfffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_ctrl_cappuccino__DOT__spr_sr)) 
                       | (0x2000U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_write_dat));
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_ctrl_cappuccino__DOT__spr_sr 
                    = ((0xbfffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_ctrl_cappuccino__DOT__spr_sr)) 
                       | (0x4000U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_write_dat));
            } else {
                if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__padv_ctrl) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_ctrl_cappuccino__DOT__spr_sr 
                        = ((0xfdffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_ctrl_cappuccino__DOT__spr_sr)) 
                           | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__ctrl_flag_set)
                                ? 1U : ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__ctrl_flag_clear)
                                         ? 0U : (1U 
                                                 & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr) 
                                                    >> 9U)))) 
                              << 9U));
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_ctrl_cappuccino__DOT__spr_sr 
                        = ((0xfbffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_ctrl_cappuccino__DOT__spr_sr)) 
                           | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_carry_set_o)
                                ? 1U : ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_carry_clear_o)
                                         ? 0U : (1U 
                                                 & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr) 
                                                    >> 0xaU)))) 
                              << 0xaU));
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_ctrl_cappuccino__DOT__spr_sr 
                        = ((0xf7ffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_ctrl_cappuccino__DOT__spr_sr)) 
                           | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_overflow_set_o)
                                ? 1U : ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_overflow_clear_o)
                                         ? 0U : (1U 
                                                 & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr) 
                                                    >> 0xbU)))) 
                              << 0xbU));
                    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_rfe_o) {
                        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_ctrl_cappuccino__DOT__spr_sr 
                            = ((0x8000U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_ctrl_cappuccino__DOT__spr_sr)) 
                               | (0x7fffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_esr)));
                    }
                }
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__doing_rfe_r = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__deassert_doing_rfe) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__doing_rfe_r = 0U;
        } else {
            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__padv_ctrl) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__doing_rfe_r 
                    = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_rfe_o;
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_we) {
        __Vdlyvval__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_ram__DOT__mem__v0 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_din;
        __Vdlyvset__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_ram__DOT__mem__v0 = 1U;
        __Vdlyvdim0__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_ram__DOT__mem__v0 
            = (0xffU & (((2U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state)) 
                         | (4U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state)))
                         ? (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_adr_match 
                            >> 5U) : ((0x10U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state))
                                       ? (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__invalidate_adr)
                                       : (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_adr 
                                          >> 5U))));
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__atomic_reserve = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__atomic_reserve = 0U;
        } else {
            if (((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_lsu_store_o) 
                   & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_lsu_atomic_o)) 
                  & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__write_done)) 
                 | (((~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_lsu_atomic_o)) 
                     & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_write)) 
                    & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_adr_match 
                       == vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__atomic_addr)))) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__atomic_reserve = 0U;
            } else {
                if ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_lsu_load_o) 
                      & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_lsu_atomic_o)) 
                     & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__padv_ctrl))) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__atomic_reserve = 1U;
                }
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        __Vdly__or1k_ctrl_cappuccino__DOT__spr_npc = 0x100U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__du_npc_write) {
            __Vdly__or1k_ctrl_cappuccino__DOT__spr_npc 
                = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_in_reg;
        } else {
            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__du_npc_written) {
                __Vdly__or1k_ctrl_cappuccino__DOT__spr_npc 
                    = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_npc;
            } else {
                if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__stepping) {
                    __Vdly__or1k_ctrl_cappuccino__DOT__spr_npc 
                        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__stepped_into_rfe)
                            ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_epcr
                            : ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__du__DOT__branch_step) 
                                 >> 1U) & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__stepping))
                                ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__last_branch_target_pc
                                : ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__stepped_into_exception)
                                    ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__exception_pc_addr
                                    : ((IData)(4U) 
                                       + vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pc_execute_to_ctrl))));
                } else {
                    if ((((vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_dsr 
                           >> 0xdU) & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__padv_ctrl)) 
                         & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_trap_o))) {
                        __Vdly__or1k_ctrl_cappuccino__DOT__spr_npc 
                            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pc_execute_to_ctrl;
                    } else {
                        if (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__cpu_stall) 
                             & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__padv_ctrl))) {
                            __Vdly__or1k_ctrl_cappuccino__DOT__spr_npc 
                                = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__ctrl_delay_slot)
                                    ? (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pc_execute_to_ctrl 
                                       - (IData)(4U))
                                    : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pc_execute_to_ctrl);
                        } else {
                            if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__cpu_stall)))) {
                                __Vdly__or1k_ctrl_cappuccino__DOT__spr_npc 
                                    = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pc_decode_to_execute;
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__execute_rfa 
            = (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_rf_wb_o) 
                & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_rfd_adr_o) 
                   == (0x1fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                >> 0x10U)))) ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_alu_result_o
                : (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__use_last_wb_a) 
                    | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__wb_rf_wb_o) 
                       & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__wb_rfd_adr_o) 
                          == (0x1fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                       >> 0x10U)))))
                    ? ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__use_last_wb_a)
                        ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__wb_to_decode_result_a
                        : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__rf_result_o)
                    : ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__wb_to_decode_bypass_a)
                        ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__wb_to_decode_result_a
                        : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__rfa__DOT__rdata)));
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picmr = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_we) 
             & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picmr_access))) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picmr 
                = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_write_dat;
        }
    }
    if (__Vdlyvset__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_memories__BRA__1__KET____DOT__way_data_ram__DOT__mem__v0) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_memories__BRA__1__KET____DOT__way_data_ram__DOT__mem[__Vdlyvdim0__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_memories__BRA__1__KET____DOT__way_data_ram__DOT__mem__v0] 
            = __Vdlyvval__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_memories__BRA__1__KET____DOT__way_data_ram__DOT__mem__v0;
    }
    if (__Vdlyvset__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_memories__BRA__0__KET____DOT__way_data_ram__DOT__mem__v0) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_memories__BRA__0__KET____DOT__way_data_ram__DOT__mem[__Vdlyvdim0__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_memories__BRA__0__KET____DOT__way_data_ram__DOT__mem__v0] 
            = __Vdlyvval__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_memories__BRA__0__KET____DOT__way_data_ram__DOT__mem__v0;
    }
    if (__Vdlyvset__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__1__KET____DOT__way_data_ram__DOT__mem__v0) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__1__KET____DOT__way_data_ram__DOT__mem[__Vdlyvdim0__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__1__KET____DOT__way_data_ram__DOT__mem__v0] 
            = __Vdlyvval__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__1__KET____DOT__way_data_ram__DOT__mem__v0;
    }
    if (__Vdlyvset__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__0__KET____DOT__way_data_ram__DOT__mem__v0) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__0__KET____DOT__way_data_ram__DOT__mem[__Vdlyvdim0__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__0__KET____DOT__way_data_ram__DOT__mem__v0] 
            = __Vdlyvval__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__0__KET____DOT__way_data_ram__DOT__mem__v0;
    }
    if (__Vdlyvset__or1k_rf_cappuccino__DOT__rfb__DOT__mem__v0) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__rfb__DOT__mem[__Vdlyvdim0__or1k_rf_cappuccino__DOT__rfb__DOT__mem__v0] 
            = __Vdlyvval__or1k_rf_cappuccino__DOT__rfb__DOT__mem__v0;
    }
    if (__Vdlyvset__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_ram__DOT__mem__v0) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_ram__DOT__mem[__Vdlyvdim0__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_ram__DOT__mem__v0][0U] 
            = __Vdlyvval__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_ram__DOT__mem__v0[0U];
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_ram__DOT__mem[__Vdlyvdim0__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_ram__DOT__mem__v0][1U] 
            = __Vdlyvval__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_ram__DOT__mem__v0[1U];
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_ram__DOT__mem[__Vdlyvdim0__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_ram__DOT__mem__v0][2U] 
            = __Vdlyvval__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_ram__DOT__mem__v0[2U];
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_ram__DOT__mem[__Vdlyvdim0__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_ram__DOT__mem__v0][3U] 
            = __Vdlyvval__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_ram__DOT__mem__v0[3U];
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__read_pointer 
        = __Vdly__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__read_pointer;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__write_pointer 
        = __Vdly__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__write_pointer;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_count 
        = __Vdly__or1k_execute_alu__DOT__genblk3__DOT__div_count;
    if (__Vdlyvset__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_translate_regs__DOT__mem__v0) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_translate_regs__DOT__mem[__Vdlyvdim0__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_translate_regs__DOT__mem__v0] 
            = __Vdlyvval__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_translate_regs__DOT__mem__v0;
    }
    if (__Vdlyvset__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_translate_regs__DOT__mem__v1) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_translate_regs__DOT__mem[__Vdlyvdim0__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_translate_regs__DOT__mem__v1] 
            = __Vdlyvval__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_translate_regs__DOT__mem__v1;
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_r 
        = __Vdly__or1k_execute_alu__DOT__genblk3__DOT__div_r;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_n 
        = __Vdly__or1k_execute_alu__DOT__genblk3__DOT__div_n;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_done 
        = __Vdly__or1k_execute_alu__DOT__genblk3__DOT__div_done;
    if (__Vdlyvset__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_match_regs__DOT__mem__v0) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_match_regs__DOT__mem[__Vdlyvdim0__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_match_regs__DOT__mem__v0] 
            = __Vdlyvval__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_match_regs__DOT__mem__v0;
    }
    if (__Vdlyvset__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_match_regs__DOT__mem__v1) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_match_regs__DOT__mem[__Vdlyvdim0__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_match_regs__DOT__mem__v1] 
            = __Vdlyvval__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_match_regs__DOT__mem__v1;
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__spr_ttcr 
        = __Vdly__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__spr_ttcr;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__spr_ttmr 
        = __Vdly__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__spr_ttmr;
    if (__Vdlyvset__or1k_rf_cappuccino__DOT__rfspr_gen__DOT__rfspr__DOT__mem__v0) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__rfspr_gen__DOT__rfspr__DOT__mem[__Vdlyvdim0__or1k_rf_cappuccino__DOT__rfspr_gen__DOT__rfspr__DOT__mem__v0] 
            = __Vdlyvval__or1k_rf_cappuccino__DOT__rfspr_gen__DOT__rfspr__DOT__mem__v0;
    }
    if (__Vdlyvset__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_ram__DOT__mem__v0) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_ram__DOT__mem[__Vdlyvdim0__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_ram__DOT__mem__v0] 
            = __Vdlyvval__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_ram__DOT__mem__v0;
    }
    if (__Vdlyvset__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_translate_regs__DOT__mem__v0) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_translate_regs__DOT__mem[__Vdlyvdim0__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_translate_regs__DOT__mem__v0] 
            = __Vdlyvval__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_translate_regs__DOT__mem__v0;
    }
    if (__Vdlyvset__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_translate_regs__DOT__mem__v1) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_translate_regs__DOT__mem[__Vdlyvdim0__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_translate_regs__DOT__mem__v1] 
            = __Vdlyvval__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_translate_regs__DOT__mem__v1;
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__decode_execute_halt 
        = __Vdly__or1k_ctrl_cappuccino__DOT__decode_execute_halt;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__exception_taken 
        = __Vdly__or1k_ctrl_cappuccino__DOT__exception_taken;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pstep 
        = __Vdly__or1k_ctrl_cappuccino__DOT__pstep;
    if (__Vdlyvset__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_way_save__v0) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_way_save[0U] 
            = __Vdlyvval__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_way_save__v0;
    }
    if (__Vdlyvset__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_way_save__v1) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_way_save[1U] 
            = __Vdlyvval__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_way_save__v1;
    }
    if (__Vdlyvset__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_match_regs__DOT__mem__v0) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_match_regs__DOT__mem[__Vdlyvdim0__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_match_regs__DOT__mem__v0] 
            = __Vdlyvval__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_match_regs__DOT__mem__v0;
    }
    if (__Vdlyvset__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_match_regs__DOT__mem__v1) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_match_regs__DOT__mem[__Vdlyvdim0__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_match_regs__DOT__mem__v1] 
            = __Vdlyvval__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_match_regs__DOT__mem__v1;
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__du__DOT__du_ack 
        = __Vdly__or1k_ctrl_cappuccino__DOT__du__DOT__du_ack;
    if (__Vdlyvset__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_ram__DOT__mem__v0) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_ram__DOT__mem[__Vdlyvdim0__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_ram__DOT__mem__v0] 
            = __Vdlyvval__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_ram__DOT__mem__v0;
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__du__DOT__branch_step 
        = __Vdly__or1k_ctrl_cappuccino__DOT__du__DOT__branch_step;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_npc 
        = __Vdly__or1k_ctrl_cappuccino__DOT__spr_npc;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_huge_we 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_reload_we) 
           & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__tlb_reload_huge));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_huge_we 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_reload_we) 
           & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__tlb_reload_huge));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_huge_we 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_reload_we) 
           & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__tlb_reload_huge));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_huge_we 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_reload_we) 
           & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__tlb_reload_huge));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_dout[1U] 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_memories__BRA__1__KET____DOT__way_data_ram__DOT__rdata;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_dout[0U] 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_memories__BRA__0__KET____DOT__way_data_ram__DOT__rdata;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_dout[1U] 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__1__KET____DOT__way_data_ram__DOT__bypass_gen__DOT__bypass)
            ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__1__KET____DOT__way_data_ram__DOT__bypass_gen__DOT__din_r
            : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__1__KET____DOT__way_data_ram__DOT__rdata);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_dout[0U] 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__0__KET____DOT__way_data_ram__DOT__bypass_gen__DOT__bypass)
            ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__0__KET____DOT__way_data_ram__DOT__bypass_gen__DOT__din_r
            : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__0__KET____DOT__way_data_ram__DOT__rdata);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_mul_o = 0U;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_full 
        = (((1U & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__write_pointer) 
                   >> 8U)) != (1U & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__read_pointer) 
                                     >> 8U))) & ((0xffU 
                                                  & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__write_pointer)) 
                                                 == 
                                                 (0xffU 
                                                  & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__read_pointer))));
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__execute_waiting_r = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_ctrl_cappuccino__DOT__execute_stall) {
            if (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_valid_o) 
                 & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_ctrl_cappuccino__DOT__execute_stall))) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__execute_waiting_r = 1U;
            }
        } else {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__execute_waiting_r = 0U;
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_setflag_o = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_setflag_o = 0U;
        } else {
            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_setflag_o 
                    = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_setflag_o;
                if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_bubble_o) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_setflag_o = 0U;
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_reload_din = 0U;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_huge_dout[0U] 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_translate_regs__DOT__rdata_b;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_dout[0U] 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_translate_regs__DOT__rdata_a;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__threestagemultiply__DOT__mul_result1 
        = (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__threestagemultiply__DOT__mul_opa 
           * vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__threestagemultiply__DOT__mul_opb);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_sub 
        = (0x1ffffffffULL & ((QData)((IData)(((0xfffffffeU 
                                               & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_r 
                                                  << 1U)) 
                                              | (1U 
                                                 & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_n 
                                                    >> 0x1fU))))) 
                             - (QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_d))));
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__fetching_brcond = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__fetching_brcond = 0U;
        } else {
            if (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_brcond_o) 
                 & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__addr_valid))) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__fetching_brcond = 1U;
            } else {
                if ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__bus_access_done) 
                      & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_fetch_o)) 
                     | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__du_restart_from_stall))) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__fetching_brcond = 0U;
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_way_out[0U] 
        = (0xfffffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_ram__DOT__rdata));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_way_out[1U] 
        = (0xfffffU & (IData)((vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_ram__DOT__rdata 
                               >> 0x14U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_dout[0U] 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_match_regs__DOT__rdata_a;
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_msync_o = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_msync_o = 0U;
        } else {
            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_msync_o 
                    = ((8U == (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                        >> 0x1aU))) 
                       & (4U == (7U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                       >> 0x17U))));
                if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_bubble_o) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_msync_o = 0U;
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_reload_din = 0U;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_huge_dout[0U] 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_match_regs__DOT__rdata_b;
    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__flushing = 1U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__flushing = 0U;
        }
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__ttcr_match 
        = ((0xfffffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__spr_ttcr) 
           == (0xfffffffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__spr_ttmr));
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_mtspr_o = 0U;
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o)))) {
            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_mtspr_o 
                    = (0x30U == (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                          >> 0x1aU)));
                if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_bubble_o) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_mtspr_o = 0U;
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__fetch_valid_o 
        = ((~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__or1k_rst)) 
           & ((~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o)) 
              & (((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__bus_access_done) 
                    & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_fetch_o)) 
                   & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__mispredict_stall))) 
                  & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_busy))) 
                 | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__stall_fetch_valid))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__spr_bus_ack_r 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__spr_bus_ack;
    if (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ic_invalidate) 
         & (4U != (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state)))) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__invalidate_adr 
            = (0xffU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_write_dat 
                        >> 5U));
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_reload_din = 0U;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_huge_dout[0U] 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_translate_regs__DOT__rdata_b;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_dout[0U] 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_translate_regs__DOT__rdata_a;
    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_execute_o) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_length_o 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_lsu_length_o;
    }
    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_execute_o) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_zext_o 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_lsu_zext_o;
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_refill_r 
        = (8U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_dout[0U] 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_match_regs__DOT__rdata_a;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__deassert_decode_execute_halt 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__fetch_exception_taken_o) 
           & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__decode_execute_halt));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_reload_din = 0U;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_huge_dout[0U] 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_match_regs__DOT__rdata_b;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__ctrl_flag_set 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_flag_set_o) 
           | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__atomic_gen__DOT__atomic_flag_set));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__ctrl_flag_clear 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_flag_clear_o) 
           | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__atomic_gen__DOT__atomic_flag_clear));
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_esr = 0x8001U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__exception_re) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_esr 
                = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr;
            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_overflow_set_o) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_esr 
                    = (0x800U | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_esr));
            } else {
                if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_overflow_clear_o) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_esr 
                        = (0xf7ffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_esr));
                }
            }
            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_carry_set_o) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_esr 
                    = (0x400U | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_esr));
            } else {
                if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_carry_clear_o) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_esr 
                        = (0xfbffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_esr));
                }
            }
        } else {
            if ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_we) 
                  & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access)) 
                 & (0x40U == (0x7ffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr))))) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_esr 
                    = ((0xfffeU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_esr)) 
                       | (1U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_write_dat));
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_esr 
                    = ((0xfdffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_esr)) 
                       | (0x200U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_write_dat));
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_esr 
                    = ((0xfffdU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_esr)) 
                       | (2U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_write_dat));
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_esr 
                    = ((0xfffbU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_esr)) 
                       | (4U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_write_dat));
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_esr 
                    = ((0xfff7U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_esr)) 
                       | (8U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_write_dat));
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_esr 
                    = ((0xffefU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_esr)) 
                       | (0x10U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_write_dat));
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_esr 
                    = ((0xffdfU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_esr)) 
                       | (0x20U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_write_dat));
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_esr 
                    = ((0xffbfU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_esr)) 
                       | (0x40U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_write_dat));
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_esr 
                    = ((0xfbffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_esr)) 
                       | (0x400U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_write_dat));
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_esr 
                    = ((0xf7ffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_esr)) 
                       | (0x800U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_write_dat));
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_esr 
                    = ((0xefffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_esr)) 
                       | (0x1000U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_write_dat));
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_esr 
                    = ((0xdfffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_esr)) 
                       | (0x2000U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_write_dat));
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_esr 
                    = ((0xbfffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_esr)) 
                       | (0x4000U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_write_dat));
            }
        }
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__deassert_doing_rfe 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__fetch_exception_taken_o) 
           & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__doing_rfe_r));
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state = 1U;
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__write_pending = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_err) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state = 1U;
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__write_pending = 0U;
        } else {
            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_we) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__write_pending = 1U;
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__dc_req)))) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__write_pending = 0U;
                }
            }
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__refill_valid_r 
                = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__refill_valid;
            if ((0x10U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state))) {
                if ((8U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state))) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state = 1U;
                } else {
                    if ((4U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state))) {
                        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state = 1U;
                    } else {
                        if ((2U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state))) {
                            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state = 1U;
                        } else {
                            if ((1U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state))) {
                                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state = 1U;
                            } else {
                                if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__invalidate) {
                                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__invalidate_adr 
                                        = (0xffU & 
                                           (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_write_dat 
                                            >> 5U));
                                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state = 0x10U;
                                } else {
                                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state = 1U;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((8U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state))) {
                    if ((4U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state))) {
                        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state = 1U;
                    } else {
                        if ((2U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state))) {
                            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state = 1U;
                        } else {
                            if ((1U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state))) {
                                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state = 1U;
                            } else {
                                if (vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_or1k_d_ack) {
                                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__refill_valid 
                                        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__refill_valid) 
                                           | ((IData)(1U) 
                                              << (7U 
                                                  & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_adr 
                                                     >> 2U))));
                                    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__refill_done) {
                                        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((4U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state))) {
                        if ((2U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state))) {
                            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state = 1U;
                        } else {
                            if ((1U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state))) {
                                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state = 1U;
                            } else {
                                if ((1U & (((~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_access)) 
                                            | (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__dc_req))) 
                                           | (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_we))))) {
                                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__write_pending = 0U;
                                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state = 2U;
                                }
                            }
                        }
                    } else {
                        if ((2U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state))) {
                            if ((1U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state))) {
                                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state = 1U;
                            } else {
                                if (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_access) 
                                     | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_we) 
                                        & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_enabled)))) {
                                    if (((((~ (IData)(
                                                      (0U 
                                                       != (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_hit)))) 
                                           & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__dc_req)) 
                                          & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__write_pending))) 
                                         & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_refill_allowed))) {
                                        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__w1 = 2U;
                                        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__refill_valid = 0U;
                                        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__refill_valid_r = 0U;
                                        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_save_lru 
                                            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__lru;
                                        __Vdlyvval__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_way_save__v0 
                                            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_way_out
                                            [0U];
                                        __Vdlyvset__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_way_save__v0 = 1U;
                                        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state = 8U;
                                        __Vdlyvval__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_way_save__v1 
                                            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_way_out
                                            [1U];
                                        __Vdlyvset__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_way_save__v1 = 1U;
                                    } else {
                                        if (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_we) 
                                             | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__write_pending))) {
                                            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state = 4U;
                                        } else {
                                            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__invalidate) {
                                                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state = 1U;
                                            }
                                        }
                                    }
                                } else {
                                    if ((1U & ((~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_enabled)) 
                                               | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__invalidate)))) {
                                        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state = 1U;
                                    }
                                }
                            }
                        } else {
                            if ((1U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state))) {
                                if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__invalidate) {
                                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__invalidate_adr 
                                        = (0xffU & 
                                           (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_write_dat 
                                            >> 5U));
                                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state = 0x10U;
                                } else {
                                    if (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_we) 
                                         | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__write_pending))) {
                                        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state = 4U;
                                    } else {
                                        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__dc_req) {
                                            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state = 2U;
                                        }
                                    }
                                }
                            } else {
                                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_lsu_store_o = 0U;
    } else {
        if (((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_align_o) 
               | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dbus_o)) 
              | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dtlb_miss_o)) 
             | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dpagefault_o))) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_lsu_store_o = 0U;
        } else {
            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_execute_o) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_lsu_store_o 
                    = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_lsu_store_o;
            } else {
                if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_lsu_store_o = 0U;
                }
            }
        }
    }
    if ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_lsu_load_o) 
          & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_lsu_atomic_o)) 
         & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__padv_ctrl))) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__atomic_addr 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_adr_match;
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__du_npc_written = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__du_restart_from_stall) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__du_npc_written = 0U;
        } else {
            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__du_npc_write) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__du_npc_written = 1U;
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__cpu_stall = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu.__PVT__or1k_dbg_stall_i) {
            if (((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_execute_o) 
                   & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_bubble_o))) 
                  & (IData)(vlSymsp->TOP__or1k_pu.__PVT__or1k_dbg_stall_i)) 
                 | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__du_stall_o))) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__cpu_stall = 1U;
            }
        } else {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__cpu_stall = 0U;
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__last_branch_target_pc = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_execute_o) 
             & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__branch_mispredict_o))) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__last_branch_target_pc 
                = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_mispredict_target_o;
        } else {
            if (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) 
                 & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_branch_o))) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__last_branch_target_pc 
                    = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_branch_target_o;
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__exception_re) {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ibus_err_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_epcr 
                = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__last_branch_insn_pc;
        } else {
            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_syscall_o) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_epcr 
                    = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__ctrl_delay_slot)
                        ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_epcr_o
                        : ((IData)(4U) + vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pc_execute_to_ctrl));
            } else {
                if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__store_buffer_err_o) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_epcr 
                        = ((vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_dout[1U] 
                            << 0x1fU) | (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_dout[0U] 
                                         >> 1U));
                } else {
                    if ((1U & (~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_trap_o) 
                                  & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_dsr 
                                     >> 0xdU))))) {
                        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_epcr 
                            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_epcr_o;
                    }
                }
            }
        }
    } else {
        if ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_we) 
              & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access)) 
             & (0x20U == (0x7ffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr))))) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_epcr 
                = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_write_dat;
        }
    }
    if (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__exception) 
         & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__exception_r)))) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__exception_pc_addr 
            = (((((((((0x4000U == (0x4000U & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_itlb_miss_o) 
                                               << 0xeU) 
                                              | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ipagefault_o) 
                                                  << 0xdU) 
                                                 | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ibus_err_o) 
                                                     << 0xcU) 
                                                    | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_illegal_o) 
                                                        << 0xbU) 
                                                       | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_align_o) 
                                                           << 0xaU) 
                                                          | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ibus_align_o) 
                                                              << 9U) 
                                                             | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_syscall_o) 
                                                                 << 8U) 
                                                                | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dtlb_miss_o) 
                                                                    << 7U) 
                                                                   | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dpagefault_o) 
                                                                       << 6U) 
                                                                      | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_trap_o) 
                                                                          << 5U) 
                                                                         | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dbus_o) 
                                                                             << 4U) 
                                                                            | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_range) 
                                                                                << 3U) 
                                                                               | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_pic) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_ticktimer)))))))))))))))) 
                      | (0x2000U == (0x6000U & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_itlb_miss_o) 
                                                 << 0xeU) 
                                                | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ipagefault_o) 
                                                    << 0xdU) 
                                                   | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ibus_err_o) 
                                                       << 0xcU) 
                                                      | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_illegal_o) 
                                                          << 0xbU) 
                                                         | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_align_o) 
                                                             << 0xaU) 
                                                            | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ibus_align_o) 
                                                                << 9U) 
                                                               | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_syscall_o) 
                                                                   << 8U) 
                                                                  | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dtlb_miss_o) 
                                                                      << 7U) 
                                                                     | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dpagefault_o) 
                                                                         << 6U) 
                                                                        | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_trap_o) 
                                                                            << 5U) 
                                                                           | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dbus_o) 
                                                                               << 4U) 
                                                                              | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_range) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_pic) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_ticktimer))))))))))))))))) 
                     | (0x1000U == (0x7000U & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_itlb_miss_o) 
                                                << 0xeU) 
                                               | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ipagefault_o) 
                                                   << 0xdU) 
                                                  | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ibus_err_o) 
                                                      << 0xcU) 
                                                     | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_illegal_o) 
                                                         << 0xbU) 
                                                        | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_align_o) 
                                                            << 0xaU) 
                                                           | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ibus_align_o) 
                                                               << 9U) 
                                                              | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_syscall_o) 
                                                                  << 8U) 
                                                                 | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dtlb_miss_o) 
                                                                     << 7U) 
                                                                    | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dpagefault_o) 
                                                                        << 6U) 
                                                                       | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_trap_o) 
                                                                           << 5U) 
                                                                          | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dbus_o) 
                                                                              << 4U) 
                                                                             | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_range) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_pic) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_ticktimer))))))))))))))))) 
                    | (0x800U == (0x7800U & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_itlb_miss_o) 
                                              << 0xeU) 
                                             | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ipagefault_o) 
                                                 << 0xdU) 
                                                | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ibus_err_o) 
                                                    << 0xcU) 
                                                   | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_illegal_o) 
                                                       << 0xbU) 
                                                      | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_align_o) 
                                                          << 0xaU) 
                                                         | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ibus_align_o) 
                                                             << 9U) 
                                                            | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_syscall_o) 
                                                                << 8U) 
                                                               | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dtlb_miss_o) 
                                                                   << 7U) 
                                                                  | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dpagefault_o) 
                                                                      << 6U) 
                                                                     | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_trap_o) 
                                                                         << 5U) 
                                                                        | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dbus_o) 
                                                                            << 4U) 
                                                                           | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_range) 
                                                                               << 3U) 
                                                                              | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_pic) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_ticktimer))))))))))))))))) 
                   | ((0x400U == (0x7c00U & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_itlb_miss_o) 
                                              << 0xeU) 
                                             | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ipagefault_o) 
                                                 << 0xdU) 
                                                | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ibus_err_o) 
                                                    << 0xcU) 
                                                   | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_illegal_o) 
                                                       << 0xbU) 
                                                      | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_align_o) 
                                                          << 0xaU) 
                                                         | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ibus_align_o) 
                                                             << 9U) 
                                                            | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_syscall_o) 
                                                                << 8U) 
                                                               | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dtlb_miss_o) 
                                                                   << 7U) 
                                                                  | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dpagefault_o) 
                                                                      << 6U) 
                                                                     | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_trap_o) 
                                                                         << 5U) 
                                                                        | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dbus_o) 
                                                                            << 4U) 
                                                                           | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_range) 
                                                                               << 3U) 
                                                                              | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_pic) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_ticktimer)))))))))))))))) 
                      | (0x200U == (0x7e00U & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_itlb_miss_o) 
                                                << 0xeU) 
                                               | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ipagefault_o) 
                                                   << 0xdU) 
                                                  | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ibus_err_o) 
                                                      << 0xcU) 
                                                     | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_illegal_o) 
                                                         << 0xbU) 
                                                        | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_align_o) 
                                                            << 0xaU) 
                                                           | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ibus_align_o) 
                                                               << 9U) 
                                                              | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_syscall_o) 
                                                                  << 8U) 
                                                                 | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dtlb_miss_o) 
                                                                     << 7U) 
                                                                    | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dpagefault_o) 
                                                                        << 6U) 
                                                                       | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_trap_o) 
                                                                           << 5U) 
                                                                          | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dbus_o) 
                                                                              << 4U) 
                                                                             | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_range) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_pic) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_ticktimer)))))))))))))))))) 
                  | (0x100U == (0x7f00U & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_itlb_miss_o) 
                                            << 0xeU) 
                                           | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ipagefault_o) 
                                               << 0xdU) 
                                              | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ibus_err_o) 
                                                  << 0xcU) 
                                                 | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_illegal_o) 
                                                     << 0xbU) 
                                                    | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_align_o) 
                                                        << 0xaU) 
                                                       | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ibus_align_o) 
                                                           << 9U) 
                                                          | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_syscall_o) 
                                                              << 8U) 
                                                             | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dtlb_miss_o) 
                                                                 << 7U) 
                                                                | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dpagefault_o) 
                                                                    << 6U) 
                                                                   | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_trap_o) 
                                                                       << 5U) 
                                                                      | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dbus_o) 
                                                                          << 4U) 
                                                                         | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_range) 
                                                                             << 3U) 
                                                                            | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_pic) 
                                                                                << 1U) 
                                                                               | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_ticktimer))))))))))))))))) 
                 | (0x80U == (0x7f80U & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_itlb_miss_o) 
                                          << 0xeU) 
                                         | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ipagefault_o) 
                                             << 0xdU) 
                                            | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ibus_err_o) 
                                                << 0xcU) 
                                               | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_illegal_o) 
                                                   << 0xbU) 
                                                  | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_align_o) 
                                                      << 0xaU) 
                                                     | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ibus_align_o) 
                                                         << 9U) 
                                                        | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_syscall_o) 
                                                            << 8U) 
                                                           | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dtlb_miss_o) 
                                                               << 7U) 
                                                              | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dpagefault_o) 
                                                                  << 6U) 
                                                                 | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_trap_o) 
                                                                     << 5U) 
                                                                    | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dbus_o) 
                                                                        << 4U) 
                                                                       | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_range) 
                                                                           << 3U) 
                                                                          | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_pic) 
                                                                              << 1U) 
                                                                             | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_ticktimer))))))))))))))))) 
                | (0x40U == (0x7fc0U & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_itlb_miss_o) 
                                         << 0xeU) | 
                                        (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ipagefault_o) 
                                          << 0xdU) 
                                         | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ibus_err_o) 
                                             << 0xcU) 
                                            | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_illegal_o) 
                                                << 0xbU) 
                                               | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_align_o) 
                                                   << 0xaU) 
                                                  | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ibus_align_o) 
                                                      << 9U) 
                                                     | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_syscall_o) 
                                                         << 8U) 
                                                        | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dtlb_miss_o) 
                                                            << 7U) 
                                                           | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dpagefault_o) 
                                                               << 6U) 
                                                              | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_trap_o) 
                                                                  << 5U) 
                                                                 | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dbus_o) 
                                                                     << 4U) 
                                                                    | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_range) 
                                                                        << 3U) 
                                                                       | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_pic) 
                                                                           << 1U) 
                                                                          | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_ticktimer)))))))))))))))))
                ? ((0x4000U == (0x4000U & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_itlb_miss_o) 
                                            << 0xeU) 
                                           | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ipagefault_o) 
                                               << 0xdU) 
                                              | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ibus_err_o) 
                                                  << 0xcU) 
                                                 | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_illegal_o) 
                                                     << 0xbU) 
                                                    | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_align_o) 
                                                        << 0xaU) 
                                                       | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ibus_align_o) 
                                                           << 9U) 
                                                          | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_syscall_o) 
                                                              << 8U) 
                                                             | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dtlb_miss_o) 
                                                                 << 7U) 
                                                                | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dpagefault_o) 
                                                                    << 6U) 
                                                                   | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_trap_o) 
                                                                       << 5U) 
                                                                      | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dbus_o) 
                                                                          << 4U) 
                                                                         | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_range) 
                                                                             << 3U) 
                                                                            | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_pic) 
                                                                                << 1U) 
                                                                               | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_ticktimer))))))))))))))))
                    ? (0xa00U | vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_evbar)
                    : ((0x2000U == (0x6000U & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_itlb_miss_o) 
                                                << 0xeU) 
                                               | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ipagefault_o) 
                                                   << 0xdU) 
                                                  | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ibus_err_o) 
                                                      << 0xcU) 
                                                     | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_illegal_o) 
                                                         << 0xbU) 
                                                        | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_align_o) 
                                                            << 0xaU) 
                                                           | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ibus_align_o) 
                                                               << 9U) 
                                                              | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_syscall_o) 
                                                                  << 8U) 
                                                                 | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dtlb_miss_o) 
                                                                     << 7U) 
                                                                    | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dpagefault_o) 
                                                                        << 6U) 
                                                                       | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_trap_o) 
                                                                           << 5U) 
                                                                          | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dbus_o) 
                                                                              << 4U) 
                                                                             | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_range) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_pic) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_ticktimer))))))))))))))))
                        ? (0x400U | vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_evbar)
                        : ((0x1000U == (0x7000U & (
                                                   ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_itlb_miss_o) 
                                                    << 0xeU) 
                                                   | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ipagefault_o) 
                                                       << 0xdU) 
                                                      | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ibus_err_o) 
                                                          << 0xcU) 
                                                         | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_illegal_o) 
                                                             << 0xbU) 
                                                            | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_align_o) 
                                                                << 0xaU) 
                                                               | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ibus_align_o) 
                                                                   << 9U) 
                                                                  | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_syscall_o) 
                                                                      << 8U) 
                                                                     | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dtlb_miss_o) 
                                                                         << 7U) 
                                                                        | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dpagefault_o) 
                                                                            << 6U) 
                                                                           | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_trap_o) 
                                                                               << 5U) 
                                                                              | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dbus_o) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_range) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_pic) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_ticktimer))))))))))))))))
                            ? (0x200U | vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_evbar)
                            : ((0x800U == (0x7800U 
                                           & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_itlb_miss_o) 
                                               << 0xeU) 
                                              | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ipagefault_o) 
                                                  << 0xdU) 
                                                 | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ibus_err_o) 
                                                     << 0xcU) 
                                                    | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_illegal_o) 
                                                        << 0xbU) 
                                                       | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_align_o) 
                                                           << 0xaU) 
                                                          | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ibus_align_o) 
                                                              << 9U) 
                                                             | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_syscall_o) 
                                                                 << 8U) 
                                                                | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dtlb_miss_o) 
                                                                    << 7U) 
                                                                   | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dpagefault_o) 
                                                                       << 6U) 
                                                                      | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_trap_o) 
                                                                          << 5U) 
                                                                         | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dbus_o) 
                                                                             << 4U) 
                                                                            | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_range) 
                                                                                << 3U) 
                                                                               | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_pic) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_ticktimer))))))))))))))))
                                ? (0x700U | vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_evbar)
                                : (((0x400U == (0x7c00U 
                                                & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_itlb_miss_o) 
                                                    << 0xeU) 
                                                   | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ipagefault_o) 
                                                       << 0xdU) 
                                                      | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ibus_err_o) 
                                                          << 0xcU) 
                                                         | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_illegal_o) 
                                                             << 0xbU) 
                                                            | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_align_o) 
                                                                << 0xaU) 
                                                               | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ibus_align_o) 
                                                                   << 9U) 
                                                                  | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_syscall_o) 
                                                                      << 8U) 
                                                                     | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dtlb_miss_o) 
                                                                         << 7U) 
                                                                        | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dpagefault_o) 
                                                                            << 6U) 
                                                                           | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_trap_o) 
                                                                               << 5U) 
                                                                              | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dbus_o) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_range) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_pic) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_ticktimer)))))))))))))))) 
                                    | (0x200U == (0x7e00U 
                                                  & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_itlb_miss_o) 
                                                      << 0xeU) 
                                                     | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ipagefault_o) 
                                                         << 0xdU) 
                                                        | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ibus_err_o) 
                                                            << 0xcU) 
                                                           | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_illegal_o) 
                                                               << 0xbU) 
                                                              | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_align_o) 
                                                                  << 0xaU) 
                                                                 | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ibus_align_o) 
                                                                     << 9U) 
                                                                    | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_syscall_o) 
                                                                        << 8U) 
                                                                       | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dtlb_miss_o) 
                                                                           << 7U) 
                                                                          | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dpagefault_o) 
                                                                              << 6U) 
                                                                             | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_trap_o) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dbus_o) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_range) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_pic) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_ticktimer)))))))))))))))))
                                    ? (0x600U | vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_evbar)
                                    : ((0x100U == (0x7f00U 
                                                   & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_itlb_miss_o) 
                                                       << 0xeU) 
                                                      | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ipagefault_o) 
                                                          << 0xdU) 
                                                         | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ibus_err_o) 
                                                             << 0xcU) 
                                                            | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_illegal_o) 
                                                                << 0xbU) 
                                                               | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_align_o) 
                                                                   << 0xaU) 
                                                                  | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ibus_align_o) 
                                                                      << 9U) 
                                                                     | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_syscall_o) 
                                                                         << 8U) 
                                                                        | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dtlb_miss_o) 
                                                                            << 7U) 
                                                                           | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dpagefault_o) 
                                                                               << 6U) 
                                                                              | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_trap_o) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dbus_o) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_range) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_pic) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_ticktimer))))))))))))))))
                                        ? (0xc00U | vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_evbar)
                                        : ((0x80U == 
                                            (0x7f80U 
                                             & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_itlb_miss_o) 
                                                 << 0xeU) 
                                                | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ipagefault_o) 
                                                    << 0xdU) 
                                                   | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ibus_err_o) 
                                                       << 0xcU) 
                                                      | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_illegal_o) 
                                                          << 0xbU) 
                                                         | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_align_o) 
                                                             << 0xaU) 
                                                            | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ibus_align_o) 
                                                                << 9U) 
                                                               | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_syscall_o) 
                                                                   << 8U) 
                                                                  | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dtlb_miss_o) 
                                                                      << 7U) 
                                                                     | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dpagefault_o) 
                                                                         << 6U) 
                                                                        | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_trap_o) 
                                                                            << 5U) 
                                                                           | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dbus_o) 
                                                                               << 4U) 
                                                                              | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_range) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_pic) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_ticktimer))))))))))))))))
                                            ? (0x900U 
                                               | vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_evbar)
                                            : (0x300U 
                                               | vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_evbar))))))))
                : ((0x20U == (0x7fe0U & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_itlb_miss_o) 
                                          << 0xeU) 
                                         | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ipagefault_o) 
                                             << 0xdU) 
                                            | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ibus_err_o) 
                                                << 0xcU) 
                                               | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_illegal_o) 
                                                   << 0xbU) 
                                                  | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_align_o) 
                                                      << 0xaU) 
                                                     | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ibus_align_o) 
                                                         << 9U) 
                                                        | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_syscall_o) 
                                                            << 8U) 
                                                           | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dtlb_miss_o) 
                                                               << 7U) 
                                                              | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dpagefault_o) 
                                                                  << 6U) 
                                                                 | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_trap_o) 
                                                                     << 5U) 
                                                                    | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dbus_o) 
                                                                        << 4U) 
                                                                       | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_range) 
                                                                           << 3U) 
                                                                          | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_pic) 
                                                                              << 1U) 
                                                                             | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_ticktimer))))))))))))))))
                    ? (0xe00U | vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_evbar)
                    : ((0x10U == (0x7ff0U & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_itlb_miss_o) 
                                              << 0xeU) 
                                             | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ipagefault_o) 
                                                 << 0xdU) 
                                                | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ibus_err_o) 
                                                    << 0xcU) 
                                                   | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_illegal_o) 
                                                       << 0xbU) 
                                                      | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_align_o) 
                                                          << 0xaU) 
                                                         | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ibus_align_o) 
                                                             << 9U) 
                                                            | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_syscall_o) 
                                                                << 8U) 
                                                               | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dtlb_miss_o) 
                                                                   << 7U) 
                                                                  | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dpagefault_o) 
                                                                      << 6U) 
                                                                     | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_trap_o) 
                                                                         << 5U) 
                                                                        | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dbus_o) 
                                                                            << 4U) 
                                                                           | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_range) 
                                                                               << 3U) 
                                                                              | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_pic) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_ticktimer))))))))))))))))
                        ? (0x200U | vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_evbar)
                        : ((8U == (0x7ff8U & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_itlb_miss_o) 
                                               << 0xeU) 
                                              | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ipagefault_o) 
                                                  << 0xdU) 
                                                 | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ibus_err_o) 
                                                     << 0xcU) 
                                                    | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_illegal_o) 
                                                        << 0xbU) 
                                                       | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_align_o) 
                                                           << 0xaU) 
                                                          | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ibus_align_o) 
                                                              << 9U) 
                                                             | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_syscall_o) 
                                                                 << 8U) 
                                                                | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dtlb_miss_o) 
                                                                    << 7U) 
                                                                   | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dpagefault_o) 
                                                                       << 6U) 
                                                                      | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_trap_o) 
                                                                          << 5U) 
                                                                         | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dbus_o) 
                                                                             << 4U) 
                                                                            | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_range) 
                                                                                << 3U) 
                                                                               | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_pic) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_ticktimer))))))))))))))))
                            ? (0xb00U | vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_evbar)
                            : ((4U == (0x7ffcU & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_itlb_miss_o) 
                                                   << 0xeU) 
                                                  | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ipagefault_o) 
                                                      << 0xdU) 
                                                     | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ibus_err_o) 
                                                         << 0xcU) 
                                                        | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_illegal_o) 
                                                            << 0xbU) 
                                                           | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_align_o) 
                                                               << 0xaU) 
                                                              | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ibus_align_o) 
                                                                  << 9U) 
                                                                 | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_syscall_o) 
                                                                     << 8U) 
                                                                    | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dtlb_miss_o) 
                                                                        << 7U) 
                                                                       | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dpagefault_o) 
                                                                           << 6U) 
                                                                          | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_trap_o) 
                                                                              << 5U) 
                                                                             | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dbus_o) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_range) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_pic) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_ticktimer))))))))))))))))
                                ? (0xd00U | vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_evbar)
                                : ((2U == (0x7ffeU 
                                           & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_itlb_miss_o) 
                                               << 0xeU) 
                                              | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ipagefault_o) 
                                                  << 0xdU) 
                                                 | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ibus_err_o) 
                                                     << 0xcU) 
                                                    | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_illegal_o) 
                                                        << 0xbU) 
                                                       | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_align_o) 
                                                           << 0xaU) 
                                                          | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ibus_align_o) 
                                                              << 9U) 
                                                             | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_syscall_o) 
                                                                 << 8U) 
                                                                | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dtlb_miss_o) 
                                                                    << 7U) 
                                                                   | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dpagefault_o) 
                                                                       << 6U) 
                                                                      | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_trap_o) 
                                                                          << 5U) 
                                                                         | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dbus_o) 
                                                                             << 4U) 
                                                                            | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_range) 
                                                                                << 3U) 
                                                                               | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_pic) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_ticktimer))))))))))))))))
                                    ? (0x800U | vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_evbar)
                                    : (0x500U | vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_evbar)))))));
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__stepped_into_exception = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__du_restart_from_stall) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__stepped_into_exception = 0U;
        } else {
            if ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__exception) 
                  & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__stepping)) 
                 & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__padv_ctrl) 
                    | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__ctrl_stage_exceptions)))) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__stepped_into_exception = 1U;
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__stepped_into_rfe = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__du_restart_from_stall) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__stepped_into_rfe = 0U;
        } else {
            if (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__stepping) 
                 & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__padv_ctrl))) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__stepped_into_rfe 
                    = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_rfe_o;
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__fetch_rf_adr_valid_o) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__rfa__DOT__rdata 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__rfa__DOT__mem
            [vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__rfa_rdad];
    }
    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_execute_o) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_alu_result_o 
            = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_jal_o)
                ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_jal_result_o
                : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__alu_result_o);
    }
    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__fetch_rf_adr_valid_o) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__wb_to_decode_bypass_a 
            = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__wb_rf_wb_o) 
               & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__wb_rfd_adr_o) 
                  == (0x1fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__imem_dat 
                               >> 0x10U))));
    }
    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__fetch_rf_adr_valid_o) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__use_last_wb_a = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__wb_rf_wb_o) {
            if (((0x1fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                           >> 0x10U)) == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__wb_rfd_adr_o))) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__use_last_wb_a = 1U;
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__fetch_rf_adr_valid_o) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__wb_to_decode_result_a 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__rf_result_o;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__wb_rf_wb_o) {
            if (((0x1fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                           >> 0x10U)) == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__wb_rfd_adr_o))) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__wb_to_decode_result_a 
                    = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__rf_result_o;
            }
        }
    }
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
    if (__Vdlyvset__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_way_save__v0) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_way_save[0U] 
            = __Vdlyvval__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_way_save__v0;
    }
    if (__Vdlyvset__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_way_save__v1) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_way_save[1U] 
            = __Vdlyvval__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_way_save__v1;
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_way_out[0U] 
        = (0x7ffffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_ram__DOT__rdata));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_way_out[1U] 
        = (0x7ffffU & (IData)((vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_ram__DOT__rdata 
                               >> 0x13U)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__exception_r 
        = __Vdly__or1k_ctrl_cappuccino__DOT__exception_r;
    if (__Vdlyvset__or1k_rf_cappuccino__DOT__rfa__DOT__mem__v0) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__rfa__DOT__mem[__Vdlyvdim0__or1k_rf_cappuccino__DOT__rfa__DOT__mem__v0] 
            = __Vdlyvval__or1k_rf_cappuccino__DOT__rfa__DOT__mem__v0;
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__rf_result_o 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_wb_mux_cappuccino__DOT__wb_op_mul)
            ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__threestagemultiply__DOT__mul_result2
            : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_wb_mux_cappuccino__DOT__rf_result);
    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_mul_o) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__threestagemultiply__DOT__mul_opa 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o;
    }
    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_mul_o) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__threestagemultiply__DOT__mul_opb 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__b;
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__spr_bus_ack 
        = ((~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__or1k_rst)) 
           & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__immu_spr_bus_stb) 
              & (2U == (0x1fU & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr) 
                                 >> 0xbU)))));
    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_lsu_length_o 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_lsu_length_o;
    }
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
    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_lsu_zext_o 
            = (1U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                     >> 0x1aU));
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_carry_set_o = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_execute_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_carry_set_o 
                = (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_add_o) 
                    & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__adder_carryout)) 
                   | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_div_unsigned_o) 
                      & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_by_zero_r)));
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_overflow_clear_o = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_execute_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_overflow_clear_o 
                = ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_add_o) 
                     & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__adder_signed_overflow))) 
                    | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_mul_signed_o) 
                       & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__mul_signed_overflow)))) 
                   | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_div_signed_o) 
                      & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_by_zero_r))));
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_carry_clear_o = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_execute_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_carry_clear_o 
                = ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_add_o) 
                     & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__adder_carryout))) 
                    | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_mul_unsigned_o)) 
                   | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_div_unsigned_o) 
                      & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_by_zero_r))));
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_overflow_set_o = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_execute_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_overflow_set_o 
                = ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_add_o) 
                     & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__adder_signed_overflow)) 
                    | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_mul_signed_o) 
                       & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__mul_signed_overflow))) 
                   | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_div_signed_o) 
                      & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_by_zero_r)));
        }
    }
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
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_lsu_atomic_o = 0U;
    } else {
        if (((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_align_o) 
               | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dbus_o)) 
              | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dtlb_miss_o)) 
             | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dpagefault_o))) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_lsu_atomic_o = 0U;
        } else {
            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_execute_o) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_lsu_atomic_o 
                    = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_lsu_atomic_o;
            } else {
                if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_lsu_atomic_o = 0U;
                }
            }
        }
    }
    if (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) 
         & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_brcond_o))) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_mispredict_target_o 
            = ((((4U == (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                  >> 0x1aU))) & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__predicted_flag_o))) 
                | ((3U == (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                    >> 0x1aU))) & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__predicted_flag_o)))
                ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_decode_execute_cappuccino__DOT__branch_to_imm_target
                : ((IData)(8U) + vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pc_fetch_to_decode));
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__ctrl_delay_slot = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_execute_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__ctrl_delay_slot 
                = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__execute_delay_slot;
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pc_execute_to_ctrl = 0x100U;
    } else {
        if (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_execute_o) 
             & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_bubble_o)))) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pc_execute_to_ctrl 
                = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pc_decode_to_execute;
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__last_branch_insn_pc = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_execute_o) 
             & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_branch_o))) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__last_branch_insn_pc 
                = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pc_decode_to_execute;
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_dsr = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_we) 
             & (0x3014U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr)))) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_dsr 
                = ((0xffffc000U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_dsr) 
                   | (0x3fffU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_write_dat));
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_illegal_o = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_illegal_o = 0U;
        } else {
            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_execute_o) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_illegal_o 
                    = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_except_illegal_o;
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ibus_err_o = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ibus_err_o = 0U;
        } else {
            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_execute_o) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ibus_err_o 
                    = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_except_ibus_err_o;
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_itlb_miss_o = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_itlb_miss_o = 0U;
        } else {
            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_execute_o) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_itlb_miss_o 
                    = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_except_itlb_miss_o;
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ibus_align_o = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ibus_align_o = 0U;
        } else {
            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_execute_o) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ibus_align_o 
                    = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_except_ibus_align_o;
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ipagefault_o = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ipagefault_o = 0U;
        } else {
            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_execute_o) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ipagefault_o 
                    = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_except_ipagefault_o;
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_syscall_o = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_syscall_o = 0U;
        } else {
            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_execute_o) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_syscall_o 
                    = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_except_syscall_o;
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_trap_o = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_trap_o = 0U;
        } else {
            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_execute_o) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_trap_o 
                    = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_except_trap_o;
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_evbar = 0U;
    } else {
        if ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_we) 
              & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access)) 
             & (0xbU == (0x7ffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr))))) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_evbar 
                = (0xffffe000U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_write_dat);
        }
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__ctrl_stage_exceptions 
        = (((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_align_o) 
              | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dbus_o)) 
             | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_range)) 
            | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dtlb_miss_o)) 
           | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dpagefault_o));
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_rfe_o = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_execute_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_rfe_o 
                = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_rfe_o;
        } else {
            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_rfe_o = 0U;
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_jal_o = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_jal_o = 0U;
        } else {
            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_jal_o 
                    = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_jal_o;
                if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_bubble_o) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_jal_o = 0U;
                }
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_jal_result_o 
            = ((IData)(8U) + vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pc_fetch_to_decode);
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__wb_rfd_adr_o 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_rfd_adr_o;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__wb_rf_wb_o 
        = ((~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__or1k_rst)) 
           & ((~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o)) 
              & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_mfspr_o)
                  ? ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_rf_wb_o) 
                     & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_ack))
                  : ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_lsu_load_o)
                      ? ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_rf_wb_o) 
                         & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__lsu_valid_o))
                      : ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_rf_wb_o) 
                         & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__padv_ctrl))))));
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_mul_o = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_mul_o = 0U;
        } else {
            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_mul_o 
                    = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_mul_signed_o) 
                       | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_mul_unsigned_o));
                if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_bubble_o) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_mul_o = 0U;
                }
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_mul_unsigned_o = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_mul_unsigned_o = 0U;
        } else {
            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_mul_unsigned_o 
                    = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_mul_unsigned_o;
                if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_bubble_o) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_mul_unsigned_o = 0U;
                }
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_div_unsigned_o = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_div_unsigned_o = 0U;
        } else {
            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_div_unsigned_o 
                    = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_div_unsigned_o;
                if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_bubble_o) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_div_unsigned_o = 0U;
                }
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_mul_signed_o = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_mul_signed_o = 0U;
        } else {
            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_mul_signed_o 
                    = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_mul_signed_o;
                if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_bubble_o) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_mul_signed_o = 0U;
                }
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_div_signed_o = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_div_signed_o = 0U;
        } else {
            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_div_signed_o 
                    = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_div_signed_o;
                if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_bubble_o) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_div_signed_o = 0U;
                }
            }
        }
    }
    if (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_valid_o) 
         & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_div_o))) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_by_zero_r 
            = (1U & (~ (IData)((0U != vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfb_o))));
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_add_o = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_add_o = 0U;
        } else {
            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_add_o 
                    = ((((0x38U == (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                             >> 0x1aU))) 
                         & (((1U == (0xfU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode)) 
                             | (0U == (0xfU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode))) 
                            | (2U == (0xfU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode)))) 
                        | (0x28U == (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                              >> 0x1aU)))) 
                       | (0x27U == (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                             >> 0x1aU))));
                if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_bubble_o) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_add_o = 0U;
                }
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_lsu_atomic_o = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_lsu_atomic_o = 0U;
        } else {
            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_lsu_atomic_o 
                    = ((0x1bU == (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                           >> 0x1aU))) 
                       | (0x33U == (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                             >> 0x1aU))));
                if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_bubble_o) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_lsu_atomic_o = 0U;
                }
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__execute_delay_slot = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_execute_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__execute_delay_slot 
                = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_branch_o;
        }
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_epcr_o 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__ctrl_delay_slot)
            ? (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pc_execute_to_ctrl 
               - (IData)(4U)) : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pc_execute_to_ctrl);
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_bubble_o = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_bubble_o = 0U;
        } else {
            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_bubble_o 
                    = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_bubble_o;
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pc_decode_to_execute 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pc_fetch_to_decode;
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__stepping 
        = (1U & ((vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_dmr1 
                  >> 0x16U) & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_dsr 
                               >> 0xdU)));
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_except_illegal_o = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_except_illegal_o 
                = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_except_illegal_o;
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_except_ibus_err_o = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_except_ibus_err_o 
                = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_except_ibus_err_o;
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_except_itlb_miss_o = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_except_itlb_miss_o 
                = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_except_itlb_miss_o;
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_except_ibus_align_o = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_except_ibus_align_o 
                = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_branch_o) 
                   & (0U != (3U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_branch_target_o)));
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_except_ipagefault_o = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_except_ipagefault_o 
                = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_except_ipagefault_o;
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_except_syscall_o = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_except_syscall_o 
                = ((8U == (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                    >> 0x1aU))) & (0U 
                                                   == 
                                                   (7U 
                                                    & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                       >> 0x17U))));
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_except_trap_o = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_except_trap_o 
                = ((8U == (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                    >> 0x1aU))) & (2U 
                                                   == 
                                                   (7U 
                                                    & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                       >> 0x17U))));
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_rfe_o = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_rfe_o = 0U;
        } else {
            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_rfe_o 
                    = (9U == (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                       >> 0x1aU)));
            }
        }
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__genblk1__DOT__wb_rfd_adr_expand 
        = ((0x20U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__genblk1__DOT__wb_rfd_adr_expand)) 
           | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__wb_rfd_adr_o));
    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_execute_o) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_rfd_adr_o 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfd_adr_o;
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_rf_wb_o = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_execute_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_rf_wb_o 
                = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rf_wb_o;
        } else {
            if ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_mfspr_o) 
                  & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_ack)) 
                 | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_lsu_load_o) 
                    & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__lsu_valid_o)))) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_rf_wb_o = 0U;
            } else {
                if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_rf_wb_o = 0U;
                }
            }
        }
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__padv_ctrl 
        = ((~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__or1k_rst)) 
           & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_execute_o));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_except_ibus_err_o 
        = __Vdly__decode_except_ibus_err_o;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_except_itlb_miss_o 
        = __Vdly__decode_except_itlb_miss_o;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_valid_o 
        = ((~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__or1k_rst)) 
           & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o));
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_div_o = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_div_o = 0U;
        } else {
            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_div_o 
                    = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_div_signed_o) 
                       | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_div_unsigned_o));
                if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_bubble_o) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_div_o = 0U;
                }
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_branch_o = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_branch_o = 0U;
        } else {
            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_branch_o 
                    = (((5U > (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                        >> 0x1aU))) 
                        | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_jr_o)) 
                       | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_jal_o));
                if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_bubble_o) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_branch_o = 0U;
                }
            }
        }
    }
    if ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__bus_access_done) 
          & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_fetch_o)) 
         & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__mispredict_stall)))) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pc_fetch_to_decode 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__pc_fetch;
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_except_ipagefault_o = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__du_restart_from_stall) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_except_ipagefault_o = 0U;
        } else {
            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__except_ipagefault) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_except_ipagefault_o = 1U;
            } else {
                if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__except_ipagefault_clear) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_except_ipagefault_o = 0U;
                }
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfd_adr_o 
            = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_jal_o)
                ? 9U : (0x1fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                 >> 0x15U)));
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rf_wb_o = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rf_wb_o = 0U;
        } else {
            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rf_wb_o 
                    = ((((((1U == (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                            >> 0x1aU))) 
                           | (6U == (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                              >> 0x1aU)))) 
                          | (0x12U == (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                >> 0x1aU)))) 
                         | (0x1bU == (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                               >> 0x1aU)))) 
                        | ((2U == (3U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                         >> 0x1eU))) 
                           & (0x2fU != (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                 >> 0x1aU))))) 
                       | ((3U == (3U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                        >> 0x1eU))) 
                          & (~ (((0x39U == (0x3fU & 
                                            (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                             >> 0x1aU))) 
                                 | (0x30U == (0x3fU 
                                              & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                 >> 0x1aU)))) 
                                | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_lsu_store_o)))));
                if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_bubble_o) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rf_wb_o = 0U;
                }
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_mfspr_o = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_execute_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_mfspr_o 
                = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_mfspr_o;
        } else {
            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_mfspr_o = 0U;
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_valid_o) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__execute_hazard_result 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_alu_result_o;
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__ctrl_hazard_result 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__rf_result_o;
    } else {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__execute_hazard_result 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__execute_hazard_result_r;
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__ctrl_hazard_result 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__ctrl_hazard_result_r;
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_mfspr_o = 0U;
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o)))) {
            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_mfspr_o 
                    = (0x2dU == (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                          >> 0x1aU)));
                if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_bubble_o) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_mfspr_o = 0U;
                }
            }
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
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vtableidx3 
        = (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_mtspr_o) 
            << 6U) | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_mfspr_o) 
                       << 5U) | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_alu_o) 
                                  << 4U) | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_opc_alu_o))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_lut 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vtable3___PVT__or1k_execute_alu__DOT__logic_lut
        [vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vtableidx3];
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
}

VL_INLINE_OPT void Vor1k_pu_or1k_cpu_cappuccino__pi5::_sequent__TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu__4(Vor1k_pu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vor1k_pu_or1k_cpu_cappuccino__pi5::_sequent__TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu__4\n"); );
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_fetch_cappuccino__DOT__ibus_ack = 0U;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__exception_while_tlb_reload = 0U;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_fetch_cappuccino__DOT__tlb_reload_ack = 0U;
    if ((4U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__state))) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_fetch_cappuccino__DOT__state = 0U;
    } else {
        if ((2U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__state))) {
            if ((1U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__state))) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_req = 1U;
                if (vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_or1k_i_ack) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_adr 
                        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__next_ibus_adr;
                    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__refill_done) {
                        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_req = 0U;
                        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_fetch_cappuccino__DOT__state = 0U;
                    }
                }
                if (vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_or1k_i_err) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_req = 0U;
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_fetch_cappuccino__DOT__state = 0U;
                }
            } else {
                if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_branch_exception_o) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__exception_while_tlb_reload = 1U;
                }
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_adr 
                    = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__tlb_reload_addr;
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__tlb_reload_data 
                    = vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_or1k_i_dat;
                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__tlb_reload_req)))) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_fetch_cappuccino__DOT__state = 0U;
                }
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_req 
                    = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__tlb_reload_req;
                if (((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_or1k_i_ack) 
                     | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__tlb_reload_ack))) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_req = 0U;
                }
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_fetch_cappuccino__DOT__tlb_reload_ack 
                    = ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_or1k_i_ack) 
                       & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__tlb_reload_req));
            }
        } else {
            if ((1U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__state))) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_fetch_cappuccino__DOT__ibus_ack 
                    = vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_or1k_i_ack;
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_dat 
                    = vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_or1k_i_dat;
                if (((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_or1k_i_ack) 
                     | (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_or1k_i_err))) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_req = 0U;
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_fetch_cappuccino__DOT__state = 0U;
                }
            } else {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_req = 0U;
                if ((((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_fetch_o) 
                        & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_access)) 
                       & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_ack))) 
                      & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__imem_err))) 
                     & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__nop_ack)))) {
                    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__tlb_reload_req) {
                        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_adr 
                            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__tlb_reload_addr;
                        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_req = 1U;
                        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_fetch_cappuccino__DOT__state = 2U;
                    } else {
                        if ((0x40U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr))) {
                            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_adr 
                                = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_phys_addr;
                            if ((1U & (((~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__tlb_miss)) 
                                        & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__pagefault))) 
                                       & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_busy))))) {
                                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_req = 1U;
                                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_fetch_cappuccino__DOT__state = 1U;
                            }
                        } else {
                            if ((1U & ((~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_branch_exception_o)) 
                                       | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__doing_rfe)))) {
                                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_adr 
                                    = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__pc_fetch;
                                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_req = 1U;
                                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_fetch_cappuccino__DOT__state = 1U;
                            }
                        }
                    }
                } else {
                    if (((((2U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state)) 
                           & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__ic_req)) 
                          & (~ (IData)((0U != (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_hit))))) 
                         | (4U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state)))) {
                        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_adr 
                            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ic_addr_match;
                        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_req = 1U;
                        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_fetch_cappuccino__DOT__state = 3U;
                    }
                }
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_req = 0U;
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_fetch_cappuccino__DOT__state = 0U;
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__tlb_reload_ack 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_fetch_cappuccino__DOT__tlb_reload_ack;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__nop_ack 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_fetch_cappuccino__DOT__nop_ack;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__state 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_fetch_cappuccino__DOT__state;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_ack 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_fetch_cappuccino__DOT__ibus_ack;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__doing_rfe 
        = ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__padv_ctrl) 
             & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_rfe_o)) 
            | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__doing_rfe_r)) 
           & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__deassert_doing_rfe)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__next_ibus_adr 
        = ((0xffffffe0U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_adr) 
           | (0x1fU & ((IData)(4U) + vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_adr)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_waddr[0U] 
        = (0x7ffU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_adr 
                     >> 2U));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_waddr[1U] 
        = (0x7ffU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_adr 
                     >> 2U));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__refill_done 
        = (1U & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__refill_valid) 
                 >> (7U & (((IData)(4U) + vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_adr) 
                           >> 2U))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__refill 
        = (4U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_branch_exception_o 
        = ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__exception_r) 
             | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_rfe_o)) 
            | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__doing_rfe)) 
           & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__exception_taken)));
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__pc_fetch = 0x100U;
    } else {
        if (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__addr_valid) 
             | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__du_restart_from_stall))) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__pc_fetch 
                = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__pc_addr;
        }
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__except_ipagefault_clear 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_except_ipagefault_o) 
           & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_branch_exception_o));
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
}

VL_INLINE_OPT void Vor1k_pu_or1k_cpu_cappuccino__pi5::_sequent__TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu__5(Vor1k_pu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vor1k_pu_or1k_cpu_cappuccino__pi5::_sequent__TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu__5\n"); );
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_din 
        = ((0x1fffff00000ULL & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_din) 
           | (IData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_way_in
                             [0U])));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_din 
        = ((0x100000fffffULL & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_din) 
           | ((QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_way_in
                              [1U])) << 0x14U));
}

VL_INLINE_OPT void Vor1k_pu_or1k_cpu_cappuccino__pi5::_sequent__TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu__6(Vor1k_pu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vor1k_pu_or1k_cpu_cappuccino__pi5::_sequent__TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu__6\n"); );
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__irq_unmasked 
        = (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picmr 
           & vlSymsp->TOP__or1k_pu.__PVT__or1k_irq);
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
}

VL_INLINE_OPT void Vor1k_pu_or1k_cpu_cappuccino__pi5::_sequent__TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu__7(Vor1k_pu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vor1k_pu_or1k_cpu_cappuccino__pi5::_sequent__TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu__7\n"); );
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_lsu_cappuccino__DOT__dbus_ack = 0U;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__write_done = 0U;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_lsu_cappuccino__DOT__tlb_reload_ack = 0U;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__tlb_reload_done = 0U;
    if ((4U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__state))) {
        if ((2U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__state))) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_lsu_cappuccino__DOT__state = 0U;
        } else {
            if ((1U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__state))) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_lsu_cappuccino__DOT__state = 0U;
            } else {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__dbus_req_o = 1U;
                if (vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_or1k_d_ack) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_adr 
                        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__next_dbus_adr;
                    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__refill_done) {
                        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__dbus_req_o = 0U;
                        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_lsu_cappuccino__DOT__state = 0U;
                    }
                }
                if (vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_or1k_d_err) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__dbus_req_o = 0U;
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_lsu_cappuccino__DOT__state = 0U;
                }
            }
        }
    } else {
        if ((2U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__state))) {
            if ((1U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__state))) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_adr 
                    = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__tlb_reload_addr;
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__tlb_reload_data 
                    = vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_or1k_d_dat;
                if ((1U & ((~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__tlb_reload_req)) 
                           | (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_or1k_d_err)))) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_lsu_cappuccino__DOT__state = 0U;
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__tlb_reload_done = 1U;
                }
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__dbus_req_o 
                    = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__tlb_reload_req;
                if (((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_or1k_d_ack) 
                     | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__tlb_reload_ack))) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__dbus_req_o = 0U;
                }
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_lsu_cappuccino__DOT__tlb_reload_ack 
                    = ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_or1k_d_ack) 
                       & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__tlb_reload_req));
            } else {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__dbus_req_o = 1U;
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_we = 1U;
                if ((1U & ((~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_req_o)) 
                           | ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_or1k_d_ack) 
                              & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__last_write)))))) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_bsel_o 
                        = (0xfU & ((vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_dout[2U] 
                                    << 0x1fU) | (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_dout[1U] 
                                                 >> 1U)));
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_adr 
                        = ((vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_dout[3U] 
                            << 0x1bU) | (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_dout[2U] 
                                         >> 5U));
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat 
                        = ((vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_dout[2U] 
                            << 0x1bU) | (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_dout[1U] 
                                         >> 5U));
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_atomic 
                        = (1U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_dout[0U]);
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_lsu_cappuccino__DOT__last_write 
                        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_empty;
                }
                if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_write) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_lsu_cappuccino__DOT__last_write = 0U;
                }
                if ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__last_write) 
                      & (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_or1k_d_ack)) 
                     | (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_or1k_d_err))) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__dbus_req_o = 0U;
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_we = 0U;
                    if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_write)))) {
                        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_lsu_cappuccino__DOT__state = 0U;
                        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__write_done = 1U;
                    }
                }
            }
        } else {
            if ((1U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__state))) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_lsu_cappuccino__DOT__dbus_ack 
                    = vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_or1k_d_ack;
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat 
                    = vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_or1k_d_dat;
                if (((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_or1k_d_ack) 
                     | (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_or1k_d_err))) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__dbus_req_o = 0U;
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_lsu_cappuccino__DOT__state = 0U;
                }
            } else {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__dbus_req_o = 0U;
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_we = 0U;
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_adr = 0U;
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_atomic = 0U;
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_lsu_cappuccino__DOT__last_write = 0U;
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_bsel_o = 0xfU;
                if ((1U & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_write) 
                           | (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_empty))))) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_lsu_cappuccino__DOT__state = 2U;
                } else {
                    if (((((((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__ctrl_op_lsu) 
                               & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_access)) 
                              & (8U != (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state))) 
                             & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_ack))) 
                            & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_err))) 
                           & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__except_dbus))) 
                          & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__access_done))) 
                         & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o)))) {
                        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__tlb_reload_req) {
                            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__dbus_req_o = 1U;
                            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_adr 
                                = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__tlb_reload_addr;
                            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_lsu_cappuccino__DOT__state = 3U;
                        } else {
                            if ((0x20U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr))) {
                                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_adr 
                                    = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_phys_addr;
                                if ((1U & (((~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__tlb_miss)) 
                                            & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__pagefault))) 
                                           & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__except_align))))) {
                                    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_lsu_load_o) {
                                        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__dbus_req_o = 1U;
                                        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_bsel_o 
                                            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_bsel;
                                        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_lsu_cappuccino__DOT__state = 1U;
                                    }
                                }
                            } else {
                                if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__except_align)))) {
                                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_adr 
                                        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_adr_o;
                                    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_lsu_load_o) {
                                        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__dbus_req_o = 1U;
                                        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_bsel_o 
                                            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_bsel;
                                        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_lsu_cappuccino__DOT__state = 1U;
                                    }
                                }
                            }
                        }
                    } else {
                        if (((((((2U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state)) 
                                 & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__dc_req)) 
                                & (~ (IData)((0U != (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_hit))))) 
                               & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__write_pending))) 
                              & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_refill_allowed)) 
                             | (8U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state)))) {
                            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__dbus_req_o = 1U;
                            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_adr 
                                = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_adr_match;
                            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_lsu_cappuccino__DOT__state = 4U;
                        }
                    }
                }
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_lsu_cappuccino__DOT__state = 0U;
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__tlb_reload_ack 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_lsu_cappuccino__DOT__tlb_reload_ack;
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
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__last_write 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_lsu_cappuccino__DOT__last_write;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_empty 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__write_pointer) 
           == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__read_pointer));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_req_o 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__dbus_req_o;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_ack 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_lsu_cappuccino__DOT__dbus_ack;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__write_pending 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__write_pending;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__state 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_lsu_cappuccino__DOT__state;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vdly__or1k_ctrl_cappuccino__DOT__spr_sr;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__tlb_reload_addr = 0U;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__tlb_reload_req = 0U;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_err 
        = ((~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__or1k_rst)) 
           & (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_or1k_d_err));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__next_dbus_adr 
        = ((0xffffffe0U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_adr) 
           | (0x1fU & ((IData)(4U) + vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_adr)));
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
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_refill_allowed 
        = (1U & (~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_lsu_store_o) 
                    | (2U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__state)))));
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__access_done = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_execute_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__access_done = 0U;
        } else {
            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__lsu_ack) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__access_done = 1U;
            }
        }
    }
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
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__carry_in 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_adder_do_sub_o) 
           | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_adder_do_carry_o) 
              & (((~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_carry_clear_o)) 
                  & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr) 
                     >> 0xaU)) | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_carry_set_o))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ic_access 
        = ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr) 
             >> 4U) & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__ic_enable_r)) 
           & (~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_cache_inhibit) 
                 & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr) 
                    >> 6U))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_flag_o 
        = (1U & (((~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__ctrl_flag_clear)) 
                  & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr) 
                     >> 9U)) | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__ctrl_flag_set)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ic_addr_match 
        = ((0x40U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr))
            ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_phys_addr
            : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__pc_fetch);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_enabled 
        = (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr) 
            >> 3U) & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_enable_r));
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
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_lsu_load_o = 0U;
    } else {
        if (((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_align_o) 
               | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dbus_o)) 
              | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dtlb_miss_o)) 
             | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dpagefault_o))) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_lsu_load_o = 0U;
        } else {
            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_execute_o) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_lsu_load_o 
                    = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_lsu_load_o;
            } else {
                if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_lsu_load_o = 0U;
                }
            }
        }
    }
    if (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_execute_o) 
         & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_lsu_store_o) 
            | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_lsu_load_o)))) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_adr_o 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__adder_result;
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__adder_carryout 
        = (1U & (IData)((1ULL & ((((QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o)) 
                                   + (QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__b_mux))) 
                                  + (QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__carry_in))) 
                                 >> 0x20U))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__branch_mispredict_o 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_brcond_o) 
           & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_flag_o) 
              != (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_predicted_flag_o)));
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
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__adder_result 
        = ((vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o 
            + vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__b_mux) 
           + (IData)((QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__carry_in))));
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
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__ctrl_op_lsu 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_lsu_load_o) 
           | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_lsu_store_o));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_align_o 
        = ((~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__or1k_rst)) 
           & ((~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o)) 
              & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__except_align) 
                 & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o)))));
    if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__or1k_rst)))) {
        if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o)))) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dtlb_miss_o 
                = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__except_dtlb_miss) 
                   & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o)));
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__or1k_rst)))) {
        if ((1U & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o)))) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dpagefault_o 
                = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__except_dpagefault) 
                   & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o)));
        }
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dbus_o 
        = ((~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__or1k_rst)) 
           & ((~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o)) 
              & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__except_dbus) 
                 | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__store_buffer_err_o))));
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
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_lsu_store_o = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_lsu_store_o = 0U;
        } else {
            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_lsu_store_o 
                    = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_lsu_store_o;
                if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_bubble_o) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_lsu_store_o = 0U;
                }
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_lsu_load_o = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_lsu_load_o = 0U;
        } else {
            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_lsu_load_o 
                    = ((((2U == (3U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                       >> 0x1eU))) 
                         & (~ (IData)((7U == (7U & 
                                              (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                               >> 0x1aU)))))) 
                        & (~ (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                              >> 0x1dU))) | (0x1bU 
                                             == (0x3fU 
                                                 & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                    >> 0x1aU))));
                if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_bubble_o) {
                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_lsu_load_o = 0U;
                }
            }
        }
    }
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
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__except_align 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__ctrl_op_lsu) 
           & (((2U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_length_o)) 
               & (0U != (3U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_adr_o))) 
              | ((1U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_length_o)) 
                 & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_adr_o)));
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
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__store_buffer_err_o = 0U;
    } else {
        if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__store_buffer_err_o = 0U;
        } else {
            if (((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_or1k_d_err) 
                 & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_we_o))) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__store_buffer_err_o = 1U;
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__except_dbus = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_execute_o) 
             | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o))) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__except_dbus = 0U;
        } else {
            if (vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_or1k_d_err) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__except_dbus = 1U;
            }
        }
    }
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode = 0x14000000U;
    } else {
        if (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__imem_err) 
             | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o) 
                 | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ctrl_branch_exception_edge)) 
                | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__flush)))) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode = 0x14000000U;
        } else {
            if ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__bus_access_done) 
                  & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_fetch_o)) 
                 & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__mispredict_stall)))) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                    = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__imem_dat;
            }
        }
    }
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
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_we_o 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_we) 
           & ((~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_atomic)) 
              | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__atomic_reserve)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ctrl_branch_exception_edge 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_branch_exception_o) 
           & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ctrl_branch_exception_r)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__mispredict_stall 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__fetching_mispredicted_branch) 
           | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__branch_mispredict_o) 
              & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__fetching_brcond)));
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
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_din 
        = ((0xffffffffffULL & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_din) 
           | ((QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_lru_in)) 
              << 0x28U));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__imem_err 
        = ((~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__or1k_rst)) 
           & (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_or1k_i_err));
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
    if (vlSymsp->TOP__or1k_pu.__PVT__or1k_rst) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__flush = 0U;
    } else {
        if ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__bus_access_done) 
              & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_fetch_o)) 
             | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__du_restart_from_stall))) {
            vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__flush = 0U;
        } else {
            if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o) {
                vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__flush = 1U;
            }
        }
    }
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
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__lsu_ldat 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_access)
            ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat
            : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_ldat);
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_branch_target_o 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_decode_execute_cappuccino__DOT__branch_to_imm)
            ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_decode_execute_cappuccino__DOT__branch_to_imm_target
            : (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_bubble_o) 
                | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_jr_o))
                ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfb_o
                : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_rfb_o));
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

VL_INLINE_OPT void Vor1k_pu_or1k_cpu_cappuccino__pi5::_sequent__TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu__8(Vor1k_pu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vor1k_pu_or1k_cpu_cappuccino__pi5::_sequent__TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu__8\n"); );
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_pic 
        = ((((0U != vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr) 
             & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr) 
                >> 2U)) & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_mtspr_o))) 
           & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__doing_rfe)));
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
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__exception_re 
        = (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__exception) 
            & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__exception_r))) 
           & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__exception_taken)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o 
        = ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__padv_ctrl) 
             & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_rfe_o)) 
            | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__exception_re)) 
           | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__cpu_stall));
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
}

VL_INLINE_OPT void Vor1k_pu_or1k_cpu_cappuccino__pi5::_multiclk__TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu__9(Vor1k_pu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vor1k_pu_or1k_cpu_cappuccino__pi5::_multiclk__TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu__9\n"); );
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__du_npc_write 
        = (((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__wr_reg) 
            & (0x10U == (0xffffU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__addr_reg))) 
           & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__du__DOT__du_ack));
}

VL_INLINE_OPT void Vor1k_pu_or1k_cpu_cappuccino__pi5::_multiclk__TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu__10(Vor1k_pu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vor1k_pu_or1k_cpu_cappuccino__pi5::_multiclk__TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu__10\n"); );
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_ctrl_cappuccino__DOT__execute_stall 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_ctrl_cappuccino__DOT__ctrl_stall) 
           | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_div_o) 
               & (~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_done) 
                     & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_valid_o))))) 
              | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_mul_o) 
                 & (~ (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__threestagemultiply__DOT__mul_valid_shr) 
                        >> 2U) & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_valid_o)))))));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__imem_dat 
        = ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__nop_ack) 
             | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__except_itlb_miss)) 
            | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__except_ipagefault))
            ? 0x14000000U : ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_access)
                              ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_dat
                              : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ic_dat));
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
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__rfa_rdad 
        = (0x1fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__imem_dat 
                    >> 0x10U));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__rfb_rdad 
        = (0x1fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__imem_dat 
                    >> 0xbU));
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
}

VL_INLINE_OPT void Vor1k_pu_or1k_cpu_cappuccino__pi5::_sequent__TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu__11(Vor1k_pu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vor1k_pu_or1k_cpu_cappuccino__pi5::_sequent__TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu__11\n"); );
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__du_stall_o 
        = (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__stepping) 
            & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pstep) 
               >> 4U)) | (((vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_dsr 
                            >> 0xdU) & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__padv_ctrl)) 
                          & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_trap_o)));
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__du__DOT__du_read_dat 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__mfspr_dat_o;
}

VL_INLINE_OPT void Vor1k_pu_or1k_cpu_cappuccino__pi5::_sequent__TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu__12(Vor1k_pu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vor1k_pu_or1k_cpu_cappuccino__pi5::_sequent__TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu__12\n"); );
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__du_restart_from_stall 
        = ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__du__DOT__du_stall_r) 
           & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__or1k_dbg_stall_i)));
}

VL_INLINE_OPT void Vor1k_pu_or1k_cpu_cappuccino__pi5::_multiclk__TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu__13(Vor1k_pu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vor1k_pu_or1k_cpu_cappuccino__pi5::_multiclk__TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu__13\n"); );
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
}

VL_INLINE_OPT void Vor1k_pu_or1k_cpu_cappuccino__pi5::_combo__TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu__14(Vor1k_pu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vor1k_pu_or1k_cpu_cappuccino__pi5::_combo__TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu__14\n"); );
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
