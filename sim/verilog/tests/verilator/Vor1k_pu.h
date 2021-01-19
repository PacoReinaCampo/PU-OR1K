// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VOR1K_PU_H_
#define _VOR1K_PU_H_  // guard

#include "verilated_heavy.h"
#include "Vor1k_pu__Dpi.h"

//==========

class Vor1k_pu__Syms;
class Vor1k_pu_VerilatedVcd;
class Vor1k_pu_or1k_pu;


//----------

VL_MODULE(Vor1k_pu) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    Vor1k_pu_or1k_pu* or1k_pu;
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(wb_clk_i,0,0);
    VL_IN8(wb_rst_i,0,0);
    VL_IN8(tck_pad_i,0,0);
    VL_OUT8(tdo_pad_o,0,0);
    VL_IN8(tms_pad_i,0,0);
    VL_IN8(tdi_pad_i,0,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __VinpClk__TOP__or1k_pu____PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_rst;
    CData/*0:0*/ __VinpClk__TOP__or1k_pu__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__wr_fifo__RST;
    CData/*0:0*/ __VinpClk__TOP__or1k_pu__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__rd_fifo__RST;
    CData/*0:0*/ __Vclklast__TOP__wb_clk_i;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__or1k_pu____PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_rst;
    CData/*0:0*/ __Vclklast__TOP__tck_pad_i;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__or1k_pu__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__wr_fifo__RST;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__or1k_pu__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__rd_fifo__RST;
    CData/*0:0*/ __Vclklast__TOP__wb_rst_i;
    CData/*0:0*/ __Vchglast__TOP__or1k_pu__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_rst;
    CData/*0:0*/ __Vchglast__TOP__or1k_pu__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__wr_fifo__RST;
    CData/*0:0*/ __Vchglast__TOP__or1k_pu__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__rd_fifo__RST;
    CData/*0:0*/ __Vm_traceActivity[19];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vor1k_pu__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vor1k_pu);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vor1k_pu(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vor1k_pu();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
    static void _eval_initial_loop(Vor1k_pu__Syms* __restrict vlSymsp);
    void __Vconfigure(Vor1k_pu__Syms* symsp, bool first);
  private:
    static QData _change_request(Vor1k_pu__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vor1k_pu__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vor1k_pu__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vor1k_pu__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vor1k_pu__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__1(Vor1k_pu__Syms* __restrict vlSymsp);
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
