// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VOR1K_PU__SYMS_H_
#define _VOR1K_PU__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "Vor1k_pu.h"
#include "Vor1k_pu_or1k_pu.h"
#include "Vor1k_pu_or1k_core__pi1.h"
#include "Vor1k_pu_mpsoc_wb_spram__D800000.h"
#include "Vor1k_pu_or1k_cpu__pi3.h"
#include "Vor1k_pu_mpsoc_wb_ram_generic__pi4.h"
#include "Vor1k_pu_or1k_cpu_cappuccino__pi5.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS
class Vor1k_pu__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vor1k_pu*                      TOPp;
    Vor1k_pu_or1k_pu               TOP__or1k_pu;
    Vor1k_pu_or1k_core__pi1        TOP__or1k_pu__core;
    Vor1k_pu_or1k_cpu__pi3         TOP__or1k_pu__core__or1k_cpu;
    Vor1k_pu_or1k_cpu_cappuccino__pi5 TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu;
    Vor1k_pu_mpsoc_wb_spram__D800000 TOP__or1k_pu__wb_bfm_memory0;
    Vor1k_pu_mpsoc_wb_ram_generic__pi4 TOP__or1k_pu__wb_bfm_memory0__ram0;
    
    // SCOPE NAMES
    VerilatedScope __Vscope_or1k_pu__core__or1k_cpu;
    VerilatedScope __Vscope_or1k_pu__wb_bfm_memory0__ram0;
    
    // CREATORS
    Vor1k_pu__Syms(Vor1k_pu* topp, const char* namep);
    ~Vor1k_pu__Syms();
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
