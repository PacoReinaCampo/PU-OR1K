// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vor1k_pu.h for the primary calling header

#include "Vor1k_pu_mpsoc_wb_ram_generic__pi4.h"
#include "Vor1k_pu__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vor1k_pu_mpsoc_wb_ram_generic__pi4) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vor1k_pu_mpsoc_wb_ram_generic__pi4::__Vconfigure(Vor1k_pu__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vor1k_pu_mpsoc_wb_ram_generic__pi4::~Vor1k_pu_mpsoc_wb_ram_generic__pi4() {
}

void Vor1k_pu_mpsoc_wb_ram_generic__pi4::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vor1k_pu_mpsoc_wb_ram_generic__pi4::_ctor_var_reset\n"); );
    // Body
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__we = VL_RAND_RESET_I(4);
    __PVT__din = VL_RAND_RESET_I(32);
    __PVT__waddr = VL_RAND_RESET_I(21);
    __PVT__raddr = VL_RAND_RESET_I(21);
    __PVT__dout = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2097152; ++__Vi0) {
        mem[__Vi0] = VL_RAND_RESET_I(32);
    }
}
