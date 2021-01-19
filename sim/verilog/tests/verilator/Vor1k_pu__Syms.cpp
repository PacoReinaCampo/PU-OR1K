// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vor1k_pu__Syms.h"
#include "Vor1k_pu.h"
#include "Vor1k_pu_or1k_pu.h"
#include "Vor1k_pu_or1k_core__pi1.h"
#include "Vor1k_pu_mpsoc_wb_spram__D800000.h"
#include "Vor1k_pu_or1k_cpu__pi3.h"
#include "Vor1k_pu_mpsoc_wb_ram_generic__pi4.h"
#include "Vor1k_pu_or1k_cpu_cappuccino__pi5.h"



// FUNCTIONS
Vor1k_pu__Syms::~Vor1k_pu__Syms()
{
}

Vor1k_pu__Syms::Vor1k_pu__Syms(Vor1k_pu* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_activity(false)
    , __Vm_baseCode(0)
    , __Vm_didInit(false)
    // Setup submodule names
    , TOP__or1k_pu(Verilated::catName(topp->name(), "or1k_pu"))
    , TOP__or1k_pu__core(Verilated::catName(topp->name(), "or1k_pu.core"))
    , TOP__or1k_pu__core__or1k_cpu(Verilated::catName(topp->name(), "or1k_pu.core.or1k_cpu"))
    , TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu(Verilated::catName(topp->name(), "or1k_pu.core.or1k_cpu.cappuccino.or1k_cpu"))
    , TOP__or1k_pu__wb_bfm_memory0(Verilated::catName(topp->name(), "or1k_pu.wb_bfm_memory0"))
    , TOP__or1k_pu__wb_bfm_memory0__ram0(Verilated::catName(topp->name(), "or1k_pu.wb_bfm_memory0.ram0"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->or1k_pu = &TOP__or1k_pu;
    TOPp->or1k_pu->core = &TOP__or1k_pu__core;
    TOPp->or1k_pu->core->or1k_cpu = &TOP__or1k_pu__core__or1k_cpu;
    TOPp->or1k_pu->core->or1k_cpu->cappuccino__DOT__or1k_cpu = &TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu;
    TOPp->or1k_pu->wb_bfm_memory0 = &TOP__or1k_pu__wb_bfm_memory0;
    TOPp->or1k_pu->wb_bfm_memory0->ram0 = &TOP__or1k_pu__wb_bfm_memory0__ram0;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__or1k_pu.__Vconfigure(this, true);
    TOP__or1k_pu__core.__Vconfigure(this, true);
    TOP__or1k_pu__core__or1k_cpu.__Vconfigure(this, true);
    TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__Vconfigure(this, true);
    TOP__or1k_pu__wb_bfm_memory0.__Vconfigure(this, true);
    TOP__or1k_pu__wb_bfm_memory0__ram0.__Vconfigure(this, true);
    // Setup scopes
    __Vscope_or1k_pu__core__or1k_cpu.configure(this, name(), "or1k_pu.core.or1k_cpu", "or1k_cpu", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_or1k_pu__wb_bfm_memory0__ram0.configure(this, name(), "or1k_pu.wb_bfm_memory0.ram0", "ram0", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
        __Vscope_or1k_pu__core__or1k_cpu.varInsert(__Vfinal,"monitor_execute_insn", &(TOP__or1k_pu__core__or1k_cpu.monitor_execute_insn), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_or1k_pu__core__or1k_cpu.varInsert(__Vfinal,"monitor_execute_pc", &(TOP__or1k_pu__core__or1k_cpu.monitor_execute_pc), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_or1k_pu__wb_bfm_memory0__ram0.varInsert(__Vfinal,"mem", &(TOP__or1k_pu__wb_bfm_memory0__ram0.mem), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,0,2097151);
    }
}
