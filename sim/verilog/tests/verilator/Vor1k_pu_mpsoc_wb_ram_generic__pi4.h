// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vor1k_pu.h for the primary calling header

#ifndef _VOR1K_PU_MPSOC_WB_RAM_GENERIC__PI4_H_
#define _VOR1K_PU_MPSOC_WB_RAM_GENERIC__PI4_H_  // guard

#include "verilated_heavy.h"
#include "Vor1k_pu__Dpi.h"

//==========

class Vor1k_pu__Syms;
class Vor1k_pu_VerilatedVcd;


//----------

VL_MODULE(Vor1k_pu_mpsoc_wb_ram_generic__pi4) {
  public:
    
    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__we,3,0);
    VL_IN(__PVT__din,31,0);
    VL_IN(__PVT__waddr,20,0);
    VL_IN(__PVT__raddr,20,0);
    VL_OUT(__PVT__dout,31,0);
    
    // LOCAL SIGNALS
    IData/*31:0*/ mem[2097152];
    
    // INTERNAL VARIABLES
  private:
    Vor1k_pu__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vor1k_pu_mpsoc_wb_ram_generic__pi4);  ///< Copying not allowed
  public:
    Vor1k_pu_mpsoc_wb_ram_generic__pi4(const char* name = "TOP");
    ~Vor1k_pu_mpsoc_wb_ram_generic__pi4();
    
    // INTERNAL METHODS
    void __Vconfigure(Vor1k_pu__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _sequent__TOP__or1k_pu__wb_bfm_memory0__ram0__1(Vor1k_pu__Syms* __restrict vlSymsp);
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
