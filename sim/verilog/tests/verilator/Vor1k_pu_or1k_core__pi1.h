// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vor1k_pu.h for the primary calling header

#ifndef _VOR1K_PU_OR1K_CORE__PI1_H_
#define _VOR1K_PU_OR1K_CORE__PI1_H_  // guard

#include "verilated_heavy.h"
#include "Vor1k_pu__Dpi.h"

//==========

class Vor1k_pu__Syms;
class Vor1k_pu_VerilatedVcd;
class Vor1k_pu_or1k_cpu__pi3;


//----------

VL_MODULE(Vor1k_pu_or1k_core__pi1) {
  public:
    // CELLS
    Vor1k_pu_or1k_cpu__pi3* or1k_cpu;
    
    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_OUT8(__PVT__iwbm_stb_o,0,0);
    VL_OUT8(__PVT__iwbm_cyc_o,0,0);
    VL_OUT8(__PVT__iwbm_sel_o,3,0);
    VL_OUT8(__PVT__iwbm_we_o,0,0);
    VL_OUT8(__PVT__iwbm_cti_o,2,0);
    VL_OUT8(__PVT__iwbm_bte_o,1,0);
    VL_IN8(__PVT__iwbm_err_i,0,0);
    VL_IN8(__PVT__iwbm_ack_i,0,0);
    VL_IN8(__PVT__iwbm_rty_i,0,0);
    VL_OUT8(__PVT__dwbm_stb_o,0,0);
    VL_OUT8(__PVT__dwbm_cyc_o,0,0);
    VL_OUT8(__PVT__dwbm_sel_o,3,0);
    VL_OUT8(__PVT__dwbm_we_o,0,0);
    VL_OUT8(__PVT__dwbm_cti_o,2,0);
    VL_OUT8(__PVT__dwbm_bte_o,1,0);
    VL_IN8(__PVT__dwbm_err_i,0,0);
    VL_IN8(__PVT__dwbm_ack_i,0,0);
    VL_IN8(__PVT__dwbm_rty_i,0,0);
    VL_IN8(__PVT__du_stb_i,0,0);
    VL_IN8(__PVT__du_we_i,0,0);
    VL_OUT8(__PVT__du_ack_o,0,0);
    VL_IN8(__PVT__du_stall_i,0,0);
    VL_OUT8(__PVT__du_stall_o,0,0);
    VL_OUT8(__PVT__traceport_exec_valid_o,0,0);
    VL_OUT8(__PVT__traceport_exec_jb_o,0,0);
    VL_OUT8(__PVT__traceport_exec_jal_o,0,0);
    VL_OUT8(__PVT__traceport_exec_jr_o,0,0);
    VL_OUT8(__PVT__traceport_exec_wbreg_o,4,0);
    VL_OUT8(__PVT__traceport_exec_wben_o,0,0);
    VL_IN8(__PVT__snoop_en_i,0,0);
    VL_IN16(__PVT__du_addr_i,15,0);
    VL_OUT(__PVT__iwbm_adr_o,31,0);
    VL_OUT(__PVT__iwbm_dat_o,31,0);
    VL_IN(__PVT__iwbm_dat_i,31,0);
    VL_OUT(__PVT__dwbm_adr_o,31,0);
    VL_OUT(__PVT__dwbm_dat_o,31,0);
    VL_IN(__PVT__dwbm_dat_i,31,0);
    VL_IN(__PVT__irq_i,31,0);
    VL_IN(__PVT__du_dat_i,31,0);
    VL_OUT(__PVT__du_dat_o,31,0);
    VL_OUT(__PVT__traceport_exec_pc_o,31,0);
    VL_OUT(__PVT__traceport_exec_jbtarget_o,31,0);
    VL_OUT(__PVT__traceport_exec_insn_o,31,0);
    VL_OUT(__PVT__traceport_exec_wbdata_o,31,0);
    VL_IN(__PVT__multicore_coreid_i,31,0);
    VL_IN(__PVT__multicore_numcores_i,31,0);
    VL_IN(__PVT__snoop_adr_i,31,0);
    
    // INTERNAL VARIABLES
  private:
    Vor1k_pu__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vor1k_pu_or1k_core__pi1);  ///< Copying not allowed
  public:
    Vor1k_pu_or1k_core__pi1(const char* name = "TOP");
    ~Vor1k_pu_or1k_core__pi1();
    
    // INTERNAL METHODS
    void __Vconfigure(Vor1k_pu__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
