// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vor1k_pu.h for the primary calling header

#ifndef _VOR1K_PU_MPSOC_WB_SPRAM__D800000_H_
#define _VOR1K_PU_MPSOC_WB_SPRAM__D800000_H_  // guard

#include "verilated_heavy.h"
#include "Vor1k_pu__Dpi.h"

//==========

class Vor1k_pu__Syms;
class Vor1k_pu_VerilatedVcd;
class Vor1k_pu_mpsoc_wb_ram_generic__pi4;


//----------

VL_MODULE(Vor1k_pu_mpsoc_wb_spram__D800000) {
  public:
    // CELLS
    Vor1k_pu_mpsoc_wb_ram_generic__pi4* ram0;
    
    // PORTS
    VL_IN8(__PVT__wb_clk_i,0,0);
    VL_IN8(__PVT__wb_rst_i,0,0);
    VL_IN8(__PVT__wb_sel_i,3,0);
    VL_IN8(__PVT__wb_we_i,0,0);
    VL_IN8(__PVT__wb_bte_i,1,0);
    VL_IN8(__PVT__wb_cti_i,2,0);
    VL_IN8(__PVT__wb_cyc_i,0,0);
    VL_IN8(__PVT__wb_stb_i,0,0);
    VL_OUT8(__PVT__wb_ack_o,0,0);
    VL_OUT8(__PVT__wb_err_o,0,0);
    VL_IN(__PVT__wb_adr_i,22,0);
    VL_IN(__PVT__wb_dat_i,31,0);
    VL_OUT(__PVT__wb_dat_o,31,0);
    
    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__valid;
    CData/*0:0*/ __PVT__valid_r;
    CData/*0:0*/ __PVT__is_last_r;
    IData/*22:0*/ __PVT__adr_r;
    IData/*22:0*/ __PVT__next_adr;
    IData/*22:0*/ __PVT__adr;
    
    // LOCAL VARIABLES
    CData/*2:0*/ __Vfunc_wb_next_adr__1__cti_i;
    CData/*1:0*/ __Vfunc_wb_next_adr__1__bte_i;
    CData/*0:0*/ __Vdly__wb_ack_o;
    IData/*31:0*/ __Vfunc_wb_next_adr__1__Vfuncout;
    IData/*31:0*/ __Vfunc_wb_next_adr__1__adr_i;
    IData/*31:0*/ __Vfunc_wb_next_adr__1__adr;
    
    // INTERNAL VARIABLES
  private:
    Vor1k_pu__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vor1k_pu_mpsoc_wb_spram__D800000);  ///< Copying not allowed
  public:
    Vor1k_pu_mpsoc_wb_spram__D800000(const char* name = "TOP");
    ~Vor1k_pu_mpsoc_wb_spram__D800000();
    
    // INTERNAL METHODS
    void __Vconfigure(Vor1k_pu__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _multiclk__TOP__or1k_pu__wb_bfm_memory0__5(Vor1k_pu__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__or1k_pu__wb_bfm_memory0__7(Vor1k_pu__Syms* __restrict vlSymsp);
    static void _sequent__TOP__or1k_pu__wb_bfm_memory0__3(Vor1k_pu__Syms* __restrict vlSymsp);
    static void _sequent__TOP__or1k_pu__wb_bfm_memory0__4(Vor1k_pu__Syms* __restrict vlSymsp);
    static void _settle__TOP__or1k_pu__wb_bfm_memory0__1(Vor1k_pu__Syms* __restrict vlSymsp);
    static void _settle__TOP__or1k_pu__wb_bfm_memory0__2(Vor1k_pu__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
