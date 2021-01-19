// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vor1k_pu.h for the primary calling header

#ifndef _VOR1K_PU_OR1K_CPU__PI3_H_
#define _VOR1K_PU_OR1K_CPU__PI3_H_  // guard

#include "verilated_heavy.h"
#include "Vor1k_pu__Dpi.h"

//==========

class Vor1k_pu__Syms;
class Vor1k_pu_VerilatedVcd;
class Vor1k_pu_or1k_cpu_cappuccino__pi5;


//----------

VL_MODULE(Vor1k_pu_or1k_cpu__pi3) {
  public:
    // CELLS
    Vor1k_pu_or1k_cpu_cappuccino__pi5* cappuccino__DOT__or1k_cpu;
    
    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_IN8(__PVT__ibus_err_i,0,0);
    VL_IN8(__PVT__ibus_ack_i,0,0);
    VL_OUT8(__PVT__ibus_req_o,0,0);
    VL_OUT8(__PVT__ibus_burst_o,0,0);
    VL_IN8(__PVT__dbus_err_i,0,0);
    VL_IN8(__PVT__dbus_ack_i,0,0);
    VL_OUT8(__PVT__dbus_req_o,0,0);
    VL_OUT8(__PVT__dbus_bsel_o,3,0);
    VL_OUT8(__PVT__dbus_we_o,0,0);
    VL_OUT8(__PVT__dbus_burst_o,0,0);
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
    VL_OUT8(__PVT__spr_bus_we_o,0,0);
    VL_OUT8(__PVT__spr_bus_stb_o,0,0);
    VL_IN8(__PVT__spr_bus_ack_dmmu_i,0,0);
    VL_IN8(__PVT__spr_bus_ack_immu_i,0,0);
    VL_IN8(__PVT__spr_bus_ack_mac_i,0,0);
    VL_IN8(__PVT__spr_bus_ack_pmu_i,0,0);
    VL_IN8(__PVT__spr_bus_ack_pcu_i,0,0);
    VL_IN8(__PVT__spr_bus_ack_fpu_i,0,0);
    VL_IN8(__PVT__snoop_en_i,0,0);
    VL_IN16(__PVT__du_addr_i,15,0);
    VL_OUT16(__PVT__spr_bus_addr_o,15,0);
    VL_OUT16(__PVT__spr_sr_o,15,0);
    VL_IN(__PVT__ibus_dat_i,31,0);
    VL_OUT(__PVT__ibus_adr_o,31,0);
    VL_IN(__PVT__dbus_dat_i,31,0);
    VL_OUT(__PVT__dbus_adr_o,31,0);
    VL_OUT(__PVT__dbus_dat_o,31,0);
    VL_IN(__PVT__irq_i,31,0);
    VL_IN(__PVT__du_dat_i,31,0);
    VL_OUT(__PVT__du_dat_o,31,0);
    VL_OUT(__PVT__traceport_exec_pc_o,31,0);
    VL_OUT(__PVT__traceport_exec_jbtarget_o,31,0);
    VL_OUT(__PVT__traceport_exec_insn_o,31,0);
    VL_OUT(__PVT__traceport_exec_wbdata_o,31,0);
    VL_OUT(__PVT__spr_bus_dat_o,31,0);
    VL_IN(__PVT__spr_bus_dat_dmmu_i,31,0);
    VL_IN(__PVT__spr_bus_dat_immu_i,31,0);
    VL_IN(__PVT__spr_bus_dat_mac_i,31,0);
    VL_IN(__PVT__spr_bus_dat_pmu_i,31,0);
    VL_IN(__PVT__spr_bus_dat_pcu_i,31,0);
    VL_IN(__PVT__spr_bus_dat_fpu_i,31,0);
    VL_IN(__PVT__multicore_coreid_i,31,0);
    VL_IN(__PVT__multicore_numcores_i,31,0);
    VL_IN(__PVT__snoop_adr_i,31,0);
    
    // LOCAL SIGNALS
    IData/*31:0*/ monitor_execute_insn;
    IData/*31:0*/ monitor_execute_pc;
    IData/*31:0*/ __PVT__cappuccino__DOT__monitor_execute_insn_reg;
    
    // INTERNAL VARIABLES
  private:
    Vor1k_pu__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vor1k_pu_or1k_cpu__pi3);  ///< Copying not allowed
  public:
    Vor1k_pu_or1k_cpu__pi3(const char* name = "TOP");
    ~Vor1k_pu_or1k_cpu__pi3();
    
    // INTERNAL METHODS
    void __Vconfigure(Vor1k_pu__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _sequent__TOP__or1k_pu__core__or1k_cpu__2(Vor1k_pu__Syms* __restrict vlSymsp);
    static void _settle__TOP__or1k_pu__core__or1k_cpu__1(Vor1k_pu__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    uint32_t monitor_cappuccino__DOT__get_gpr(uint32_t gpr_num);
    void monitor_cappuccino__DOT__set_gpr(uint32_t gpr_num, uint32_t gpr_value);
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
