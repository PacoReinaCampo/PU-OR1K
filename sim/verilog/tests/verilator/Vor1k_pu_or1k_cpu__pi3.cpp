// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vor1k_pu.h for the primary calling header

#include "Vor1k_pu_or1k_cpu__pi3.h"
#include "Vor1k_pu__Syms.h"

#include "verilated_dpi.h"

//==========

uint32_t Vor1k_pu_or1k_cpu__pi3::monitor_cappuccino__DOT__get_gpr(uint32_t gpr_num) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vor1k_pu_or1k_cpu__pi3::monitor_cappuccino__DOT__get_gpr\n"); );
    // Variables
    VL_OUT(get_gpr__Vfuncrtn,31,0);
    CData/*5:0*/ __Vfunc_get_gpr__0__gpr_num;
    IData/*31:0*/ __Vfunc_get_gpr__0__Vfuncout;
    Vor1k_pu__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    __Vfunc_get_gpr__0__gpr_num = gpr_num;
    __Vfunc_get_gpr__0__Vfuncout = ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfd_adr_o) 
                                      == (0x1fU & (IData)(__Vfunc_get_gpr__0__gpr_num))) 
                                     & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rf_wb_o))
                                     ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__alu_result_o
                                     : ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_rfd_adr_o) 
                                          == (0x1fU 
                                              & (IData)(__Vfunc_get_gpr__0__gpr_num))) 
                                         & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_rf_wb_o))
                                         ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_alu_result_o
                                         : ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__wb_rfd_adr_o) 
                                              == (0x1fU 
                                                  & (IData)(__Vfunc_get_gpr__0__gpr_num))) 
                                             & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__wb_rf_wb_o))
                                             ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__rf_result_o
                                             : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__rfa__DOT__mem
                                            [__Vfunc_get_gpr__0__gpr_num])));
    get_gpr__Vfuncrtn = __Vfunc_get_gpr__0__Vfuncout;
    // Final
    return (get_gpr__Vfuncrtn);
}

void Vor1k_pu_or1k_cpu__pi3::monitor_cappuccino__DOT__set_gpr(uint32_t gpr_num, uint32_t gpr_value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vor1k_pu_or1k_cpu__pi3::monitor_cappuccino__DOT__set_gpr\n"); );
    // Variables
    CData/*5:0*/ __Vtask_set_gpr__1__gpr_num;
    IData/*31:0*/ __Vtask_set_gpr__1__gpr_value;
    Vor1k_pu__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    __Vtask_set_gpr__1__gpr_value = gpr_value;
    __Vtask_set_gpr__1__gpr_num = gpr_num;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__rfa__DOT__mem[__Vtask_set_gpr__1__gpr_num] 
        = __Vtask_set_gpr__1__gpr_value;
    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__rfb__DOT__mem[__Vtask_set_gpr__1__gpr_num] 
        = __Vtask_set_gpr__1__gpr_value;
}

VL_INLINE_OPT void Vor1k_pu_or1k_cpu__pi3::_sequent__TOP__or1k_pu__core__or1k_cpu__2(Vor1k_pu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vor1k_pu_or1k_cpu__pi3::_sequent__TOP__or1k_pu__core__or1k_cpu__2\n"); );
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__or1k_pu__core__or1k_cpu.monitor_execute_pc 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pc_decode_to_execute;
    if (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o) {
        vlSymsp->TOP__or1k_pu__core__or1k_cpu.__PVT__cappuccino__DOT__monitor_execute_insn_reg 
            = vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode;
    }
    vlSymsp->TOP__or1k_pu__core__or1k_cpu.monitor_execute_insn 
        = vlSymsp->TOP__or1k_pu__core__or1k_cpu.__PVT__cappuccino__DOT__monitor_execute_insn_reg;
}
