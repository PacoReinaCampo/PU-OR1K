// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vor1k_pu__Syms.h"


//======================

void Vor1k_pu::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vor1k_pu::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vor1k_pu__Syms* __restrict vlSymsp = static_cast<Vor1k_pu__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vor1k_pu::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vor1k_pu::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vor1k_pu__Syms* __restrict vlSymsp = static_cast<Vor1k_pu__Syms*>(userp);
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vor1k_pu::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vor1k_pu__Syms* __restrict vlSymsp = static_cast<Vor1k_pu__Syms*>(userp);
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1391,"wb_clk_i", false,-1);
        tracep->declBit(c+1392,"wb_rst_i", false,-1);
        tracep->declBit(c+1393,"tdo_pad_o", false,-1);
        tracep->declBit(c+1394,"tms_pad_i", false,-1);
        tracep->declBit(c+1395,"tck_pad_i", false,-1);
        tracep->declBit(c+1396,"tdi_pad_i", false,-1);
        tracep->declBus(c+1471,"or1k_pu AW", false,-1, 31,0);
        tracep->declBus(c+1471,"or1k_pu DW", false,-1, 31,0);
        tracep->declBus(c+1472,"or1k_pu MEM_SIZE", false,-1, 31,0);
        tracep->declBit(c+1391,"or1k_pu wb_clk_i", false,-1);
        tracep->declBit(c+1392,"or1k_pu wb_rst_i", false,-1);
        tracep->declBit(c+1397,"or1k_pu tdo_pad_o", false,-1);
        tracep->declBit(c+1394,"or1k_pu tms_pad_i", false,-1);
        tracep->declBit(c+1395,"or1k_pu tck_pad_i", false,-1);
        tracep->declBit(c+1396,"or1k_pu tdi_pad_i", false,-1);
        tracep->declBit(c+1391,"or1k_pu wb_clk", false,-1);
        tracep->declBit(c+1392,"or1k_pu wb_rst", false,-1);
        tracep->declBus(c+962,"or1k_pu wb_m2s_or1k_d_adr", false,-1, 31,0);
        tracep->declBus(c+963,"or1k_pu wb_m2s_or1k_d_dat", false,-1, 31,0);
        tracep->declBus(c+964,"or1k_pu wb_m2s_or1k_d_sel", false,-1, 3,0);
        tracep->declBit(c+965,"or1k_pu wb_m2s_or1k_d_we", false,-1);
        tracep->declBit(c+966,"or1k_pu wb_m2s_or1k_d_cyc", false,-1);
        tracep->declBit(c+966,"or1k_pu wb_m2s_or1k_d_stb", false,-1);
        tracep->declBus(c+967,"or1k_pu wb_m2s_or1k_d_cti", false,-1, 2,0);
        tracep->declBus(c+1473,"or1k_pu wb_m2s_or1k_d_bte", false,-1, 1,0);
        tracep->declBus(c+1182,"or1k_pu wb_s2m_or1k_d_dat", false,-1, 31,0);
        tracep->declBit(c+1183,"or1k_pu wb_s2m_or1k_d_ack", false,-1);
        tracep->declBit(c+968,"or1k_pu wb_s2m_or1k_d_err", false,-1);
        tracep->declBit(c+969,"or1k_pu wb_s2m_or1k_d_rty", false,-1);
        tracep->declBus(c+22,"or1k_pu wb_m2s_or1k_i_adr", false,-1, 31,0);
        tracep->declBus(c+1474,"or1k_pu wb_m2s_or1k_i_dat", false,-1, 31,0);
        tracep->declBus(c+1475,"or1k_pu wb_m2s_or1k_i_sel", false,-1, 3,0);
        tracep->declBit(c+1476,"or1k_pu wb_m2s_or1k_i_we", false,-1);
        tracep->declBit(c+23,"or1k_pu wb_m2s_or1k_i_cyc", false,-1);
        tracep->declBit(c+23,"or1k_pu wb_m2s_or1k_i_stb", false,-1);
        tracep->declBus(c+507,"or1k_pu wb_m2s_or1k_i_cti", false,-1, 2,0);
        tracep->declBus(c+1473,"or1k_pu wb_m2s_or1k_i_bte", false,-1, 1,0);
        tracep->declBus(c+24,"or1k_pu wb_s2m_or1k_i_dat", false,-1, 31,0);
        tracep->declBit(c+25,"or1k_pu wb_s2m_or1k_i_ack", false,-1);
        tracep->declBit(c+970,"or1k_pu wb_s2m_or1k_i_err", false,-1);
        tracep->declBit(c+26,"or1k_pu wb_s2m_or1k_i_rty", false,-1);
        tracep->declBus(c+514,"or1k_pu wb_m2s_dbg_adr", false,-1, 31,0);
        tracep->declBus(c+515,"or1k_pu wb_m2s_dbg_dat", false,-1, 31,0);
        tracep->declBus(c+1398,"or1k_pu wb_m2s_dbg_sel", false,-1, 3,0);
        tracep->declBit(c+516,"or1k_pu wb_m2s_dbg_we", false,-1);
        tracep->declBit(c+1334,"or1k_pu wb_m2s_dbg_cyc", false,-1);
        tracep->declBit(c+1335,"or1k_pu wb_m2s_dbg_stb", false,-1);
        tracep->declBus(c+1477,"or1k_pu wb_m2s_dbg_cti", false,-1, 2,0);
        tracep->declBus(c+1478,"or1k_pu wb_m2s_dbg_bte", false,-1, 1,0);
        tracep->declBus(c+1336,"or1k_pu wb_s2m_dbg_dat", false,-1, 31,0);
        tracep->declBit(c+1399,"or1k_pu wb_s2m_dbg_ack", false,-1);
        tracep->declBit(c+1337,"or1k_pu wb_s2m_dbg_err", false,-1);
        tracep->declBit(c+517,"or1k_pu wb_s2m_dbg_rty", false,-1);
        tracep->declBus(c+475,"or1k_pu wb_m2s_mem_adr", false,-1, 31,0);
        tracep->declBus(c+476,"or1k_pu wb_m2s_mem_dat", false,-1, 31,0);
        tracep->declBus(c+1400,"or1k_pu wb_m2s_mem_sel", false,-1, 3,0);
        tracep->declBit(c+477,"or1k_pu wb_m2s_mem_we", false,-1);
        tracep->declBit(c+1401,"or1k_pu wb_m2s_mem_cyc", false,-1);
        tracep->declBit(c+1402,"or1k_pu wb_m2s_mem_stb", false,-1);
        tracep->declBus(c+1228,"or1k_pu wb_m2s_mem_cti", false,-1, 2,0);
        tracep->declBus(c+27,"or1k_pu wb_m2s_mem_bte", false,-1, 1,0);
        tracep->declBus(c+28,"or1k_pu wb_s2m_mem_dat", false,-1, 31,0);
        tracep->declBit(c+29,"or1k_pu wb_s2m_mem_ack", false,-1);
        tracep->declBit(c+1476,"or1k_pu wb_s2m_mem_err", false,-1);
        tracep->declBit(c+1476,"or1k_pu wb_s2m_mem_rty", false,-1);
        tracep->declBus(c+971,"or1k_pu wb_m2s_uart_adr", false,-1, 31,0);
        tracep->declBus(c+972,"or1k_pu wb_m2s_uart_dat", false,-1, 7,0);
        tracep->declBus(c+1479,"or1k_pu wb_m2s_uart_sel", false,-1, 3,0);
        tracep->declBit(c+965,"or1k_pu wb_m2s_uart_we", false,-1);
        tracep->declBit(c+973,"or1k_pu wb_m2s_uart_cyc", false,-1);
        tracep->declBit(c+966,"or1k_pu wb_m2s_uart_stb", false,-1);
        tracep->declBus(c+967,"or1k_pu wb_m2s_uart_cti", false,-1, 2,0);
        tracep->declBus(c+1473,"or1k_pu wb_m2s_uart_bte", false,-1, 1,0);
        tracep->declBus(c+548,"or1k_pu wb_s2m_uart_dat", false,-1, 7,0);
        tracep->declBit(c+549,"or1k_pu wb_s2m_uart_ack", false,-1);
        tracep->declBit(c+1476,"or1k_pu wb_s2m_uart_err", false,-1);
        tracep->declBit(c+1476,"or1k_pu wb_s2m_uart_rty", false,-1);
        tracep->declBit(c+762,"or1k_pu dbg_if_select", false,-1);
        tracep->declBit(c+1403,"or1k_pu dbg_if_tdo", false,-1);
        tracep->declBit(c+1396,"or1k_pu jtag_tap_tdo", false,-1);
        tracep->declBit(c+763,"or1k_pu jtag_tap_shift_dr", false,-1);
        tracep->declBit(c+764,"or1k_pu jtag_tap_pause_dr", false,-1);
        tracep->declBit(c+765,"or1k_pu jtag_tap_update_dr", false,-1);
        tracep->declBit(c+766,"or1k_pu jtag_tap_capture_dr", false,-1);
        tracep->declBus(c+767,"or1k_pu or1k_dbg_adr_i", false,-1, 31,0);
        tracep->declBus(c+768,"or1k_pu or1k_dbg_dat_i", false,-1, 31,0);
        tracep->declBit(c+769,"or1k_pu or1k_dbg_we_i", false,-1);
        tracep->declBit(c+1229,"or1k_pu or1k_dbg_stb_i", false,-1);
        tracep->declBus(c+1404,"or1k_pu or1k_dbg_dat_o", false,-1, 31,0);
        tracep->declBit(c+30,"or1k_pu or1k_dbg_ack_o", false,-1);
        tracep->declBit(c+1384,"or1k_pu or1k_dbg_stall_i", false,-1);
        tracep->declBit(c+1480,"or1k_pu or1k_dbg_ewt_i", false,-1);
        tracep->declBus(c+1481,"or1k_pu or1k_dbg_lss_o", false,-1, 3,0);
        tracep->declBus(c+1482,"or1k_pu or1k_dbg_is_o", false,-1, 1,0);
        tracep->declBus(c+1483,"or1k_pu or1k_dbg_wp_o", false,-1, 10,0);
        tracep->declBit(c+1405,"or1k_pu or1k_dbg_bp_o", false,-1);
        tracep->declBit(c+550,"or1k_pu or1k_dbg_rst", false,-1);
        tracep->declBus(c+551,"or1k_pu or1k_irq", false,-1, 31,0);
        tracep->declBit(c+1391,"or1k_pu or1k_clk", false,-1);
        tracep->declBit(c+941,"or1k_pu or1k_rst", false,-1);
        tracep->declBit(c+552,"or1k_pu uart_irq", false,-1);
        tracep->declBit(c+1391,"or1k_pu wb_interface0 wb_clk_i", false,-1);
        tracep->declBit(c+1392,"or1k_pu wb_interface0 wb_rst_i", false,-1);
        tracep->declBus(c+962,"or1k_pu wb_interface0 wb_or1k_d_adr_i", false,-1, 31,0);
        tracep->declBus(c+963,"or1k_pu wb_interface0 wb_or1k_d_dat_i", false,-1, 31,0);
        tracep->declBus(c+964,"or1k_pu wb_interface0 wb_or1k_d_sel_i", false,-1, 3,0);
        tracep->declBit(c+965,"or1k_pu wb_interface0 wb_or1k_d_we_i", false,-1);
        tracep->declBit(c+966,"or1k_pu wb_interface0 wb_or1k_d_cyc_i", false,-1);
        tracep->declBit(c+966,"or1k_pu wb_interface0 wb_or1k_d_stb_i", false,-1);
        tracep->declBus(c+967,"or1k_pu wb_interface0 wb_or1k_d_cti_i", false,-1, 2,0);
        tracep->declBus(c+1473,"or1k_pu wb_interface0 wb_or1k_d_bte_i", false,-1, 1,0);
        tracep->declBus(c+1182,"or1k_pu wb_interface0 wb_or1k_d_dat_o", false,-1, 31,0);
        tracep->declBit(c+1183,"or1k_pu wb_interface0 wb_or1k_d_ack_o", false,-1);
        tracep->declBit(c+968,"or1k_pu wb_interface0 wb_or1k_d_err_o", false,-1);
        tracep->declBit(c+969,"or1k_pu wb_interface0 wb_or1k_d_rty_o", false,-1);
        tracep->declBus(c+22,"or1k_pu wb_interface0 wb_or1k_i_adr_i", false,-1, 31,0);
        tracep->declBus(c+1474,"or1k_pu wb_interface0 wb_or1k_i_dat_i", false,-1, 31,0);
        tracep->declBus(c+1475,"or1k_pu wb_interface0 wb_or1k_i_sel_i", false,-1, 3,0);
        tracep->declBit(c+1476,"or1k_pu wb_interface0 wb_or1k_i_we_i", false,-1);
        tracep->declBit(c+23,"or1k_pu wb_interface0 wb_or1k_i_cyc_i", false,-1);
        tracep->declBit(c+23,"or1k_pu wb_interface0 wb_or1k_i_stb_i", false,-1);
        tracep->declBus(c+507,"or1k_pu wb_interface0 wb_or1k_i_cti_i", false,-1, 2,0);
        tracep->declBus(c+1473,"or1k_pu wb_interface0 wb_or1k_i_bte_i", false,-1, 1,0);
        tracep->declBus(c+24,"or1k_pu wb_interface0 wb_or1k_i_dat_o", false,-1, 31,0);
        tracep->declBit(c+25,"or1k_pu wb_interface0 wb_or1k_i_ack_o", false,-1);
        tracep->declBit(c+970,"or1k_pu wb_interface0 wb_or1k_i_err_o", false,-1);
        tracep->declBit(c+26,"or1k_pu wb_interface0 wb_or1k_i_rty_o", false,-1);
        tracep->declBus(c+514,"or1k_pu wb_interface0 wb_dbg_adr_i", false,-1, 31,0);
        tracep->declBus(c+515,"or1k_pu wb_interface0 wb_dbg_dat_i", false,-1, 31,0);
        tracep->declBus(c+1398,"or1k_pu wb_interface0 wb_dbg_sel_i", false,-1, 3,0);
        tracep->declBit(c+516,"or1k_pu wb_interface0 wb_dbg_we_i", false,-1);
        tracep->declBit(c+1334,"or1k_pu wb_interface0 wb_dbg_cyc_i", false,-1);
        tracep->declBit(c+1335,"or1k_pu wb_interface0 wb_dbg_stb_i", false,-1);
        tracep->declBus(c+1477,"or1k_pu wb_interface0 wb_dbg_cti_i", false,-1, 2,0);
        tracep->declBus(c+1478,"or1k_pu wb_interface0 wb_dbg_bte_i", false,-1, 1,0);
        tracep->declBus(c+1336,"or1k_pu wb_interface0 wb_dbg_dat_o", false,-1, 31,0);
        tracep->declBit(c+1399,"or1k_pu wb_interface0 wb_dbg_ack_o", false,-1);
        tracep->declBit(c+1337,"or1k_pu wb_interface0 wb_dbg_err_o", false,-1);
        tracep->declBit(c+517,"or1k_pu wb_interface0 wb_dbg_rty_o", false,-1);
        tracep->declBus(c+475,"or1k_pu wb_interface0 wb_mem_adr_o", false,-1, 31,0);
        tracep->declBus(c+476,"or1k_pu wb_interface0 wb_mem_dat_o", false,-1, 31,0);
        tracep->declBus(c+1400,"or1k_pu wb_interface0 wb_mem_sel_o", false,-1, 3,0);
        tracep->declBit(c+477,"or1k_pu wb_interface0 wb_mem_we_o", false,-1);
        tracep->declBit(c+1401,"or1k_pu wb_interface0 wb_mem_cyc_o", false,-1);
        tracep->declBit(c+1402,"or1k_pu wb_interface0 wb_mem_stb_o", false,-1);
        tracep->declBus(c+1228,"or1k_pu wb_interface0 wb_mem_cti_o", false,-1, 2,0);
        tracep->declBus(c+27,"or1k_pu wb_interface0 wb_mem_bte_o", false,-1, 1,0);
        tracep->declBus(c+28,"or1k_pu wb_interface0 wb_mem_dat_i", false,-1, 31,0);
        tracep->declBit(c+29,"or1k_pu wb_interface0 wb_mem_ack_i", false,-1);
        tracep->declBit(c+1476,"or1k_pu wb_interface0 wb_mem_err_i", false,-1);
        tracep->declBit(c+1476,"or1k_pu wb_interface0 wb_mem_rty_i", false,-1);
        tracep->declBus(c+971,"or1k_pu wb_interface0 wb_uart_adr_o", false,-1, 31,0);
        tracep->declBus(c+972,"or1k_pu wb_interface0 wb_uart_dat_o", false,-1, 7,0);
        tracep->declBus(c+1479,"or1k_pu wb_interface0 wb_uart_sel_o", false,-1, 3,0);
        tracep->declBit(c+965,"or1k_pu wb_interface0 wb_uart_we_o", false,-1);
        tracep->declBit(c+973,"or1k_pu wb_interface0 wb_uart_cyc_o", false,-1);
        tracep->declBit(c+966,"or1k_pu wb_interface0 wb_uart_stb_o", false,-1);
        tracep->declBus(c+967,"or1k_pu wb_interface0 wb_uart_cti_o", false,-1, 2,0);
        tracep->declBus(c+1473,"or1k_pu wb_interface0 wb_uart_bte_o", false,-1, 1,0);
        tracep->declBus(c+548,"or1k_pu wb_interface0 wb_uart_dat_i", false,-1, 7,0);
        tracep->declBit(c+549,"or1k_pu wb_interface0 wb_uart_ack_i", false,-1);
        tracep->declBit(c+1476,"or1k_pu wb_interface0 wb_uart_err_i", false,-1);
        tracep->declBit(c+1476,"or1k_pu wb_interface0 wb_uart_rty_i", false,-1);
        tracep->declBus(c+962,"or1k_pu wb_interface0 wb_m2s_or1k_d_mem_adr", false,-1, 31,0);
        tracep->declBus(c+963,"or1k_pu wb_interface0 wb_m2s_or1k_d_mem_dat", false,-1, 31,0);
        tracep->declBus(c+964,"or1k_pu wb_interface0 wb_m2s_or1k_d_mem_sel", false,-1, 3,0);
        tracep->declBit(c+965,"or1k_pu wb_interface0 wb_m2s_or1k_d_mem_we", false,-1);
        tracep->declBit(c+974,"or1k_pu wb_interface0 wb_m2s_or1k_d_mem_cyc", false,-1);
        tracep->declBit(c+966,"or1k_pu wb_interface0 wb_m2s_or1k_d_mem_stb", false,-1);
        tracep->declBus(c+967,"or1k_pu wb_interface0 wb_m2s_or1k_d_mem_cti", false,-1, 2,0);
        tracep->declBus(c+1473,"or1k_pu wb_interface0 wb_m2s_or1k_d_mem_bte", false,-1, 1,0);
        tracep->declBus(c+28,"or1k_pu wb_interface0 wb_s2m_or1k_d_mem_dat", false,-1, 31,0);
        tracep->declBit(c+31,"or1k_pu wb_interface0 wb_s2m_or1k_d_mem_ack", false,-1);
        tracep->declBit(c+1476,"or1k_pu wb_interface0 wb_s2m_or1k_d_mem_err", false,-1);
        tracep->declBit(c+1476,"or1k_pu wb_interface0 wb_s2m_or1k_d_mem_rty", false,-1);
        tracep->declBus(c+22,"or1k_pu wb_interface0 wb_m2s_or1k_i_mem_adr", false,-1, 31,0);
        tracep->declBus(c+1484,"or1k_pu wb_interface0 wb_m2s_or1k_i_mem_dat", false,-1, 31,0);
        tracep->declBus(c+1485,"or1k_pu wb_interface0 wb_m2s_or1k_i_mem_sel", false,-1, 3,0);
        tracep->declBit(c+1476,"or1k_pu wb_interface0 wb_m2s_or1k_i_mem_we", false,-1);
        tracep->declBit(c+32,"or1k_pu wb_interface0 wb_m2s_or1k_i_mem_cyc", false,-1);
        tracep->declBit(c+23,"or1k_pu wb_interface0 wb_m2s_or1k_i_mem_stb", false,-1);
        tracep->declBus(c+507,"or1k_pu wb_interface0 wb_m2s_or1k_i_mem_cti", false,-1, 2,0);
        tracep->declBus(c+1473,"or1k_pu wb_interface0 wb_m2s_or1k_i_mem_bte", false,-1, 1,0);
        tracep->declBus(c+28,"or1k_pu wb_interface0 wb_s2m_or1k_i_mem_dat", false,-1, 31,0);
        tracep->declBit(c+33,"or1k_pu wb_interface0 wb_s2m_or1k_i_mem_ack", false,-1);
        tracep->declBit(c+1476,"or1k_pu wb_interface0 wb_s2m_or1k_i_mem_err", false,-1);
        tracep->declBit(c+1476,"or1k_pu wb_interface0 wb_s2m_or1k_i_mem_rty", false,-1);
        tracep->declBus(c+514,"or1k_pu wb_interface0 wb_m2s_dbg_mem_adr", false,-1, 31,0);
        tracep->declBus(c+515,"or1k_pu wb_interface0 wb_m2s_dbg_mem_dat", false,-1, 31,0);
        tracep->declBus(c+1398,"or1k_pu wb_interface0 wb_m2s_dbg_mem_sel", false,-1, 3,0);
        tracep->declBit(c+516,"or1k_pu wb_interface0 wb_m2s_dbg_mem_we", false,-1);
        tracep->declBit(c+1406,"or1k_pu wb_interface0 wb_m2s_dbg_mem_cyc", false,-1);
        tracep->declBit(c+1335,"or1k_pu wb_interface0 wb_m2s_dbg_mem_stb", false,-1);
        tracep->declBus(c+1477,"or1k_pu wb_interface0 wb_m2s_dbg_mem_cti", false,-1, 2,0);
        tracep->declBus(c+1478,"or1k_pu wb_interface0 wb_m2s_dbg_mem_bte", false,-1, 1,0);
        tracep->declBus(c+28,"or1k_pu wb_interface0 wb_s2m_dbg_mem_dat", false,-1, 31,0);
        tracep->declBit(c+34,"or1k_pu wb_interface0 wb_s2m_dbg_mem_ack", false,-1);
        tracep->declBit(c+1476,"or1k_pu wb_interface0 wb_s2m_dbg_mem_err", false,-1);
        tracep->declBit(c+1476,"or1k_pu wb_interface0 wb_s2m_dbg_mem_rty", false,-1);
        tracep->declBus(c+962,"or1k_pu wb_interface0 wb_m2s_resize_uart_adr", false,-1, 31,0);
        tracep->declBus(c+963,"or1k_pu wb_interface0 wb_m2s_resize_uart_dat", false,-1, 31,0);
        tracep->declBus(c+964,"or1k_pu wb_interface0 wb_m2s_resize_uart_sel", false,-1, 3,0);
        tracep->declBit(c+965,"or1k_pu wb_interface0 wb_m2s_resize_uart_we", false,-1);
        tracep->declBit(c+973,"or1k_pu wb_interface0 wb_m2s_resize_uart_cyc", false,-1);
        tracep->declBit(c+966,"or1k_pu wb_interface0 wb_m2s_resize_uart_stb", false,-1);
        tracep->declBus(c+967,"or1k_pu wb_interface0 wb_m2s_resize_uart_cti", false,-1, 2,0);
        tracep->declBus(c+1473,"or1k_pu wb_interface0 wb_m2s_resize_uart_bte", false,-1, 1,0);
        tracep->declBus(c+1407,"or1k_pu wb_interface0 wb_s2m_resize_uart_dat", false,-1, 31,0);
        tracep->declBit(c+549,"or1k_pu wb_interface0 wb_s2m_resize_uart_ack", false,-1);
        tracep->declBit(c+1476,"or1k_pu wb_interface0 wb_s2m_resize_uart_err", false,-1);
        tracep->declBit(c+1476,"or1k_pu wb_interface0 wb_s2m_resize_uart_rty", false,-1);
        tracep->declBus(c+1471,"or1k_pu wb_interface0 wb_mux_or1k_d DW", false,-1, 31,0);
        tracep->declBus(c+1471,"or1k_pu wb_interface0 wb_mux_or1k_d AW", false,-1, 31,0);
        tracep->declBus(c+1486,"or1k_pu wb_interface0 wb_mux_or1k_d NUM_SLAVES", false,-1, 31,0);
        tracep->declQuad(c+1487,"or1k_pu wb_interface0 wb_mux_or1k_d MATCH_ADDR", false,-1, 63,0);
        tracep->declQuad(c+1489,"or1k_pu wb_interface0 wb_mux_or1k_d MATCH_MASK", false,-1, 63,0);
        tracep->declBit(c+1391,"or1k_pu wb_interface0 wb_mux_or1k_d wb_clk_i", false,-1);
        tracep->declBit(c+1392,"or1k_pu wb_interface0 wb_mux_or1k_d wb_rst_i", false,-1);
        tracep->declBus(c+962,"or1k_pu wb_interface0 wb_mux_or1k_d wbm_adr_i", false,-1, 31,0);
        tracep->declBus(c+963,"or1k_pu wb_interface0 wb_mux_or1k_d wbm_dat_i", false,-1, 31,0);
        tracep->declBus(c+964,"or1k_pu wb_interface0 wb_mux_or1k_d wbm_sel_i", false,-1, 3,0);
        tracep->declBit(c+965,"or1k_pu wb_interface0 wb_mux_or1k_d wbm_we_i", false,-1);
        tracep->declBit(c+966,"or1k_pu wb_interface0 wb_mux_or1k_d wbm_cyc_i", false,-1);
        tracep->declBit(c+966,"or1k_pu wb_interface0 wb_mux_or1k_d wbm_stb_i", false,-1);
        tracep->declBus(c+967,"or1k_pu wb_interface0 wb_mux_or1k_d wbm_cti_i", false,-1, 2,0);
        tracep->declBus(c+1473,"or1k_pu wb_interface0 wb_mux_or1k_d wbm_bte_i", false,-1, 1,0);
        tracep->declBus(c+1182,"or1k_pu wb_interface0 wb_mux_or1k_d wbm_dat_o", false,-1, 31,0);
        tracep->declBit(c+1183,"or1k_pu wb_interface0 wb_mux_or1k_d wbm_ack_o", false,-1);
        tracep->declBit(c+968,"or1k_pu wb_interface0 wb_mux_or1k_d wbm_err_o", false,-1);
        tracep->declBit(c+969,"or1k_pu wb_interface0 wb_mux_or1k_d wbm_rty_o", false,-1);
        tracep->declQuad(c+975,"or1k_pu wb_interface0 wb_mux_or1k_d wbs_adr_o", false,-1, 63,0);
        tracep->declQuad(c+977,"or1k_pu wb_interface0 wb_mux_or1k_d wbs_dat_o", false,-1, 63,0);
        tracep->declBus(c+979,"or1k_pu wb_interface0 wb_mux_or1k_d wbs_sel_o", false,-1, 7,0);
        tracep->declBus(c+980,"or1k_pu wb_interface0 wb_mux_or1k_d wbs_we_o", false,-1, 1,0);
        tracep->declBus(c+981,"or1k_pu wb_interface0 wb_mux_or1k_d wbs_cyc_o", false,-1, 1,0);
        tracep->declBus(c+982,"or1k_pu wb_interface0 wb_mux_or1k_d wbs_stb_o", false,-1, 1,0);
        tracep->declBus(c+983,"or1k_pu wb_interface0 wb_mux_or1k_d wbs_cti_o", false,-1, 5,0);
        tracep->declBus(c+1491,"or1k_pu wb_interface0 wb_mux_or1k_d wbs_bte_o", false,-1, 3,0);
        tracep->declQuad(c+1408,"or1k_pu wb_interface0 wb_mux_or1k_d wbs_dat_i", false,-1, 63,0);
        tracep->declBus(c+1410,"or1k_pu wb_interface0 wb_mux_or1k_d wbs_ack_i", false,-1, 1,0);
        tracep->declBus(c+1478,"or1k_pu wb_interface0 wb_mux_or1k_d wbs_err_i", false,-1, 1,0);
        tracep->declBus(c+1478,"or1k_pu wb_interface0 wb_mux_or1k_d wbs_rty_i", false,-1, 1,0);
        tracep->declBus(c+1492,"or1k_pu wb_interface0 wb_mux_or1k_d SLAVE_SEL_BITS", false,-1, 31,0);
        tracep->declBit(c+35,"or1k_pu wb_interface0 wb_mux_or1k_d wbm_err", false,-1);
        tracep->declBus(c+984,"or1k_pu wb_interface0 wb_mux_or1k_d slave_sel", false,-1, 0,0);
        tracep->declBus(c+985,"or1k_pu wb_interface0 wb_mux_or1k_d match", false,-1, 1,0);
        tracep->declBus(c+1471,"or1k_pu wb_interface0 wb_mux_or1k_i DW", false,-1, 31,0);
        tracep->declBus(c+1471,"or1k_pu wb_interface0 wb_mux_or1k_i AW", false,-1, 31,0);
        tracep->declBus(c+1492,"or1k_pu wb_interface0 wb_mux_or1k_i NUM_SLAVES", false,-1, 31,0);
        tracep->declBus(c+1474,"or1k_pu wb_interface0 wb_mux_or1k_i MATCH_ADDR", false,-1, 31,0);
        tracep->declBus(c+1493,"or1k_pu wb_interface0 wb_mux_or1k_i MATCH_MASK", false,-1, 31,0);
        tracep->declBit(c+1391,"or1k_pu wb_interface0 wb_mux_or1k_i wb_clk_i", false,-1);
        tracep->declBit(c+1392,"or1k_pu wb_interface0 wb_mux_or1k_i wb_rst_i", false,-1);
        tracep->declBus(c+22,"or1k_pu wb_interface0 wb_mux_or1k_i wbm_adr_i", false,-1, 31,0);
        tracep->declBus(c+1474,"or1k_pu wb_interface0 wb_mux_or1k_i wbm_dat_i", false,-1, 31,0);
        tracep->declBus(c+1475,"or1k_pu wb_interface0 wb_mux_or1k_i wbm_sel_i", false,-1, 3,0);
        tracep->declBit(c+1476,"or1k_pu wb_interface0 wb_mux_or1k_i wbm_we_i", false,-1);
        tracep->declBit(c+23,"or1k_pu wb_interface0 wb_mux_or1k_i wbm_cyc_i", false,-1);
        tracep->declBit(c+23,"or1k_pu wb_interface0 wb_mux_or1k_i wbm_stb_i", false,-1);
        tracep->declBus(c+507,"or1k_pu wb_interface0 wb_mux_or1k_i wbm_cti_i", false,-1, 2,0);
        tracep->declBus(c+1473,"or1k_pu wb_interface0 wb_mux_or1k_i wbm_bte_i", false,-1, 1,0);
        tracep->declBus(c+24,"or1k_pu wb_interface0 wb_mux_or1k_i wbm_dat_o", false,-1, 31,0);
        tracep->declBit(c+25,"or1k_pu wb_interface0 wb_mux_or1k_i wbm_ack_o", false,-1);
        tracep->declBit(c+970,"or1k_pu wb_interface0 wb_mux_or1k_i wbm_err_o", false,-1);
        tracep->declBit(c+26,"or1k_pu wb_interface0 wb_mux_or1k_i wbm_rty_o", false,-1);
        tracep->declBus(c+22,"or1k_pu wb_interface0 wb_mux_or1k_i wbs_adr_o", false,-1, 31,0);
        tracep->declBus(c+1484,"or1k_pu wb_interface0 wb_mux_or1k_i wbs_dat_o", false,-1, 31,0);
        tracep->declBus(c+1485,"or1k_pu wb_interface0 wb_mux_or1k_i wbs_sel_o", false,-1, 3,0);
        tracep->declBus(c+1476,"or1k_pu wb_interface0 wb_mux_or1k_i wbs_we_o", false,-1, 0,0);
        tracep->declBus(c+32,"or1k_pu wb_interface0 wb_mux_or1k_i wbs_cyc_o", false,-1, 0,0);
        tracep->declBus(c+23,"or1k_pu wb_interface0 wb_mux_or1k_i wbs_stb_o", false,-1, 0,0);
        tracep->declBus(c+507,"or1k_pu wb_interface0 wb_mux_or1k_i wbs_cti_o", false,-1, 2,0);
        tracep->declBus(c+1473,"or1k_pu wb_interface0 wb_mux_or1k_i wbs_bte_o", false,-1, 1,0);
        tracep->declBus(c+28,"or1k_pu wb_interface0 wb_mux_or1k_i wbs_dat_i", false,-1, 31,0);
        tracep->declBus(c+33,"or1k_pu wb_interface0 wb_mux_or1k_i wbs_ack_i", false,-1, 0,0);
        tracep->declBus(c+1476,"or1k_pu wb_interface0 wb_mux_or1k_i wbs_err_i", false,-1, 0,0);
        tracep->declBus(c+1476,"or1k_pu wb_interface0 wb_mux_or1k_i wbs_rty_i", false,-1, 0,0);
        tracep->declBus(c+1492,"or1k_pu wb_interface0 wb_mux_or1k_i SLAVE_SEL_BITS", false,-1, 31,0);
        tracep->declBit(c+36,"or1k_pu wb_interface0 wb_mux_or1k_i wbm_err", false,-1);
        tracep->declBus(c+37,"or1k_pu wb_interface0 wb_mux_or1k_i slave_sel", false,-1, 0,0);
        tracep->declBus(c+38,"or1k_pu wb_interface0 wb_mux_or1k_i match", false,-1, 0,0);
        tracep->declBus(c+1471,"or1k_pu wb_interface0 wb_mux_dbg DW", false,-1, 31,0);
        tracep->declBus(c+1471,"or1k_pu wb_interface0 wb_mux_dbg AW", false,-1, 31,0);
        tracep->declBus(c+1492,"or1k_pu wb_interface0 wb_mux_dbg NUM_SLAVES", false,-1, 31,0);
        tracep->declBus(c+1474,"or1k_pu wb_interface0 wb_mux_dbg MATCH_ADDR", false,-1, 31,0);
        tracep->declBus(c+1493,"or1k_pu wb_interface0 wb_mux_dbg MATCH_MASK", false,-1, 31,0);
        tracep->declBit(c+1391,"or1k_pu wb_interface0 wb_mux_dbg wb_clk_i", false,-1);
        tracep->declBit(c+1392,"or1k_pu wb_interface0 wb_mux_dbg wb_rst_i", false,-1);
        tracep->declBus(c+514,"or1k_pu wb_interface0 wb_mux_dbg wbm_adr_i", false,-1, 31,0);
        tracep->declBus(c+515,"or1k_pu wb_interface0 wb_mux_dbg wbm_dat_i", false,-1, 31,0);
        tracep->declBus(c+1398,"or1k_pu wb_interface0 wb_mux_dbg wbm_sel_i", false,-1, 3,0);
        tracep->declBit(c+516,"or1k_pu wb_interface0 wb_mux_dbg wbm_we_i", false,-1);
        tracep->declBit(c+1334,"or1k_pu wb_interface0 wb_mux_dbg wbm_cyc_i", false,-1);
        tracep->declBit(c+1335,"or1k_pu wb_interface0 wb_mux_dbg wbm_stb_i", false,-1);
        tracep->declBus(c+1477,"or1k_pu wb_interface0 wb_mux_dbg wbm_cti_i", false,-1, 2,0);
        tracep->declBus(c+1478,"or1k_pu wb_interface0 wb_mux_dbg wbm_bte_i", false,-1, 1,0);
        tracep->declBus(c+1336,"or1k_pu wb_interface0 wb_mux_dbg wbm_dat_o", false,-1, 31,0);
        tracep->declBit(c+1399,"or1k_pu wb_interface0 wb_mux_dbg wbm_ack_o", false,-1);
        tracep->declBit(c+1337,"or1k_pu wb_interface0 wb_mux_dbg wbm_err_o", false,-1);
        tracep->declBit(c+517,"or1k_pu wb_interface0 wb_mux_dbg wbm_rty_o", false,-1);
        tracep->declBus(c+514,"or1k_pu wb_interface0 wb_mux_dbg wbs_adr_o", false,-1, 31,0);
        tracep->declBus(c+515,"or1k_pu wb_interface0 wb_mux_dbg wbs_dat_o", false,-1, 31,0);
        tracep->declBus(c+1398,"or1k_pu wb_interface0 wb_mux_dbg wbs_sel_o", false,-1, 3,0);
        tracep->declBus(c+516,"or1k_pu wb_interface0 wb_mux_dbg wbs_we_o", false,-1, 0,0);
        tracep->declBus(c+1406,"or1k_pu wb_interface0 wb_mux_dbg wbs_cyc_o", false,-1, 0,0);
        tracep->declBus(c+1335,"or1k_pu wb_interface0 wb_mux_dbg wbs_stb_o", false,-1, 0,0);
        tracep->declBus(c+1477,"or1k_pu wb_interface0 wb_mux_dbg wbs_cti_o", false,-1, 2,0);
        tracep->declBus(c+1478,"or1k_pu wb_interface0 wb_mux_dbg wbs_bte_o", false,-1, 1,0);
        tracep->declBus(c+28,"or1k_pu wb_interface0 wb_mux_dbg wbs_dat_i", false,-1, 31,0);
        tracep->declBus(c+34,"or1k_pu wb_interface0 wb_mux_dbg wbs_ack_i", false,-1, 0,0);
        tracep->declBus(c+1476,"or1k_pu wb_interface0 wb_mux_dbg wbs_err_i", false,-1, 0,0);
        tracep->declBus(c+1476,"or1k_pu wb_interface0 wb_mux_dbg wbs_rty_i", false,-1, 0,0);
        tracep->declBus(c+1492,"or1k_pu wb_interface0 wb_mux_dbg SLAVE_SEL_BITS", false,-1, 31,0);
        tracep->declBit(c+39,"or1k_pu wb_interface0 wb_mux_dbg wbm_err", false,-1);
        tracep->declBus(c+518,"or1k_pu wb_interface0 wb_mux_dbg slave_sel", false,-1, 0,0);
        tracep->declBus(c+519,"or1k_pu wb_interface0 wb_mux_dbg match", false,-1, 0,0);
        tracep->declBus(c+1471,"or1k_pu wb_interface0 wb_arbiter_mem DW", false,-1, 31,0);
        tracep->declBus(c+1471,"or1k_pu wb_interface0 wb_arbiter_mem AW", false,-1, 31,0);
        tracep->declBus(c+1494,"or1k_pu wb_interface0 wb_arbiter_mem NUM_MASTERS", false,-1, 31,0);
        tracep->declBit(c+1391,"or1k_pu wb_interface0 wb_arbiter_mem wb_clk_i", false,-1);
        tracep->declBit(c+1392,"or1k_pu wb_interface0 wb_arbiter_mem wb_rst_i", false,-1);
        tracep->declArray(c+478,"or1k_pu wb_interface0 wb_arbiter_mem wbm_adr_i", false,-1, 95,0);
        tracep->declArray(c+1411,"or1k_pu wb_interface0 wb_arbiter_mem wbm_dat_i", false,-1, 95,0);
        tracep->declBus(c+1414,"or1k_pu wb_interface0 wb_arbiter_mem wbm_sel_i", false,-1, 11,0);
        tracep->declBus(c+1415,"or1k_pu wb_interface0 wb_arbiter_mem wbm_we_i", false,-1, 2,0);
        tracep->declBus(c+1338,"or1k_pu wb_interface0 wb_arbiter_mem wbm_cyc_i", false,-1, 2,0);
        tracep->declBus(c+1416,"or1k_pu wb_interface0 wb_arbiter_mem wbm_stb_i", false,-1, 2,0);
        tracep->declBus(c+1417,"or1k_pu wb_interface0 wb_arbiter_mem wbm_cti_i", false,-1, 8,0);
        tracep->declBus(c+1495,"or1k_pu wb_interface0 wb_arbiter_mem wbm_bte_i", false,-1, 5,0);
        tracep->declArray(c+40,"or1k_pu wb_interface0 wb_arbiter_mem wbm_dat_o", false,-1, 95,0);
        tracep->declBus(c+43,"or1k_pu wb_interface0 wb_arbiter_mem wbm_ack_o", false,-1, 2,0);
        tracep->declBus(c+1477,"or1k_pu wb_interface0 wb_arbiter_mem wbm_err_o", false,-1, 2,0);
        tracep->declBus(c+1477,"or1k_pu wb_interface0 wb_arbiter_mem wbm_rty_o", false,-1, 2,0);
        tracep->declBus(c+475,"or1k_pu wb_interface0 wb_arbiter_mem wbs_adr_o", false,-1, 31,0);
        tracep->declBus(c+476,"or1k_pu wb_interface0 wb_arbiter_mem wbs_dat_o", false,-1, 31,0);
        tracep->declBus(c+1400,"or1k_pu wb_interface0 wb_arbiter_mem wbs_sel_o", false,-1, 3,0);
        tracep->declBit(c+477,"or1k_pu wb_interface0 wb_arbiter_mem wbs_we_o", false,-1);
        tracep->declBit(c+1401,"or1k_pu wb_interface0 wb_arbiter_mem wbs_cyc_o", false,-1);
        tracep->declBit(c+1402,"or1k_pu wb_interface0 wb_arbiter_mem wbs_stb_o", false,-1);
        tracep->declBus(c+1228,"or1k_pu wb_interface0 wb_arbiter_mem wbs_cti_o", false,-1, 2,0);
        tracep->declBus(c+27,"or1k_pu wb_interface0 wb_arbiter_mem wbs_bte_o", false,-1, 1,0);
        tracep->declBus(c+28,"or1k_pu wb_interface0 wb_arbiter_mem wbs_dat_i", false,-1, 31,0);
        tracep->declBit(c+29,"or1k_pu wb_interface0 wb_arbiter_mem wbs_ack_i", false,-1);
        tracep->declBit(c+1476,"or1k_pu wb_interface0 wb_arbiter_mem wbs_err_i", false,-1);
        tracep->declBit(c+1476,"or1k_pu wb_interface0 wb_arbiter_mem wbs_rty_i", false,-1);
        tracep->declBus(c+1486,"or1k_pu wb_interface0 wb_arbiter_mem MASTER_SEL_BITS", false,-1, 31,0);
        tracep->declBus(c+44,"or1k_pu wb_interface0 wb_arbiter_mem grant", false,-1, 2,0);
        tracep->declBus(c+45,"or1k_pu wb_interface0 wb_arbiter_mem master_sel", false,-1, 1,0);
        tracep->declBit(c+46,"or1k_pu wb_interface0 wb_arbiter_mem active", false,-1);
        tracep->declBus(c+1494,"or1k_pu wb_interface0 wb_arbiter_mem arbiter0 NUM_PORTS", false,-1, 31,0);
        tracep->declBit(c+1391,"or1k_pu wb_interface0 wb_arbiter_mem arbiter0 clk", false,-1);
        tracep->declBit(c+1392,"or1k_pu wb_interface0 wb_arbiter_mem arbiter0 rst", false,-1);
        tracep->declBus(c+1338,"or1k_pu wb_interface0 wb_arbiter_mem arbiter0 request", false,-1, 2,0);
        tracep->declBus(c+44,"or1k_pu wb_interface0 wb_arbiter_mem arbiter0 grant", false,-1, 2,0);
        tracep->declBus(c+45,"or1k_pu wb_interface0 wb_arbiter_mem arbiter0 selection", false,-1, 1,0);
        tracep->declBit(c+46,"or1k_pu wb_interface0 wb_arbiter_mem arbiter0 active", false,-1);
        tracep->declBus(c+1496,"or1k_pu wb_interface0 wb_arbiter_mem arbiter0 WRAP_LENGTH", false,-1, 31,0);
        tracep->declBus(c+47,"or1k_pu wb_interface0 wb_arbiter_mem arbiter0 yy", false,-1, 31,0);
        tracep->declBit(c+1339,"or1k_pu wb_interface0 wb_arbiter_mem arbiter0 next", false,-1);
        tracep->declBus(c+1340,"or1k_pu wb_interface0 wb_arbiter_mem arbiter0 order", false,-1, 2,0);
        tracep->declBus(c+48,"or1k_pu wb_interface0 wb_arbiter_mem arbiter0 token", false,-1, 2,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+49+i*1,"or1k_pu wb_interface0 wb_arbiter_mem arbiter0 token_lookahead", true,(i+0), 2,0);}}
        tracep->declBus(c+52,"or1k_pu wb_interface0 wb_arbiter_mem arbiter0 token_wrap", false,-1, 5,0);
        tracep->declBus(c+1471,"or1k_pu wb_interface0 wb_data_resize_uart AW", false,-1, 31,0);
        tracep->declBus(c+1471,"or1k_pu wb_interface0 wb_data_resize_uart MDW", false,-1, 31,0);
        tracep->declBus(c+1497,"or1k_pu wb_interface0 wb_data_resize_uart SDW", false,-1, 31,0);
        tracep->declBus(c+962,"or1k_pu wb_interface0 wb_data_resize_uart wbm_adr_i", false,-1, 31,0);
        tracep->declBus(c+963,"or1k_pu wb_interface0 wb_data_resize_uart wbm_dat_i", false,-1, 31,0);
        tracep->declBus(c+964,"or1k_pu wb_interface0 wb_data_resize_uart wbm_sel_i", false,-1, 3,0);
        tracep->declBit(c+965,"or1k_pu wb_interface0 wb_data_resize_uart wbm_we_i", false,-1);
        tracep->declBit(c+973,"or1k_pu wb_interface0 wb_data_resize_uart wbm_cyc_i", false,-1);
        tracep->declBit(c+966,"or1k_pu wb_interface0 wb_data_resize_uart wbm_stb_i", false,-1);
        tracep->declBus(c+967,"or1k_pu wb_interface0 wb_data_resize_uart wbm_cti_i", false,-1, 2,0);
        tracep->declBus(c+1473,"or1k_pu wb_interface0 wb_data_resize_uart wbm_bte_i", false,-1, 1,0);
        tracep->declBus(c+1407,"or1k_pu wb_interface0 wb_data_resize_uart wbm_dat_o", false,-1, 31,0);
        tracep->declBit(c+549,"or1k_pu wb_interface0 wb_data_resize_uart wbm_ack_o", false,-1);
        tracep->declBit(c+1476,"or1k_pu wb_interface0 wb_data_resize_uart wbm_err_o", false,-1);
        tracep->declBit(c+1476,"or1k_pu wb_interface0 wb_data_resize_uart wbm_rty_o", false,-1);
        tracep->declBus(c+971,"or1k_pu wb_interface0 wb_data_resize_uart wbs_adr_o", false,-1, 31,0);
        tracep->declBus(c+972,"or1k_pu wb_interface0 wb_data_resize_uart wbs_dat_o", false,-1, 7,0);
        tracep->declBit(c+965,"or1k_pu wb_interface0 wb_data_resize_uart wbs_we_o", false,-1);
        tracep->declBit(c+973,"or1k_pu wb_interface0 wb_data_resize_uart wbs_cyc_o", false,-1);
        tracep->declBit(c+966,"or1k_pu wb_interface0 wb_data_resize_uart wbs_stb_o", false,-1);
        tracep->declBus(c+967,"or1k_pu wb_interface0 wb_data_resize_uart wbs_cti_o", false,-1, 2,0);
        tracep->declBus(c+1473,"or1k_pu wb_interface0 wb_data_resize_uart wbs_bte_o", false,-1, 1,0);
        tracep->declBus(c+548,"or1k_pu wb_interface0 wb_data_resize_uart wbs_dat_i", false,-1, 7,0);
        tracep->declBit(c+549,"or1k_pu wb_interface0 wb_data_resize_uart wbs_ack_i", false,-1);
        tracep->declBit(c+1476,"or1k_pu wb_interface0 wb_data_resize_uart wbs_err_i", false,-1);
        tracep->declBit(c+1476,"or1k_pu wb_interface0 wb_data_resize_uart wbs_rty_i", false,-1);
        tracep->declBus(c+1498,"or1k_pu jtag_tap0 IDCODE_VALUE", false,-1, 31,0);
        tracep->declBus(c+1499,"or1k_pu jtag_tap0 IR_LENGTH", false,-1, 31,0);
        tracep->declBit(c+1394,"or1k_pu jtag_tap0 tms_pad_i", false,-1);
        tracep->declBit(c+1395,"or1k_pu jtag_tap0 tck_pad_i", false,-1);
        tracep->declBit(c+1392,"or1k_pu jtag_tap0 trst_pad_i", false,-1);
        tracep->declBit(c+1396,"or1k_pu jtag_tap0 tdi_pad_i", false,-1);
        tracep->declBit(c+1397,"or1k_pu jtag_tap0 tdo_pad_o", false,-1);
        tracep->declBit(c+534,"or1k_pu jtag_tap0 tdo_padoe_o", false,-1);
        tracep->declBit(c+763,"or1k_pu jtag_tap0 shift_dr_o", false,-1);
        tracep->declBit(c+764,"or1k_pu jtag_tap0 pause_dr_o", false,-1);
        tracep->declBit(c+765,"or1k_pu jtag_tap0 update_dr_o", false,-1);
        tracep->declBit(c+766,"or1k_pu jtag_tap0 capture_dr_o", false,-1);
        tracep->declBit(c+770,"or1k_pu jtag_tap0 extest_select_o", false,-1);
        tracep->declBit(c+771,"or1k_pu jtag_tap0 sample_preload_select_o", false,-1);
        tracep->declBit(c+772,"or1k_pu jtag_tap0 mbist_select_o", false,-1);
        tracep->declBit(c+762,"or1k_pu jtag_tap0 debug_select_o", false,-1);
        tracep->declBit(c+1396,"or1k_pu jtag_tap0 tdo_o", false,-1);
        tracep->declBit(c+1403,"or1k_pu jtag_tap0 debug_tdi_i", false,-1);
        tracep->declBit(c+1476,"or1k_pu jtag_tap0 bs_chain_tdi_i", false,-1);
        tracep->declBit(c+1476,"or1k_pu jtag_tap0 mbist_tdi_i", false,-1);
        tracep->declBus(c+1500,"or1k_pu jtag_tap0 EXTEST", false,-1, 3,0);
        tracep->declBus(c+1501,"or1k_pu jtag_tap0 SAMPLE_PRELOAD", false,-1, 3,0);
        tracep->declBus(c+1502,"or1k_pu jtag_tap0 IDCODE", false,-1, 3,0);
        tracep->declBus(c+1503,"or1k_pu jtag_tap0 DEBUG", false,-1, 3,0);
        tracep->declBus(c+1504,"or1k_pu jtag_tap0 MBIST", false,-1, 3,0);
        tracep->declBus(c+1475,"or1k_pu jtag_tap0 BYPASS", false,-1, 3,0);
        tracep->declBit(c+773,"or1k_pu jtag_tap0 test_logic_reset", false,-1);
        tracep->declBit(c+774,"or1k_pu jtag_tap0 run_test_idle", false,-1);
        tracep->declBit(c+775,"or1k_pu jtag_tap0 select_dr_scan", false,-1);
        tracep->declBit(c+766,"or1k_pu jtag_tap0 capture_dr", false,-1);
        tracep->declBit(c+763,"or1k_pu jtag_tap0 shift_dr", false,-1);
        tracep->declBit(c+776,"or1k_pu jtag_tap0 exit1_dr", false,-1);
        tracep->declBit(c+764,"or1k_pu jtag_tap0 pause_dr", false,-1);
        tracep->declBit(c+777,"or1k_pu jtag_tap0 exit2_dr", false,-1);
        tracep->declBit(c+765,"or1k_pu jtag_tap0 update_dr", false,-1);
        tracep->declBit(c+778,"or1k_pu jtag_tap0 select_ir_scan", false,-1);
        tracep->declBit(c+779,"or1k_pu jtag_tap0 capture_ir", false,-1);
        tracep->declBit(c+780,"or1k_pu jtag_tap0 shift_ir", false,-1);
        tracep->declBit(c+535,"or1k_pu jtag_tap0 shift_ir_neg", false,-1);
        tracep->declBit(c+781,"or1k_pu jtag_tap0 exit1_ir", false,-1);
        tracep->declBit(c+782,"or1k_pu jtag_tap0 pause_ir", false,-1);
        tracep->declBit(c+783,"or1k_pu jtag_tap0 exit2_ir", false,-1);
        tracep->declBit(c+784,"or1k_pu jtag_tap0 update_ir", false,-1);
        tracep->declBit(c+770,"or1k_pu jtag_tap0 extest_select", false,-1);
        tracep->declBit(c+771,"or1k_pu jtag_tap0 sample_preload_select", false,-1);
        tracep->declBit(c+785,"or1k_pu jtag_tap0 idcode_select", false,-1);
        tracep->declBit(c+772,"or1k_pu jtag_tap0 mbist_select", false,-1);
        tracep->declBit(c+762,"or1k_pu jtag_tap0 debug_select", false,-1);
        tracep->declBit(c+786,"or1k_pu jtag_tap0 bypass_select", false,-1);
        tracep->declBit(c+529,"or1k_pu jtag_tap0 tms_q1", false,-1);
        tracep->declBit(c+530,"or1k_pu jtag_tap0 tms_q2", false,-1);
        tracep->declBit(c+531,"or1k_pu jtag_tap0 tms_q3", false,-1);
        tracep->declBit(c+532,"or1k_pu jtag_tap0 tms_q4", false,-1);
        tracep->declBit(c+942,"or1k_pu jtag_tap0 tms_reset", false,-1);
        tracep->declBus(c+787,"or1k_pu jtag_tap0 jtag_ir", false,-1, 3,0);
        tracep->declBus(c+788,"or1k_pu jtag_tap0 latched_jtag_ir", false,-1, 3,0);
        tracep->declBus(c+536,"or1k_pu jtag_tap0 latched_jtag_ir_neg", false,-1, 3,0);
        tracep->declBit(c+537,"or1k_pu jtag_tap0 instruction_tdo", false,-1);
        tracep->declBus(c+533,"or1k_pu jtag_tap0 idcode_reg", false,-1, 31,0);
        tracep->declBit(c+538,"or1k_pu jtag_tap0 idcode_tdo", false,-1);
        tracep->declBit(c+539,"or1k_pu jtag_tap0 bypassed_tdo", false,-1);
        tracep->declBit(c+789,"or1k_pu jtag_tap0 bypass_reg", false,-1);
        tracep->declQuad(c+1505,"or1k_pu dbg_if0 DBG_WISHBONE_SUPPORTED", false,-1, 55,0);
        tracep->declQuad(c+1505,"or1k_pu dbg_if0 DBG_CPU0_SUPPORTED", false,-1, 55,0);
        tracep->declBus(c+1507,"or1k_pu dbg_if0 DBG_CPU1_SUPPORTED", false,-1, 31,0);
        tracep->declQuad(c+1505,"or1k_pu dbg_if0 DBG_JSP_SUPPORTED", false,-1, 55,0);
        tracep->declQuad(c+1505,"or1k_pu dbg_if0 ADBG_JSP_SUPPORT_MULTI", false,-1, 55,0);
        tracep->declQuad(c+1505,"or1k_pu dbg_if0 ADBG_USE_HISPEED", false,-1, 55,0);
        tracep->declBit(c+1395,"or1k_pu dbg_if0 tck_i", false,-1);
        tracep->declBit(c+1396,"or1k_pu dbg_if0 tdi_i", false,-1);
        tracep->declBit(c+1403,"or1k_pu dbg_if0 tdo_o", false,-1);
        tracep->declBit(c+1392,"or1k_pu dbg_if0 rst_i", false,-1);
        tracep->declBit(c+763,"or1k_pu dbg_if0 shift_dr_i", false,-1);
        tracep->declBit(c+764,"or1k_pu dbg_if0 pause_dr_i", false,-1);
        tracep->declBit(c+765,"or1k_pu dbg_if0 update_dr_i", false,-1);
        tracep->declBit(c+766,"or1k_pu dbg_if0 capture_dr_i", false,-1);
        tracep->declBit(c+762,"or1k_pu dbg_if0 debug_select_i", false,-1);
        tracep->declBit(c+1391,"or1k_pu dbg_if0 wb_clk_i", false,-1);
        tracep->declBit(c+1508,"or1k_pu dbg_if0 wb_rst_i", false,-1);
        tracep->declBus(c+514,"or1k_pu dbg_if0 wb_adr_o", false,-1, 31,0);
        tracep->declBus(c+515,"or1k_pu dbg_if0 wb_dat_o", false,-1, 31,0);
        tracep->declBus(c+1336,"or1k_pu dbg_if0 wb_dat_i", false,-1, 31,0);
        tracep->declBit(c+1334,"or1k_pu dbg_if0 wb_cyc_o", false,-1);
        tracep->declBit(c+1335,"or1k_pu dbg_if0 wb_stb_o", false,-1);
        tracep->declBus(c+1398,"or1k_pu dbg_if0 wb_sel_o", false,-1, 3,0);
        tracep->declBit(c+516,"or1k_pu dbg_if0 wb_we_o", false,-1);
        tracep->declBit(c+1399,"or1k_pu dbg_if0 wb_ack_i", false,-1);
        tracep->declBit(c+1476,"or1k_pu dbg_if0 wb_cab_o", false,-1);
        tracep->declBit(c+1337,"or1k_pu dbg_if0 wb_err_i", false,-1);
        tracep->declBus(c+1477,"or1k_pu dbg_if0 wb_cti_o", false,-1, 2,0);
        tracep->declBus(c+1478,"or1k_pu dbg_if0 wb_bte_o", false,-1, 1,0);
        tracep->declBit(c+1391,"or1k_pu dbg_if0 cpu0_clk_i", false,-1);
        tracep->declBus(c+767,"or1k_pu dbg_if0 cpu0_addr_o", false,-1, 31,0);
        tracep->declBus(c+1404,"or1k_pu dbg_if0 cpu0_data_i", false,-1, 31,0);
        tracep->declBus(c+768,"or1k_pu dbg_if0 cpu0_data_o", false,-1, 31,0);
        tracep->declBit(c+1405,"or1k_pu dbg_if0 cpu0_bp_i", false,-1);
        tracep->declBit(c+1384,"or1k_pu dbg_if0 cpu0_stall_o", false,-1);
        tracep->declBit(c+1229,"or1k_pu dbg_if0 cpu0_stb_o", false,-1);
        tracep->declBit(c+769,"or1k_pu dbg_if0 cpu0_we_o", false,-1);
        tracep->declBit(c+30,"or1k_pu dbg_if0 cpu0_ack_i", false,-1);
        tracep->declBit(c+550,"or1k_pu dbg_if0 cpu0_rst_o", false,-1);
        tracep->declBit(c+1509,"or1k_pu dbg_if0 cpu1_clk_i", false,-1);
        tracep->declBus(c+1510,"or1k_pu dbg_if0 cpu1_addr_o", false,-1, 31,0);
        tracep->declBus(c+1511,"or1k_pu dbg_if0 cpu1_data_i", false,-1, 31,0);
        tracep->declBus(c+1512,"or1k_pu dbg_if0 cpu1_data_o", false,-1, 31,0);
        tracep->declBit(c+1513,"or1k_pu dbg_if0 cpu1_bp_i", false,-1);
        tracep->declBit(c+1514,"or1k_pu dbg_if0 cpu1_stall_o", false,-1);
        tracep->declBit(c+1515,"or1k_pu dbg_if0 cpu1_stb_o", false,-1);
        tracep->declBit(c+1516,"or1k_pu dbg_if0 cpu1_we_o", false,-1);
        tracep->declBit(c+1517,"or1k_pu dbg_if0 cpu1_ack_i", false,-1);
        tracep->declBit(c+1518,"or1k_pu dbg_if0 cpu1_rst_o", false,-1);
        tracep->declBus(c+1519,"or1k_pu dbg_if0 wb_jsp_adr_i", false,-1, 31,0);
        tracep->declBus(c+1418,"or1k_pu dbg_if0 wb_jsp_dat_o", false,-1, 31,0);
        tracep->declBus(c+1520,"or1k_pu dbg_if0 wb_jsp_dat_i", false,-1, 31,0);
        tracep->declBit(c+1521,"or1k_pu dbg_if0 wb_jsp_cyc_i", false,-1);
        tracep->declBit(c+1522,"or1k_pu dbg_if0 wb_jsp_stb_i", false,-1);
        tracep->declBus(c+1523,"or1k_pu dbg_if0 wb_jsp_sel_i", false,-1, 3,0);
        tracep->declBit(c+1524,"or1k_pu dbg_if0 wb_jsp_we_i", false,-1);
        tracep->declBit(c+1419,"or1k_pu dbg_if0 wb_jsp_ack_o", false,-1);
        tracep->declBit(c+1525,"or1k_pu dbg_if0 wb_jsp_cab_i", false,-1);
        tracep->declBit(c+1476,"or1k_pu dbg_if0 wb_jsp_err_o", false,-1);
        tracep->declBus(c+1526,"or1k_pu dbg_if0 wb_jsp_cti_i", false,-1, 2,0);
        tracep->declBus(c+1527,"or1k_pu dbg_if0 wb_jsp_bte_i", false,-1, 1,0);
        tracep->declBit(c+1420,"or1k_pu dbg_if0 int_o", false,-1);
        tracep->declBit(c+1421,"or1k_pu dbg_if0 tdo_wb", false,-1);
        tracep->declBit(c+790,"or1k_pu dbg_if0 tdo_cpu0", false,-1);
        tracep->declBit(c+1476,"or1k_pu dbg_if0 tdo_cpu1", false,-1);
        tracep->declBit(c+791,"or1k_pu dbg_if0 tdo_jsp", false,-1);
        tracep->declQuad(c+792,"or1k_pu dbg_if0 input_shift_reg", false,-1, 52,0);
        tracep->declBus(c+794,"or1k_pu dbg_if0 module_id_reg", false,-1, 1,0);
        tracep->declBit(c+795,"or1k_pu dbg_if0 select_cmd", false,-1);
        tracep->declBus(c+796,"or1k_pu dbg_if0 module_id_in", false,-1, 1,0);
        tracep->declBus(c+797,"or1k_pu dbg_if0 module_selects", false,-1, 3,0);
        tracep->declBit(c+798,"or1k_pu dbg_if0 select_inhibit", false,-1);
        tracep->declBus(c+799,"or1k_pu dbg_if0 module_inhibit", false,-1, 3,0);
        tracep->declQuad(c+1505,"or1k_pu dbg_if0 wb i_dbg_wb ADBG_USE_HISPEED", false,-1, 55,0);
        tracep->declBit(c+1395,"or1k_pu dbg_if0 wb i_dbg_wb tck_i", false,-1);
        tracep->declBit(c+1421,"or1k_pu dbg_if0 wb i_dbg_wb module_tdo_o", false,-1);
        tracep->declBit(c+1396,"or1k_pu dbg_if0 wb i_dbg_wb tdi_i", false,-1);
        tracep->declBit(c+766,"or1k_pu dbg_if0 wb i_dbg_wb capture_dr_i", false,-1);
        tracep->declBit(c+763,"or1k_pu dbg_if0 wb i_dbg_wb shift_dr_i", false,-1);
        tracep->declBit(c+765,"or1k_pu dbg_if0 wb i_dbg_wb update_dr_i", false,-1);
        tracep->declQuad(c+792,"or1k_pu dbg_if0 wb i_dbg_wb data_register_i", false,-1, 52,0);
        tracep->declBit(c+800,"or1k_pu dbg_if0 wb i_dbg_wb module_select_i", false,-1);
        tracep->declBit(c+801,"or1k_pu dbg_if0 wb i_dbg_wb top_inhibit_o", false,-1);
        tracep->declBit(c+1392,"or1k_pu dbg_if0 wb i_dbg_wb rst_i", false,-1);
        tracep->declBit(c+1391,"or1k_pu dbg_if0 wb i_dbg_wb wb_clk_i", false,-1);
        tracep->declBus(c+514,"or1k_pu dbg_if0 wb i_dbg_wb wb_adr_o", false,-1, 31,0);
        tracep->declBus(c+515,"or1k_pu dbg_if0 wb i_dbg_wb wb_dat_o", false,-1, 31,0);
        tracep->declBus(c+1336,"or1k_pu dbg_if0 wb i_dbg_wb wb_dat_i", false,-1, 31,0);
        tracep->declBit(c+1334,"or1k_pu dbg_if0 wb i_dbg_wb wb_cyc_o", false,-1);
        tracep->declBit(c+1335,"or1k_pu dbg_if0 wb i_dbg_wb wb_stb_o", false,-1);
        tracep->declBus(c+1398,"or1k_pu dbg_if0 wb i_dbg_wb wb_sel_o", false,-1, 3,0);
        tracep->declBit(c+516,"or1k_pu dbg_if0 wb i_dbg_wb wb_we_o", false,-1);
        tracep->declBit(c+1399,"or1k_pu dbg_if0 wb i_dbg_wb wb_ack_i", false,-1);
        tracep->declBit(c+1476,"or1k_pu dbg_if0 wb i_dbg_wb wb_cab_o", false,-1);
        tracep->declBit(c+1337,"or1k_pu dbg_if0 wb i_dbg_wb wb_err_i", false,-1);
        tracep->declBus(c+1477,"or1k_pu dbg_if0 wb i_dbg_wb wb_cti_o", false,-1, 2,0);
        tracep->declBus(c+1478,"or1k_pu dbg_if0 wb i_dbg_wb wb_bte_o", false,-1, 1,0);
        tracep->declBus(c+802,"or1k_pu dbg_if0 wb i_dbg_wb address_counter", false,-1, 31,0);
        tracep->declBus(c+803,"or1k_pu dbg_if0 wb i_dbg_wb bit_count", false,-1, 5,0);
        tracep->declBus(c+804,"or1k_pu dbg_if0 wb i_dbg_wb word_count", false,-1, 15,0);
        tracep->declBus(c+805,"or1k_pu dbg_if0 wb i_dbg_wb operation", false,-1, 3,0);
        tracep->declQuad(c+806,"or1k_pu dbg_if0 wb i_dbg_wb data_out_shift_reg", false,-1, 32,0);
        tracep->declQuad(c+808,"or1k_pu dbg_if0 wb i_dbg_wb internal_reg_error", false,-1, 32,0);
        tracep->declBus(c+810,"or1k_pu dbg_if0 wb i_dbg_wb internal_register_select", false,-1, 0,0);
        tracep->declBit(c+1367,"or1k_pu dbg_if0 wb i_dbg_wb addr_sel", false,-1);
        tracep->declBit(c+1368,"or1k_pu dbg_if0 wb i_dbg_wb addr_ct_en", false,-1);
        tracep->declBit(c+1369,"or1k_pu dbg_if0 wb i_dbg_wb op_reg_en", false,-1);
        tracep->declBit(c+1370,"or1k_pu dbg_if0 wb i_dbg_wb bit_ct_en", false,-1);
        tracep->declBit(c+1371,"or1k_pu dbg_if0 wb i_dbg_wb bit_ct_rst", false,-1);
        tracep->declBit(c+1372,"or1k_pu dbg_if0 wb i_dbg_wb word_ct_sel", false,-1);
        tracep->declBit(c+1373,"or1k_pu dbg_if0 wb i_dbg_wb word_ct_en", false,-1);
        tracep->declBit(c+1374,"or1k_pu dbg_if0 wb i_dbg_wb out_reg_ld_en", false,-1);
        tracep->declBit(c+811,"or1k_pu dbg_if0 wb i_dbg_wb out_reg_shift_en", false,-1);
        tracep->declBit(c+1375,"or1k_pu dbg_if0 wb i_dbg_wb out_reg_data_sel", false,-1);
        tracep->declBus(c+1376,"or1k_pu dbg_if0 wb i_dbg_wb tdo_output_sel", false,-1, 1,0);
        tracep->declBit(c+1377,"or1k_pu dbg_if0 wb i_dbg_wb biu_strobe", false,-1);
        tracep->declBit(c+1378,"or1k_pu dbg_if0 wb i_dbg_wb crc_clr", false,-1);
        tracep->declBit(c+1379,"or1k_pu dbg_if0 wb i_dbg_wb crc_en", false,-1);
        tracep->declBit(c+1380,"or1k_pu dbg_if0 wb i_dbg_wb crc_in_sel", false,-1);
        tracep->declBit(c+812,"or1k_pu dbg_if0 wb i_dbg_wb crc_shift_en", false,-1);
        tracep->declBit(c+813,"or1k_pu dbg_if0 wb i_dbg_wb regsel_ld_en", false,-1);
        tracep->declBit(c+814,"or1k_pu dbg_if0 wb i_dbg_wb intreg_ld_en", false,-1);
        tracep->declBit(c+1381,"or1k_pu dbg_if0 wb i_dbg_wb error_reg_en", false,-1);
        tracep->declBit(c+1382,"or1k_pu dbg_if0 wb i_dbg_wb biu_clr_err", false,-1);
        tracep->declBit(c+815,"or1k_pu dbg_if0 wb i_dbg_wb word_count_zero", false,-1);
        tracep->declBit(c+816,"or1k_pu dbg_if0 wb i_dbg_wb bit_count_max", false,-1);
        tracep->declBit(c+817,"or1k_pu dbg_if0 wb i_dbg_wb module_cmd", false,-1);
        tracep->declBit(c+1422,"or1k_pu dbg_if0 wb i_dbg_wb biu_ready", false,-1);
        tracep->declBit(c+1423,"or1k_pu dbg_if0 wb i_dbg_wb biu_err", false,-1);
        tracep->declBit(c+818,"or1k_pu dbg_if0 wb i_dbg_wb burst_instruction", false,-1);
        tracep->declBit(c+819,"or1k_pu dbg_if0 wb i_dbg_wb intreg_instruction", false,-1);
        tracep->declBit(c+820,"or1k_pu dbg_if0 wb i_dbg_wb intreg_write", false,-1);
        tracep->declBit(c+821,"or1k_pu dbg_if0 wb i_dbg_wb rd_op", false,-1);
        tracep->declBit(c+822,"or1k_pu dbg_if0 wb i_dbg_wb crc_match", false,-1);
        tracep->declBit(c+823,"or1k_pu dbg_if0 wb i_dbg_wb bit_count_32", false,-1);
        tracep->declBus(c+824,"or1k_pu dbg_if0 wb i_dbg_wb word_size_bits", false,-1, 5,0);
        tracep->declBus(c+825,"or1k_pu dbg_if0 wb i_dbg_wb word_size_bytes", false,-1, 2,0);
        tracep->declQuad(c+826,"or1k_pu dbg_if0 wb i_dbg_wb incremented_address", false,-1, 32,0);
        tracep->declBus(c+1424,"or1k_pu dbg_if0 wb i_dbg_wb data_to_addr_counter", false,-1, 31,0);
        tracep->declBus(c+1425,"or1k_pu dbg_if0 wb i_dbg_wb data_to_word_counter", false,-1, 15,0);
        tracep->declBus(c+828,"or1k_pu dbg_if0 wb i_dbg_wb decremented_word_count", false,-1, 15,0);
        tracep->declBus(c+829,"or1k_pu dbg_if0 wb i_dbg_wb address_data_in", false,-1, 31,0);
        tracep->declBus(c+830,"or1k_pu dbg_if0 wb i_dbg_wb count_data_in", false,-1, 15,0);
        tracep->declBus(c+831,"or1k_pu dbg_if0 wb i_dbg_wb operation_in", false,-1, 3,0);
        tracep->declBus(c+943,"or1k_pu dbg_if0 wb i_dbg_wb data_to_biu", false,-1, 31,0);
        tracep->declBus(c+1426,"or1k_pu dbg_if0 wb i_dbg_wb data_from_biu", false,-1, 31,0);
        tracep->declBus(c+832,"or1k_pu dbg_if0 wb i_dbg_wb crc_data_out", false,-1, 31,0);
        tracep->declBit(c+944,"or1k_pu dbg_if0 wb i_dbg_wb crc_data_in", false,-1);
        tracep->declBit(c+833,"or1k_pu dbg_if0 wb i_dbg_wb crc_serial_out", false,-1);
        tracep->declQuad(c+1427,"or1k_pu dbg_if0 wb i_dbg_wb out_reg_data", false,-1, 32,0);
        tracep->declQuad(c+808,"or1k_pu dbg_if0 wb i_dbg_wb data_from_internal_reg", false,-1, 32,0);
        tracep->declBit(c+945,"or1k_pu dbg_if0 wb i_dbg_wb biu_rst", false,-1);
        tracep->declBus(c+834,"or1k_pu dbg_if0 wb i_dbg_wb reg_select_data", false,-1, 0,0);
        tracep->declBus(c+835,"or1k_pu dbg_if0 wb i_dbg_wb module_state", false,-1, 3,0);
        tracep->declBus(c+1383,"or1k_pu dbg_if0 wb i_dbg_wb module_next_state", false,-1, 3,0);
        tracep->declBit(c+1395,"or1k_pu dbg_if0 wb i_dbg_wb wb_biu_i tck_i", false,-1);
        tracep->declBit(c+945,"or1k_pu dbg_if0 wb i_dbg_wb wb_biu_i rst_i", false,-1);
        tracep->declBus(c+943,"or1k_pu dbg_if0 wb i_dbg_wb wb_biu_i data_i", false,-1, 31,0);
        tracep->declBus(c+1426,"or1k_pu dbg_if0 wb i_dbg_wb wb_biu_i data_o", false,-1, 31,0);
        tracep->declBus(c+802,"or1k_pu dbg_if0 wb i_dbg_wb wb_biu_i addr_i", false,-1, 31,0);
        tracep->declBit(c+1377,"or1k_pu dbg_if0 wb i_dbg_wb wb_biu_i strobe_i", false,-1);
        tracep->declBit(c+821,"or1k_pu dbg_if0 wb i_dbg_wb wb_biu_i rd_wrn_i", false,-1);
        tracep->declBit(c+1422,"or1k_pu dbg_if0 wb i_dbg_wb wb_biu_i rdy_o", false,-1);
        tracep->declBit(c+1423,"or1k_pu dbg_if0 wb i_dbg_wb wb_biu_i err_o", false,-1);
        tracep->declBus(c+825,"or1k_pu dbg_if0 wb i_dbg_wb wb_biu_i word_size_i", false,-1, 2,0);
        tracep->declBit(c+1391,"or1k_pu dbg_if0 wb i_dbg_wb wb_biu_i wb_clk_i", false,-1);
        tracep->declBus(c+514,"or1k_pu dbg_if0 wb i_dbg_wb wb_biu_i wb_adr_o", false,-1, 31,0);
        tracep->declBus(c+515,"or1k_pu dbg_if0 wb i_dbg_wb wb_biu_i wb_dat_o", false,-1, 31,0);
        tracep->declBus(c+1336,"or1k_pu dbg_if0 wb i_dbg_wb wb_biu_i wb_dat_i", false,-1, 31,0);
        tracep->declBit(c+1334,"or1k_pu dbg_if0 wb i_dbg_wb wb_biu_i wb_cyc_o", false,-1);
        tracep->declBit(c+1335,"or1k_pu dbg_if0 wb i_dbg_wb wb_biu_i wb_stb_o", false,-1);
        tracep->declBus(c+1398,"or1k_pu dbg_if0 wb i_dbg_wb wb_biu_i wb_sel_o", false,-1, 3,0);
        tracep->declBit(c+516,"or1k_pu dbg_if0 wb i_dbg_wb wb_biu_i wb_we_o", false,-1);
        tracep->declBit(c+1399,"or1k_pu dbg_if0 wb i_dbg_wb wb_biu_i wb_ack_i", false,-1);
        tracep->declBit(c+1476,"or1k_pu dbg_if0 wb i_dbg_wb wb_biu_i wb_cab_o", false,-1);
        tracep->declBit(c+1337,"or1k_pu dbg_if0 wb i_dbg_wb wb_biu_i wb_err_i", false,-1);
        tracep->declBus(c+1477,"or1k_pu dbg_if0 wb i_dbg_wb wb_biu_i wb_cti_o", false,-1, 2,0);
        tracep->declBus(c+1478,"or1k_pu dbg_if0 wb i_dbg_wb wb_biu_i wb_bte_o", false,-1, 1,0);
        tracep->declBus(c+1398,"or1k_pu dbg_if0 wb i_dbg_wb wb_biu_i sel_reg", false,-1, 3,0);
        tracep->declBus(c+514,"or1k_pu dbg_if0 wb i_dbg_wb wb_biu_i addr_reg", false,-1, 31,0);
        tracep->declBus(c+515,"or1k_pu dbg_if0 wb i_dbg_wb wb_biu_i data_in_reg", false,-1, 31,0);
        tracep->declBus(c+1426,"or1k_pu dbg_if0 wb i_dbg_wb wb_biu_i data_out_reg", false,-1, 31,0);
        tracep->declBit(c+516,"or1k_pu dbg_if0 wb i_dbg_wb wb_biu_i wr_reg", false,-1);
        tracep->declBit(c+1429,"or1k_pu dbg_if0 wb i_dbg_wb wb_biu_i str_sync", false,-1);
        tracep->declBit(c+523,"or1k_pu dbg_if0 wb i_dbg_wb wb_biu_i rdy_sync", false,-1);
        tracep->declBit(c+1423,"or1k_pu dbg_if0 wb i_dbg_wb wb_biu_i err_reg", false,-1);
        tracep->declBit(c+520,"or1k_pu dbg_if0 wb i_dbg_wb wb_biu_i rdy_sync_tff1", false,-1);
        tracep->declBit(c+521,"or1k_pu dbg_if0 wb i_dbg_wb wb_biu_i rdy_sync_tff2", false,-1);
        tracep->declBit(c+522,"or1k_pu dbg_if0 wb i_dbg_wb wb_biu_i rdy_sync_tff2q", false,-1);
        tracep->declBit(c+524,"or1k_pu dbg_if0 wb i_dbg_wb wb_biu_i str_sync_wbff1", false,-1);
        tracep->declBit(c+525,"or1k_pu dbg_if0 wb i_dbg_wb wb_biu_i str_sync_wbff2", false,-1);
        tracep->declBit(c+526,"or1k_pu dbg_if0 wb i_dbg_wb wb_biu_i str_sync_wbff2q", false,-1);
        tracep->declBit(c+1341,"or1k_pu dbg_if0 wb i_dbg_wb wb_biu_i data_o_en", false,-1);
        tracep->declBit(c+1342,"or1k_pu dbg_if0 wb i_dbg_wb wb_biu_i rdy_sync_en", false,-1);
        tracep->declBit(c+1343,"or1k_pu dbg_if0 wb i_dbg_wb wb_biu_i err_en", false,-1);
        tracep->declBus(c+1364,"or1k_pu dbg_if0 wb i_dbg_wb wb_biu_i be_dec", false,-1, 3,0);
        tracep->declBit(c+527,"or1k_pu dbg_if0 wb i_dbg_wb wb_biu_i start_toggle", false,-1);
        tracep->declBus(c+1430,"or1k_pu dbg_if0 wb i_dbg_wb wb_biu_i swapped_data_i", false,-1, 31,0);
        tracep->declBus(c+1431,"or1k_pu dbg_if0 wb i_dbg_wb wb_biu_i swapped_data_out", false,-1, 31,0);
        tracep->declBit(c+528,"or1k_pu dbg_if0 wb i_dbg_wb wb_biu_i wb_fsm_state", false,-1);
        tracep->declBit(c+1344,"or1k_pu dbg_if0 wb i_dbg_wb wb_biu_i next_fsm_state", false,-1);
        tracep->declBit(c+1395,"or1k_pu dbg_if0 wb i_dbg_wb wb_crc_i clk", false,-1);
        tracep->declBit(c+944,"or1k_pu dbg_if0 wb i_dbg_wb wb_crc_i data", false,-1);
        tracep->declBit(c+1379,"or1k_pu dbg_if0 wb i_dbg_wb wb_crc_i enable", false,-1);
        tracep->declBit(c+812,"or1k_pu dbg_if0 wb i_dbg_wb wb_crc_i shift", false,-1);
        tracep->declBit(c+1378,"or1k_pu dbg_if0 wb i_dbg_wb wb_crc_i clr", false,-1);
        tracep->declBit(c+1392,"or1k_pu dbg_if0 wb i_dbg_wb wb_crc_i rst", false,-1);
        tracep->declBus(c+832,"or1k_pu dbg_if0 wb i_dbg_wb wb_crc_i crc_out", false,-1, 31,0);
        tracep->declBit(c+833,"or1k_pu dbg_if0 wb i_dbg_wb wb_crc_i serial_out", false,-1);
        tracep->declBus(c+832,"or1k_pu dbg_if0 wb i_dbg_wb wb_crc_i crc", false,-1, 31,0);
        tracep->declBus(c+1432,"or1k_pu dbg_if0 wb i_dbg_wb wb_crc_i new_crc", false,-1, 31,0);
        tracep->declBit(c+944,"or1k_pu dbg_if0 wb i_dbg_wb wb_crc_i data_sim", false,-1);
        tracep->declQuad(c+1505,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k ADBG_USE_HISPEED", false,-1, 55,0);
        tracep->declBit(c+1395,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k tck_i", false,-1);
        tracep->declBit(c+790,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k module_tdo_o", false,-1);
        tracep->declBit(c+1396,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k tdi_i", false,-1);
        tracep->declBit(c+766,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k capture_dr_i", false,-1);
        tracep->declBit(c+763,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k shift_dr_i", false,-1);
        tracep->declBit(c+765,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k update_dr_i", false,-1);
        tracep->declQuad(c+792,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k data_register_i", false,-1, 52,0);
        tracep->declBit(c+836,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k module_select_i", false,-1);
        tracep->declBit(c+837,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k top_inhibit_o", false,-1);
        tracep->declBit(c+1392,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k rst_i", false,-1);
        tracep->declBit(c+1391,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k cpu_clk_i", false,-1);
        tracep->declBus(c+767,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k cpu_addr_o", false,-1, 31,0);
        tracep->declBus(c+1404,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k cpu_data_i", false,-1, 31,0);
        tracep->declBus(c+768,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k cpu_data_o", false,-1, 31,0);
        tracep->declBit(c+1229,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k cpu_stb_o", false,-1);
        tracep->declBit(c+769,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k cpu_we_o", false,-1);
        tracep->declBit(c+30,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k cpu_ack_i", false,-1);
        tracep->declBit(c+550,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k cpu_rst_o", false,-1);
        tracep->declBit(c+1405,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k cpu_bp_i", false,-1);
        tracep->declBit(c+1384,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k cpu_stall_o", false,-1);
        tracep->declBus(c+838,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k address_counter", false,-1, 31,0);
        tracep->declBus(c+839,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k bit_count", false,-1, 5,0);
        tracep->declBus(c+840,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k word_count", false,-1, 15,0);
        tracep->declBus(c+841,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k operation", false,-1, 3,0);
        tracep->declBus(c+842,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k data_out_shift_reg", false,-1, 31,0);
        tracep->declBus(c+1365,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k internal_reg_status", false,-1, 1,0);
        tracep->declBus(c+843,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k internal_register_select", false,-1, 0,0);
        tracep->declBit(c+844,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k addr_sel", false,-1);
        tracep->declBit(c+845,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k addr_ct_en", false,-1);
        tracep->declBit(c+846,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k op_reg_en", false,-1);
        tracep->declBit(c+847,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k bit_ct_en", false,-1);
        tracep->declBit(c+848,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k bit_ct_rst", false,-1);
        tracep->declBit(c+849,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k word_ct_sel", false,-1);
        tracep->declBit(c+850,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k word_ct_en", false,-1);
        tracep->declBit(c+851,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k out_reg_ld_en", false,-1);
        tracep->declBit(c+852,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k out_reg_shift_en", false,-1);
        tracep->declBit(c+853,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k out_reg_data_sel", false,-1);
        tracep->declBus(c+854,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k tdo_output_sel", false,-1, 1,0);
        tracep->declBit(c+855,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k biu_strobe", false,-1);
        tracep->declBit(c+856,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k crc_clr", false,-1);
        tracep->declBit(c+857,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k crc_en", false,-1);
        tracep->declBit(c+858,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k crc_in_sel", false,-1);
        tracep->declBit(c+859,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k crc_shift_en", false,-1);
        tracep->declBit(c+860,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k regsel_ld_en", false,-1);
        tracep->declBit(c+861,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k intreg_ld_en", false,-1);
        tracep->declBit(c+862,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k word_count_zero", false,-1);
        tracep->declBit(c+863,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k bit_count_max", false,-1);
        tracep->declBit(c+817,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k module_cmd", false,-1);
        tracep->declBit(c+864,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k biu_ready", false,-1);
        tracep->declBit(c+865,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k burst_instruction", false,-1);
        tracep->declBit(c+819,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k intreg_instruction", false,-1);
        tracep->declBit(c+820,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k intreg_write", false,-1);
        tracep->declBit(c+866,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k rd_op", false,-1);
        tracep->declBit(c+867,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k crc_match", false,-1);
        tracep->declBit(c+868,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k bit_count_32", false,-1);
        tracep->declBus(c+1528,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k word_size_bits", false,-1, 5,0);
        tracep->declBus(c+1529,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k address_increment", false,-1, 2,0);
        tracep->declQuad(c+869,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k incremented_address", false,-1, 32,0);
        tracep->declBus(c+871,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k data_to_addr_counter", false,-1, 31,0);
        tracep->declBus(c+872,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k data_to_word_counter", false,-1, 15,0);
        tracep->declBus(c+873,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k decremented_word_count", false,-1, 15,0);
        tracep->declBus(c+829,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k address_data_in", false,-1, 31,0);
        tracep->declBus(c+830,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k count_data_in", false,-1, 15,0);
        tracep->declBus(c+831,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k operation_in", false,-1, 3,0);
        tracep->declBus(c+1433,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k data_to_biu", false,-1, 31,0);
        tracep->declBus(c+1184,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k data_from_biu", false,-1, 31,0);
        tracep->declBus(c+874,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k crc_data_out", false,-1, 31,0);
        tracep->declBit(c+946,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k crc_data_in", false,-1);
        tracep->declBit(c+875,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k crc_serial_out", false,-1);
        tracep->declBus(c+1434,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k out_reg_data", false,-1, 31,0);
        tracep->declBus(c+1435,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k data_from_internal_reg", false,-1, 31,0);
        tracep->declBit(c+876,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k status_reg_wr", false,-1);
        tracep->declBus(c+834,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k reg_select_data", false,-1, 0,0);
        tracep->declBus(c+877,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k module_state", false,-1, 3,0);
        tracep->declBus(c+878,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k module_next_state", false,-1, 3,0);
        tracep->declBus(c+879,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k or1k_statusreg_i data_i", false,-1, 1,0);
        tracep->declBit(c+876,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k or1k_statusreg_i we_i", false,-1);
        tracep->declBit(c+1395,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k or1k_statusreg_i tck_i", false,-1);
        tracep->declBit(c+1405,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k or1k_statusreg_i bp_i", false,-1);
        tracep->declBit(c+1392,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k or1k_statusreg_i rst_i", false,-1);
        tracep->declBit(c+1391,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k or1k_statusreg_i cpu_clk_i", false,-1);
        tracep->declBit(c+1384,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k or1k_statusreg_i cpu_stall_o", false,-1);
        tracep->declBit(c+550,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k or1k_statusreg_i cpu_rst_o", false,-1);
        tracep->declBus(c+1365,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k or1k_statusreg_i ctrl_reg_o", false,-1, 1,0);
        tracep->declBit(c+880,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k or1k_statusreg_i cpu_reset", false,-1);
        tracep->declBus(c+1530,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k or1k_statusreg_i cpu_op_out", false,-1, 2,1);
        tracep->declBit(c+1185,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k or1k_statusreg_i stall_bp", false,-1);
        tracep->declBit(c+881,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k or1k_statusreg_i stall_bp_csff", false,-1);
        tracep->declBit(c+882,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k or1k_statusreg_i stall_bp_tck", false,-1);
        tracep->declBit(c+1366,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k or1k_statusreg_i stall_reg", false,-1);
        tracep->declBit(c+1186,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k or1k_statusreg_i stall_reg_csff", false,-1);
        tracep->declBit(c+1187,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k or1k_statusreg_i stall_reg_cpu", false,-1);
        tracep->declBit(c+553,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k or1k_statusreg_i cpu_reset_csff", false,-1);
        tracep->declBit(c+1395,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k or1k_biu_i tck_i", false,-1);
        tracep->declBit(c+1392,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k or1k_biu_i rst_i", false,-1);
        tracep->declBus(c+1433,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k or1k_biu_i data_i", false,-1, 31,0);
        tracep->declBus(c+1184,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k or1k_biu_i data_o", false,-1, 31,0);
        tracep->declBus(c+838,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k or1k_biu_i addr_i", false,-1, 31,0);
        tracep->declBit(c+855,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k or1k_biu_i strobe_i", false,-1);
        tracep->declBit(c+866,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k or1k_biu_i rd_wrn_i", false,-1);
        tracep->declBit(c+864,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k or1k_biu_i rdy_o", false,-1);
        tracep->declBit(c+1391,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k or1k_biu_i cpu_clk_i", false,-1);
        tracep->declBus(c+767,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k or1k_biu_i cpu_addr_o", false,-1, 31,0);
        tracep->declBus(c+1404,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k or1k_biu_i cpu_data_i", false,-1, 31,0);
        tracep->declBus(c+768,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k or1k_biu_i cpu_data_o", false,-1, 31,0);
        tracep->declBit(c+1229,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k or1k_biu_i cpu_stb_o", false,-1);
        tracep->declBit(c+769,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k or1k_biu_i cpu_we_o", false,-1);
        tracep->declBit(c+30,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k or1k_biu_i cpu_ack_i", false,-1);
        tracep->declBus(c+767,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k or1k_biu_i addr_reg", false,-1, 31,0);
        tracep->declBus(c+768,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k or1k_biu_i data_in_reg", false,-1, 31,0);
        tracep->declBus(c+1184,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k or1k_biu_i data_out_reg", false,-1, 31,0);
        tracep->declBit(c+769,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k or1k_biu_i wr_reg", false,-1);
        tracep->declBit(c+883,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k or1k_biu_i str_sync", false,-1);
        tracep->declBit(c+1188,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k or1k_biu_i rdy_sync", false,-1);
        tracep->declBit(c+884,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k or1k_biu_i rdy_sync_tff1", false,-1);
        tracep->declBit(c+885,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k or1k_biu_i rdy_sync_tff2", false,-1);
        tracep->declBit(c+886,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k or1k_biu_i rdy_sync_tff2q", false,-1);
        tracep->declBit(c+554,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k or1k_biu_i str_sync_wbff1", false,-1);
        tracep->declBit(c+555,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k or1k_biu_i str_sync_wbff2", false,-1);
        tracep->declBit(c+556,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k or1k_biu_i str_sync_wbff2q", false,-1);
        tracep->declBit(c+1230,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k or1k_biu_i data_o_en", false,-1);
        tracep->declBit(c+1231,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k or1k_biu_i rdy_sync_en", false,-1);
        tracep->declBit(c+557,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k or1k_biu_i start_toggle", false,-1);
        tracep->declBit(c+558,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k or1k_biu_i cpu_fsm_state", false,-1);
        tracep->declBit(c+559,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k or1k_biu_i next_fsm_state", false,-1);
        tracep->declBit(c+1395,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k or1k_crc_i clk", false,-1);
        tracep->declBit(c+946,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k or1k_crc_i data", false,-1);
        tracep->declBit(c+857,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k or1k_crc_i enable", false,-1);
        tracep->declBit(c+859,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k or1k_crc_i shift", false,-1);
        tracep->declBit(c+856,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k or1k_crc_i clr", false,-1);
        tracep->declBit(c+1392,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k or1k_crc_i rst", false,-1);
        tracep->declBus(c+874,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k or1k_crc_i crc_out", false,-1, 31,0);
        tracep->declBit(c+875,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k or1k_crc_i serial_out", false,-1);
        tracep->declBus(c+874,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k or1k_crc_i crc", false,-1, 31,0);
        tracep->declBus(c+1436,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k or1k_crc_i new_crc", false,-1, 31,0);
        tracep->declBit(c+946,"or1k_pu dbg_if0 cpu0 i_dbg_cpu_or1k or1k_crc_i data_sim", false,-1);
        tracep->declQuad(c+1505,"or1k_pu dbg_if0 genblk4 i_dbg_jsp ADBG_JSP_SUPPORT_MULTI", false,-1, 55,0);
        tracep->declBit(c+1395,"or1k_pu dbg_if0 genblk4 i_dbg_jsp tck_i", false,-1);
        tracep->declBit(c+791,"or1k_pu dbg_if0 genblk4 i_dbg_jsp module_tdo_o", false,-1);
        tracep->declBit(c+1396,"or1k_pu dbg_if0 genblk4 i_dbg_jsp tdi_i", false,-1);
        tracep->declBit(c+766,"or1k_pu dbg_if0 genblk4 i_dbg_jsp capture_dr_i", false,-1);
        tracep->declBit(c+763,"or1k_pu dbg_if0 genblk4 i_dbg_jsp shift_dr_i", false,-1);
        tracep->declBit(c+765,"or1k_pu dbg_if0 genblk4 i_dbg_jsp update_dr_i", false,-1);
        tracep->declQuad(c+792,"or1k_pu dbg_if0 genblk4 i_dbg_jsp data_register_i", false,-1, 52,0);
        tracep->declBit(c+762,"or1k_pu dbg_if0 genblk4 i_dbg_jsp debug_select_i", false,-1);
        tracep->declBit(c+887,"or1k_pu dbg_if0 genblk4 i_dbg_jsp module_select_i", false,-1);
        tracep->declBit(c+1476,"or1k_pu dbg_if0 genblk4 i_dbg_jsp top_inhibit_o", false,-1);
        tracep->declBit(c+1392,"or1k_pu dbg_if0 genblk4 i_dbg_jsp rst_i", false,-1);
        tracep->declBit(c+1391,"or1k_pu dbg_if0 genblk4 i_dbg_jsp wb_clk_i", false,-1);
        tracep->declBit(c+1508,"or1k_pu dbg_if0 genblk4 i_dbg_jsp wb_rst_i", false,-1);
        tracep->declBus(c+1519,"or1k_pu dbg_if0 genblk4 i_dbg_jsp wb_adr_i", false,-1, 31,0);
        tracep->declBus(c+1418,"or1k_pu dbg_if0 genblk4 i_dbg_jsp wb_dat_o", false,-1, 31,0);
        tracep->declBus(c+1520,"or1k_pu dbg_if0 genblk4 i_dbg_jsp wb_dat_i", false,-1, 31,0);
        tracep->declBit(c+1521,"or1k_pu dbg_if0 genblk4 i_dbg_jsp wb_cyc_i", false,-1);
        tracep->declBit(c+1522,"or1k_pu dbg_if0 genblk4 i_dbg_jsp wb_stb_i", false,-1);
        tracep->declBus(c+1523,"or1k_pu dbg_if0 genblk4 i_dbg_jsp wb_sel_i", false,-1, 3,0);
        tracep->declBit(c+1524,"or1k_pu dbg_if0 genblk4 i_dbg_jsp wb_we_i", false,-1);
        tracep->declBit(c+1419,"or1k_pu dbg_if0 genblk4 i_dbg_jsp wb_ack_o", false,-1);
        tracep->declBit(c+1525,"or1k_pu dbg_if0 genblk4 i_dbg_jsp wb_cab_i", false,-1);
        tracep->declBit(c+1476,"or1k_pu dbg_if0 genblk4 i_dbg_jsp wb_err_o", false,-1);
        tracep->declBus(c+1526,"or1k_pu dbg_if0 genblk4 i_dbg_jsp wb_cti_i", false,-1, 2,0);
        tracep->declBus(c+1527,"or1k_pu dbg_if0 genblk4 i_dbg_jsp wb_bte_i", false,-1, 1,0);
        tracep->declBit(c+1420,"or1k_pu dbg_if0 genblk4 i_dbg_jsp int_o", false,-1);
        tracep->declBus(c+888,"or1k_pu dbg_if0 genblk4 i_dbg_jsp read_bit_count", false,-1, 3,0);
        tracep->declBus(c+889,"or1k_pu dbg_if0 genblk4 i_dbg_jsp write_bit_count", false,-1, 3,0);
        tracep->declBus(c+890,"or1k_pu dbg_if0 genblk4 i_dbg_jsp input_word_count", false,-1, 3,0);
        tracep->declBus(c+891,"or1k_pu dbg_if0 genblk4 i_dbg_jsp output_word_count", false,-1, 3,0);
        tracep->declBus(c+892,"or1k_pu dbg_if0 genblk4 i_dbg_jsp user_word_count", false,-1, 3,0);
        tracep->declBus(c+893,"or1k_pu dbg_if0 genblk4 i_dbg_jsp data_out_shift_reg", false,-1, 7,0);
        tracep->declBit(c+894,"or1k_pu dbg_if0 genblk4 i_dbg_jsp rd_bit_ct_en", false,-1);
        tracep->declBit(c+895,"or1k_pu dbg_if0 genblk4 i_dbg_jsp rd_bit_ct_rst", false,-1);
        tracep->declBit(c+896,"or1k_pu dbg_if0 genblk4 i_dbg_jsp wr_bit_ct_en", false,-1);
        tracep->declBit(c+947,"or1k_pu dbg_if0 genblk4 i_dbg_jsp wr_bit_ct_rst", false,-1);
        tracep->declBit(c+897,"or1k_pu dbg_if0 genblk4 i_dbg_jsp in_word_ct_sel", false,-1);
        tracep->declBit(c+898,"or1k_pu dbg_if0 genblk4 i_dbg_jsp out_word_ct_sel", false,-1);
        tracep->declBit(c+948,"or1k_pu dbg_if0 genblk4 i_dbg_jsp in_word_ct_en", false,-1);
        tracep->declBit(c+899,"or1k_pu dbg_if0 genblk4 i_dbg_jsp out_word_ct_en", false,-1);
        tracep->declBit(c+900,"or1k_pu dbg_if0 genblk4 i_dbg_jsp user_word_ct_en", false,-1);
        tracep->declBit(c+901,"or1k_pu dbg_if0 genblk4 i_dbg_jsp user_word_ct_sel", false,-1);
        tracep->declBit(c+902,"or1k_pu dbg_if0 genblk4 i_dbg_jsp out_reg_ld_en", false,-1);
        tracep->declBit(c+903,"or1k_pu dbg_if0 genblk4 i_dbg_jsp out_reg_shift_en", false,-1);
        tracep->declBit(c+904,"or1k_pu dbg_if0 genblk4 i_dbg_jsp out_reg_data_sel", false,-1);
        tracep->declBit(c+905,"or1k_pu dbg_if0 genblk4 i_dbg_jsp biu_rd_strobe", false,-1);
        tracep->declBit(c+906,"or1k_pu dbg_if0 genblk4 i_dbg_jsp biu_wr_strobe", false,-1);
        tracep->declBit(c+907,"or1k_pu dbg_if0 genblk4 i_dbg_jsp in_word_count_zero", false,-1);
        tracep->declBit(c+908,"or1k_pu dbg_if0 genblk4 i_dbg_jsp out_word_count_zero", false,-1);
        tracep->declBit(c+909,"or1k_pu dbg_if0 genblk4 i_dbg_jsp user_word_count_zero", false,-1);
        tracep->declBit(c+910,"or1k_pu dbg_if0 genblk4 i_dbg_jsp rd_bit_count_max", false,-1);
        tracep->declBit(c+911,"or1k_pu dbg_if0 genblk4 i_dbg_jsp wr_bit_count_max", false,-1);
        tracep->declBus(c+912,"or1k_pu dbg_if0 genblk4 i_dbg_jsp data_to_in_word_counter", false,-1, 3,0);
        tracep->declBus(c+913,"or1k_pu dbg_if0 genblk4 i_dbg_jsp data_to_out_word_counter", false,-1, 3,0);
        tracep->declBus(c+1437,"or1k_pu dbg_if0 genblk4 i_dbg_jsp data_to_user_word_counter", false,-1, 3,0);
        tracep->declBus(c+914,"or1k_pu dbg_if0 genblk4 i_dbg_jsp decremented_in_word_count", false,-1, 3,0);
        tracep->declBus(c+915,"or1k_pu dbg_if0 genblk4 i_dbg_jsp decremented_out_word_count", false,-1, 3,0);
        tracep->declBus(c+916,"or1k_pu dbg_if0 genblk4 i_dbg_jsp decremented_user_word_count", false,-1, 3,0);
        tracep->declBus(c+1438,"or1k_pu dbg_if0 genblk4 i_dbg_jsp count_data_in", false,-1, 3,0);
        tracep->declBus(c+1439,"or1k_pu dbg_if0 genblk4 i_dbg_jsp data_to_biu", false,-1, 7,0);
        tracep->declBus(c+1189,"or1k_pu dbg_if0 genblk4 i_dbg_jsp data_from_biu", false,-1, 7,0);
        tracep->declBus(c+917,"or1k_pu dbg_if0 genblk4 i_dbg_jsp biu_space_available", false,-1, 3,0);
        tracep->declBus(c+918,"or1k_pu dbg_if0 genblk4 i_dbg_jsp biu_bytes_available", false,-1, 3,0);
        tracep->declBus(c+919,"or1k_pu dbg_if0 genblk4 i_dbg_jsp count_data_from_biu", false,-1, 7,0);
        tracep->declBus(c+1440,"or1k_pu dbg_if0 genblk4 i_dbg_jsp out_reg_data", false,-1, 7,0);
        tracep->declBus(c+920,"or1k_pu dbg_if0 genblk4 i_dbg_jsp wr_module_state", false,-1, 2,0);
        tracep->declBus(c+949,"or1k_pu dbg_if0 genblk4 i_dbg_jsp wr_module_next_state", false,-1, 2,0);
        tracep->declBus(c+921,"or1k_pu dbg_if0 genblk4 i_dbg_jsp rd_module_state", false,-1, 2,0);
        tracep->declBus(c+922,"or1k_pu dbg_if0 genblk4 i_dbg_jsp rd_module_next_state", false,-1, 2,0);
        tracep->declBit(c+1395,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i tck_i", false,-1);
        tracep->declBit(c+1392,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i rst_i", false,-1);
        tracep->declBus(c+1439,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i data_i", false,-1, 7,0);
        tracep->declBus(c+1189,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i data_o", false,-1, 7,0);
        tracep->declBus(c+917,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i bytes_free_o", false,-1, 3,0);
        tracep->declBus(c+918,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i bytes_available_o", false,-1, 3,0);
        tracep->declBit(c+905,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i rd_strobe_i", false,-1);
        tracep->declBit(c+906,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i wr_strobe_i", false,-1);
        tracep->declBit(c+762,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i debug_select_i", false,-1);
        tracep->declBit(c+1391,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i wb_clk_i", false,-1);
        tracep->declBit(c+1508,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i wb_rst_i", false,-1);
        tracep->declBus(c+1519,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i wb_adr_i", false,-1, 31,0);
        tracep->declBus(c+1418,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i wb_dat_o", false,-1, 31,0);
        tracep->declBus(c+1520,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i wb_dat_i", false,-1, 31,0);
        tracep->declBit(c+1521,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i wb_cyc_i", false,-1);
        tracep->declBit(c+1522,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i wb_stb_i", false,-1);
        tracep->declBus(c+1523,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i wb_sel_i", false,-1, 3,0);
        tracep->declBit(c+1524,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i wb_we_i", false,-1);
        tracep->declBit(c+1419,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i wb_ack_o", false,-1);
        tracep->declBit(c+1525,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i wb_cab_i", false,-1);
        tracep->declBit(c+1476,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i wb_err_o", false,-1);
        tracep->declBus(c+1526,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i wb_cti_i", false,-1, 2,0);
        tracep->declBus(c+1527,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i wb_bte_i", false,-1, 1,0);
        tracep->declBit(c+1420,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i int_o", false,-1);
        tracep->declBus(c+923,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i data_in", false,-1, 7,0);
        tracep->declBus(c+1189,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i rdata", false,-1, 7,0);
        tracep->declBit(c+924,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i wen_tff", false,-1);
        tracep->declBit(c+925,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i ren_tff", false,-1);
        tracep->declBit(c+1441,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i wb_fifo_ack", false,-1);
        tracep->declBus(c+1360,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i wr_bytes_free", false,-1, 3,0);
        tracep->declBus(c+1346,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i rd_bytes_avail", false,-1, 3,0);
        tracep->declBus(c+1361,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i wr_bytes_avail", false,-1, 3,0);
        tracep->declBit(c+1347,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i rd_bytes_avail_not_zero", false,-1);
        tracep->declBit(c+560,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i ren_sff_out", false,-1);
        tracep->declBus(c+1348,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i rd_fifo_data_out", false,-1, 7,0);
        tracep->declBus(c+1442,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i data_to_wb", false,-1, 7,0);
        tracep->declBus(c+1531,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i data_from_wb", false,-1, 7,0);
        tracep->declBit(c+1362,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i wr_fifo_not_empty", false,-1);
        tracep->declBit(c+1,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i rcvr_fifo_rst", false,-1);
        tracep->declBit(c+2,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i xmit_fifo_rst", false,-1);
        tracep->declBit(c+561,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i wda_rst", false,-1);
        tracep->declBit(c+562,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i wpp", false,-1);
        tracep->declBit(c+563,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i w_fifo_en", false,-1);
        tracep->declBit(c+1385,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i ren_rst", false,-1);
        tracep->declBit(c+1386,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i rdata_en", false,-1);
        tracep->declBit(c+1387,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i rpp", false,-1);
        tracep->declBit(c+1388,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i r_fifo_en", false,-1);
        tracep->declBit(c+1389,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i r_wb_ack", false,-1);
        tracep->declBit(c+564,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i w_wb_ack", false,-1);
        tracep->declBit(c+565,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i wdata_avail", false,-1);
        tracep->declBit(c+53,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i wb_rd", false,-1);
        tracep->declBit(c+54,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i wb_wr", false,-1);
        tracep->declBit(c+1443,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i pop", false,-1);
        tracep->declBit(c+1349,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i rcz", false,-1);
        tracep->declBus(c+566,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i rd_fsm_state", false,-1, 1,0);
        tracep->declBus(c+1444,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i next_rd_fsm_state", false,-1, 1,0);
        tracep->declBus(c+1445,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i bus_data_lo", false,-1, 31,0);
        tracep->declBus(c+1446,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i bus_data_hi", false,-1, 31,0);
        tracep->declBit(c+55,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i wb_reg_ack", false,-1);
        tracep->declBit(c+1350,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i rd_fifo_not_full", false,-1);
        tracep->declBus(c+1447,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i iir_gen", false,-1, 2,0);
        tracep->declBit(c+1448,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i rd_fifo_becoming_empty", false,-1);
        tracep->declBit(c+56,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i reg_dlab_bit", false,-1);
        tracep->declBus(c+57,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i reg_ier", false,-1, 3,0);
        tracep->declBus(c+1447,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i reg_iir", false,-1, 2,0);
        tracep->declBit(c+58,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i thr_int_arm", false,-1);
        tracep->declBus(c+1449,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i reg_lsr", false,-1, 7,0);
        tracep->declBit(c+1532,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i reg_dlab_bit_wren", false,-1);
        tracep->declBit(c+59,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i reg_ier_wren", false,-1);
        tracep->declBit(c+1533,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i reg_iir_rden", false,-1);
        tracep->declBus(c+60,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i reg_lcr", false,-1, 7,0);
        tracep->declBit(c+3,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i reg_fcr_wren", false,-1);
        tracep->declBus(c+1534,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i reg_mcr", false,-1, 7,0);
        tracep->declBus(c+1535,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i reg_msr", false,-1, 7,0);
        tracep->declBus(c+1534,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i reg_scr", false,-1, 7,0);
        tracep->declBit(c+4,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i fifo_access", false,-1);
        tracep->declBus(c+567,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i wr_fsm_state", false,-1, 1,0);
        tracep->declBus(c+568,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i next_wr_fsm_state", false,-1, 1,0);
        tracep->declBit(c+1391,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i wen_sff DEST_CLK", false,-1);
        tracep->declBit(c+1476,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i wen_sff D_SET", false,-1);
        tracep->declBit(c+561,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i wen_sff D_RST", false,-1);
        tracep->declBit(c+1392,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i wen_sff RESET", false,-1);
        tracep->declBit(c+924,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i wen_sff TOGGLE_IN", false,-1);
        tracep->declBit(c+565,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i wen_sff D_OUT", false,-1);
        tracep->declBit(c+569,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i wen_sff sync1", false,-1);
        tracep->declBit(c+570,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i wen_sff sync2", false,-1);
        tracep->declBit(c+571,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i wen_sff syncprev", false,-1);
        tracep->declBit(c+572,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i wen_sff srflop", false,-1);
        tracep->declBit(c+573,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i wen_sff syncxor", false,-1);
        tracep->declBit(c+573,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i wen_sff srinput", false,-1);
        tracep->declBit(c+1391,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i ren_sff DEST_CLK", false,-1);
        tracep->declBit(c+1476,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i ren_sff D_SET", false,-1);
        tracep->declBit(c+1385,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i ren_sff D_RST", false,-1);
        tracep->declBit(c+1392,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i ren_sff RESET", false,-1);
        tracep->declBit(c+925,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i ren_sff TOGGLE_IN", false,-1);
        tracep->declBit(c+560,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i ren_sff D_OUT", false,-1);
        tracep->declBit(c+574,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i ren_sff sync1", false,-1);
        tracep->declBit(c+575,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i ren_sff sync2", false,-1);
        tracep->declBit(c+576,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i ren_sff syncprev", false,-1);
        tracep->declBit(c+577,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i ren_sff srflop", false,-1);
        tracep->declBit(c+578,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i ren_sff syncxor", false,-1);
        tracep->declBit(c+578,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i ren_sff srinput", false,-1);
        tracep->declBit(c+1391,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i freespace_syncreg CLKA", false,-1);
        tracep->declBit(c+1395,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i freespace_syncreg CLKB", false,-1);
        tracep->declBit(c+1392,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i freespace_syncreg RST", false,-1);
        tracep->declBus(c+1360,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i freespace_syncreg DATA_IN", false,-1, 3,0);
        tracep->declBus(c+917,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i freespace_syncreg DATA_OUT", false,-1, 3,0);
        tracep->declBus(c+1190,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i freespace_syncreg regA", false,-1, 3,0);
        tracep->declBus(c+917,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i freespace_syncreg regB", false,-1, 3,0);
        tracep->declBit(c+1191,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i freespace_syncreg strobe_toggle", false,-1);
        tracep->declBit(c+926,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i freespace_syncreg ack_toggle", false,-1);
        tracep->declBit(c+1450,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i freespace_syncreg A_not_equal", false,-1);
        tracep->declBit(c+1451,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i freespace_syncreg A_enable", false,-1);
        tracep->declBit(c+927,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i freespace_syncreg strobe_sff_out", false,-1);
        tracep->declBit(c+579,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i freespace_syncreg ack_sff_out", false,-1);
        tracep->declBit(c+1395,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i freespace_syncreg strobe_sff DEST_CLK", false,-1);
        tracep->declBit(c+1476,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i freespace_syncreg strobe_sff D_SET", false,-1);
        tracep->declBit(c+927,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i freespace_syncreg strobe_sff D_RST", false,-1);
        tracep->declBit(c+1392,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i freespace_syncreg strobe_sff RESET", false,-1);
        tracep->declBit(c+1191,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i freespace_syncreg strobe_sff TOGGLE_IN", false,-1);
        tracep->declBit(c+927,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i freespace_syncreg strobe_sff D_OUT", false,-1);
        tracep->declBit(c+928,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i freespace_syncreg strobe_sff sync1", false,-1);
        tracep->declBit(c+929,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i freespace_syncreg strobe_sff sync2", false,-1);
        tracep->declBit(c+930,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i freespace_syncreg strobe_sff syncprev", false,-1);
        tracep->declBit(c+931,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i freespace_syncreg strobe_sff srflop", false,-1);
        tracep->declBit(c+932,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i freespace_syncreg strobe_sff syncxor", false,-1);
        tracep->declBit(c+932,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i freespace_syncreg strobe_sff srinput", false,-1);
        tracep->declBit(c+1391,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i freespace_syncreg ack_sff DEST_CLK", false,-1);
        tracep->declBit(c+1476,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i freespace_syncreg ack_sff D_SET", false,-1);
        tracep->declBit(c+1451,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i freespace_syncreg ack_sff D_RST", false,-1);
        tracep->declBit(c+1392,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i freespace_syncreg ack_sff RESET", false,-1);
        tracep->declBit(c+926,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i freespace_syncreg ack_sff TOGGLE_IN", false,-1);
        tracep->declBit(c+579,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i freespace_syncreg ack_sff D_OUT", false,-1);
        tracep->declBit(c+580,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i freespace_syncreg ack_sff sync1", false,-1);
        tracep->declBit(c+581,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i freespace_syncreg ack_sff sync2", false,-1);
        tracep->declBit(c+582,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i freespace_syncreg ack_sff syncprev", false,-1);
        tracep->declBit(c+583,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i freespace_syncreg ack_sff srflop", false,-1);
        tracep->declBit(c+584,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i freespace_syncreg ack_sff syncxor", false,-1);
        tracep->declBit(c+584,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i freespace_syncreg ack_sff srinput", false,-1);
        tracep->declBit(c+1391,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i bytesavail_syncreg CLKA", false,-1);
        tracep->declBit(c+1395,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i bytesavail_syncreg CLKB", false,-1);
        tracep->declBit(c+1392,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i bytesavail_syncreg RST", false,-1);
        tracep->declBus(c+1346,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i bytesavail_syncreg DATA_IN", false,-1, 3,0);
        tracep->declBus(c+918,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i bytesavail_syncreg DATA_OUT", false,-1, 3,0);
        tracep->declBus(c+1192,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i bytesavail_syncreg regA", false,-1, 3,0);
        tracep->declBus(c+918,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i bytesavail_syncreg regB", false,-1, 3,0);
        tracep->declBit(c+1193,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i bytesavail_syncreg strobe_toggle", false,-1);
        tracep->declBit(c+933,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i bytesavail_syncreg ack_toggle", false,-1);
        tracep->declBit(c+1452,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i bytesavail_syncreg A_not_equal", false,-1);
        tracep->declBit(c+1453,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i bytesavail_syncreg A_enable", false,-1);
        tracep->declBit(c+934,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i bytesavail_syncreg strobe_sff_out", false,-1);
        tracep->declBit(c+585,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i bytesavail_syncreg ack_sff_out", false,-1);
        tracep->declBit(c+1395,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i bytesavail_syncreg strobe_sff DEST_CLK", false,-1);
        tracep->declBit(c+1476,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i bytesavail_syncreg strobe_sff D_SET", false,-1);
        tracep->declBit(c+934,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i bytesavail_syncreg strobe_sff D_RST", false,-1);
        tracep->declBit(c+1392,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i bytesavail_syncreg strobe_sff RESET", false,-1);
        tracep->declBit(c+1193,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i bytesavail_syncreg strobe_sff TOGGLE_IN", false,-1);
        tracep->declBit(c+934,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i bytesavail_syncreg strobe_sff D_OUT", false,-1);
        tracep->declBit(c+935,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i bytesavail_syncreg strobe_sff sync1", false,-1);
        tracep->declBit(c+936,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i bytesavail_syncreg strobe_sff sync2", false,-1);
        tracep->declBit(c+937,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i bytesavail_syncreg strobe_sff syncprev", false,-1);
        tracep->declBit(c+938,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i bytesavail_syncreg strobe_sff srflop", false,-1);
        tracep->declBit(c+939,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i bytesavail_syncreg strobe_sff syncxor", false,-1);
        tracep->declBit(c+939,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i bytesavail_syncreg strobe_sff srinput", false,-1);
        tracep->declBit(c+1391,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i bytesavail_syncreg ack_sff DEST_CLK", false,-1);
        tracep->declBit(c+1476,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i bytesavail_syncreg ack_sff D_SET", false,-1);
        tracep->declBit(c+1453,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i bytesavail_syncreg ack_sff D_RST", false,-1);
        tracep->declBit(c+1392,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i bytesavail_syncreg ack_sff RESET", false,-1);
        tracep->declBit(c+933,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i bytesavail_syncreg ack_sff TOGGLE_IN", false,-1);
        tracep->declBit(c+585,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i bytesavail_syncreg ack_sff D_OUT", false,-1);
        tracep->declBit(c+586,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i bytesavail_syncreg ack_sff sync1", false,-1);
        tracep->declBit(c+587,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i bytesavail_syncreg ack_sff sync2", false,-1);
        tracep->declBit(c+588,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i bytesavail_syncreg ack_sff syncprev", false,-1);
        tracep->declBit(c+589,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i bytesavail_syncreg ack_sff srflop", false,-1);
        tracep->declBit(c+590,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i bytesavail_syncreg ack_sff syncxor", false,-1);
        tracep->declBit(c+590,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i bytesavail_syncreg ack_sff srinput", false,-1);
        tracep->declBit(c+1391,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i wr_fifo CLK", false,-1);
        tracep->declBit(c+950,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i wr_fifo RST", false,-1);
        tracep->declBus(c+923,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i wr_fifo DATA_IN", false,-1, 7,0);
        tracep->declBus(c+1442,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i wr_fifo DATA_OUT", false,-1, 7,0);
        tracep->declBit(c+562,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i wr_fifo PUSH_POPn", false,-1);
        tracep->declBit(c+563,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i wr_fifo EN", false,-1);
        tracep->declBus(c+1361,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i wr_fifo BYTES_AVAIL", false,-1, 3,0);
        tracep->declBus(c+1360,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i wr_fifo BYTES_FREE", false,-1, 3,0);
        tracep->declBus(c+540,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i wr_fifo reg0", false,-1, 7,0);
        tracep->declBus(c+541,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i wr_fifo reg1", false,-1, 7,0);
        tracep->declBus(c+542,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i wr_fifo reg2", false,-1, 7,0);
        tracep->declBus(c+543,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i wr_fifo reg3", false,-1, 7,0);
        tracep->declBus(c+544,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i wr_fifo reg4", false,-1, 7,0);
        tracep->declBus(c+545,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i wr_fifo reg5", false,-1, 7,0);
        tracep->declBus(c+546,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i wr_fifo reg6", false,-1, 7,0);
        tracep->declBus(c+547,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i wr_fifo reg7", false,-1, 7,0);
        tracep->declBus(c+1361,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i wr_fifo counter", false,-1, 3,0);
        tracep->declBit(c+1363,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i wr_fifo push_ok", false,-1);
        tracep->declBit(c+1362,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i wr_fifo pop_ok", false,-1);
        tracep->declBit(c+1391,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i rd_fifo CLK", false,-1);
        tracep->declBit(c+951,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i rd_fifo RST", false,-1);
        tracep->declBus(c+1531,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i rd_fifo DATA_IN", false,-1, 7,0);
        tracep->declBus(c+1348,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i rd_fifo DATA_OUT", false,-1, 7,0);
        tracep->declBit(c+1387,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i rd_fifo PUSH_POPn", false,-1);
        tracep->declBit(c+1388,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i rd_fifo EN", false,-1);
        tracep->declBus(c+1346,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i rd_fifo BYTES_AVAIL", false,-1, 3,0);
        tracep->declBus(c+1351,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i rd_fifo BYTES_FREE", false,-1, 3,0);
        tracep->declBus(c+1352,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i rd_fifo reg0", false,-1, 7,0);
        tracep->declBus(c+1353,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i rd_fifo reg1", false,-1, 7,0);
        tracep->declBus(c+1354,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i rd_fifo reg2", false,-1, 7,0);
        tracep->declBus(c+1355,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i rd_fifo reg3", false,-1, 7,0);
        tracep->declBus(c+1356,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i rd_fifo reg4", false,-1, 7,0);
        tracep->declBus(c+1357,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i rd_fifo reg5", false,-1, 7,0);
        tracep->declBus(c+1358,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i rd_fifo reg6", false,-1, 7,0);
        tracep->declBus(c+1359,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i rd_fifo reg7", false,-1, 7,0);
        tracep->declBus(c+1346,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i rd_fifo counter", false,-1, 3,0);
        tracep->declBit(c+1350,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i rd_fifo push_ok", false,-1);
        tracep->declBit(c+1347,"or1k_pu dbg_if0 genblk4 i_dbg_jsp jsp_biu_i rd_fifo pop_ok", false,-1);
        tracep->declBus(c+1492,"or1k_pu uart16550 SIM", false,-1, 31,0);
        tracep->declBus(c+1536,"or1k_pu uart16550 DEBUG", false,-1, 31,0);
        tracep->declBit(c+1391,"or1k_pu uart16550 wb_clk_i", false,-1);
        tracep->declBit(c+1392,"or1k_pu uart16550 wb_rst_i", false,-1);
        tracep->declBus(c+986,"or1k_pu uart16550 wb_adr_i", false,-1, 2,0);
        tracep->declBus(c+972,"or1k_pu uart16550 wb_dat_i", false,-1, 7,0);
        tracep->declBus(c+548,"or1k_pu uart16550 wb_dat_o", false,-1, 7,0);
        tracep->declBit(c+965,"or1k_pu uart16550 wb_we_i", false,-1);
        tracep->declBit(c+966,"or1k_pu uart16550 wb_stb_i", false,-1);
        tracep->declBit(c+973,"or1k_pu uart16550 wb_cyc_i", false,-1);
        tracep->declBus(c+1500,"or1k_pu uart16550 wb_sel_i", false,-1, 3,0);
        tracep->declBit(c+549,"or1k_pu uart16550 wb_ack_o", false,-1);
        tracep->declBit(c+552,"or1k_pu uart16550 int_o", false,-1);
        tracep->declBit(c+1476,"or1k_pu uart16550 srx_pad_i", false,-1);
        tracep->declBit(c+591,"or1k_pu uart16550 stx_pad_o", false,-1);
        tracep->declBit(c+592,"or1k_pu uart16550 rts_pad_o", false,-1);
        tracep->declBit(c+1476,"or1k_pu uart16550 cts_pad_i", false,-1);
        tracep->declBit(c+593,"or1k_pu uart16550 dtr_pad_o", false,-1);
        tracep->declBit(c+1476,"or1k_pu uart16550 dsr_pad_i", false,-1);
        tracep->declBit(c+1476,"or1k_pu uart16550 ri_pad_i", false,-1);
        tracep->declBit(c+1476,"or1k_pu uart16550 dcd_pad_i", false,-1);
        tracep->declBit(c+594,"or1k_pu uart16550 baud_o", false,-1);
        tracep->declBus(c+595,"or1k_pu uart16550 wb_dat8_i", false,-1, 7,0);
        tracep->declBus(c+596,"or1k_pu uart16550 wb_dat8_o", false,-1, 7,0);
        tracep->declBus(c+1537,"or1k_pu uart16550 wb_dat32_o", false,-1, 31,0);
        tracep->declBus(c+597,"or1k_pu uart16550 wb_adr_int", false,-1, 2,0);
        tracep->declBit(c+598,"or1k_pu uart16550 we_o", false,-1);
        tracep->declBit(c+599,"or1k_pu uart16550 re_o", false,-1);
        tracep->declBit(c+1391,"or1k_pu uart16550 wb_interface clk", false,-1);
        tracep->declBit(c+1392,"or1k_pu uart16550 wb_interface wb_rst_i", false,-1);
        tracep->declBit(c+965,"or1k_pu uart16550 wb_interface wb_we_i", false,-1);
        tracep->declBit(c+966,"or1k_pu uart16550 wb_interface wb_stb_i", false,-1);
        tracep->declBit(c+973,"or1k_pu uart16550 wb_interface wb_cyc_i", false,-1);
        tracep->declBus(c+1500,"or1k_pu uart16550 wb_interface wb_sel_i", false,-1, 3,0);
        tracep->declBus(c+986,"or1k_pu uart16550 wb_interface wb_adr_i", false,-1, 2,0);
        tracep->declBus(c+972,"or1k_pu uart16550 wb_interface wb_dat_i", false,-1, 7,0);
        tracep->declBus(c+548,"or1k_pu uart16550 wb_interface wb_dat_o", false,-1, 7,0);
        tracep->declBus(c+597,"or1k_pu uart16550 wb_interface wb_adr_int", false,-1, 2,0);
        tracep->declBus(c+596,"or1k_pu uart16550 wb_interface wb_dat8_o", false,-1, 7,0);
        tracep->declBus(c+595,"or1k_pu uart16550 wb_interface wb_dat8_i", false,-1, 7,0);
        tracep->declBus(c+1474,"or1k_pu uart16550 wb_interface wb_dat32_o", false,-1, 31,0);
        tracep->declBit(c+549,"or1k_pu uart16550 wb_interface wb_ack_o", false,-1);
        tracep->declBit(c+598,"or1k_pu uart16550 wb_interface we_o", false,-1);
        tracep->declBit(c+599,"or1k_pu uart16550 wb_interface re_o", false,-1);
        tracep->declBus(c+595,"or1k_pu uart16550 wb_interface wb_dat_is", false,-1, 7,0);
        tracep->declBus(c+597,"or1k_pu uart16550 wb_interface wb_adr_is", false,-1, 2,0);
        tracep->declBit(c+600,"or1k_pu uart16550 wb_interface wb_we_is", false,-1);
        tracep->declBit(c+601,"or1k_pu uart16550 wb_interface wb_cyc_is", false,-1);
        tracep->declBit(c+602,"or1k_pu uart16550 wb_interface wb_stb_is", false,-1);
        tracep->declBit(c+603,"or1k_pu uart16550 wb_interface wre", false,-1);
        tracep->declBus(c+604,"or1k_pu uart16550 wb_interface wbstate", false,-1, 1,0);
        tracep->declBus(c+1492,"or1k_pu uart16550 regs SIM", false,-1, 31,0);
        tracep->declBit(c+1391,"or1k_pu uart16550 regs clk", false,-1);
        tracep->declBit(c+1392,"or1k_pu uart16550 regs wb_rst_i", false,-1);
        tracep->declBus(c+597,"or1k_pu uart16550 regs wb_addr_i", false,-1, 2,0);
        tracep->declBus(c+595,"or1k_pu uart16550 regs wb_dat_i", false,-1, 7,0);
        tracep->declBus(c+596,"or1k_pu uart16550 regs wb_dat_o", false,-1, 7,0);
        tracep->declBit(c+598,"or1k_pu uart16550 regs wb_we_i", false,-1);
        tracep->declBit(c+599,"or1k_pu uart16550 regs wb_re_i", false,-1);
        tracep->declBit(c+591,"or1k_pu uart16550 regs stx_pad_o", false,-1);
        tracep->declBit(c+1476,"or1k_pu uart16550 regs srx_pad_i", false,-1);
        tracep->declBus(c+1500,"or1k_pu uart16550 regs modem_inputs", false,-1, 3,0);
        tracep->declBit(c+592,"or1k_pu uart16550 regs rts_pad_o", false,-1);
        tracep->declBit(c+593,"or1k_pu uart16550 regs dtr_pad_o", false,-1);
        tracep->declBit(c+552,"or1k_pu uart16550 regs int_o", false,-1);
        tracep->declBit(c+594,"or1k_pu uart16550 regs baud_o", false,-1);
        tracep->declBit(c+594,"or1k_pu uart16550 regs enable", false,-1);
        tracep->declBit(c+605,"or1k_pu uart16550 regs srx_pad", false,-1);
        tracep->declBus(c+606,"or1k_pu uart16550 regs ier", false,-1, 3,0);
        tracep->declBus(c+607,"or1k_pu uart16550 regs iir", false,-1, 3,0);
        tracep->declBus(c+608,"or1k_pu uart16550 regs fcr", false,-1, 1,0);
        tracep->declBus(c+609,"or1k_pu uart16550 regs mcr", false,-1, 4,0);
        tracep->declBus(c+610,"or1k_pu uart16550 regs lcr", false,-1, 7,0);
        tracep->declBus(c+611,"or1k_pu uart16550 regs msr", false,-1, 7,0);
        tracep->declBus(c+612,"or1k_pu uart16550 regs dl", false,-1, 15,0);
        tracep->declBus(c+613,"or1k_pu uart16550 regs scratch", false,-1, 7,0);
        tracep->declBit(c+614,"or1k_pu uart16550 regs start_dlc", false,-1);
        tracep->declBit(c+615,"or1k_pu uart16550 regs lsr_mask_d", false,-1);
        tracep->declBit(c+616,"or1k_pu uart16550 regs msi_reset", false,-1);
        tracep->declBus(c+617,"or1k_pu uart16550 regs dlc", false,-1, 15,0);
        tracep->declBus(c+618,"or1k_pu uart16550 regs trigger_level", false,-1, 3,0);
        tracep->declBit(c+619,"or1k_pu uart16550 regs rx_reset", false,-1);
        tracep->declBit(c+620,"or1k_pu uart16550 regs tx_reset", false,-1);
        tracep->declBit(c+621,"or1k_pu uart16550 regs dlab", false,-1);
        tracep->declBit(c+1476,"or1k_pu uart16550 regs cts_pad_i", false,-1);
        tracep->declBit(c+1476,"or1k_pu uart16550 regs dsr_pad_i", false,-1);
        tracep->declBit(c+1476,"or1k_pu uart16550 regs ri_pad_i", false,-1);
        tracep->declBit(c+1476,"or1k_pu uart16550 regs dcd_pad_i", false,-1);
        tracep->declBit(c+622,"or1k_pu uart16550 regs loopback", false,-1);
        tracep->declBit(c+1538,"or1k_pu uart16550 regs cts", false,-1);
        tracep->declBit(c+1538,"or1k_pu uart16550 regs dsr", false,-1);
        tracep->declBit(c+1538,"or1k_pu uart16550 regs ri", false,-1);
        tracep->declBit(c+1538,"or1k_pu uart16550 regs dcd", false,-1);
        tracep->declBit(c+623,"or1k_pu uart16550 regs cts_c", false,-1);
        tracep->declBit(c+624,"or1k_pu uart16550 regs dsr_c", false,-1);
        tracep->declBit(c+625,"or1k_pu uart16550 regs ri_c", false,-1);
        tracep->declBit(c+626,"or1k_pu uart16550 regs dcd_c", false,-1);
        tracep->declBus(c+627,"or1k_pu uart16550 regs lsr", false,-1, 7,0);
        tracep->declBit(c+628,"or1k_pu uart16550 regs lsr0", false,-1);
        tracep->declBit(c+629,"or1k_pu uart16550 regs lsr1", false,-1);
        tracep->declBit(c+630,"or1k_pu uart16550 regs lsr2", false,-1);
        tracep->declBit(c+631,"or1k_pu uart16550 regs lsr3", false,-1);
        tracep->declBit(c+632,"or1k_pu uart16550 regs lsr4", false,-1);
        tracep->declBit(c+633,"or1k_pu uart16550 regs lsr5", false,-1);
        tracep->declBit(c+634,"or1k_pu uart16550 regs lsr6", false,-1);
        tracep->declBit(c+635,"or1k_pu uart16550 regs lsr7", false,-1);
        tracep->declBit(c+636,"or1k_pu uart16550 regs lsr0r", false,-1);
        tracep->declBit(c+637,"or1k_pu uart16550 regs lsr1r", false,-1);
        tracep->declBit(c+638,"or1k_pu uart16550 regs lsr2r", false,-1);
        tracep->declBit(c+639,"or1k_pu uart16550 regs lsr3r", false,-1);
        tracep->declBit(c+640,"or1k_pu uart16550 regs lsr4r", false,-1);
        tracep->declBit(c+641,"or1k_pu uart16550 regs lsr5r", false,-1);
        tracep->declBit(c+642,"or1k_pu uart16550 regs lsr6r", false,-1);
        tracep->declBit(c+643,"or1k_pu uart16550 regs lsr7r", false,-1);
        tracep->declBit(c+644,"or1k_pu uart16550 regs lsr_mask", false,-1);
        tracep->declBit(c+645,"or1k_pu uart16550 regs rls_int", false,-1);
        tracep->declBit(c+646,"or1k_pu uart16550 regs rda_int", false,-1);
        tracep->declBit(c+647,"or1k_pu uart16550 regs ti_int", false,-1);
        tracep->declBit(c+648,"or1k_pu uart16550 regs thre_int", false,-1);
        tracep->declBit(c+649,"or1k_pu uart16550 regs ms_int", false,-1);
        tracep->declBit(c+650,"or1k_pu uart16550 regs tf_push", false,-1);
        tracep->declBit(c+651,"or1k_pu uart16550 regs rf_pop", false,-1);
        tracep->declBus(c+652,"or1k_pu uart16550 regs rf_data_out", false,-1, 10,0);
        tracep->declBit(c+653,"or1k_pu uart16550 regs rf_error_bit", false,-1);
        tracep->declBit(c+629,"or1k_pu uart16550 regs rf_overrun", false,-1);
        tracep->declBit(c+654,"or1k_pu uart16550 regs rf_push_pulse", false,-1);
        tracep->declBus(c+655,"or1k_pu uart16550 regs rf_count", false,-1, 4,0);
        tracep->declBus(c+656,"or1k_pu uart16550 regs tf_count", false,-1, 4,0);
        tracep->declBus(c+657,"or1k_pu uart16550 regs tstate", false,-1, 2,0);
        tracep->declBus(c+658,"or1k_pu uart16550 regs rstate", false,-1, 3,0);
        tracep->declBus(c+659,"or1k_pu uart16550 regs counter_t", false,-1, 9,0);
        tracep->declBit(c+660,"or1k_pu uart16550 regs thre_set_en", false,-1);
        tracep->declBus(c+661,"or1k_pu uart16550 regs block_cnt", false,-1, 7,0);
        tracep->declBus(c+662,"or1k_pu uart16550 regs block_value", false,-1, 7,0);
        tracep->declBit(c+663,"or1k_pu uart16550 regs serial_out", false,-1);
        tracep->declBit(c+664,"or1k_pu uart16550 regs serial_in", false,-1);
        tracep->declBit(c+665,"or1k_pu uart16550 regs lsr_mask_condition", false,-1);
        tracep->declBit(c+666,"or1k_pu uart16550 regs iir_read", false,-1);
        tracep->declBit(c+667,"or1k_pu uart16550 regs msr_read", false,-1);
        tracep->declBit(c+668,"or1k_pu uart16550 regs fifo_read", false,-1);
        tracep->declBit(c+669,"or1k_pu uart16550 regs fifo_write", false,-1);
        tracep->declBus(c+670,"or1k_pu uart16550 regs delayed_modem_signals", false,-1, 3,0);
        tracep->declBit(c+671,"or1k_pu uart16550 regs lsr0_d", false,-1);
        tracep->declBit(c+672,"or1k_pu uart16550 regs lsr1_d", false,-1);
        tracep->declBit(c+673,"or1k_pu uart16550 regs lsr2_d", false,-1);
        tracep->declBit(c+674,"or1k_pu uart16550 regs lsr3_d", false,-1);
        tracep->declBit(c+675,"or1k_pu uart16550 regs lsr4_d", false,-1);
        tracep->declBit(c+676,"or1k_pu uart16550 regs lsr5_d", false,-1);
        tracep->declBit(c+677,"or1k_pu uart16550 regs lsr6_d", false,-1);
        tracep->declBit(c+678,"or1k_pu uart16550 regs lsr7_d", false,-1);
        tracep->declBit(c+679,"or1k_pu uart16550 regs rls_int_d", false,-1);
        tracep->declBit(c+680,"or1k_pu uart16550 regs thre_int_d", false,-1);
        tracep->declBit(c+681,"or1k_pu uart16550 regs ms_int_d", false,-1);
        tracep->declBit(c+682,"or1k_pu uart16550 regs ti_int_d", false,-1);
        tracep->declBit(c+683,"or1k_pu uart16550 regs rda_int_d", false,-1);
        tracep->declBit(c+684,"or1k_pu uart16550 regs rls_int_rise", false,-1);
        tracep->declBit(c+685,"or1k_pu uart16550 regs thre_int_rise", false,-1);
        tracep->declBit(c+686,"or1k_pu uart16550 regs ms_int_rise", false,-1);
        tracep->declBit(c+687,"or1k_pu uart16550 regs ti_int_rise", false,-1);
        tracep->declBit(c+688,"or1k_pu uart16550 regs rda_int_rise", false,-1);
        tracep->declBit(c+689,"or1k_pu uart16550 regs rls_int_pnd", false,-1);
        tracep->declBit(c+690,"or1k_pu uart16550 regs rda_int_pnd", false,-1);
        tracep->declBit(c+691,"or1k_pu uart16550 regs thre_int_pnd", false,-1);
        tracep->declBit(c+692,"or1k_pu uart16550 regs ms_int_pnd", false,-1);
        tracep->declBit(c+693,"or1k_pu uart16550 regs ti_int_pnd", false,-1);
        tracep->declBus(c+1492,"or1k_pu uart16550 regs transmitter SIM", false,-1, 31,0);
        tracep->declBit(c+1391,"or1k_pu uart16550 regs transmitter clk", false,-1);
        tracep->declBit(c+1392,"or1k_pu uart16550 regs transmitter wb_rst_i", false,-1);
        tracep->declBus(c+610,"or1k_pu uart16550 regs transmitter lcr", false,-1, 7,0);
        tracep->declBit(c+650,"or1k_pu uart16550 regs transmitter tf_push", false,-1);
        tracep->declBus(c+595,"or1k_pu uart16550 regs transmitter wb_dat_i", false,-1, 7,0);
        tracep->declBit(c+594,"or1k_pu uart16550 regs transmitter enable", false,-1);
        tracep->declBit(c+620,"or1k_pu uart16550 regs transmitter tx_reset", false,-1);
        tracep->declBit(c+644,"or1k_pu uart16550 regs transmitter lsr_mask", false,-1);
        tracep->declBit(c+663,"or1k_pu uart16550 regs transmitter stx_pad_o", false,-1);
        tracep->declBus(c+657,"or1k_pu uart16550 regs transmitter tstate", false,-1, 2,0);
        tracep->declBus(c+656,"or1k_pu uart16550 regs transmitter tf_count", false,-1, 4,0);
        tracep->declBus(c+1477,"or1k_pu uart16550 regs transmitter s_idle", false,-1, 2,0);
        tracep->declBus(c+1529,"or1k_pu uart16550 regs transmitter s_send_start", false,-1, 2,0);
        tracep->declBus(c+1539,"or1k_pu uart16550 regs transmitter s_send_byte", false,-1, 2,0);
        tracep->declBus(c+1540,"or1k_pu uart16550 regs transmitter s_send_parity", false,-1, 2,0);
        tracep->declBus(c+1541,"or1k_pu uart16550 regs transmitter s_send_stop", false,-1, 2,0);
        tracep->declBus(c+1542,"or1k_pu uart16550 regs transmitter s_pop_byte", false,-1, 2,0);
        tracep->declBus(c+694,"or1k_pu uart16550 regs transmitter counter", false,-1, 4,0);
        tracep->declBus(c+695,"or1k_pu uart16550 regs transmitter bit_counter", false,-1, 2,0);
        tracep->declBus(c+696,"or1k_pu uart16550 regs transmitter shift_out", false,-1, 6,0);
        tracep->declBit(c+697,"or1k_pu uart16550 regs transmitter stx_o_tmp", false,-1);
        tracep->declBit(c+698,"or1k_pu uart16550 regs transmitter parity_xor", false,-1);
        tracep->declBit(c+699,"or1k_pu uart16550 regs transmitter tf_pop", false,-1);
        tracep->declBit(c+700,"or1k_pu uart16550 regs transmitter bit_out", false,-1);
        tracep->declBus(c+595,"or1k_pu uart16550 regs transmitter tf_data_in", false,-1, 7,0);
        tracep->declBus(c+701,"or1k_pu uart16550 regs transmitter tf_data_out", false,-1, 7,0);
        tracep->declBit(c+702,"or1k_pu uart16550 regs transmitter tf_overrun", false,-1);
        tracep->declBus(c+1497,"or1k_pu uart16550 regs transmitter fifo_tx FIFO_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1543,"or1k_pu uart16550 regs transmitter fifo_tx FIFO_DEPTH", false,-1, 31,0);
        tracep->declBus(c+1499,"or1k_pu uart16550 regs transmitter fifo_tx FIFO_POINTER_W", false,-1, 31,0);
        tracep->declBus(c+1544,"or1k_pu uart16550 regs transmitter fifo_tx FIFO_COUNTER_W", false,-1, 31,0);
        tracep->declBit(c+1391,"or1k_pu uart16550 regs transmitter fifo_tx clk", false,-1);
        tracep->declBit(c+1392,"or1k_pu uart16550 regs transmitter fifo_tx wb_rst_i", false,-1);
        tracep->declBit(c+650,"or1k_pu uart16550 regs transmitter fifo_tx push", false,-1);
        tracep->declBit(c+699,"or1k_pu uart16550 regs transmitter fifo_tx pop", false,-1);
        tracep->declBus(c+595,"or1k_pu uart16550 regs transmitter fifo_tx data_in", false,-1, 7,0);
        tracep->declBit(c+620,"or1k_pu uart16550 regs transmitter fifo_tx fifo_reset", false,-1);
        tracep->declBit(c+644,"or1k_pu uart16550 regs transmitter fifo_tx reset_status", false,-1);
        tracep->declBus(c+701,"or1k_pu uart16550 regs transmitter fifo_tx data_out", false,-1, 7,0);
        tracep->declBit(c+702,"or1k_pu uart16550 regs transmitter fifo_tx overrun", false,-1);
        tracep->declBus(c+656,"or1k_pu uart16550 regs transmitter fifo_tx count", false,-1, 4,0);
        tracep->declBus(c+703,"or1k_pu uart16550 regs transmitter fifo_tx top", false,-1, 3,0);
        tracep->declBus(c+704,"or1k_pu uart16550 regs transmitter fifo_tx bottom", false,-1, 3,0);
        tracep->declBus(c+705,"or1k_pu uart16550 regs transmitter fifo_tx top_plus_1", false,-1, 3,0);
        tracep->declBus(c+1499,"or1k_pu uart16550 regs transmitter fifo_tx tfifo ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1497,"or1k_pu uart16550 regs transmitter fifo_tx tfifo DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1543,"or1k_pu uart16550 regs transmitter fifo_tx tfifo DEPTH", false,-1, 31,0);
        tracep->declBit(c+1391,"or1k_pu uart16550 regs transmitter fifo_tx tfifo clk", false,-1);
        tracep->declBit(c+650,"or1k_pu uart16550 regs transmitter fifo_tx tfifo we", false,-1);
        tracep->declBus(c+703,"or1k_pu uart16550 regs transmitter fifo_tx tfifo a", false,-1, 3,0);
        tracep->declBus(c+704,"or1k_pu uart16550 regs transmitter fifo_tx tfifo dpra", false,-1, 3,0);
        tracep->declBus(c+595,"or1k_pu uart16550 regs transmitter fifo_tx tfifo di", false,-1, 7,0);
        tracep->declBus(c+701,"or1k_pu uart16550 regs transmitter fifo_tx tfifo dpo", false,-1, 7,0);
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+61+i*1,"or1k_pu uart16550 regs transmitter fifo_tx tfifo ram", true,(i+0), 7,0);}}
        tracep->declBus(c+1492,"or1k_pu uart16550 regs i_uart_sync_flops WIDTH", false,-1, 31,0);
        tracep->declBus(c+1545,"or1k_pu uart16550 regs i_uart_sync_flops INIT_VALUE", false,-1, 0,0);
        tracep->declBit(c+1392,"or1k_pu uart16550 regs i_uart_sync_flops rst_i", false,-1);
        tracep->declBit(c+1391,"or1k_pu uart16550 regs i_uart_sync_flops clk_i", false,-1);
        tracep->declBit(c+1476,"or1k_pu uart16550 regs i_uart_sync_flops stage1_rst_i", false,-1);
        tracep->declBit(c+1538,"or1k_pu uart16550 regs i_uart_sync_flops stage1_clk_en_i", false,-1);
        tracep->declBus(c+1476,"or1k_pu uart16550 regs i_uart_sync_flops async_dat_i", false,-1, 0,0);
        tracep->declBus(c+605,"or1k_pu uart16550 regs i_uart_sync_flops sync_dat_o", false,-1, 0,0);
        tracep->declBus(c+706,"or1k_pu uart16550 regs i_uart_sync_flops flop_0", false,-1, 0,0);
        tracep->declBit(c+1391,"or1k_pu uart16550 regs receiver clk", false,-1);
        tracep->declBit(c+1392,"or1k_pu uart16550 regs receiver wb_rst_i", false,-1);
        tracep->declBus(c+610,"or1k_pu uart16550 regs receiver lcr", false,-1, 7,0);
        tracep->declBit(c+651,"or1k_pu uart16550 regs receiver rf_pop", false,-1);
        tracep->declBit(c+664,"or1k_pu uart16550 regs receiver srx_pad_i", false,-1);
        tracep->declBit(c+594,"or1k_pu uart16550 regs receiver enable", false,-1);
        tracep->declBit(c+619,"or1k_pu uart16550 regs receiver rx_reset", false,-1);
        tracep->declBit(c+644,"or1k_pu uart16550 regs receiver lsr_mask", false,-1);
        tracep->declBus(c+659,"or1k_pu uart16550 regs receiver counter_t", false,-1, 9,0);
        tracep->declBus(c+655,"or1k_pu uart16550 regs receiver rf_count", false,-1, 4,0);
        tracep->declBus(c+652,"or1k_pu uart16550 regs receiver rf_data_out", false,-1, 10,0);
        tracep->declBit(c+629,"or1k_pu uart16550 regs receiver rf_overrun", false,-1);
        tracep->declBit(c+653,"or1k_pu uart16550 regs receiver rf_error_bit", false,-1);
        tracep->declBus(c+658,"or1k_pu uart16550 regs receiver rstate", false,-1, 3,0);
        tracep->declBit(c+654,"or1k_pu uart16550 regs receiver rf_push_pulse", false,-1);
        tracep->declBus(c+1500,"or1k_pu uart16550 regs receiver sr_idle", false,-1, 3,0);
        tracep->declBus(c+1501,"or1k_pu uart16550 regs receiver sr_rec_start", false,-1, 3,0);
        tracep->declBus(c+1502,"or1k_pu uart16550 regs receiver sr_rec_bit", false,-1, 3,0);
        tracep->declBus(c+1546,"or1k_pu uart16550 regs receiver sr_rec_parity", false,-1, 3,0);
        tracep->declBus(c+1547,"or1k_pu uart16550 regs receiver sr_rec_stop", false,-1, 3,0);
        tracep->declBus(c+1548,"or1k_pu uart16550 regs receiver sr_check_parity", false,-1, 3,0);
        tracep->declBus(c+1549,"or1k_pu uart16550 regs receiver sr_rec_prepare", false,-1, 3,0);
        tracep->declBus(c+1550,"or1k_pu uart16550 regs receiver sr_end_bit", false,-1, 3,0);
        tracep->declBus(c+1503,"or1k_pu uart16550 regs receiver sr_ca_lc_parity", false,-1, 3,0);
        tracep->declBus(c+1504,"or1k_pu uart16550 regs receiver sr_wait1", false,-1, 3,0);
        tracep->declBus(c+1491,"or1k_pu uart16550 regs receiver sr_push", false,-1, 3,0);
        tracep->declBus(c+707,"or1k_pu uart16550 regs receiver rcounter16", false,-1, 3,0);
        tracep->declBus(c+708,"or1k_pu uart16550 regs receiver rbit_counter", false,-1, 2,0);
        tracep->declBus(c+709,"or1k_pu uart16550 regs receiver rshift", false,-1, 7,0);
        tracep->declBit(c+710,"or1k_pu uart16550 regs receiver rparity", false,-1);
        tracep->declBit(c+711,"or1k_pu uart16550 regs receiver rparity_error", false,-1);
        tracep->declBit(c+712,"or1k_pu uart16550 regs receiver rframing_error", false,-1);
        tracep->declBit(c+713,"or1k_pu uart16550 regs receiver rparity_xor", false,-1);
        tracep->declBus(c+714,"or1k_pu uart16550 regs receiver counter_b", false,-1, 7,0);
        tracep->declBit(c+715,"or1k_pu uart16550 regs receiver rf_push_q", false,-1);
        tracep->declBus(c+716,"or1k_pu uart16550 regs receiver rf_data_in", false,-1, 10,0);
        tracep->declBit(c+717,"or1k_pu uart16550 regs receiver rf_push", false,-1);
        tracep->declBit(c+718,"or1k_pu uart16550 regs receiver break_error", false,-1);
        tracep->declBit(c+719,"or1k_pu uart16550 regs receiver rcounter16_eq_7", false,-1);
        tracep->declBit(c+720,"or1k_pu uart16550 regs receiver rcounter16_eq_0", false,-1);
        tracep->declBus(c+721,"or1k_pu uart16550 regs receiver rcounter16_minus_1", false,-1, 3,0);
        tracep->declBus(c+722,"or1k_pu uart16550 regs receiver toc_value", false,-1, 9,0);
        tracep->declBus(c+723,"or1k_pu uart16550 regs receiver brc_value", false,-1, 7,0);
        tracep->declBus(c+1551,"or1k_pu uart16550 regs receiver fifo_rx FIFO_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1543,"or1k_pu uart16550 regs receiver fifo_rx FIFO_DEPTH", false,-1, 31,0);
        tracep->declBus(c+1499,"or1k_pu uart16550 regs receiver fifo_rx FIFO_POINTER_W", false,-1, 31,0);
        tracep->declBus(c+1544,"or1k_pu uart16550 regs receiver fifo_rx FIFO_COUNTER_W", false,-1, 31,0);
        tracep->declBit(c+1391,"or1k_pu uart16550 regs receiver fifo_rx clk", false,-1);
        tracep->declBit(c+1392,"or1k_pu uart16550 regs receiver fifo_rx wb_rst_i", false,-1);
        tracep->declBit(c+654,"or1k_pu uart16550 regs receiver fifo_rx push", false,-1);
        tracep->declBit(c+651,"or1k_pu uart16550 regs receiver fifo_rx pop", false,-1);
        tracep->declBus(c+716,"or1k_pu uart16550 regs receiver fifo_rx data_in", false,-1, 10,0);
        tracep->declBit(c+619,"or1k_pu uart16550 regs receiver fifo_rx fifo_reset", false,-1);
        tracep->declBit(c+644,"or1k_pu uart16550 regs receiver fifo_rx reset_status", false,-1);
        tracep->declBus(c+652,"or1k_pu uart16550 regs receiver fifo_rx data_out", false,-1, 10,0);
        tracep->declBit(c+629,"or1k_pu uart16550 regs receiver fifo_rx overrun", false,-1);
        tracep->declBus(c+655,"or1k_pu uart16550 regs receiver fifo_rx count", false,-1, 4,0);
        tracep->declBit(c+653,"or1k_pu uart16550 regs receiver fifo_rx error_bit", false,-1);
        tracep->declBus(c+1454,"or1k_pu uart16550 regs receiver fifo_rx data8_out", false,-1, 7,0);
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+724+i*1,"or1k_pu uart16550 regs receiver fifo_rx fifo", true,(i+0), 2,0);}}
        tracep->declBus(c+740,"or1k_pu uart16550 regs receiver fifo_rx top", false,-1, 3,0);
        tracep->declBus(c+741,"or1k_pu uart16550 regs receiver fifo_rx bottom", false,-1, 3,0);
        tracep->declBus(c+742,"or1k_pu uart16550 regs receiver fifo_rx top_plus_1", false,-1, 3,0);
        tracep->declBus(c+743,"or1k_pu uart16550 regs receiver fifo_rx word0", false,-1, 2,0);
        tracep->declBus(c+744,"or1k_pu uart16550 regs receiver fifo_rx word1", false,-1, 2,0);
        tracep->declBus(c+745,"or1k_pu uart16550 regs receiver fifo_rx word2", false,-1, 2,0);
        tracep->declBus(c+746,"or1k_pu uart16550 regs receiver fifo_rx word3", false,-1, 2,0);
        tracep->declBus(c+747,"or1k_pu uart16550 regs receiver fifo_rx word4", false,-1, 2,0);
        tracep->declBus(c+748,"or1k_pu uart16550 regs receiver fifo_rx word5", false,-1, 2,0);
        tracep->declBus(c+749,"or1k_pu uart16550 regs receiver fifo_rx word6", false,-1, 2,0);
        tracep->declBus(c+750,"or1k_pu uart16550 regs receiver fifo_rx word7", false,-1, 2,0);
        tracep->declBus(c+751,"or1k_pu uart16550 regs receiver fifo_rx word8", false,-1, 2,0);
        tracep->declBus(c+752,"or1k_pu uart16550 regs receiver fifo_rx word9", false,-1, 2,0);
        tracep->declBus(c+753,"or1k_pu uart16550 regs receiver fifo_rx word10", false,-1, 2,0);
        tracep->declBus(c+754,"or1k_pu uart16550 regs receiver fifo_rx word11", false,-1, 2,0);
        tracep->declBus(c+755,"or1k_pu uart16550 regs receiver fifo_rx word12", false,-1, 2,0);
        tracep->declBus(c+756,"or1k_pu uart16550 regs receiver fifo_rx word13", false,-1, 2,0);
        tracep->declBus(c+757,"or1k_pu uart16550 regs receiver fifo_rx word14", false,-1, 2,0);
        tracep->declBus(c+758,"or1k_pu uart16550 regs receiver fifo_rx word15", false,-1, 2,0);
        tracep->declBus(c+1499,"or1k_pu uart16550 regs receiver fifo_rx rfifo ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1497,"or1k_pu uart16550 regs receiver fifo_rx rfifo DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1543,"or1k_pu uart16550 regs receiver fifo_rx rfifo DEPTH", false,-1, 31,0);
        tracep->declBit(c+1391,"or1k_pu uart16550 regs receiver fifo_rx rfifo clk", false,-1);
        tracep->declBit(c+654,"or1k_pu uart16550 regs receiver fifo_rx rfifo we", false,-1);
        tracep->declBus(c+740,"or1k_pu uart16550 regs receiver fifo_rx rfifo a", false,-1, 3,0);
        tracep->declBus(c+741,"or1k_pu uart16550 regs receiver fifo_rx rfifo dpra", false,-1, 3,0);
        tracep->declBus(c+759,"or1k_pu uart16550 regs receiver fifo_rx rfifo di", false,-1, 7,0);
        tracep->declBus(c+1454,"or1k_pu uart16550 regs receiver fifo_rx rfifo dpo", false,-1, 7,0);
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+77+i*1,"or1k_pu uart16550 regs receiver fifo_rx rfifo ram", true,(i+0), 7,0);}}
        tracep->declBus(c+1471,"or1k_pu core OPTION_OPERAND_WIDTH", false,-1, 31,0);
        tracep->declArray(c+1552,"or1k_pu core OPTION_CPU0", false,-1, 79,0);
        tracep->declQuad(c+1505,"or1k_pu core FEATURE_DATACACHE", false,-1, 55,0);
        tracep->declBus(c+1544,"or1k_pu core OPTION_DCACHE_BLOCK_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1497,"or1k_pu core OPTION_DCACHE_SET_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1486,"or1k_pu core OPTION_DCACHE_WAYS", false,-1, 31,0);
        tracep->declBus(c+1555,"or1k_pu core OPTION_DCACHE_LIMIT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core OPTION_DCACHE_SNOOP", false,-1, 31,0);
        tracep->declQuad(c+1505,"or1k_pu core FEATURE_DMMU", false,-1, 55,0);
        tracep->declBus(c+1507,"or1k_pu core FEATURE_DMMU_HW_TLB_RELOAD", false,-1, 31,0);
        tracep->declBus(c+1496,"or1k_pu core OPTION_DMMU_SET_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1492,"or1k_pu core OPTION_DMMU_WAYS", false,-1, 31,0);
        tracep->declQuad(c+1505,"or1k_pu core FEATURE_INSTRUCTIONCACHE", false,-1, 55,0);
        tracep->declBus(c+1544,"or1k_pu core OPTION_ICACHE_BLOCK_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1497,"or1k_pu core OPTION_ICACHE_SET_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1486,"or1k_pu core OPTION_ICACHE_WAYS", false,-1, 31,0);
        tracep->declBus(c+1471,"or1k_pu core OPTION_ICACHE_LIMIT_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1505,"or1k_pu core FEATURE_IMMU", false,-1, 55,0);
        tracep->declBus(c+1507,"or1k_pu core FEATURE_IMMU_HW_TLB_RELOAD", false,-1, 31,0);
        tracep->declBus(c+1496,"or1k_pu core OPTION_IMMU_SET_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1492,"or1k_pu core OPTION_IMMU_WAYS", false,-1, 31,0);
        tracep->declQuad(c+1505,"or1k_pu core FEATURE_TIMER", false,-1, 55,0);
        tracep->declQuad(c+1505,"or1k_pu core FEATURE_DEBUGUNIT", false,-1, 55,0);
        tracep->declBus(c+1507,"or1k_pu core FEATURE_PERFCOUNTERS", false,-1, 31,0);
        tracep->declBus(c+1536,"or1k_pu core OPTION_PERFCOUNTERS_NUM", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core FEATURE_MAC", false,-1, 31,0);
        tracep->declQuad(c+1505,"or1k_pu core FEATURE_SYSCALL", false,-1, 55,0);
        tracep->declQuad(c+1505,"or1k_pu core FEATURE_TRAP", false,-1, 55,0);
        tracep->declQuad(c+1505,"or1k_pu core FEATURE_RANGE", false,-1, 55,0);
        tracep->declQuad(c+1505,"or1k_pu core FEATURE_PIC", false,-1, 55,0);
        tracep->declQuad(c+1556,"or1k_pu core OPTION_PIC_TRIGGER", false,-1, 39,0);
        tracep->declBus(c+1536,"or1k_pu core OPTION_PIC_NMI_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1505,"or1k_pu core FEATURE_DSX", false,-1, 55,0);
        tracep->declQuad(c+1505,"or1k_pu core FEATURE_OVERFLOW", false,-1, 55,0);
        tracep->declQuad(c+1505,"or1k_pu core FEATURE_CARRY_FLAG", false,-1, 55,0);
        tracep->declBus(c+1507,"or1k_pu core FEATURE_FASTCONTEXTS", false,-1, 31,0);
        tracep->declBus(c+1536,"or1k_pu core OPTION_RF_CLEAR_ON_INIT", false,-1, 31,0);
        tracep->declBus(c+1492,"or1k_pu core OPTION_RF_NUM_SHADOW_GPR", false,-1, 31,0);
        tracep->declBus(c+1544,"or1k_pu core OPTION_RF_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1471,"or1k_pu core OPTION_RF_WORDS", false,-1, 31,0);
        tracep->declBus(c+1558,"or1k_pu core OPTION_RESET_PC", false,-1, 31,0);
        tracep->declArray(c+1559,"or1k_pu core FEATURE_MULTIPLIER", false,-1, 79,0);
        tracep->declQuad(c+1562,"or1k_pu core FEATURE_DIVIDER", false,-1, 47,0);
        tracep->declQuad(c+1505,"or1k_pu core FEATURE_ADDC", false,-1, 55,0);
        tracep->declQuad(c+1505,"or1k_pu core FEATURE_SRA", false,-1, 55,0);
        tracep->declBus(c+1507,"or1k_pu core FEATURE_ROR", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core FEATURE_EXT", false,-1, 31,0);
        tracep->declQuad(c+1505,"or1k_pu core FEATURE_CMOV", false,-1, 55,0);
        tracep->declQuad(c+1505,"or1k_pu core FEATURE_FFL1", false,-1, 55,0);
        tracep->declQuad(c+1505,"or1k_pu core FEATURE_ATOMIC", false,-1, 55,0);
        tracep->declBus(c+1507,"or1k_pu core FEATURE_CUST1", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core FEATURE_CUST2", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core FEATURE_CUST3", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core FEATURE_CUST4", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core FEATURE_CUST5", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core FEATURE_CUST6", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core FEATURE_CUST7", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core FEATURE_CUST8", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core FEATURE_FPU", false,-1, 31,0);
        tracep->declBus(c+1564,"or1k_pu core OPTION_FTOI_ROUNDING", false,-1, 23,0);
        tracep->declQuad(c+1565,"or1k_pu core OPTION_SHIFTER", false,-1, 47,0);
        tracep->declQuad(c+1505,"or1k_pu core FEATURE_STORE_BUFFER", false,-1, 55,0);
        tracep->declBus(c+1497,"or1k_pu core OPTION_STORE_BUFFER_DEPTH_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core FEATURE_MULTICORE", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core FEATURE_TRACEPORT_EXEC", false,-1, 31,0);
        tracep->declQuad(c+1567,"or1k_pu core FEATURE_BRANCH_PREDICTOR", false,-1, 47,0);
        tracep->declArray(c+1569,"or1k_pu core BUS_IF_TYPE", false,-1, 79,0);
        tracep->declArray(c+1572,"or1k_pu core IBUS_WB_TYPE", false,-1, 175,0);
        tracep->declArray(c+1572,"or1k_pu core DBUS_WB_TYPE", false,-1, 175,0);
        tracep->declBit(c+1391,"or1k_pu core clk", false,-1);
        tracep->declBit(c+941,"or1k_pu core rst", false,-1);
        tracep->declBus(c+22,"or1k_pu core iwbm_adr_o", false,-1, 31,0);
        tracep->declBit(c+23,"or1k_pu core iwbm_stb_o", false,-1);
        tracep->declBit(c+23,"or1k_pu core iwbm_cyc_o", false,-1);
        tracep->declBus(c+1475,"or1k_pu core iwbm_sel_o", false,-1, 3,0);
        tracep->declBit(c+1476,"or1k_pu core iwbm_we_o", false,-1);
        tracep->declBus(c+507,"or1k_pu core iwbm_cti_o", false,-1, 2,0);
        tracep->declBus(c+1473,"or1k_pu core iwbm_bte_o", false,-1, 1,0);
        tracep->declBus(c+1474,"or1k_pu core iwbm_dat_o", false,-1, 31,0);
        tracep->declBit(c+970,"or1k_pu core iwbm_err_i", false,-1);
        tracep->declBit(c+25,"or1k_pu core iwbm_ack_i", false,-1);
        tracep->declBus(c+24,"or1k_pu core iwbm_dat_i", false,-1, 31,0);
        tracep->declBit(c+26,"or1k_pu core iwbm_rty_i", false,-1);
        tracep->declBus(c+962,"or1k_pu core dwbm_adr_o", false,-1, 31,0);
        tracep->declBit(c+966,"or1k_pu core dwbm_stb_o", false,-1);
        tracep->declBit(c+966,"or1k_pu core dwbm_cyc_o", false,-1);
        tracep->declBus(c+964,"or1k_pu core dwbm_sel_o", false,-1, 3,0);
        tracep->declBit(c+965,"or1k_pu core dwbm_we_o", false,-1);
        tracep->declBus(c+967,"or1k_pu core dwbm_cti_o", false,-1, 2,0);
        tracep->declBus(c+1473,"or1k_pu core dwbm_bte_o", false,-1, 1,0);
        tracep->declBus(c+963,"or1k_pu core dwbm_dat_o", false,-1, 31,0);
        tracep->declBit(c+968,"or1k_pu core dwbm_err_i", false,-1);
        tracep->declBit(c+1183,"or1k_pu core dwbm_ack_i", false,-1);
        tracep->declBus(c+1182,"or1k_pu core dwbm_dat_i", false,-1, 31,0);
        tracep->declBit(c+969,"or1k_pu core dwbm_rty_i", false,-1);
        tracep->declBus(c+551,"or1k_pu core irq_i", false,-1, 31,0);
        tracep->declBus(c+940,"or1k_pu core du_addr_i", false,-1, 15,0);
        tracep->declBit(c+1229,"or1k_pu core du_stb_i", false,-1);
        tracep->declBus(c+768,"or1k_pu core du_dat_i", false,-1, 31,0);
        tracep->declBit(c+769,"or1k_pu core du_we_i", false,-1);
        tracep->declBus(c+1404,"or1k_pu core du_dat_o", false,-1, 31,0);
        tracep->declBit(c+30,"or1k_pu core du_ack_o", false,-1);
        tracep->declBit(c+1384,"or1k_pu core du_stall_i", false,-1);
        tracep->declBit(c+1405,"or1k_pu core du_stall_o", false,-1);
        tracep->declBit(c+93,"or1k_pu core traceport_exec_valid_o", false,-1);
        tracep->declBus(c+94,"or1k_pu core traceport_exec_pc_o", false,-1, 31,0);
        tracep->declBit(c+1578,"or1k_pu core traceport_exec_jb_o", false,-1);
        tracep->declBit(c+1579,"or1k_pu core traceport_exec_jal_o", false,-1);
        tracep->declBit(c+1580,"or1k_pu core traceport_exec_jr_o", false,-1);
        tracep->declBus(c+1581,"or1k_pu core traceport_exec_jbtarget_o", false,-1, 31,0);
        tracep->declBus(c+95,"or1k_pu core traceport_exec_insn_o", false,-1, 31,0);
        tracep->declBus(c+1474,"or1k_pu core traceport_exec_wbdata_o", false,-1, 31,0);
        tracep->declBus(c+1582,"or1k_pu core traceport_exec_wbreg_o", false,-1, 4,0);
        tracep->declBit(c+1476,"or1k_pu core traceport_exec_wben_o", false,-1);
        tracep->declBus(c+1583,"or1k_pu core multicore_coreid_i", false,-1, 31,0);
        tracep->declBus(c+1584,"or1k_pu core multicore_numcores_i", false,-1, 31,0);
        tracep->declBus(c+1585,"or1k_pu core snoop_adr_i", false,-1, 31,0);
        tracep->declBit(c+1586,"or1k_pu core snoop_en_i", false,-1);
        tracep->declBus(c+962,"or1k_pu core dbus_adr_o", false,-1, 31,0);
        tracep->declBus(c+964,"or1k_pu core dbus_bsel_o", false,-1, 3,0);
        tracep->declBit(c+987,"or1k_pu core dbus_burst_o", false,-1);
        tracep->declBus(c+963,"or1k_pu core dbus_dat_o", false,-1, 31,0);
        tracep->declBit(c+966,"or1k_pu core dbus_req_o", false,-1);
        tracep->declBit(c+965,"or1k_pu core dbus_we_o", false,-1);
        tracep->declBus(c+22,"or1k_pu core ibus_adr_o", false,-1, 31,0);
        tracep->declBit(c+508,"or1k_pu core ibus_burst_o", false,-1);
        tracep->declBit(c+23,"or1k_pu core ibus_req_o", false,-1);
        tracep->declBus(c+1232,"or1k_pu core spr_bus_addr_o", false,-1, 15,0);
        tracep->declBus(c+1233,"or1k_pu core spr_bus_dat_o", false,-1, 31,0);
        tracep->declBit(c+1234,"or1k_pu core spr_bus_stb_o", false,-1);
        tracep->declBit(c+1235,"or1k_pu core spr_bus_we_o", false,-1);
        tracep->declBus(c+988,"or1k_pu core spr_sr_o", false,-1, 15,0);
        tracep->declBit(c+25,"or1k_pu core ibus_ack_i", false,-1);
        tracep->declBus(c+24,"or1k_pu core ibus_dat_i", false,-1, 31,0);
        tracep->declBit(c+970,"or1k_pu core ibus_err_i", false,-1);
        tracep->declBit(c+1183,"or1k_pu core dbus_ack_i", false,-1);
        tracep->declBus(c+1182,"or1k_pu core dbus_dat_i", false,-1, 31,0);
        tracep->declBit(c+968,"or1k_pu core dbus_err_i", false,-1);
        tracep->declArray(c+1572,"or1k_pu core bus_gen ibus_bridge BUS_IF_TYPE", false,-1, 175,0);
        tracep->declBus(c+1497,"or1k_pu core bus_gen ibus_bridge BURST_LENGTH", false,-1, 31,0);
        tracep->declBit(c+1391,"or1k_pu core bus_gen ibus_bridge clk", false,-1);
        tracep->declBit(c+941,"or1k_pu core bus_gen ibus_bridge rst", false,-1);
        tracep->declBit(c+970,"or1k_pu core bus_gen ibus_bridge cpu_err_o", false,-1);
        tracep->declBit(c+25,"or1k_pu core bus_gen ibus_bridge cpu_ack_o", false,-1);
        tracep->declBus(c+24,"or1k_pu core bus_gen ibus_bridge cpu_dat_o", false,-1, 31,0);
        tracep->declBus(c+22,"or1k_pu core bus_gen ibus_bridge cpu_adr_i", false,-1, 31,0);
        tracep->declBus(c+1474,"or1k_pu core bus_gen ibus_bridge cpu_dat_i", false,-1, 31,0);
        tracep->declBit(c+23,"or1k_pu core bus_gen ibus_bridge cpu_req_i", false,-1);
        tracep->declBus(c+1475,"or1k_pu core bus_gen ibus_bridge cpu_bsel_i", false,-1, 3,0);
        tracep->declBit(c+1476,"or1k_pu core bus_gen ibus_bridge cpu_we_i", false,-1);
        tracep->declBit(c+508,"or1k_pu core bus_gen ibus_bridge cpu_burst_i", false,-1);
        tracep->declBus(c+22,"or1k_pu core bus_gen ibus_bridge wbm_adr_o", false,-1, 31,0);
        tracep->declBit(c+23,"or1k_pu core bus_gen ibus_bridge wbm_stb_o", false,-1);
        tracep->declBit(c+23,"or1k_pu core bus_gen ibus_bridge wbm_cyc_o", false,-1);
        tracep->declBus(c+1475,"or1k_pu core bus_gen ibus_bridge wbm_sel_o", false,-1, 3,0);
        tracep->declBit(c+1476,"or1k_pu core bus_gen ibus_bridge wbm_we_o", false,-1);
        tracep->declBus(c+507,"or1k_pu core bus_gen ibus_bridge wbm_cti_o", false,-1, 2,0);
        tracep->declBus(c+1473,"or1k_pu core bus_gen ibus_bridge wbm_bte_o", false,-1, 1,0);
        tracep->declBus(c+1474,"or1k_pu core bus_gen ibus_bridge wbm_dat_o", false,-1, 31,0);
        tracep->declBit(c+970,"or1k_pu core bus_gen ibus_bridge wbm_err_i", false,-1);
        tracep->declBit(c+25,"or1k_pu core bus_gen ibus_bridge wbm_ack_i", false,-1);
        tracep->declBus(c+24,"or1k_pu core bus_gen ibus_bridge wbm_dat_i", false,-1, 31,0);
        tracep->declBit(c+26,"or1k_pu core bus_gen ibus_bridge wbm_rty_i", false,-1);
        tracep->declBus(c+1494,"or1k_pu core bus_gen ibus_bridge BADDR_WITH", false,-1, 31,0);
        tracep->declArray(c+1572,"or1k_pu core bus_gen dbus_bridge BUS_IF_TYPE", false,-1, 175,0);
        tracep->declBus(c+1497,"or1k_pu core bus_gen dbus_bridge BURST_LENGTH", false,-1, 31,0);
        tracep->declBit(c+1391,"or1k_pu core bus_gen dbus_bridge clk", false,-1);
        tracep->declBit(c+941,"or1k_pu core bus_gen dbus_bridge rst", false,-1);
        tracep->declBit(c+968,"or1k_pu core bus_gen dbus_bridge cpu_err_o", false,-1);
        tracep->declBit(c+1183,"or1k_pu core bus_gen dbus_bridge cpu_ack_o", false,-1);
        tracep->declBus(c+1182,"or1k_pu core bus_gen dbus_bridge cpu_dat_o", false,-1, 31,0);
        tracep->declBus(c+962,"or1k_pu core bus_gen dbus_bridge cpu_adr_i", false,-1, 31,0);
        tracep->declBus(c+963,"or1k_pu core bus_gen dbus_bridge cpu_dat_i", false,-1, 31,0);
        tracep->declBit(c+966,"or1k_pu core bus_gen dbus_bridge cpu_req_i", false,-1);
        tracep->declBus(c+964,"or1k_pu core bus_gen dbus_bridge cpu_bsel_i", false,-1, 3,0);
        tracep->declBit(c+965,"or1k_pu core bus_gen dbus_bridge cpu_we_i", false,-1);
        tracep->declBit(c+987,"or1k_pu core bus_gen dbus_bridge cpu_burst_i", false,-1);
        tracep->declBus(c+962,"or1k_pu core bus_gen dbus_bridge wbm_adr_o", false,-1, 31,0);
        tracep->declBit(c+966,"or1k_pu core bus_gen dbus_bridge wbm_stb_o", false,-1);
        tracep->declBit(c+966,"or1k_pu core bus_gen dbus_bridge wbm_cyc_o", false,-1);
        tracep->declBus(c+964,"or1k_pu core bus_gen dbus_bridge wbm_sel_o", false,-1, 3,0);
        tracep->declBit(c+965,"or1k_pu core bus_gen dbus_bridge wbm_we_o", false,-1);
        tracep->declBus(c+967,"or1k_pu core bus_gen dbus_bridge wbm_cti_o", false,-1, 2,0);
        tracep->declBus(c+1473,"or1k_pu core bus_gen dbus_bridge wbm_bte_o", false,-1, 1,0);
        tracep->declBus(c+963,"or1k_pu core bus_gen dbus_bridge wbm_dat_o", false,-1, 31,0);
        tracep->declBit(c+968,"or1k_pu core bus_gen dbus_bridge wbm_err_i", false,-1);
        tracep->declBit(c+1183,"or1k_pu core bus_gen dbus_bridge wbm_ack_i", false,-1);
        tracep->declBus(c+1182,"or1k_pu core bus_gen dbus_bridge wbm_dat_i", false,-1, 31,0);
        tracep->declBit(c+969,"or1k_pu core bus_gen dbus_bridge wbm_rty_i", false,-1);
        tracep->declBus(c+1494,"or1k_pu core bus_gen dbus_bridge BADDR_WITH", false,-1, 31,0);
        tracep->declBus(c+1587,"or1k_pu wb_bfm_memory0 DEPTH", false,-1, 31,0);
        tracep->declBus(c+1588,"or1k_pu wb_bfm_memory0 MEMFILE", false,-1, 0,0);
        tracep->declBus(c+1471,"or1k_pu wb_bfm_memory0 DW", false,-1, 31,0);
        tracep->declBus(c+1589,"or1k_pu wb_bfm_memory0 AW", false,-1, 31,0);
        tracep->declBit(c+1391,"or1k_pu wb_bfm_memory0 wb_clk_i", false,-1);
        tracep->declBit(c+1392,"or1k_pu wb_bfm_memory0 wb_rst_i", false,-1);
        tracep->declBus(c+481,"or1k_pu wb_bfm_memory0 wb_adr_i", false,-1, 22,0);
        tracep->declBus(c+476,"or1k_pu wb_bfm_memory0 wb_dat_i", false,-1, 31,0);
        tracep->declBus(c+1400,"or1k_pu wb_bfm_memory0 wb_sel_i", false,-1, 3,0);
        tracep->declBit(c+477,"or1k_pu wb_bfm_memory0 wb_we_i", false,-1);
        tracep->declBus(c+27,"or1k_pu wb_bfm_memory0 wb_bte_i", false,-1, 1,0);
        tracep->declBus(c+1228,"or1k_pu wb_bfm_memory0 wb_cti_i", false,-1, 2,0);
        tracep->declBit(c+1401,"or1k_pu wb_bfm_memory0 wb_cyc_i", false,-1);
        tracep->declBit(c+1402,"or1k_pu wb_bfm_memory0 wb_stb_i", false,-1);
        tracep->declBit(c+29,"or1k_pu wb_bfm_memory0 wb_ack_o", false,-1);
        tracep->declBit(c+1476,"or1k_pu wb_bfm_memory0 wb_err_o", false,-1);
        tracep->declBus(c+28,"or1k_pu wb_bfm_memory0 wb_dat_o", false,-1, 31,0);
        tracep->declBus(c+1588,"or1k_pu wb_bfm_memory0 CLASSIC_CYCLE", false,-1, 0,0);
        tracep->declBus(c+1545,"or1k_pu wb_bfm_memory0 BURST_CYCLE", false,-1, 0,0);
        tracep->declBus(c+1588,"or1k_pu wb_bfm_memory0 READ", false,-1, 0,0);
        tracep->declBus(c+1545,"or1k_pu wb_bfm_memory0 WRITE", false,-1, 0,0);
        tracep->declBus(c+1477,"or1k_pu wb_bfm_memory0 CTI_CLASSIC", false,-1, 2,0);
        tracep->declBus(c+1529,"or1k_pu wb_bfm_memory0 CTI_CONST_BURST", false,-1, 2,0);
        tracep->declBus(c+1539,"or1k_pu wb_bfm_memory0 CTI_INC_BURST", false,-1, 2,0);
        tracep->declBus(c+1590,"or1k_pu wb_bfm_memory0 CTI_END_OF_BURST", false,-1, 2,0);
        tracep->declBus(c+1478,"or1k_pu wb_bfm_memory0 BTE_LINEAR", false,-1, 1,0);
        tracep->declBus(c+1591,"or1k_pu wb_bfm_memory0 BTE_WRAP_4", false,-1, 1,0);
        tracep->declBus(c+1473,"or1k_pu wb_bfm_memory0 BTE_WRAP_8", false,-1, 1,0);
        tracep->declBus(c+1592,"or1k_pu wb_bfm_memory0 BTE_WRAP_16", false,-1, 1,0);
        tracep->declBus(c+96,"or1k_pu wb_bfm_memory0 adr_r", false,-1, 22,0);
        tracep->declBus(c+1236,"or1k_pu wb_bfm_memory0 next_adr", false,-1, 22,0);
        tracep->declBit(c+1345,"or1k_pu wb_bfm_memory0 valid", false,-1);
        tracep->declBit(c+97,"or1k_pu wb_bfm_memory0 valid_r", false,-1);
        tracep->declBit(c+98,"or1k_pu wb_bfm_memory0 is_last_r", false,-1);
        tracep->declBit(c+1455,"or1k_pu wb_bfm_memory0 new_cycle", false,-1);
        tracep->declBus(c+1456,"or1k_pu wb_bfm_memory0 adr", false,-1, 22,0);
        tracep->declBit(c+1457,"or1k_pu wb_bfm_memory0 ram_we", false,-1);
        tracep->declBus(c+1471,"or1k_pu core or1k_cpu OPTION_OPERAND_WIDTH", false,-1, 31,0);
        tracep->declArray(c+1552,"or1k_pu core or1k_cpu OPTION_CPU", false,-1, 79,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu FEATURE_DATACACHE", false,-1, 55,0);
        tracep->declBus(c+1544,"or1k_pu core or1k_cpu OPTION_DCACHE_BLOCK_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1497,"or1k_pu core or1k_cpu OPTION_DCACHE_SET_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1486,"or1k_pu core or1k_cpu OPTION_DCACHE_WAYS", false,-1, 31,0);
        tracep->declBus(c+1555,"or1k_pu core or1k_cpu OPTION_DCACHE_LIMIT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu OPTION_DCACHE_SNOOP", false,-1, 31,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu FEATURE_DMMU", false,-1, 55,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu FEATURE_DMMU_HW_TLB_RELOAD", false,-1, 31,0);
        tracep->declBus(c+1496,"or1k_pu core or1k_cpu OPTION_DMMU_SET_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1492,"or1k_pu core or1k_cpu OPTION_DMMU_WAYS", false,-1, 31,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu FEATURE_INSTRUCTIONCACHE", false,-1, 55,0);
        tracep->declBus(c+1544,"or1k_pu core or1k_cpu OPTION_ICACHE_BLOCK_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1497,"or1k_pu core or1k_cpu OPTION_ICACHE_SET_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1486,"or1k_pu core or1k_cpu OPTION_ICACHE_WAYS", false,-1, 31,0);
        tracep->declBus(c+1471,"or1k_pu core or1k_cpu OPTION_ICACHE_LIMIT_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu FEATURE_IMMU", false,-1, 55,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu FEATURE_IMMU_HW_TLB_RELOAD", false,-1, 31,0);
        tracep->declBus(c+1496,"or1k_pu core or1k_cpu OPTION_IMMU_SET_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1492,"or1k_pu core or1k_cpu OPTION_IMMU_WAYS", false,-1, 31,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu FEATURE_TIMER", false,-1, 55,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu FEATURE_DEBUGUNIT", false,-1, 55,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu FEATURE_PERFCOUNTERS", false,-1, 31,0);
        tracep->declBus(c+1536,"or1k_pu core or1k_cpu OPTION_PERFCOUNTERS_NUM", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu FEATURE_MAC", false,-1, 31,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu FEATURE_SYSCALL", false,-1, 55,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu FEATURE_TRAP", false,-1, 55,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu FEATURE_RANGE", false,-1, 55,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu FEATURE_PIC", false,-1, 55,0);
        tracep->declQuad(c+1556,"or1k_pu core or1k_cpu OPTION_PIC_TRIGGER", false,-1, 39,0);
        tracep->declBus(c+1536,"or1k_pu core or1k_cpu OPTION_PIC_NMI_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu FEATURE_DSX", false,-1, 55,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu FEATURE_OVERFLOW", false,-1, 55,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu FEATURE_CARRY_FLAG", false,-1, 55,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu FEATURE_FASTCONTEXTS", false,-1, 31,0);
        tracep->declBus(c+1536,"or1k_pu core or1k_cpu OPTION_RF_CLEAR_ON_INIT", false,-1, 31,0);
        tracep->declBus(c+1492,"or1k_pu core or1k_cpu OPTION_RF_NUM_SHADOW_GPR", false,-1, 31,0);
        tracep->declBus(c+1544,"or1k_pu core or1k_cpu OPTION_RF_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1471,"or1k_pu core or1k_cpu OPTION_RF_WORDS", false,-1, 31,0);
        tracep->declBus(c+1558,"or1k_pu core or1k_cpu OPTION_RESET_PC", false,-1, 31,0);
        tracep->declQuad(c+1593,"or1k_pu core or1k_cpu OPTION_TCM_FETCHER", false,-1, 63,0);
        tracep->declArray(c+1559,"or1k_pu core or1k_cpu FEATURE_MULTIPLIER", false,-1, 79,0);
        tracep->declQuad(c+1562,"or1k_pu core or1k_cpu FEATURE_DIVIDER", false,-1, 47,0);
        tracep->declQuad(c+1565,"or1k_pu core or1k_cpu OPTION_SHIFTER", false,-1, 47,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu FEATURE_ADDC", false,-1, 55,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu FEATURE_SRA", false,-1, 55,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu FEATURE_ROR", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu FEATURE_EXT", false,-1, 31,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu FEATURE_CMOV", false,-1, 55,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu FEATURE_FFL1", false,-1, 55,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu FEATURE_MSYNC", false,-1, 55,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu FEATURE_PSYNC", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu FEATURE_CSYNC", false,-1, 31,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu FEATURE_ATOMIC", false,-1, 55,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu FEATURE_FPU", false,-1, 31,0);
        tracep->declBus(c+1564,"or1k_pu core or1k_cpu OPTION_FTOI_ROUNDING", false,-1, 23,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu FEATURE_CUST1", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu FEATURE_CUST2", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu FEATURE_CUST3", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu FEATURE_CUST4", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu FEATURE_CUST5", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu FEATURE_CUST6", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu FEATURE_CUST7", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu FEATURE_CUST8", false,-1, 31,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu FEATURE_STORE_BUFFER", false,-1, 55,0);
        tracep->declBus(c+1497,"or1k_pu core or1k_cpu OPTION_STORE_BUFFER_DEPTH_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu FEATURE_MULTICORE", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu FEATURE_TRACEPORT_EXEC", false,-1, 31,0);
        tracep->declQuad(c+1567,"or1k_pu core or1k_cpu FEATURE_BRANCH_PREDICTOR", false,-1, 47,0);
        tracep->declBit(c+1391,"or1k_pu core or1k_cpu clk", false,-1);
        tracep->declBit(c+941,"or1k_pu core or1k_cpu rst", false,-1);
        tracep->declBit(c+970,"or1k_pu core or1k_cpu ibus_err_i", false,-1);
        tracep->declBit(c+25,"or1k_pu core or1k_cpu ibus_ack_i", false,-1);
        tracep->declBus(c+24,"or1k_pu core or1k_cpu ibus_dat_i", false,-1, 31,0);
        tracep->declBus(c+22,"or1k_pu core or1k_cpu ibus_adr_o", false,-1, 31,0);
        tracep->declBit(c+23,"or1k_pu core or1k_cpu ibus_req_o", false,-1);
        tracep->declBit(c+508,"or1k_pu core or1k_cpu ibus_burst_o", false,-1);
        tracep->declBit(c+968,"or1k_pu core or1k_cpu dbus_err_i", false,-1);
        tracep->declBit(c+1183,"or1k_pu core or1k_cpu dbus_ack_i", false,-1);
        tracep->declBus(c+1182,"or1k_pu core or1k_cpu dbus_dat_i", false,-1, 31,0);
        tracep->declBus(c+962,"or1k_pu core or1k_cpu dbus_adr_o", false,-1, 31,0);
        tracep->declBus(c+963,"or1k_pu core or1k_cpu dbus_dat_o", false,-1, 31,0);
        tracep->declBit(c+966,"or1k_pu core or1k_cpu dbus_req_o", false,-1);
        tracep->declBus(c+964,"or1k_pu core or1k_cpu dbus_bsel_o", false,-1, 3,0);
        tracep->declBit(c+965,"or1k_pu core or1k_cpu dbus_we_o", false,-1);
        tracep->declBit(c+987,"or1k_pu core or1k_cpu dbus_burst_o", false,-1);
        tracep->declBus(c+551,"or1k_pu core or1k_cpu irq_i", false,-1, 31,0);
        tracep->declBus(c+940,"or1k_pu core or1k_cpu du_addr_i", false,-1, 15,0);
        tracep->declBit(c+1229,"or1k_pu core or1k_cpu du_stb_i", false,-1);
        tracep->declBus(c+768,"or1k_pu core or1k_cpu du_dat_i", false,-1, 31,0);
        tracep->declBit(c+769,"or1k_pu core or1k_cpu du_we_i", false,-1);
        tracep->declBus(c+1404,"or1k_pu core or1k_cpu du_dat_o", false,-1, 31,0);
        tracep->declBit(c+30,"or1k_pu core or1k_cpu du_ack_o", false,-1);
        tracep->declBit(c+1384,"or1k_pu core or1k_cpu du_stall_i", false,-1);
        tracep->declBit(c+1405,"or1k_pu core or1k_cpu du_stall_o", false,-1);
        tracep->declBit(c+93,"or1k_pu core or1k_cpu traceport_exec_valid_o", false,-1);
        tracep->declBus(c+94,"or1k_pu core or1k_cpu traceport_exec_pc_o", false,-1, 31,0);
        tracep->declBit(c+1578,"or1k_pu core or1k_cpu traceport_exec_jb_o", false,-1);
        tracep->declBit(c+1579,"or1k_pu core or1k_cpu traceport_exec_jal_o", false,-1);
        tracep->declBit(c+1580,"or1k_pu core or1k_cpu traceport_exec_jr_o", false,-1);
        tracep->declBus(c+1581,"or1k_pu core or1k_cpu traceport_exec_jbtarget_o", false,-1, 31,0);
        tracep->declBus(c+95,"or1k_pu core or1k_cpu traceport_exec_insn_o", false,-1, 31,0);
        tracep->declBus(c+1474,"or1k_pu core or1k_cpu traceport_exec_wbdata_o", false,-1, 31,0);
        tracep->declBus(c+1582,"or1k_pu core or1k_cpu traceport_exec_wbreg_o", false,-1, 4,0);
        tracep->declBit(c+1476,"or1k_pu core or1k_cpu traceport_exec_wben_o", false,-1);
        tracep->declBus(c+1232,"or1k_pu core or1k_cpu spr_bus_addr_o", false,-1, 15,0);
        tracep->declBit(c+1235,"or1k_pu core or1k_cpu spr_bus_we_o", false,-1);
        tracep->declBit(c+1234,"or1k_pu core or1k_cpu spr_bus_stb_o", false,-1);
        tracep->declBus(c+1233,"or1k_pu core or1k_cpu spr_bus_dat_o", false,-1, 31,0);
        tracep->declBus(c+1595,"or1k_pu core or1k_cpu spr_bus_dat_dmmu_i", false,-1, 31,0);
        tracep->declBit(c+1596,"or1k_pu core or1k_cpu spr_bus_ack_dmmu_i", false,-1);
        tracep->declBus(c+1597,"or1k_pu core or1k_cpu spr_bus_dat_immu_i", false,-1, 31,0);
        tracep->declBit(c+1598,"or1k_pu core or1k_cpu spr_bus_ack_immu_i", false,-1);
        tracep->declBus(c+1599,"or1k_pu core or1k_cpu spr_bus_dat_mac_i", false,-1, 31,0);
        tracep->declBit(c+1600,"or1k_pu core or1k_cpu spr_bus_ack_mac_i", false,-1);
        tracep->declBus(c+1601,"or1k_pu core or1k_cpu spr_bus_dat_pmu_i", false,-1, 31,0);
        tracep->declBit(c+1602,"or1k_pu core or1k_cpu spr_bus_ack_pmu_i", false,-1);
        tracep->declBus(c+1603,"or1k_pu core or1k_cpu spr_bus_dat_pcu_i", false,-1, 31,0);
        tracep->declBit(c+1604,"or1k_pu core or1k_cpu spr_bus_ack_pcu_i", false,-1);
        tracep->declBus(c+1605,"or1k_pu core or1k_cpu spr_bus_dat_fpu_i", false,-1, 31,0);
        tracep->declBit(c+1606,"or1k_pu core or1k_cpu spr_bus_ack_fpu_i", false,-1);
        tracep->declBus(c+988,"or1k_pu core or1k_cpu spr_sr_o", false,-1, 15,0);
        tracep->declBus(c+1583,"or1k_pu core or1k_cpu multicore_coreid_i", false,-1, 31,0);
        tracep->declBus(c+1584,"or1k_pu core or1k_cpu multicore_numcores_i", false,-1, 31,0);
        tracep->declBus(c+1585,"or1k_pu core or1k_cpu snoop_adr_i", false,-1, 31,0);
        tracep->declBit(c+1586,"or1k_pu core or1k_cpu snoop_en_i", false,-1);
        tracep->declBus(c+1458,"or1k_pu core or1k_cpu monitor_execute_insn", false,-1, 31,0);
        tracep->declBit(c+1237,"or1k_pu core or1k_cpu monitor_execute_advance", false,-1);
        tracep->declBit(c+482,"or1k_pu core or1k_cpu monitor_flag_set", false,-1);
        tracep->declBit(c+483,"or1k_pu core or1k_cpu monitor_flag_clear", false,-1);
        tracep->declBit(c+989,"or1k_pu core or1k_cpu monitor_flag_sr", false,-1);
        tracep->declBit(c+484,"or1k_pu core or1k_cpu monitor_flag", false,-1);
        tracep->declBus(c+990,"or1k_pu core or1k_cpu monitor_spr_sr", false,-1, 31,0);
        tracep->declBus(c+1459,"or1k_pu core or1k_cpu monitor_execute_pc", false,-1, 31,0);
        tracep->declBus(c+99,"or1k_pu core or1k_cpu monitor_rf_result_in", false,-1, 31,0);
        tracep->declBit(c+1391,"or1k_pu core or1k_cpu monitor_clk", false,-1);
        tracep->declBus(c+100,"or1k_pu core or1k_cpu monitor_spr_epcr", false,-1, 31,0);
        tracep->declBus(c+101,"or1k_pu core or1k_cpu monitor_spr_eear", false,-1, 31,0);
        tracep->declBus(c+102,"or1k_pu core or1k_cpu monitor_spr_esr", false,-1, 31,0);
        tracep->declBit(c+991,"or1k_pu core or1k_cpu monitor_branch_mispredict", false,-1);
        tracep->declBus(c+1544,"or1k_pu core or1k_cpu monitor_cappuccino RF_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+103,"or1k_pu core or1k_cpu cappuccino monitor_execute_insn_reg", false,-1, 31,0);
        tracep->declBus(c+1607,"or1k_pu wb_bfm_memory0 ram0 DEPTH", false,-1, 31,0);
        tracep->declBus(c+1588,"or1k_pu wb_bfm_memory0 ram0 MEMFILE", false,-1, 0,0);
        tracep->declBus(c+1608,"or1k_pu wb_bfm_memory0 ram0 AW", false,-1, 31,0);
        tracep->declBus(c+1471,"or1k_pu wb_bfm_memory0 ram0 DW", false,-1, 31,0);
        tracep->declBit(c+1391,"or1k_pu wb_bfm_memory0 ram0 clk", false,-1);
        tracep->declBus(c+1460,"or1k_pu wb_bfm_memory0 ram0 we", false,-1, 3,0);
        tracep->declBus(c+476,"or1k_pu wb_bfm_memory0 ram0 din", false,-1, 31,0);
        tracep->declBus(c+104,"or1k_pu wb_bfm_memory0 ram0 waddr", false,-1, 20,0);
        tracep->declBus(c+1461,"or1k_pu wb_bfm_memory0 ram0 raddr", false,-1, 20,0);
        tracep->declBus(c+28,"or1k_pu wb_bfm_memory0 ram0 dout", false,-1, 31,0);
        tracep->declBus(c+1471,"or1k_pu core or1k_cpu cappuccino or1k_cpu OPTION_OPERAND_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu FEATURE_DATACACHE", false,-1, 55,0);
        tracep->declBus(c+1544,"or1k_pu core or1k_cpu cappuccino or1k_cpu OPTION_DCACHE_BLOCK_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1497,"or1k_pu core or1k_cpu cappuccino or1k_cpu OPTION_DCACHE_SET_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1486,"or1k_pu core or1k_cpu cappuccino or1k_cpu OPTION_DCACHE_WAYS", false,-1, 31,0);
        tracep->declBus(c+1555,"or1k_pu core or1k_cpu cappuccino or1k_cpu OPTION_DCACHE_LIMIT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu OPTION_DCACHE_SNOOP", false,-1, 31,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu FEATURE_DMMU", false,-1, 55,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu FEATURE_DMMU_HW_TLB_RELOAD", false,-1, 31,0);
        tracep->declBus(c+1496,"or1k_pu core or1k_cpu cappuccino or1k_cpu OPTION_DMMU_SET_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1492,"or1k_pu core or1k_cpu cappuccino or1k_cpu OPTION_DMMU_WAYS", false,-1, 31,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu FEATURE_INSTRUCTIONCACHE", false,-1, 55,0);
        tracep->declBus(c+1544,"or1k_pu core or1k_cpu cappuccino or1k_cpu OPTION_ICACHE_BLOCK_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1497,"or1k_pu core or1k_cpu cappuccino or1k_cpu OPTION_ICACHE_SET_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1486,"or1k_pu core or1k_cpu cappuccino or1k_cpu OPTION_ICACHE_WAYS", false,-1, 31,0);
        tracep->declBus(c+1471,"or1k_pu core or1k_cpu cappuccino or1k_cpu OPTION_ICACHE_LIMIT_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu FEATURE_IMMU", false,-1, 55,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu FEATURE_IMMU_HW_TLB_RELOAD", false,-1, 31,0);
        tracep->declBus(c+1496,"or1k_pu core or1k_cpu cappuccino or1k_cpu OPTION_IMMU_SET_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1492,"or1k_pu core or1k_cpu cappuccino or1k_cpu OPTION_IMMU_WAYS", false,-1, 31,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu FEATURE_TIMER", false,-1, 55,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu FEATURE_DEBUGUNIT", false,-1, 55,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu FEATURE_PERFCOUNTERS", false,-1, 31,0);
        tracep->declBus(c+1536,"or1k_pu core or1k_cpu cappuccino or1k_cpu OPTION_PERFCOUNTERS_NUM", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu FEATURE_MAC", false,-1, 31,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu FEATURE_SYSCALL", false,-1, 55,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu FEATURE_TRAP", false,-1, 55,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu FEATURE_RANGE", false,-1, 55,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu FEATURE_PIC", false,-1, 55,0);
        tracep->declQuad(c+1556,"or1k_pu core or1k_cpu cappuccino or1k_cpu OPTION_PIC_TRIGGER", false,-1, 39,0);
        tracep->declBus(c+1536,"or1k_pu core or1k_cpu cappuccino or1k_cpu OPTION_PIC_NMI_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu FEATURE_DSX", false,-1, 55,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu FEATURE_OVERFLOW", false,-1, 55,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu FEATURE_CARRY_FLAG", false,-1, 55,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu FEATURE_FASTCONTEXTS", false,-1, 31,0);
        tracep->declBus(c+1536,"or1k_pu core or1k_cpu cappuccino or1k_cpu OPTION_RF_CLEAR_ON_INIT", false,-1, 31,0);
        tracep->declBus(c+1492,"or1k_pu core or1k_cpu cappuccino or1k_cpu OPTION_RF_NUM_SHADOW_GPR", false,-1, 31,0);
        tracep->declBus(c+1544,"or1k_pu core or1k_cpu cappuccino or1k_cpu OPTION_RF_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1471,"or1k_pu core or1k_cpu cappuccino or1k_cpu OPTION_RF_WORDS", false,-1, 31,0);
        tracep->declBus(c+1558,"or1k_pu core or1k_cpu cappuccino or1k_cpu OPTION_RESET_PC", false,-1, 31,0);
        tracep->declArray(c+1559,"or1k_pu core or1k_cpu cappuccino or1k_cpu FEATURE_MULTIPLIER", false,-1, 79,0);
        tracep->declQuad(c+1562,"or1k_pu core or1k_cpu cappuccino or1k_cpu FEATURE_DIVIDER", false,-1, 47,0);
        tracep->declQuad(c+1565,"or1k_pu core or1k_cpu cappuccino or1k_cpu OPTION_SHIFTER", false,-1, 47,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu FEATURE_ADDC", false,-1, 55,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu FEATURE_SRA", false,-1, 55,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu FEATURE_ROR", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu FEATURE_EXT", false,-1, 31,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu FEATURE_CMOV", false,-1, 55,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu FEATURE_FFL1", false,-1, 55,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu FEATURE_MSYNC", false,-1, 55,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu FEATURE_PSYNC", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu FEATURE_CSYNC", false,-1, 31,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu FEATURE_ATOMIC", false,-1, 55,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu FEATURE_FPU", false,-1, 31,0);
        tracep->declBus(c+1564,"or1k_pu core or1k_cpu cappuccino or1k_cpu OPTION_FTOI_ROUNDING", false,-1, 23,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu FEATURE_CUST1", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu FEATURE_CUST2", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu FEATURE_CUST3", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu FEATURE_CUST4", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu FEATURE_CUST5", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu FEATURE_CUST6", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu FEATURE_CUST7", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu FEATURE_CUST8", false,-1, 31,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu FEATURE_STORE_BUFFER", false,-1, 55,0);
        tracep->declBus(c+1497,"or1k_pu core or1k_cpu cappuccino or1k_cpu OPTION_STORE_BUFFER_DEPTH_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu FEATURE_MULTICORE", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu FEATURE_TRACEPORT_EXEC", false,-1, 31,0);
        tracep->declQuad(c+1567,"or1k_pu core or1k_cpu cappuccino or1k_cpu FEATURE_BRANCH_PREDICTOR", false,-1, 47,0);
        tracep->declBit(c+1391,"or1k_pu core or1k_cpu cappuccino or1k_cpu clk", false,-1);
        tracep->declBit(c+941,"or1k_pu core or1k_cpu cappuccino or1k_cpu rst", false,-1);
        tracep->declBit(c+970,"or1k_pu core or1k_cpu cappuccino or1k_cpu ibus_err_i", false,-1);
        tracep->declBit(c+25,"or1k_pu core or1k_cpu cappuccino or1k_cpu ibus_ack_i", false,-1);
        tracep->declBus(c+24,"or1k_pu core or1k_cpu cappuccino or1k_cpu ibus_dat_i", false,-1, 31,0);
        tracep->declBus(c+22,"or1k_pu core or1k_cpu cappuccino or1k_cpu ibus_adr_o", false,-1, 31,0);
        tracep->declBit(c+23,"or1k_pu core or1k_cpu cappuccino or1k_cpu ibus_req_o", false,-1);
        tracep->declBit(c+508,"or1k_pu core or1k_cpu cappuccino or1k_cpu ibus_burst_o", false,-1);
        tracep->declBit(c+968,"or1k_pu core or1k_cpu cappuccino or1k_cpu dbus_err_i", false,-1);
        tracep->declBit(c+1183,"or1k_pu core or1k_cpu cappuccino or1k_cpu dbus_ack_i", false,-1);
        tracep->declBus(c+1182,"or1k_pu core or1k_cpu cappuccino or1k_cpu dbus_dat_i", false,-1, 31,0);
        tracep->declBus(c+962,"or1k_pu core or1k_cpu cappuccino or1k_cpu dbus_adr_o", false,-1, 31,0);
        tracep->declBus(c+963,"or1k_pu core or1k_cpu cappuccino or1k_cpu dbus_dat_o", false,-1, 31,0);
        tracep->declBit(c+966,"or1k_pu core or1k_cpu cappuccino or1k_cpu dbus_req_o", false,-1);
        tracep->declBus(c+964,"or1k_pu core or1k_cpu cappuccino or1k_cpu dbus_bsel_o", false,-1, 3,0);
        tracep->declBit(c+965,"or1k_pu core or1k_cpu cappuccino or1k_cpu dbus_we_o", false,-1);
        tracep->declBit(c+987,"or1k_pu core or1k_cpu cappuccino or1k_cpu dbus_burst_o", false,-1);
        tracep->declBus(c+551,"or1k_pu core or1k_cpu cappuccino or1k_cpu irq_i", false,-1, 31,0);
        tracep->declBus(c+940,"or1k_pu core or1k_cpu cappuccino or1k_cpu du_addr_i", false,-1, 15,0);
        tracep->declBit(c+1229,"or1k_pu core or1k_cpu cappuccino or1k_cpu du_stb_i", false,-1);
        tracep->declBus(c+768,"or1k_pu core or1k_cpu cappuccino or1k_cpu du_dat_i", false,-1, 31,0);
        tracep->declBit(c+769,"or1k_pu core or1k_cpu cappuccino or1k_cpu du_we_i", false,-1);
        tracep->declBus(c+1404,"or1k_pu core or1k_cpu cappuccino or1k_cpu du_dat_o", false,-1, 31,0);
        tracep->declBit(c+30,"or1k_pu core or1k_cpu cappuccino or1k_cpu du_ack_o", false,-1);
        tracep->declBit(c+1384,"or1k_pu core or1k_cpu cappuccino or1k_cpu du_stall_i", false,-1);
        tracep->declBit(c+1405,"or1k_pu core or1k_cpu cappuccino or1k_cpu du_stall_o", false,-1);
        tracep->declBit(c+93,"or1k_pu core or1k_cpu cappuccino or1k_cpu traceport_exec_valid_o", false,-1);
        tracep->declBus(c+94,"or1k_pu core or1k_cpu cappuccino or1k_cpu traceport_exec_pc_o", false,-1, 31,0);
        tracep->declBit(c+1578,"or1k_pu core or1k_cpu cappuccino or1k_cpu traceport_exec_jb_o", false,-1);
        tracep->declBit(c+1579,"or1k_pu core or1k_cpu cappuccino or1k_cpu traceport_exec_jal_o", false,-1);
        tracep->declBit(c+1580,"or1k_pu core or1k_cpu cappuccino or1k_cpu traceport_exec_jr_o", false,-1);
        tracep->declBus(c+1581,"or1k_pu core or1k_cpu cappuccino or1k_cpu traceport_exec_jbtarget_o", false,-1, 31,0);
        tracep->declBus(c+95,"or1k_pu core or1k_cpu cappuccino or1k_cpu traceport_exec_insn_o", false,-1, 31,0);
        tracep->declBus(c+1474,"or1k_pu core or1k_cpu cappuccino or1k_cpu traceport_exec_wbdata_o", false,-1, 31,0);
        tracep->declBus(c+1582,"or1k_pu core or1k_cpu cappuccino or1k_cpu traceport_exec_wbreg_o", false,-1, 4,0);
        tracep->declBit(c+1476,"or1k_pu core or1k_cpu cappuccino or1k_cpu traceport_exec_wben_o", false,-1);
        tracep->declBus(c+1232,"or1k_pu core or1k_cpu cappuccino or1k_cpu spr_bus_addr_o", false,-1, 15,0);
        tracep->declBit(c+1235,"or1k_pu core or1k_cpu cappuccino or1k_cpu spr_bus_we_o", false,-1);
        tracep->declBit(c+1234,"or1k_pu core or1k_cpu cappuccino or1k_cpu spr_bus_stb_o", false,-1);
        tracep->declBus(c+1233,"or1k_pu core or1k_cpu cappuccino or1k_cpu spr_bus_dat_o", false,-1, 31,0);
        tracep->declBus(c+1599,"or1k_pu core or1k_cpu cappuccino or1k_cpu spr_bus_dat_mac_i", false,-1, 31,0);
        tracep->declBit(c+1600,"or1k_pu core or1k_cpu cappuccino or1k_cpu spr_bus_ack_mac_i", false,-1);
        tracep->declBus(c+1601,"or1k_pu core or1k_cpu cappuccino or1k_cpu spr_bus_dat_pmu_i", false,-1, 31,0);
        tracep->declBit(c+1602,"or1k_pu core or1k_cpu cappuccino or1k_cpu spr_bus_ack_pmu_i", false,-1);
        tracep->declBus(c+1603,"or1k_pu core or1k_cpu cappuccino or1k_cpu spr_bus_dat_pcu_i", false,-1, 31,0);
        tracep->declBit(c+1604,"or1k_pu core or1k_cpu cappuccino or1k_cpu spr_bus_ack_pcu_i", false,-1);
        tracep->declBus(c+1605,"or1k_pu core or1k_cpu cappuccino or1k_cpu spr_bus_dat_fpu_i", false,-1, 31,0);
        tracep->declBit(c+1606,"or1k_pu core or1k_cpu cappuccino or1k_cpu spr_bus_ack_fpu_i", false,-1);
        tracep->declBus(c+988,"or1k_pu core or1k_cpu cappuccino or1k_cpu spr_sr_o", false,-1, 15,0);
        tracep->declBus(c+1583,"or1k_pu core or1k_cpu cappuccino or1k_cpu multicore_coreid_i", false,-1, 31,0);
        tracep->declBus(c+1584,"or1k_pu core or1k_cpu cappuccino or1k_cpu multicore_numcores_i", false,-1, 31,0);
        tracep->declBus(c+1585,"or1k_pu core or1k_cpu cappuccino or1k_cpu snoop_adr_i", false,-1, 31,0);
        tracep->declBit(c+1586,"or1k_pu core or1k_cpu cappuccino or1k_cpu snoop_en_i", false,-1);
        tracep->declBus(c+105,"or1k_pu core or1k_cpu cappuccino or1k_cpu pc_fetch_to_decode", false,-1, 31,0);
        tracep->declBus(c+992,"or1k_pu core or1k_cpu cappuccino or1k_cpu insn_fetch_to_decode", false,-1, 31,0);
        tracep->declBus(c+106,"or1k_pu core or1k_cpu cappuccino or1k_cpu pc_decode_to_execute", false,-1, 31,0);
        tracep->declBus(c+107,"or1k_pu core or1k_cpu cappuccino or1k_cpu pc_execute_to_ctrl", false,-1, 31,0);
        tracep->declBus(c+993,"or1k_pu core or1k_cpu cappuccino or1k_cpu adder_result_o", false,-1, 31,0);
        tracep->declBus(c+994,"or1k_pu core or1k_cpu cappuccino or1k_cpu alu_result_o", false,-1, 31,0);
        tracep->declBit(c+108,"or1k_pu core or1k_cpu cappuccino or1k_cpu alu_valid_o", false,-1);
        tracep->declBit(c+109,"or1k_pu core or1k_cpu cappuccino or1k_cpu atomic_flag_clear_o", false,-1);
        tracep->declBit(c+110,"or1k_pu core or1k_cpu cappuccino or1k_cpu atomic_flag_set_o", false,-1);
        tracep->declBit(c+991,"or1k_pu core or1k_cpu cappuccino or1k_cpu branch_mispredict_o", false,-1);
        tracep->declBit(c+485,"or1k_pu core or1k_cpu cappuccino or1k_cpu carry_clear_o", false,-1);
        tracep->declBit(c+486,"or1k_pu core or1k_cpu cappuccino or1k_cpu carry_set_o", false,-1);
        tracep->declBus(c+111,"or1k_pu core or1k_cpu cappuccino or1k_cpu ctrl_alu_result_o", false,-1, 31,0);
        tracep->declBus(c+112,"or1k_pu core or1k_cpu cappuccino or1k_cpu ctrl_branch_except_pc_o", false,-1, 31,0);
        tracep->declBit(c+113,"or1k_pu core or1k_cpu cappuccino or1k_cpu ctrl_branch_exception_o", false,-1);
        tracep->declBit(c+114,"or1k_pu core or1k_cpu cappuccino or1k_cpu ctrl_bubble_o", false,-1);
        tracep->declBit(c+115,"or1k_pu core or1k_cpu cappuccino or1k_cpu ctrl_carry_clear_o", false,-1);
        tracep->declBit(c+487,"or1k_pu core or1k_cpu cappuccino or1k_cpu ctrl_carry_o", false,-1);
        tracep->declBit(c+116,"or1k_pu core or1k_cpu cappuccino or1k_cpu ctrl_carry_set_o", false,-1);
        tracep->declBus(c+117,"or1k_pu core or1k_cpu cappuccino or1k_cpu ctrl_epcr_o", false,-1, 31,0);
        tracep->declBit(c+995,"or1k_pu core or1k_cpu cappuccino or1k_cpu ctrl_except_align_o", false,-1);
        tracep->declBit(c+996,"or1k_pu core or1k_cpu cappuccino or1k_cpu ctrl_except_dbus_o", false,-1);
        tracep->declBit(c+997,"or1k_pu core or1k_cpu cappuccino or1k_cpu ctrl_except_dpagefault_o", false,-1);
        tracep->declBit(c+998,"or1k_pu core or1k_cpu cappuccino or1k_cpu ctrl_except_dtlb_miss_o", false,-1);
        tracep->declBit(c+118,"or1k_pu core or1k_cpu cappuccino or1k_cpu ctrl_except_ibus_align_o", false,-1);
        tracep->declBit(c+119,"or1k_pu core or1k_cpu cappuccino or1k_cpu ctrl_except_ibus_err_o", false,-1);
        tracep->declBit(c+120,"or1k_pu core or1k_cpu cappuccino or1k_cpu ctrl_except_illegal_o", false,-1);
        tracep->declBit(c+121,"or1k_pu core or1k_cpu cappuccino or1k_cpu ctrl_except_ipagefault_o", false,-1);
        tracep->declBit(c+122,"or1k_pu core or1k_cpu cappuccino or1k_cpu ctrl_except_itlb_miss_o", false,-1);
        tracep->declBit(c+123,"or1k_pu core or1k_cpu cappuccino or1k_cpu ctrl_except_syscall_o", false,-1);
        tracep->declBit(c+124,"or1k_pu core or1k_cpu cappuccino or1k_cpu ctrl_except_trap_o", false,-1);
        tracep->declBit(c+125,"or1k_pu core or1k_cpu cappuccino or1k_cpu ctrl_flag_clear_o", false,-1);
        tracep->declBit(c+989,"or1k_pu core or1k_cpu cappuccino or1k_cpu ctrl_flag_o", false,-1);
        tracep->declBit(c+126,"or1k_pu core or1k_cpu cappuccino or1k_cpu ctrl_flag_set_o", false,-1);
        tracep->declBus(c+999,"or1k_pu core or1k_cpu cappuccino or1k_cpu ctrl_lsu_adr_o", false,-1, 31,0);
        tracep->declBus(c+127,"or1k_pu core or1k_cpu cappuccino or1k_cpu ctrl_lsu_length_o", false,-1, 1,0);
        tracep->declBit(c+128,"or1k_pu core or1k_cpu cappuccino or1k_cpu ctrl_lsu_zext_o", false,-1);
        tracep->declBit(c+1238,"or1k_pu core or1k_cpu cappuccino or1k_cpu ctrl_mfspr_ack_o", false,-1);
        tracep->declBit(c+1238,"or1k_pu core or1k_cpu cappuccino or1k_cpu ctrl_mtspr_ack_o", false,-1);
        tracep->declBit(c+129,"or1k_pu core or1k_cpu cappuccino or1k_cpu ctrl_op_lsu_atomic_o", false,-1);
        tracep->declBit(c+1000,"or1k_pu core or1k_cpu cappuccino or1k_cpu ctrl_op_lsu_load_o", false,-1);
        tracep->declBit(c+130,"or1k_pu core or1k_cpu cappuccino or1k_cpu ctrl_op_lsu_store_o", false,-1);
        tracep->declBit(c+131,"or1k_pu core or1k_cpu cappuccino or1k_cpu ctrl_op_mfspr_o", false,-1);
        tracep->declBit(c+132,"or1k_pu core or1k_cpu cappuccino or1k_cpu ctrl_op_msync_o", false,-1);
        tracep->declBit(c+133,"or1k_pu core or1k_cpu cappuccino or1k_cpu ctrl_op_mtspr_o", false,-1);
        tracep->declBit(c+134,"or1k_pu core or1k_cpu cappuccino or1k_cpu ctrl_op_mul_o", false,-1);
        tracep->declBit(c+135,"or1k_pu core or1k_cpu cappuccino or1k_cpu ctrl_op_rfe_o", false,-1);
        tracep->declBit(c+136,"or1k_pu core or1k_cpu cappuccino or1k_cpu ctrl_overflow_clear_o", false,-1);
        tracep->declBit(c+137,"or1k_pu core or1k_cpu cappuccino or1k_cpu ctrl_overflow_set_o", false,-1);
        tracep->declBus(c+138,"or1k_pu core or1k_cpu cappuccino or1k_cpu ctrl_fpcsr_o", false,-1, 11,0);
        tracep->declBit(c+139,"or1k_pu core or1k_cpu cappuccino or1k_cpu ctrl_fpcsr_set_o", false,-1);
        tracep->declBus(c+1478,"or1k_pu core or1k_cpu cappuccino or1k_cpu ctrl_fpu_round_mode_o", false,-1, 1,0);
        tracep->declBit(c+140,"or1k_pu core or1k_cpu cappuccino or1k_cpu ctrl_rf_wb_o", false,-1);
        tracep->declBus(c+141,"or1k_pu core or1k_cpu cappuccino or1k_cpu ctrl_rfb_o", false,-1, 31,0);
        tracep->declBus(c+142,"or1k_pu core or1k_cpu cappuccino or1k_cpu ctrl_rfd_adr_o", false,-1, 4,0);
        tracep->declBit(c+1239,"or1k_pu core or1k_cpu cappuccino or1k_cpu ctrl_valid_o", false,-1);
        tracep->declBit(c+1001,"or1k_pu core or1k_cpu cappuccino or1k_cpu decode_adder_do_carry_o", false,-1);
        tracep->declBit(c+1002,"or1k_pu core or1k_cpu cappuccino or1k_cpu decode_adder_do_sub_o", false,-1);
        tracep->declBit(c+1194,"or1k_pu core or1k_cpu cappuccino or1k_cpu decode_branch_o", false,-1);
        tracep->declBus(c+1003,"or1k_pu core or1k_cpu cappuccino or1k_cpu decode_branch_target_o", false,-1, 31,0);
        tracep->declBit(c+1240,"or1k_pu core or1k_cpu cappuccino or1k_cpu decode_bubble_o", false,-1);
        tracep->declBit(c+143,"or1k_pu core or1k_cpu cappuccino or1k_cpu decode_except_ibus_err_o", false,-1);
        tracep->declBit(c+1004,"or1k_pu core or1k_cpu cappuccino or1k_cpu decode_except_illegal_o", false,-1);
        tracep->declBit(c+144,"or1k_pu core or1k_cpu cappuccino or1k_cpu decode_except_ipagefault_o", false,-1);
        tracep->declBit(c+145,"or1k_pu core or1k_cpu cappuccino or1k_cpu decode_except_itlb_miss_o", false,-1);
        tracep->declBit(c+1005,"or1k_pu core or1k_cpu cappuccino or1k_cpu decode_except_syscall_o", false,-1);
        tracep->declBit(c+1006,"or1k_pu core or1k_cpu cappuccino or1k_cpu decode_except_trap_o", false,-1);
        tracep->declBus(c+1007,"or1k_pu core or1k_cpu cappuccino or1k_cpu decode_imm16_o", false,-1, 15,0);
        tracep->declBus(c+1008,"or1k_pu core or1k_cpu cappuccino or1k_cpu decode_immediate_o", false,-1, 31,0);
        tracep->declBit(c+1009,"or1k_pu core or1k_cpu cappuccino or1k_cpu decode_immediate_sel_o", false,-1);
        tracep->declBus(c+1010,"or1k_pu core or1k_cpu cappuccino or1k_cpu decode_immjbr_upper_o", false,-1, 9,0);
        tracep->declBus(c+1011,"or1k_pu core or1k_cpu cappuccino or1k_cpu decode_lsu_length_o", false,-1, 1,0);
        tracep->declBit(c+1012,"or1k_pu core or1k_cpu cappuccino or1k_cpu decode_lsu_zext_o", false,-1);
        tracep->declBit(c+1013,"or1k_pu core or1k_cpu cappuccino or1k_cpu decode_op_add_o", false,-1);
        tracep->declBit(c+1014,"or1k_pu core or1k_cpu cappuccino or1k_cpu decode_op_alu_o", false,-1);
        tracep->declBit(c+1015,"or1k_pu core or1k_cpu cappuccino or1k_cpu decode_op_bf_o", false,-1);
        tracep->declBit(c+1016,"or1k_pu core or1k_cpu cappuccino or1k_cpu decode_op_bnf_o", false,-1);
        tracep->declBit(c+1017,"or1k_pu core or1k_cpu cappuccino or1k_cpu decode_op_branch_o", false,-1);
        tracep->declBit(c+1018,"or1k_pu core or1k_cpu cappuccino or1k_cpu decode_op_brcond_o", false,-1);
        tracep->declBit(c+1019,"or1k_pu core or1k_cpu cappuccino or1k_cpu decode_op_div_o", false,-1);
        tracep->declBit(c+1020,"or1k_pu core or1k_cpu cappuccino or1k_cpu decode_op_div_signed_o", false,-1);
        tracep->declBit(c+1021,"or1k_pu core or1k_cpu cappuccino or1k_cpu decode_op_div_unsigned_o", false,-1);
        tracep->declBit(c+1022,"or1k_pu core or1k_cpu cappuccino or1k_cpu decode_op_ffl1_o", false,-1);
        tracep->declBit(c+1023,"or1k_pu core or1k_cpu cappuccino or1k_cpu decode_op_jal_o", false,-1);
        tracep->declBit(c+1024,"or1k_pu core or1k_cpu cappuccino or1k_cpu decode_op_jbr_o", false,-1);
        tracep->declBit(c+1025,"or1k_pu core or1k_cpu cappuccino or1k_cpu decode_op_jr_o", false,-1);
        tracep->declBit(c+1026,"or1k_pu core or1k_cpu cappuccino or1k_cpu decode_op_lsu_atomic_o", false,-1);
        tracep->declBit(c+1027,"or1k_pu core or1k_cpu cappuccino or1k_cpu decode_op_lsu_load_o", false,-1);
        tracep->declBit(c+1028,"or1k_pu core or1k_cpu cappuccino or1k_cpu decode_op_lsu_store_o", false,-1);
        tracep->declBit(c+1029,"or1k_pu core or1k_cpu cappuccino or1k_cpu decode_op_mfspr_o", false,-1);
        tracep->declBit(c+1030,"or1k_pu core or1k_cpu cappuccino or1k_cpu decode_op_movhi_o", false,-1);
        tracep->declBit(c+1476,"or1k_pu core or1k_cpu cappuccino or1k_cpu decode_op_ext_o", false,-1);
        tracep->declBit(c+1031,"or1k_pu core or1k_cpu cappuccino or1k_cpu decode_op_msync_o", false,-1);
        tracep->declBus(c+1534,"or1k_pu core or1k_cpu cappuccino or1k_cpu decode_op_fpu_o", false,-1, 7,0);
        tracep->declBit(c+1032,"or1k_pu core or1k_cpu cappuccino or1k_cpu decode_op_mtspr_o", false,-1);
        tracep->declBit(c+1033,"or1k_pu core or1k_cpu cappuccino or1k_cpu decode_op_mul_o", false,-1);
        tracep->declBit(c+1034,"or1k_pu core or1k_cpu cappuccino or1k_cpu decode_op_mul_signed_o", false,-1);
        tracep->declBit(c+1035,"or1k_pu core or1k_cpu cappuccino or1k_cpu decode_op_mul_unsigned_o", false,-1);
        tracep->declBit(c+1036,"or1k_pu core or1k_cpu cappuccino or1k_cpu decode_op_rfe_o", false,-1);
        tracep->declBit(c+1037,"or1k_pu core or1k_cpu cappuccino or1k_cpu decode_op_setflag_o", false,-1);
        tracep->declBit(c+1038,"or1k_pu core or1k_cpu cappuccino or1k_cpu decode_op_shift_o", false,-1);
        tracep->declBus(c+1039,"or1k_pu core or1k_cpu cappuccino or1k_cpu decode_opc_alu_o", false,-1, 3,0);
        tracep->declBus(c+1040,"or1k_pu core or1k_cpu cappuccino or1k_cpu decode_opc_alu_secondary_o", false,-1, 3,0);
        tracep->declBus(c+1041,"or1k_pu core or1k_cpu cappuccino or1k_cpu decode_opc_insn_o", false,-1, 5,0);
        tracep->declBit(c+1042,"or1k_pu core or1k_cpu cappuccino or1k_cpu decode_rf_wb_o", false,-1);
        tracep->declBus(c+1043,"or1k_pu core or1k_cpu cappuccino or1k_cpu decode_rfa_adr_o", false,-1, 4,0);
        tracep->declBus(c+488,"or1k_pu core or1k_cpu cappuccino or1k_cpu decode_rfa_o", false,-1, 31,0);
        tracep->declBus(c+1044,"or1k_pu core or1k_cpu cappuccino or1k_cpu decode_rfb_adr_o", false,-1, 4,0);
        tracep->declBus(c+1045,"or1k_pu core or1k_cpu cappuccino or1k_cpu decode_rfb_o", false,-1, 31,0);
        tracep->declBus(c+1046,"or1k_pu core or1k_cpu cappuccino or1k_cpu decode_rfd_adr_o", false,-1, 4,0);
        tracep->declBit(c+146,"or1k_pu core or1k_cpu cappuccino or1k_cpu decode_valid_o", false,-1);
        tracep->declBit(c+147,"or1k_pu core or1k_cpu cappuccino or1k_cpu doing_rfe_o", false,-1);
        tracep->declBit(c+1390,"or1k_pu core or1k_cpu cappuccino or1k_cpu du_restart_o", false,-1);
        tracep->declBus(c+148,"or1k_pu core or1k_cpu cappuccino or1k_cpu du_restart_pc_o", false,-1, 31,0);
        tracep->declBit(c+149,"or1k_pu core or1k_cpu cappuccino or1k_cpu execute_adder_do_carry_o", false,-1);
        tracep->declBit(c+150,"or1k_pu core or1k_cpu cappuccino or1k_cpu execute_adder_do_sub_o", false,-1);
        tracep->declBit(c+151,"or1k_pu core or1k_cpu cappuccino or1k_cpu execute_bubble_o", false,-1);
        tracep->declBit(c+152,"or1k_pu core or1k_cpu cappuccino or1k_cpu execute_except_ibus_align_o", false,-1);
        tracep->declBit(c+153,"or1k_pu core or1k_cpu cappuccino or1k_cpu execute_except_ibus_err_o", false,-1);
        tracep->declBit(c+154,"or1k_pu core or1k_cpu cappuccino or1k_cpu execute_except_illegal_o", false,-1);
        tracep->declBit(c+155,"or1k_pu core or1k_cpu cappuccino or1k_cpu execute_except_ipagefault_o", false,-1);
        tracep->declBit(c+156,"or1k_pu core or1k_cpu cappuccino or1k_cpu execute_except_itlb_miss_o", false,-1);
        tracep->declBit(c+157,"or1k_pu core or1k_cpu cappuccino or1k_cpu execute_except_syscall_o", false,-1);
        tracep->declBit(c+158,"or1k_pu core or1k_cpu cappuccino or1k_cpu execute_except_trap_o", false,-1);
        tracep->declBus(c+159,"or1k_pu core or1k_cpu cappuccino or1k_cpu execute_imm16_o", false,-1, 15,0);
        tracep->declBus(c+160,"or1k_pu core or1k_cpu cappuccino or1k_cpu execute_immediate_o", false,-1, 31,0);
        tracep->declBit(c+161,"or1k_pu core or1k_cpu cappuccino or1k_cpu execute_immediate_sel_o", false,-1);
        tracep->declBus(c+162,"or1k_pu core or1k_cpu cappuccino or1k_cpu execute_immjbr_upper_o", false,-1, 9,0);
        tracep->declBus(c+163,"or1k_pu core or1k_cpu cappuccino or1k_cpu execute_jal_result_o", false,-1, 31,0);
        tracep->declBus(c+164,"or1k_pu core or1k_cpu cappuccino or1k_cpu execute_lsu_length_o", false,-1, 1,0);
        tracep->declBit(c+165,"or1k_pu core or1k_cpu cappuccino or1k_cpu execute_lsu_zext_o", false,-1);
        tracep->declBus(c+166,"or1k_pu core or1k_cpu cappuccino or1k_cpu execute_mispredict_target_o", false,-1, 31,0);
        tracep->declBit(c+167,"or1k_pu core or1k_cpu cappuccino or1k_cpu execute_op_add_o", false,-1);
        tracep->declBit(c+168,"or1k_pu core or1k_cpu cappuccino or1k_cpu execute_op_alu_o", false,-1);
        tracep->declBit(c+169,"or1k_pu core or1k_cpu cappuccino or1k_cpu execute_op_bf_o", false,-1);
        tracep->declBit(c+170,"or1k_pu core or1k_cpu cappuccino or1k_cpu execute_op_bnf_o", false,-1);
        tracep->declBit(c+171,"or1k_pu core or1k_cpu cappuccino or1k_cpu execute_op_branch_o", false,-1);
        tracep->declBit(c+172,"or1k_pu core or1k_cpu cappuccino or1k_cpu execute_op_brcond_o", false,-1);
        tracep->declBit(c+173,"or1k_pu core or1k_cpu cappuccino or1k_cpu execute_op_div_o", false,-1);
        tracep->declBit(c+174,"or1k_pu core or1k_cpu cappuccino or1k_cpu execute_op_div_signed_o", false,-1);
        tracep->declBit(c+175,"or1k_pu core or1k_cpu cappuccino or1k_cpu execute_op_div_unsigned_o", false,-1);
        tracep->declBit(c+176,"or1k_pu core or1k_cpu cappuccino or1k_cpu execute_op_ffl1_o", false,-1);
        tracep->declBit(c+177,"or1k_pu core or1k_cpu cappuccino or1k_cpu execute_op_jal_o", false,-1);
        tracep->declBit(c+178,"or1k_pu core or1k_cpu cappuccino or1k_cpu execute_op_jbr_o", false,-1);
        tracep->declBit(c+179,"or1k_pu core or1k_cpu cappuccino or1k_cpu execute_op_jr_o", false,-1);
        tracep->declBit(c+180,"or1k_pu core or1k_cpu cappuccino or1k_cpu execute_op_lsu_atomic_o", false,-1);
        tracep->declBit(c+1047,"or1k_pu core or1k_cpu cappuccino or1k_cpu execute_op_lsu_load_o", false,-1);
        tracep->declBit(c+1048,"or1k_pu core or1k_cpu cappuccino or1k_cpu execute_op_lsu_store_o", false,-1);
        tracep->declBit(c+181,"or1k_pu core or1k_cpu cappuccino or1k_cpu execute_op_mfspr_o", false,-1);
        tracep->declBit(c+182,"or1k_pu core or1k_cpu cappuccino or1k_cpu execute_op_movhi_o", false,-1);
        tracep->declBit(c+183,"or1k_pu core or1k_cpu cappuccino or1k_cpu execute_op_ext_o", false,-1);
        tracep->declBit(c+184,"or1k_pu core or1k_cpu cappuccino or1k_cpu execute_op_msync_o", false,-1);
        tracep->declBus(c+1534,"or1k_pu core or1k_cpu cappuccino or1k_cpu execute_op_fpu_o", false,-1, 7,0);
        tracep->declBit(c+185,"or1k_pu core or1k_cpu cappuccino or1k_cpu execute_op_mtspr_o", false,-1);
        tracep->declBit(c+186,"or1k_pu core or1k_cpu cappuccino or1k_cpu execute_op_mul_o", false,-1);
        tracep->declBit(c+187,"or1k_pu core or1k_cpu cappuccino or1k_cpu execute_op_mul_signed_o", false,-1);
        tracep->declBit(c+188,"or1k_pu core or1k_cpu cappuccino or1k_cpu execute_op_mul_unsigned_o", false,-1);
        tracep->declBit(c+189,"or1k_pu core or1k_cpu cappuccino or1k_cpu execute_op_rfe_o", false,-1);
        tracep->declBit(c+190,"or1k_pu core or1k_cpu cappuccino or1k_cpu execute_op_setflag_o", false,-1);
        tracep->declBit(c+191,"or1k_pu core or1k_cpu cappuccino or1k_cpu execute_op_shift_o", false,-1);
        tracep->declBus(c+192,"or1k_pu core or1k_cpu cappuccino or1k_cpu execute_opc_alu_o", false,-1, 3,0);
        tracep->declBus(c+193,"or1k_pu core or1k_cpu cappuccino or1k_cpu execute_opc_alu_secondary_o", false,-1, 3,0);
        tracep->declBus(c+194,"or1k_pu core or1k_cpu cappuccino or1k_cpu execute_opc_insn_o", false,-1, 5,0);
        tracep->declBit(c+195,"or1k_pu core or1k_cpu cappuccino or1k_cpu execute_predicted_flag_o", false,-1);
        tracep->declBit(c+196,"or1k_pu core or1k_cpu cappuccino or1k_cpu execute_rf_wb_o", false,-1);
        tracep->declBus(c+197,"or1k_pu core or1k_cpu cappuccino or1k_cpu execute_rfa_o", false,-1, 31,0);
        tracep->declBus(c+198,"or1k_pu core or1k_cpu cappuccino or1k_cpu execute_rfb_o", false,-1, 31,0);
        tracep->declBus(c+199,"or1k_pu core or1k_cpu cappuccino or1k_cpu execute_rfd_adr_o", false,-1, 4,0);
        tracep->declBit(c+1241,"or1k_pu core or1k_cpu cappuccino or1k_cpu execute_valid_o", false,-1);
        tracep->declBit(c+200,"or1k_pu core or1k_cpu cappuccino or1k_cpu fetch_exception_taken_o", false,-1);
        tracep->declBit(c+1242,"or1k_pu core or1k_cpu cappuccino or1k_cpu fetch_rf_adr_valid_o", false,-1);
        tracep->declBus(c+1243,"or1k_pu core or1k_cpu cappuccino or1k_cpu fetch_rfa_adr_o", false,-1, 4,0);
        tracep->declBus(c+1244,"or1k_pu core or1k_cpu cappuccino or1k_cpu fetch_rfb_adr_o", false,-1, 4,0);
        tracep->declBit(c+201,"or1k_pu core or1k_cpu cappuccino or1k_cpu fetch_valid_o", false,-1);
        tracep->declBit(c+483,"or1k_pu core or1k_cpu cappuccino or1k_cpu flag_clear_o", false,-1);
        tracep->declBit(c+482,"or1k_pu core or1k_cpu cappuccino or1k_cpu flag_set_o", false,-1);
        tracep->declBit(c+1049,"or1k_pu core or1k_cpu cappuccino or1k_cpu icache_hit_o", false,-1);
        tracep->declBit(c+1609,"or1k_pu core or1k_cpu cappuccino or1k_cpu dcache_hit_o", false,-1);
        tracep->declBit(c+1173,"or1k_pu core or1k_cpu cappuccino or1k_cpu lsu_except_align_o", false,-1);
        tracep->declBit(c+1050,"or1k_pu core or1k_cpu cappuccino or1k_cpu lsu_except_dbus_o", false,-1);
        tracep->declBit(c+1174,"or1k_pu core or1k_cpu cappuccino or1k_cpu lsu_except_dpagefault_o", false,-1);
        tracep->declBit(c+1175,"or1k_pu core or1k_cpu cappuccino or1k_cpu lsu_except_dtlb_miss_o", false,-1);
        tracep->declBus(c+489,"or1k_pu core or1k_cpu cappuccino or1k_cpu lsu_result_o", false,-1, 31,0);
        tracep->declBit(c+1195,"or1k_pu core or1k_cpu cappuccino or1k_cpu lsu_valid_o", false,-1);
        tracep->declBus(c+1462,"or1k_pu core or1k_cpu cappuccino or1k_cpu mfspr_dat_o", false,-1, 31,0);
        tracep->declBit(c+490,"or1k_pu core or1k_cpu cappuccino or1k_cpu msync_stall_o", false,-1);
        tracep->declBus(c+202,"or1k_pu core or1k_cpu cappuccino or1k_cpu mul_result_o", false,-1, 31,0);
        tracep->declBit(c+491,"or1k_pu core or1k_cpu cappuccino or1k_cpu overflow_clear_o", false,-1);
        tracep->declBit(c+492,"or1k_pu core or1k_cpu cappuccino or1k_cpu overflow_set_o", false,-1);
        tracep->declBus(c+1610,"or1k_pu core or1k_cpu cappuccino or1k_cpu fpcsr_o", false,-1, 11,0);
        tracep->declBit(c+1476,"or1k_pu core or1k_cpu cappuccino or1k_cpu fpcsr_set_o", false,-1);
        tracep->declBit(c+203,"or1k_pu core or1k_cpu cappuccino or1k_cpu padv_ctrl_o", false,-1);
        tracep->declBit(c+1245,"or1k_pu core or1k_cpu cappuccino or1k_cpu padv_decode_o", false,-1);
        tracep->declBit(c+1237,"or1k_pu core or1k_cpu cappuccino or1k_cpu padv_execute_o", false,-1);
        tracep->declBit(c+1246,"or1k_pu core or1k_cpu cappuccino or1k_cpu padv_fetch_o", false,-1);
        tracep->declBit(c+1196,"or1k_pu core or1k_cpu cappuccino or1k_cpu pipeline_flush_o", false,-1);
        tracep->declBit(c+1051,"or1k_pu core or1k_cpu cappuccino or1k_cpu predicted_flag_o", false,-1);
        tracep->declBus(c+99,"or1k_pu core or1k_cpu cappuccino or1k_cpu rf_result_o", false,-1, 31,0);
        tracep->declBit(c+1052,"or1k_pu core or1k_cpu cappuccino or1k_cpu spr_bus_ack_dc_i", false,-1);
        tracep->declBit(c+509,"or1k_pu core or1k_cpu cappuccino or1k_cpu spr_bus_ack_dmmu_i", false,-1);
        tracep->declBit(c+204,"or1k_pu core or1k_cpu cappuccino or1k_cpu spr_bus_ack_ic_i", false,-1);
        tracep->declBit(c+510,"or1k_pu core or1k_cpu cappuccino or1k_cpu spr_bus_ack_immu_i", false,-1);
        tracep->declBus(c+1611,"or1k_pu core or1k_cpu cappuccino or1k_cpu spr_bus_dat_dc_i", false,-1, 31,0);
        tracep->declBus(c+205,"or1k_pu core or1k_cpu cappuccino or1k_cpu spr_bus_dat_dmmu_i", false,-1, 31,0);
        tracep->declBus(c+1612,"or1k_pu core or1k_cpu cappuccino or1k_cpu spr_bus_dat_ic_i", false,-1, 31,0);
        tracep->declBus(c+206,"or1k_pu core or1k_cpu cappuccino or1k_cpu spr_bus_dat_immu_i", false,-1, 31,0);
        tracep->declBit(c+511,"or1k_pu core or1k_cpu cappuccino or1k_cpu spr_gpr_ack_o", false,-1);
        tracep->declBus(c+207,"or1k_pu core or1k_cpu cappuccino or1k_cpu spr_gpr_dat_o", false,-1, 31,0);
        tracep->declBus(c+1053,"or1k_pu core or1k_cpu cappuccino or1k_cpu store_buffer_epcr_o", false,-1, 31,0);
        tracep->declBit(c+1054,"or1k_pu core or1k_cpu cappuccino or1k_cpu store_buffer_err_o", false,-1);
        tracep->declBit(c+208,"or1k_pu core or1k_cpu cappuccino or1k_cpu wb_rf_wb_o", false,-1);
        tracep->declBus(c+209,"or1k_pu core or1k_cpu cappuccino or1k_cpu wb_rfd_adr_o", false,-1, 4,0);
        tracep->declBus(c+1496,"or1k_pu core or1k_cpu cappuccino or1k_cpu RF_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+210,"or1k_pu core or1k_cpu cappuccino or1k_cpu traceport_stage_decode_insn", false,-1, 31,0);
        tracep->declBus(c+211,"or1k_pu core or1k_cpu cappuccino or1k_cpu traceport_stage_exec_insn", false,-1, 31,0);
        tracep->declBit(c+1613,"or1k_pu core or1k_cpu cappuccino or1k_cpu traceport_jal_execute_to_ctrl", false,-1);
        tracep->declBit(c+1614,"or1k_pu core or1k_cpu cappuccino or1k_cpu traceport_jr_execute_to_ctrl", false,-1);
        tracep->declBus(c+1615,"or1k_pu core or1k_cpu cappuccino or1k_cpu traceport_jbtarget_decode_to_execute", false,-1, 31,0);
        tracep->declBus(c+1616,"or1k_pu core or1k_cpu cappuccino or1k_cpu traceport_jbtarget_execute_to_ctrl", false,-1, 31,0);
        tracep->declBit(c+1617,"or1k_pu core or1k_cpu cappuccino or1k_cpu traceport_waitexec", false,-1);
        tracep->declBus(c+1471,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino OPTION_OPERAND_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1558,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino OPTION_RESET_PC", false,-1, 31,0);
        tracep->declBus(c+1544,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino OPTION_RF_ADDR_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino FEATURE_INSTRUCTIONCACHE", false,-1, 55,0);
        tracep->declBus(c+1544,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino OPTION_ICACHE_BLOCK_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1497,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino OPTION_ICACHE_SET_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1486,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino OPTION_ICACHE_WAYS", false,-1, 31,0);
        tracep->declBus(c+1471,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino OPTION_ICACHE_LIMIT_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino FEATURE_IMMU", false,-1, 55,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino FEATURE_IMMU_HW_TLB_RELOAD", false,-1, 31,0);
        tracep->declBus(c+1496,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino OPTION_IMMU_SET_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1492,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino OPTION_IMMU_WAYS", false,-1, 31,0);
        tracep->declBit(c+1391,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino clk", false,-1);
        tracep->declBit(c+941,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino rst", false,-1);
        tracep->declBus(c+1232,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino spr_bus_addr_i", false,-1, 15,0);
        tracep->declBit(c+1235,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino spr_bus_we_i", false,-1);
        tracep->declBit(c+1234,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino spr_bus_stb_i", false,-1);
        tracep->declBus(c+1233,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino spr_bus_dat_i", false,-1, 31,0);
        tracep->declBus(c+1612,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino spr_bus_dat_ic_o", false,-1, 31,0);
        tracep->declBit(c+204,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino spr_bus_ack_ic_o", false,-1);
        tracep->declBus(c+206,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino spr_bus_dat_immu_o", false,-1, 31,0);
        tracep->declBit(c+510,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino spr_bus_ack_immu_o", false,-1);
        tracep->declBit(c+1055,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino ic_enable", false,-1);
        tracep->declBit(c+1056,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_enable_i", false,-1);
        tracep->declBit(c+1057,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino supervisor_mode_i", false,-1);
        tracep->declBit(c+1049,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino ic_hit_o", false,-1);
        tracep->declBit(c+970,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino ibus_err_i", false,-1);
        tracep->declBit(c+25,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino ibus_ack_i", false,-1);
        tracep->declBus(c+24,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino ibus_dat_i", false,-1, 31,0);
        tracep->declBit(c+23,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino ibus_req_o", false,-1);
        tracep->declBus(c+22,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino ibus_adr_o", false,-1, 31,0);
        tracep->declBit(c+508,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino ibus_burst_o", false,-1);
        tracep->declBit(c+1246,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino padv_i", false,-1);
        tracep->declBit(c+203,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino padv_ctrl_i", false,-1);
        tracep->declBus(c+105,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino pc_decode_o", false,-1, 31,0);
        tracep->declBus(c+992,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino decode_insn_o", false,-1, 31,0);
        tracep->declBit(c+201,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino fetch_valid_o", false,-1);
        tracep->declBus(c+1243,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino fetch_rfa_adr_o", false,-1, 4,0);
        tracep->declBus(c+1244,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino fetch_rfb_adr_o", false,-1, 4,0);
        tracep->declBit(c+1242,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino fetch_rf_adr_valid_o", false,-1);
        tracep->declBit(c+1194,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino decode_branch_i", false,-1);
        tracep->declBus(c+1003,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino decode_branch_target_i", false,-1, 31,0);
        tracep->declBit(c+113,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino ctrl_branch_exception_i", false,-1);
        tracep->declBus(c+112,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino ctrl_branch_except_pc_i", false,-1, 31,0);
        tracep->declBit(c+1390,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino du_restart_i", false,-1);
        tracep->declBus(c+148,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino du_restart_pc_i", false,-1, 31,0);
        tracep->declBit(c+1018,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino decode_op_brcond_i", false,-1);
        tracep->declBit(c+991,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino branch_mispredict_i", false,-1);
        tracep->declBus(c+166,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino execute_mispredict_target_i", false,-1, 31,0);
        tracep->declBit(c+1196,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino pipeline_flush_i", false,-1);
        tracep->declBit(c+147,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino doing_rfe_i", false,-1);
        tracep->declBit(c+143,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino decode_except_ibus_err_o", false,-1);
        tracep->declBit(c+145,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino decode_except_itlb_miss_o", false,-1);
        tracep->declBit(c+144,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino decode_except_ipagefault_o", false,-1);
        tracep->declBit(c+200,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino fetch_exception_taken_o", false,-1);
        tracep->declBus(c+212,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino pc_fetch", false,-1, 31,0);
        tracep->declBus(c+952,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino pc_addr", false,-1, 31,0);
        tracep->declBit(c+213,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino ctrl_branch_exception_r", false,-1);
        tracep->declBit(c+1247,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino bus_access_done", false,-1);
        tracep->declBit(c+1058,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino ctrl_branch_exception_edge", false,-1);
        tracep->declBit(c+512,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino stall_fetch_valid", false,-1);
        tracep->declBit(c+1248,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino addr_valid", false,-1);
        tracep->declBit(c+1059,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino flush", false,-1);
        tracep->declBit(c+1176,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino flushing", false,-1);
        tracep->declBit(c+214,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino nop_ack", false,-1);
        tracep->declBit(c+1060,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino imem_err", false,-1);
        tracep->declBit(c+1463,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino imem_ack", false,-1);
        tracep->declBus(c+1249,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino imem_dat", false,-1, 31,0);
        tracep->declBit(c+493,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino ic_ack", false,-1);
        tracep->declBus(c+1061,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino ic_dat", false,-1, 31,0);
        tracep->declBit(c+215,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino ic_refill", false,-1);
        tracep->declBit(c+1464,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino ic_refill_req", false,-1);
        tracep->declBit(c+216,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino ic_refill_done", false,-1);
        tracep->declBit(c+1250,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino ic_invalidate", false,-1);
        tracep->declBus(c+953,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino ic_addr", false,-1, 31,0);
        tracep->declBus(c+1062,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino ic_addr_match", false,-1, 31,0);
        tracep->declBit(c+1063,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino ic_access", false,-1);
        tracep->declBus(c+217,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_phys_addr", false,-1, 31,0);
        tracep->declBit(c+218,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_cache_inhibit", false,-1);
        tracep->declBit(c+1251,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino pagefault", false,-1);
        tracep->declBit(c+1252,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino tlb_miss", false,-1);
        tracep->declBit(c+1253,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino except_itlb_miss", false,-1);
        tracep->declBit(c+1254,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino except_ipagefault", false,-1);
        tracep->declBit(c+1255,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_busy", false,-1);
        tracep->declBit(c+1064,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino tlb_reload_req", false,-1);
        tracep->declBit(c+219,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino tlb_reload_ack", false,-1);
        tracep->declBus(c+1065,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino tlb_reload_addr", false,-1, 31,0);
        tracep->declBus(c+220,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino tlb_reload_data", false,-1, 31,0);
        tracep->declBit(c+1476,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino tlb_reload_pagefault", false,-1);
        tracep->declBit(c+1476,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino tlb_reload_busy", false,-1);
        tracep->declBit(c+221,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino fetching_brcond", false,-1);
        tracep->declBit(c+222,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino fetching_mispredicted_branch", false,-1);
        tracep->declBit(c+1066,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino mispredict_stall", false,-1);
        tracep->declBit(c+223,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino exception_while_tlb_reload", false,-1);
        tracep->declBit(c+224,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino except_ipagefault_clear", false,-1);
        tracep->declBus(c+1477,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino IDLE", false,-1, 2,0);
        tracep->declBus(c+1529,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino READ", false,-1, 2,0);
        tracep->declBus(c+1539,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino TLB_RELOAD", false,-1, 2,0);
        tracep->declBus(c+1540,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino IC_REFILL", false,-1, 2,0);
        tracep->declBus(c+225,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino state", false,-1, 2,0);
        tracep->declBus(c+22,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino ibus_adr", false,-1, 31,0);
        tracep->declBus(c+226,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino next_ibus_adr", false,-1, 31,0);
        tracep->declBus(c+227,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino ibus_dat", false,-1, 31,0);
        tracep->declBit(c+23,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino ibus_req", false,-1);
        tracep->declBit(c+228,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino ibus_ack", false,-1);
        tracep->declBit(c+1256,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino ibus_access", false,-1);
        tracep->declBit(c+229,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen ic_enable_r", false,-1);
        tracep->declBit(c+494,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen ic_enabled", false,-1);
        tracep->declBit(c+1465,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen ic_refill_allowed", false,-1);
        tracep->declBit(c+1257,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen ic_req", false,-1);
        tracep->declBus(c+953,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen virt_addr", false,-1, 31,0);
        tracep->declBit(c+1258,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen immu_spr_bus_stb", false,-1);
        tracep->declBit(c+1177,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen immu_enable", false,-1);
        tracep->declBus(c+1471,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache OPTION_OPERAND_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1544,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache OPTION_ICACHE_BLOCK_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1497,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache OPTION_ICACHE_SET_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1486,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache OPTION_ICACHE_WAYS", false,-1, 31,0);
        tracep->declBus(c+1471,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache OPTION_ICACHE_LIMIT_WIDTH", false,-1, 31,0);
        tracep->declBit(c+1391,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache clk", false,-1);
        tracep->declBit(c+941,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache rst", false,-1);
        tracep->declBit(c+1060,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache ic_imem_err_i", false,-1);
        tracep->declBit(c+1063,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache ic_access_i", false,-1);
        tracep->declBit(c+215,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache refill_o", false,-1);
        tracep->declBit(c+1464,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache refill_req_o", false,-1);
        tracep->declBit(c+216,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache refill_done_o", false,-1);
        tracep->declBit(c+1250,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache invalidate_o", false,-1);
        tracep->declBit(c+1049,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache cache_hit_o", false,-1);
        tracep->declBit(c+493,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache cpu_ack_o", false,-1);
        tracep->declBus(c+1061,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache cpu_dat_o", false,-1, 31,0);
        tracep->declBus(c+953,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache cpu_adr_i", false,-1, 31,0);
        tracep->declBus(c+1062,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache cpu_adr_match_i", false,-1, 31,0);
        tracep->declBit(c+1257,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache cpu_req_i", false,-1);
        tracep->declBus(c+22,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache wradr_i", false,-1, 31,0);
        tracep->declBus(c+24,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache wrdat_i", false,-1, 31,0);
        tracep->declBit(c+25,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache we_i", false,-1);
        tracep->declBus(c+1232,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache spr_bus_addr_i", false,-1, 15,0);
        tracep->declBit(c+1235,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache spr_bus_we_i", false,-1);
        tracep->declBit(c+1234,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache spr_bus_stb_i", false,-1);
        tracep->declBus(c+1233,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache spr_bus_dat_i", false,-1, 31,0);
        tracep->declBus(c+1612,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache spr_bus_dat_o", false,-1, 31,0);
        tracep->declBit(c+204,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache spr_bus_ack_o", false,-1);
        tracep->declBus(c+1501,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache IDLE", false,-1, 3,0);
        tracep->declBus(c+1502,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache READ", false,-1, 3,0);
        tracep->declBus(c+1547,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache REFILL", false,-1, 3,0);
        tracep->declBus(c+1503,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache INVALIDATE", false,-1, 3,0);
        tracep->declBus(c+1618,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache WAY_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1619,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache TAG_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1620,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache TAGMEM_WAY_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1619,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache TAGMEM_WAY_VALID", false,-1, 31,0);
        tracep->declBus(c+1492,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache TAG_LRU_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1492,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache TAG_LRU_WIDTH_BITS", false,-1, 31,0);
        tracep->declBus(c+1621,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache TAGMEM_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1622,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache TAG_LRU_MSB", false,-1, 31,0);
        tracep->declBus(c+1622,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache TAG_LRU_LSB", false,-1, 31,0);
        tracep->declBus(c+230,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache state", false,-1, 3,0);
        tracep->declBit(c+231,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache read", false,-1);
        tracep->declBit(c+215,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache refill", false,-1);
        tracep->declBit(c+232,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache invalidate", false,-1);
        tracep->declBus(c+233,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache invalidate_adr", false,-1, 12,5);
        tracep->declBus(c+226,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache next_refill_adr", false,-1, 31,0);
        tracep->declBit(c+216,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache refill_done", false,-1);
        tracep->declBit(c+1067,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache refill_hit", false,-1);
        tracep->declBus(c+234,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache refill_valid", false,-1, 7,0);
        tracep->declBus(c+235,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache refill_valid_r", false,-1, 7,0);
        tracep->declBus(c+954,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache tag_rindex", false,-1, 7,0);
        tracep->declBus(c+495,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache tag_windex", false,-1, 7,0);
        tracep->declQuad(c+236,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache tag_dout", false,-1, 40,0);
        tracep->declBus(c+238,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache tag_lru_out", false,-1, 0,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+239+i*1,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache tag_way_out", true,(i+0), 19,0);}}
        tracep->declQuad(c+496,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache tag_din", false,-1, 40,0);
        tracep->declBus(c+1068,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache tag_lru_in", false,-1, 0,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+241+i*1,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache tag_way_in", true,(i+0), 19,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+243+i*1,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache tag_way_save", true,(i+0), 19,0);}}
        tracep->declBit(c+1069,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache tag_we", false,-1);
        tracep->declBus(c+245,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache tag_wtag", false,-1, 18,0);
        tracep->declBus(c+1070,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache tag_tag", false,-1, 18,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+955+i*1,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache way_raddr", true,(i+0), 10,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+246+i*1,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache way_waddr", true,(i+0), 10,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+248+i*1,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache way_din", true,(i+0), 31,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+250+i*1,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache way_dout", true,(i+0), 31,0);}}
        tracep->declBus(c+252,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache way_we", false,-1, 1,0);
        tracep->declBit(c+1049,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache hit", false,-1);
        tracep->declBus(c+1071,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache way_hit", false,-1, 1,0);
        tracep->declBus(c+1072,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache lru", false,-1, 1,0);
        tracep->declBus(c+253,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache tag_save_lru", false,-1, 1,0);
        tracep->declBus(c+1073,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache access", false,-1, 1,0);
        tracep->declBus(c+238,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache current_lru_history", false,-1, 0,0);
        tracep->declBus(c+1074,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache next_lru_history", false,-1, 0,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+254+i*1,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache check_way_tag", true,(i+0), 18,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBit(c+1075+i*1,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache check_way_match", true,(i+0));}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBit(c+256+i*1,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache check_way_valid", true,(i+0));}}
        tracep->declBus(c+1623,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache w0", false,-1, 31,0);
        tracep->declBus(c+258,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache w1", false,-1, 31,0);
        tracep->declBus(c+259,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache w2", false,-1, 31,0);
        tracep->declBus(c+1497,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache tag_ram ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1621,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache tag_ram DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1536,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache tag_ram CLEAR_ON_INIT", false,-1, 31,0);
        tracep->declBus(c+1536,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache tag_ram ENABLE_BYPASS", false,-1, 31,0);
        tracep->declBit(c+1391,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache tag_ram clk", false,-1);
        tracep->declBus(c+954,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache tag_ram raddr", false,-1, 7,0);
        tracep->declBit(c+1538,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache tag_ram re", false,-1);
        tracep->declBus(c+495,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache tag_ram waddr", false,-1, 7,0);
        tracep->declBit(c+1069,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache tag_ram we", false,-1);
        tracep->declQuad(c+496,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache tag_ram din", false,-1, 40,0);
        tracep->declQuad(c+236,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache tag_ram dout", false,-1, 40,0);
        tracep->declQuad(c+236,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache tag_ram rdata", false,-1, 40,0);
        tracep->declBus(c+1551,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache way_memories[0] way_data_ram ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1471,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache way_memories[0] way_data_ram DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1536,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache way_memories[0] way_data_ram CLEAR_ON_INIT", false,-1, 31,0);
        tracep->declBus(c+1536,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache way_memories[0] way_data_ram ENABLE_BYPASS", false,-1, 31,0);
        tracep->declBit(c+1391,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache way_memories[0] way_data_ram clk", false,-1);
        tracep->declBus(c+957,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache way_memories[0] way_data_ram raddr", false,-1, 10,0);
        tracep->declBit(c+1538,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache way_memories[0] way_data_ram re", false,-1);
        tracep->declBus(c+260,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache way_memories[0] way_data_ram waddr", false,-1, 10,0);
        tracep->declBit(c+261,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache way_memories[0] way_data_ram we", false,-1);
        tracep->declBus(c+262,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache way_memories[0] way_data_ram din", false,-1, 31,0);
        tracep->declBus(c+263,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache way_memories[0] way_data_ram dout", false,-1, 31,0);
        tracep->declBus(c+263,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache way_memories[0] way_data_ram rdata", false,-1, 31,0);
        tracep->declBus(c+1551,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache way_memories[1] way_data_ram ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1471,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache way_memories[1] way_data_ram DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1536,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache way_memories[1] way_data_ram CLEAR_ON_INIT", false,-1, 31,0);
        tracep->declBus(c+1536,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache way_memories[1] way_data_ram ENABLE_BYPASS", false,-1, 31,0);
        tracep->declBit(c+1391,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache way_memories[1] way_data_ram clk", false,-1);
        tracep->declBus(c+958,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache way_memories[1] way_data_ram raddr", false,-1, 10,0);
        tracep->declBit(c+1538,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache way_memories[1] way_data_ram re", false,-1);
        tracep->declBus(c+264,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache way_memories[1] way_data_ram waddr", false,-1, 10,0);
        tracep->declBit(c+265,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache way_memories[1] way_data_ram we", false,-1);
        tracep->declBus(c+266,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache way_memories[1] way_data_ram din", false,-1, 31,0);
        tracep->declBus(c+267,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache way_memories[1] way_data_ram dout", false,-1, 31,0);
        tracep->declBus(c+267,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache way_memories[1] way_data_ram rdata", false,-1, 31,0);
        tracep->declBus(c+1486,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache gen_u_lru u_lru NUMWAYS", false,-1, 31,0);
        tracep->declBus(c+1492,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache gen_u_lru u_lru WIDTH", false,-1, 31,0);
        tracep->declBus(c+238,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache gen_u_lru u_lru current", false,-1, 0,0);
        tracep->declBus(c+1074,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache gen_u_lru u_lru update", false,-1, 0,0);
        tracep->declBus(c+1073,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache gen_u_lru u_lru access", false,-1, 1,0);
        tracep->declBus(c+1072,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache gen_u_lru u_lru lru_pre", false,-1, 1,0);
        tracep->declBus(c+1077,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache gen_u_lru u_lru lru_post", false,-1, 1,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+1078+i*1,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache gen_u_lru u_lru expand", true,(i+0), 1,0);}}
        tracep->declBus(c+1623,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache gen_u_lru u_lru i", false,-1, 31,0);
        tracep->declBus(c+1080,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache gen_u_lru u_lru j", false,-1, 31,0);
        tracep->declBus(c+1081,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino icache_gen or1k_icache gen_u_lru u_lru offset", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu FEATURE_IMMU_HW_TLB_RELOAD", false,-1, 31,0);
        tracep->declBus(c+1471,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu OPTION_OPERAND_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1496,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu OPTION_IMMU_SET_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1492,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu OPTION_IMMU_WAYS", false,-1, 31,0);
        tracep->declBit(c+1391,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu clk", false,-1);
        tracep->declBit(c+941,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu rst", false,-1);
        tracep->declBit(c+1177,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu enable_i", false,-1);
        tracep->declBit(c+1255,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu busy_o", false,-1);
        tracep->declBus(c+953,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu virt_addr_i", false,-1, 31,0);
        tracep->declBus(c+212,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu virt_addr_match_i", false,-1, 31,0);
        tracep->declBus(c+217,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu phys_addr_o", false,-1, 31,0);
        tracep->declBit(c+218,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu cache_inhibit_o", false,-1);
        tracep->declBit(c+1057,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu supervisor_mode_i", false,-1);
        tracep->declBit(c+1252,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu tlb_miss_o", false,-1);
        tracep->declBit(c+1251,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu pagefault_o", false,-1);
        tracep->declBit(c+1064,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu tlb_reload_req_o", false,-1);
        tracep->declBit(c+219,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu tlb_reload_ack_i", false,-1);
        tracep->declBus(c+1065,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu tlb_reload_addr_o", false,-1, 31,0);
        tracep->declBus(c+220,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu tlb_reload_data_i", false,-1, 31,0);
        tracep->declBit(c+1476,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu tlb_reload_pagefault_o", false,-1);
        tracep->declBit(c+224,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu tlb_reload_pagefault_clear_i", false,-1);
        tracep->declBit(c+1476,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu tlb_reload_busy_o", false,-1);
        tracep->declBus(c+1232,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu spr_bus_addr_i", false,-1, 15,0);
        tracep->declBit(c+1235,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu spr_bus_we_i", false,-1);
        tracep->declBit(c+1258,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu spr_bus_stb_i", false,-1);
        tracep->declBus(c+1233,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu spr_bus_dat_i", false,-1, 31,0);
        tracep->declBus(c+206,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu spr_bus_dat_o", false,-1, 31,0);
        tracep->declBit(c+510,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu spr_bus_ack_o", false,-1);
        tracep->declBus(c+1492,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu WAYS_WIDTH", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+268+i*1,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu itlb_match_dout", true,(i+0), 31,0);}}
        tracep->declBus(c+959,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu itlb_match_addr", false,-1, 5,0);
        tracep->declBus(c+1259,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu itlb_match_we", false,-1, 0,0);
        tracep->declBus(c+1260,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu itlb_match_din", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+269+i*1,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu itlb_match_huge_dout", true,(i+0), 31,0);}}
        tracep->declBus(c+960,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu itlb_match_huge_addr", false,-1, 5,0);
        tracep->declBit(c+270,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu itlb_match_huge_we", false,-1);
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+271+i*1,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu itlb_trans_dout", true,(i+0), 31,0);}}
        tracep->declBus(c+961,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu itlb_trans_addr", false,-1, 5,0);
        tracep->declBus(c+1261,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu itlb_trans_we", false,-1, 0,0);
        tracep->declBus(c+1262,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu itlb_trans_din", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+272+i*1,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu itlb_trans_huge_dout", true,(i+0), 31,0);}}
        tracep->declBus(c+960,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu itlb_trans_huge_addr", false,-1, 5,0);
        tracep->declBit(c+273,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu itlb_trans_huge_we", false,-1);
        tracep->declBit(c+274,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu itlb_match_reload_we", false,-1);
        tracep->declBus(c+275,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu itlb_match_reload_din", false,-1, 31,0);
        tracep->declBit(c+276,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu itlb_trans_reload_we", false,-1);
        tracep->declBus(c+277,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu itlb_trans_reload_din", false,-1, 31,0);
        tracep->declBit(c+1263,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu itlb_match_spr_cs", false,-1);
        tracep->declBit(c+278,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu itlb_match_spr_cs_r", false,-1);
        tracep->declBit(c+1264,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu itlb_trans_spr_cs", false,-1);
        tracep->declBit(c+279,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu itlb_trans_spr_cs_r", false,-1);
        tracep->declBit(c+1476,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu immucr_spr_cs", false,-1);
        tracep->declBit(c+280,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu immucr_spr_cs_r", false,-1);
        tracep->declBus(c+281,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu immucr", false,-1, 31,0);
        tracep->declBus(c+1265,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu spr_way_idx_full", false,-1, 1,0);
        tracep->declBus(c+1266,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu spr_way_idx", false,-1, 0,0);
        tracep->declBus(c+282,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu spr_way_idx_r", false,-1, 0,0);
        tracep->declBus(c+283,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu way_huge", false,-1, 0,0);
        tracep->declBus(c+284,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu way_hit", false,-1, 0,0);
        tracep->declBus(c+285,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu way_huge_hit", false,-1, 0,0);
        tracep->declBit(c+286,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu tlb_reload_pagefault", false,-1);
        tracep->declBit(c+287,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu tlb_reload_huge", false,-1);
        tracep->declBit(c+288,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu sxe", false,-1);
        tracep->declBit(c+289,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu uxe", false,-1);
        tracep->declBit(c+290,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu spr_bus_ack", false,-1);
        tracep->declBit(c+291,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu spr_bus_ack_r", false,-1);
        tracep->declBus(c+292,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu spr_bus_dat", false,-1, 31,0);
        tracep->declBus(c+293,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu spr_bus_dat_r", false,-1, 31,0);
        tracep->declBus(c+1624,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu j", false,-1, 31,0);
        tracep->declBus(c+1478,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu TLB_IDLE", false,-1, 1,0);
        tracep->declBus(c+1591,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu TLB_GET_PTE_POINTER", false,-1, 1,0);
        tracep->declBus(c+1473,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu TLB_GET_PTE", false,-1, 1,0);
        tracep->declBus(c+1592,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu TLB_READ", false,-1, 1,0);
        tracep->declBus(c+1496,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu itlb[0] itlb_match_regs ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1471,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu itlb[0] itlb_match_regs DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+1391,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu itlb[0] itlb_match_regs clk_a", false,-1);
        tracep->declBus(c+959,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu itlb[0] itlb_match_regs addr_a", false,-1, 5,0);
        tracep->declBit(c+1259,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu itlb[0] itlb_match_regs we_a", false,-1);
        tracep->declBus(c+1260,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu itlb[0] itlb_match_regs din_a", false,-1, 31,0);
        tracep->declBus(c+294,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu itlb[0] itlb_match_regs dout_a", false,-1, 31,0);
        tracep->declBit(c+1391,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu itlb[0] itlb_match_regs clk_b", false,-1);
        tracep->declBus(c+960,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu itlb[0] itlb_match_regs addr_b", false,-1, 5,0);
        tracep->declBit(c+270,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu itlb[0] itlb_match_regs we_b", false,-1);
        tracep->declBus(c+275,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu itlb[0] itlb_match_regs din_b", false,-1, 31,0);
        tracep->declBus(c+295,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu itlb[0] itlb_match_regs dout_b", false,-1, 31,0);
        tracep->declBus(c+294,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu itlb[0] itlb_match_regs rdata_a", false,-1, 31,0);
        tracep->declBus(c+295,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu itlb[0] itlb_match_regs rdata_b", false,-1, 31,0);
        tracep->declBus(c+1496,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu itlb[0] itlb_translate_regs ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1471,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu itlb[0] itlb_translate_regs DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+1391,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu itlb[0] itlb_translate_regs clk_a", false,-1);
        tracep->declBus(c+961,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu itlb[0] itlb_translate_regs addr_a", false,-1, 5,0);
        tracep->declBit(c+1261,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu itlb[0] itlb_translate_regs we_a", false,-1);
        tracep->declBus(c+1262,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu itlb[0] itlb_translate_regs din_a", false,-1, 31,0);
        tracep->declBus(c+296,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu itlb[0] itlb_translate_regs dout_a", false,-1, 31,0);
        tracep->declBit(c+1391,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu itlb[0] itlb_translate_regs clk_b", false,-1);
        tracep->declBus(c+960,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu itlb[0] itlb_translate_regs addr_b", false,-1, 5,0);
        tracep->declBit(c+273,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu itlb[0] itlb_translate_regs we_b", false,-1);
        tracep->declBus(c+277,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu itlb[0] itlb_translate_regs din_b", false,-1, 31,0);
        tracep->declBus(c+297,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu itlb[0] itlb_translate_regs dout_b", false,-1, 31,0);
        tracep->declBus(c+296,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu itlb[0] itlb_translate_regs rdata_a", false,-1, 31,0);
        tracep->declBus(c+297,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_fetch_cappuccino immu_gen or1k_immu itlb[0] itlb_translate_regs rdata_b", false,-1, 31,0);
        tracep->declBus(c+1471,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode OPTION_OPERAND_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1558,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode OPTION_RESET_PC", false,-1, 31,0);
        tracep->declBus(c+1544,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode OPTION_RF_ADDR_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode FEATURE_SYSCALL", false,-1, 55,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode FEATURE_TRAP", false,-1, 55,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode FEATURE_RANGE", false,-1, 55,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode FEATURE_MAC", false,-1, 31,0);
        tracep->declArray(c+1559,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode FEATURE_MULTIPLIER", false,-1, 79,0);
        tracep->declQuad(c+1562,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode FEATURE_DIVIDER", false,-1, 47,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode FEATURE_ADDC", false,-1, 55,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode FEATURE_SRA", false,-1, 55,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode FEATURE_ROR", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode FEATURE_EXT", false,-1, 31,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode FEATURE_CMOV", false,-1, 55,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode FEATURE_FFL1", false,-1, 55,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode FEATURE_ATOMIC", false,-1, 55,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode FEATURE_MSYNC", false,-1, 55,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode FEATURE_PSYNC", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode FEATURE_CSYNC", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode FEATURE_FPU", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode FEATURE_CUST1", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode FEATURE_CUST2", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode FEATURE_CUST3", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode FEATURE_CUST4", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode FEATURE_CUST5", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode FEATURE_CUST6", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode FEATURE_CUST7", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode FEATURE_CUST8", false,-1, 31,0);
        tracep->declBit(c+1391,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode clk", false,-1);
        tracep->declBit(c+941,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode rst", false,-1);
        tracep->declBus(c+992,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode decode_insn_i", false,-1, 31,0);
        tracep->declBus(c+1039,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode decode_opc_alu_o", false,-1, 3,0);
        tracep->declBus(c+1040,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode decode_opc_alu_secondary_o", false,-1, 3,0);
        tracep->declBus(c+1007,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode decode_imm16_o", false,-1, 15,0);
        tracep->declBus(c+1008,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode decode_immediate_o", false,-1, 31,0);
        tracep->declBit(c+1009,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode decode_immediate_sel_o", false,-1);
        tracep->declBus(c+1010,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode decode_immjbr_upper_o", false,-1, 9,0);
        tracep->declBus(c+1046,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode decode_rfd_adr_o", false,-1, 4,0);
        tracep->declBus(c+1043,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode decode_rfa_adr_o", false,-1, 4,0);
        tracep->declBus(c+1044,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode decode_rfb_adr_o", false,-1, 4,0);
        tracep->declBit(c+1042,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode decode_rf_wb_o", false,-1);
        tracep->declBit(c+1024,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode decode_op_jbr_o", false,-1);
        tracep->declBit(c+1025,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode decode_op_jr_o", false,-1);
        tracep->declBit(c+1023,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode decode_op_jal_o", false,-1);
        tracep->declBit(c+1015,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode decode_op_bf_o", false,-1);
        tracep->declBit(c+1016,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode decode_op_bnf_o", false,-1);
        tracep->declBit(c+1018,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode decode_op_brcond_o", false,-1);
        tracep->declBit(c+1017,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode decode_op_branch_o", false,-1);
        tracep->declBit(c+1014,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode decode_op_alu_o", false,-1);
        tracep->declBit(c+1027,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode decode_op_lsu_load_o", false,-1);
        tracep->declBit(c+1028,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode decode_op_lsu_store_o", false,-1);
        tracep->declBit(c+1026,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode decode_op_lsu_atomic_o", false,-1);
        tracep->declBus(c+1011,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode decode_lsu_length_o", false,-1, 1,0);
        tracep->declBit(c+1012,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode decode_lsu_zext_o", false,-1);
        tracep->declBit(c+1029,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode decode_op_mfspr_o", false,-1);
        tracep->declBit(c+1032,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode decode_op_mtspr_o", false,-1);
        tracep->declBit(c+1036,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode decode_op_rfe_o", false,-1);
        tracep->declBit(c+1037,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode decode_op_setflag_o", false,-1);
        tracep->declBit(c+1013,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode decode_op_add_o", false,-1);
        tracep->declBit(c+1033,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode decode_op_mul_o", false,-1);
        tracep->declBit(c+1034,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode decode_op_mul_signed_o", false,-1);
        tracep->declBit(c+1035,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode decode_op_mul_unsigned_o", false,-1);
        tracep->declBit(c+1019,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode decode_op_div_o", false,-1);
        tracep->declBit(c+1020,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode decode_op_div_signed_o", false,-1);
        tracep->declBit(c+1021,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode decode_op_div_unsigned_o", false,-1);
        tracep->declBit(c+1038,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode decode_op_shift_o", false,-1);
        tracep->declBit(c+1022,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode decode_op_ffl1_o", false,-1);
        tracep->declBit(c+1030,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode decode_op_movhi_o", false,-1);
        tracep->declBit(c+1476,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode decode_op_ext_o", false,-1);
        tracep->declBit(c+1031,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode decode_op_msync_o", false,-1);
        tracep->declBus(c+1534,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode decode_op_fpu_o", false,-1, 7,0);
        tracep->declBit(c+1002,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode decode_adder_do_sub_o", false,-1);
        tracep->declBit(c+1001,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode decode_adder_do_carry_o", false,-1);
        tracep->declBit(c+1004,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode decode_except_illegal_o", false,-1);
        tracep->declBit(c+1005,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode decode_except_syscall_o", false,-1);
        tracep->declBit(c+1006,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode decode_except_trap_o", false,-1);
        tracep->declBus(c+1041,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode decode_opc_insn_o", false,-1, 5,0);
        tracep->declBus(c+1041,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode opc_insn", false,-1, 5,0);
        tracep->declBus(c+1082,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode opc_alu", false,-1, 3,0);
        tracep->declBus(c+1083,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode imm_sext", false,-1, 31,0);
        tracep->declBit(c+1084,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode imm_sext_sel", false,-1);
        tracep->declBus(c+1085,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode imm_zext", false,-1, 31,0);
        tracep->declBit(c+1086,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode imm_zext_sel", false,-1);
        tracep->declBus(c+1087,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode imm_high", false,-1, 31,0);
        tracep->declBit(c+1030,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode imm_high_sel", false,-1);
        tracep->declBit(c+1625,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode decode_except_ibus_align", false,-1);
        tracep->declBus(c+1471,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino OPTION_OPERAND_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1558,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino OPTION_RESET_PC", false,-1, 31,0);
        tracep->declBus(c+1544,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino OPTION_RF_ADDR_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino FEATURE_SYSCALL", false,-1, 55,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino FEATURE_TRAP", false,-1, 55,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino FEATURE_DELAY_SLOT", false,-1, 55,0);
        tracep->declArray(c+1559,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino FEATURE_MULTIPLIER", false,-1, 79,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino FEATURE_FPU", false,-1, 31,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino FEATURE_INBUILT_CHECKERS", false,-1, 55,0);
        tracep->declBit(c+1391,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino clk", false,-1);
        tracep->declBit(c+941,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino rst", false,-1);
        tracep->declBit(c+1245,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino padv_i", false,-1);
        tracep->declBus(c+105,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino pc_decode_i", false,-1, 31,0);
        tracep->declBus(c+1045,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino decode_rfb_i", false,-1, 31,0);
        tracep->declBus(c+198,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino execute_rfb_i", false,-1, 31,0);
        tracep->declBit(c+1051,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino predicted_flag_i", false,-1);
        tracep->declBit(c+195,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino execute_predicted_flag_o", false,-1);
        tracep->declBus(c+166,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino execute_mispredict_target_o", false,-1, 31,0);
        tracep->declBit(c+1196,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino pipeline_flush_i", false,-1);
        tracep->declBus(c+1039,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino decode_opc_alu_i", false,-1, 3,0);
        tracep->declBus(c+1040,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino decode_opc_alu_secondary_i", false,-1, 3,0);
        tracep->declBus(c+1007,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino decode_imm16_i", false,-1, 15,0);
        tracep->declBus(c+1008,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino decode_immediate_i", false,-1, 31,0);
        tracep->declBit(c+1009,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino decode_immediate_sel_i", false,-1);
        tracep->declBus(c+192,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino execute_opc_alu_o", false,-1, 3,0);
        tracep->declBus(c+193,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino execute_opc_alu_secondary_o", false,-1, 3,0);
        tracep->declBus(c+159,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino execute_imm16_o", false,-1, 15,0);
        tracep->declBus(c+160,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino execute_immediate_o", false,-1, 31,0);
        tracep->declBit(c+161,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino execute_immediate_sel_o", false,-1);
        tracep->declBit(c+1002,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino decode_adder_do_sub_i", false,-1);
        tracep->declBit(c+1001,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino decode_adder_do_carry_i", false,-1);
        tracep->declBit(c+150,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino execute_adder_do_sub_o", false,-1);
        tracep->declBit(c+149,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino execute_adder_do_carry_o", false,-1);
        tracep->declBus(c+1010,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino decode_immjbr_upper_i", false,-1, 9,0);
        tracep->declBus(c+162,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino execute_immjbr_upper_o", false,-1, 9,0);
        tracep->declBus(c+199,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino execute_rfd_adr_o", false,-1, 4,0);
        tracep->declBus(c+1046,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino decode_rfd_adr_i", false,-1, 4,0);
        tracep->declBus(c+1043,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino decode_rfa_adr_i", false,-1, 4,0);
        tracep->declBus(c+1044,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino decode_rfb_adr_i", false,-1, 4,0);
        tracep->declBus(c+142,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino ctrl_rfd_adr_i", false,-1, 4,0);
        tracep->declBit(c+1000,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino ctrl_op_lsu_load_i", false,-1);
        tracep->declBit(c+131,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino ctrl_op_mfspr_i", false,-1);
        tracep->declBit(c+134,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino ctrl_op_mul_i", false,-1);
        tracep->declBit(c+1042,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino decode_rf_wb_i", false,-1);
        tracep->declBit(c+1014,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino decode_op_alu_i", false,-1);
        tracep->declBit(c+1037,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino decode_op_setflag_i", false,-1);
        tracep->declBit(c+1024,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino decode_op_jbr_i", false,-1);
        tracep->declBit(c+1025,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino decode_op_jr_i", false,-1);
        tracep->declBit(c+1023,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino decode_op_jal_i", false,-1);
        tracep->declBit(c+1015,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino decode_op_bf_i", false,-1);
        tracep->declBit(c+1016,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino decode_op_bnf_i", false,-1);
        tracep->declBit(c+1018,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino decode_op_brcond_i", false,-1);
        tracep->declBit(c+1017,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino decode_op_branch_i", false,-1);
        tracep->declBit(c+1027,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino decode_op_lsu_load_i", false,-1);
        tracep->declBit(c+1028,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino decode_op_lsu_store_i", false,-1);
        tracep->declBit(c+1026,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino decode_op_lsu_atomic_i", false,-1);
        tracep->declBus(c+1011,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino decode_lsu_length_i", false,-1, 1,0);
        tracep->declBit(c+1012,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino decode_lsu_zext_i", false,-1);
        tracep->declBit(c+1029,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino decode_op_mfspr_i", false,-1);
        tracep->declBit(c+1032,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino decode_op_mtspr_i", false,-1);
        tracep->declBit(c+1036,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino decode_op_rfe_i", false,-1);
        tracep->declBit(c+1013,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino decode_op_add_i", false,-1);
        tracep->declBit(c+1033,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino decode_op_mul_i", false,-1);
        tracep->declBit(c+1034,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino decode_op_mul_signed_i", false,-1);
        tracep->declBit(c+1035,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino decode_op_mul_unsigned_i", false,-1);
        tracep->declBit(c+1019,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino decode_op_div_i", false,-1);
        tracep->declBit(c+1020,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino decode_op_div_signed_i", false,-1);
        tracep->declBit(c+1021,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino decode_op_div_unsigned_i", false,-1);
        tracep->declBit(c+1038,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino decode_op_shift_i", false,-1);
        tracep->declBit(c+1022,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino decode_op_ffl1_i", false,-1);
        tracep->declBit(c+1030,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino decode_op_movhi_i", false,-1);
        tracep->declBit(c+1476,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino decode_op_ext_i", false,-1);
        tracep->declBit(c+1031,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino decode_op_msync_i", false,-1);
        tracep->declBus(c+1534,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino decode_op_fpu_i", false,-1, 7,0);
        tracep->declBus(c+1041,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino decode_opc_insn_i", false,-1, 5,0);
        tracep->declBit(c+196,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino execute_rf_wb_o", false,-1);
        tracep->declBit(c+168,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino execute_op_alu_o", false,-1);
        tracep->declBit(c+190,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino execute_op_setflag_o", false,-1);
        tracep->declBit(c+178,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino execute_op_jbr_o", false,-1);
        tracep->declBit(c+179,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino execute_op_jr_o", false,-1);
        tracep->declBit(c+177,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino execute_op_jal_o", false,-1);
        tracep->declBit(c+172,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino execute_op_brcond_o", false,-1);
        tracep->declBit(c+171,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino execute_op_branch_o", false,-1);
        tracep->declBit(c+1047,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino execute_op_lsu_load_o", false,-1);
        tracep->declBit(c+1048,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino execute_op_lsu_store_o", false,-1);
        tracep->declBit(c+180,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino execute_op_lsu_atomic_o", false,-1);
        tracep->declBus(c+164,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino execute_lsu_length_o", false,-1, 1,0);
        tracep->declBit(c+165,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino execute_lsu_zext_o", false,-1);
        tracep->declBit(c+181,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino execute_op_mfspr_o", false,-1);
        tracep->declBit(c+185,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino execute_op_mtspr_o", false,-1);
        tracep->declBit(c+189,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino execute_op_rfe_o", false,-1);
        tracep->declBit(c+167,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino execute_op_add_o", false,-1);
        tracep->declBit(c+186,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino execute_op_mul_o", false,-1);
        tracep->declBit(c+187,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino execute_op_mul_signed_o", false,-1);
        tracep->declBit(c+188,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino execute_op_mul_unsigned_o", false,-1);
        tracep->declBit(c+173,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino execute_op_div_o", false,-1);
        tracep->declBit(c+174,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino execute_op_div_signed_o", false,-1);
        tracep->declBit(c+175,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino execute_op_div_unsigned_o", false,-1);
        tracep->declBit(c+191,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino execute_op_shift_o", false,-1);
        tracep->declBit(c+176,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino execute_op_ffl1_o", false,-1);
        tracep->declBit(c+182,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino execute_op_movhi_o", false,-1);
        tracep->declBit(c+183,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino execute_op_ext_o", false,-1);
        tracep->declBit(c+169,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino execute_op_bf_o", false,-1);
        tracep->declBit(c+170,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino execute_op_bnf_o", false,-1);
        tracep->declBit(c+184,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino execute_op_msync_o", false,-1);
        tracep->declBus(c+1534,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino execute_op_fpu_o", false,-1, 7,0);
        tracep->declBus(c+163,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino execute_jal_result_o", false,-1, 31,0);
        tracep->declBus(c+194,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino execute_opc_insn_o", false,-1, 5,0);
        tracep->declBit(c+1194,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino decode_branch_o", false,-1);
        tracep->declBus(c+1003,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino decode_branch_target_o", false,-1, 31,0);
        tracep->declBit(c+143,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino decode_except_ibus_err_i", false,-1);
        tracep->declBit(c+145,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino decode_except_itlb_miss_i", false,-1);
        tracep->declBit(c+144,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino decode_except_ipagefault_i", false,-1);
        tracep->declBit(c+1004,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino decode_except_illegal_i", false,-1);
        tracep->declBit(c+1005,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino decode_except_syscall_i", false,-1);
        tracep->declBit(c+1006,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino decode_except_trap_i", false,-1);
        tracep->declBit(c+153,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino execute_except_ibus_err_o", false,-1);
        tracep->declBit(c+156,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino execute_except_itlb_miss_o", false,-1);
        tracep->declBit(c+155,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino execute_except_ipagefault_o", false,-1);
        tracep->declBit(c+154,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino execute_except_illegal_o", false,-1);
        tracep->declBit(c+152,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino execute_except_ibus_align_o", false,-1);
        tracep->declBit(c+157,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino execute_except_syscall_o", false,-1);
        tracep->declBit(c+158,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino execute_except_trap_o", false,-1);
        tracep->declBus(c+106,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino pc_execute_o", false,-1, 31,0);
        tracep->declBit(c+146,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino decode_valid_o", false,-1);
        tracep->declBit(c+1240,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino decode_bubble_o", false,-1);
        tracep->declBit(c+151,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino execute_bubble_o", false,-1);
        tracep->declBit(c+1088,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino ctrl_to_decode_interlock", false,-1);
        tracep->declBit(c+1089,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino branch_to_imm", false,-1);
        tracep->declBus(c+1090,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino branch_to_imm_target", false,-1, 31,0);
        tracep->declBit(c+498,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino branch_to_reg", false,-1);
        tracep->declBit(c+1178,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino decode_except_ibus_align", false,-1);
        tracep->declBus(c+298,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino next_pc_after_branch_insn", false,-1, 31,0);
        tracep->declBus(c+499,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_decode_execute_cappuccino decode_mispredict_target", false,-1, 31,0);
        tracep->declArray(c+1626,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_branch_prediction FEATURE_BRANCH_PREDICTOR", false,-1, 95,0);
        tracep->declBus(c+1471,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_branch_prediction OPTION_OPERAND_WIDTH", false,-1, 31,0);
        tracep->declBit(c+1391,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_branch_prediction clk", false,-1);
        tracep->declBit(c+941,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_branch_prediction rst", false,-1);
        tracep->declBit(c+1015,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_branch_prediction op_bf_i", false,-1);
        tracep->declBit(c+1016,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_branch_prediction op_bnf_i", false,-1);
        tracep->declBus(c+1010,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_branch_prediction immjbr_upper_i", false,-1, 9,0);
        tracep->declBus(c+105,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_branch_prediction brn_pc_i", false,-1, 31,0);
        tracep->declBit(c+1051,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_branch_prediction predicted_flag_o", false,-1);
        tracep->declBit(c+172,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_branch_prediction prev_op_brcond_i", false,-1);
        tracep->declBit(c+195,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_branch_prediction prev_predicted_flag_i", false,-1);
        tracep->declBit(c+989,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_branch_prediction flag_i", false,-1);
        tracep->declBit(c+1245,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_branch_prediction padv_decode_i", false,-1);
        tracep->declBit(c+169,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_branch_prediction execute_bf_i", false,-1);
        tracep->declBit(c+170,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_branch_prediction execute_bnf_i", false,-1);
        tracep->declBit(c+991,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_branch_prediction branch_mispredict_o", false,-1);
        tracep->declBit(c+1015,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_branch_prediction branch_predictor_simple or1k_branch_predictor_simple op_bf_i", false,-1);
        tracep->declBit(c+1016,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_branch_prediction branch_predictor_simple or1k_branch_predictor_simple op_bnf_i", false,-1);
        tracep->declBus(c+1010,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_branch_prediction branch_predictor_simple or1k_branch_predictor_simple immjbr_upper_i", false,-1, 9,0);
        tracep->declBit(c+1051,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_branch_prediction branch_predictor_simple or1k_branch_predictor_simple predicted_flag_o", false,-1);
        tracep->declBus(c+1471,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu OPTION_OPERAND_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu FEATURE_OVERFLOW", false,-1, 55,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu FEATURE_CARRY_FLAG", false,-1, 55,0);
        tracep->declArray(c+1559,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu FEATURE_MULTIPLIER", false,-1, 79,0);
        tracep->declQuad(c+1562,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu FEATURE_DIVIDER", false,-1, 47,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu FEATURE_ADDC", false,-1, 55,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu FEATURE_SRA", false,-1, 55,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu FEATURE_ROR", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu FEATURE_EXT", false,-1, 31,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu FEATURE_CMOV", false,-1, 55,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu FEATURE_FFL1", false,-1, 55,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu FEATURE_CUST1", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu FEATURE_CUST2", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu FEATURE_CUST3", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu FEATURE_CUST4", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu FEATURE_CUST5", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu FEATURE_CUST6", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu FEATURE_CUST7", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu FEATURE_CUST8", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu FEATURE_FPU", false,-1, 31,0);
        tracep->declBus(c+1564,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu OPTION_FTOI_ROUNDING", false,-1, 23,0);
        tracep->declQuad(c+1565,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu OPTION_SHIFTER", false,-1, 47,0);
        tracep->declQuad(c+1629,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu CALCULATE_BRANCH_DEST", false,-1, 39,0);
        tracep->declBit(c+1391,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu clk", false,-1);
        tracep->declBit(c+941,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu rst", false,-1);
        tracep->declBit(c+1245,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu padv_decode_i", false,-1);
        tracep->declBit(c+1237,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu padv_execute_i", false,-1);
        tracep->declBit(c+203,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu padv_ctrl_i", false,-1);
        tracep->declBit(c+1196,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu pipeline_flush_i", false,-1);
        tracep->declBus(c+192,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu opc_alu_i", false,-1, 3,0);
        tracep->declBus(c+193,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu opc_alu_secondary_i", false,-1, 3,0);
        tracep->declBus(c+159,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu imm16_i", false,-1, 15,0);
        tracep->declBus(c+160,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu immediate_i", false,-1, 31,0);
        tracep->declBit(c+161,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu immediate_sel_i", false,-1);
        tracep->declBus(c+1008,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu decode_immediate_i", false,-1, 31,0);
        tracep->declBit(c+1009,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu decode_immediate_sel_i", false,-1);
        tracep->declBit(c+146,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu decode_valid_i", false,-1);
        tracep->declBit(c+1033,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu decode_op_mul_i", false,-1);
        tracep->declBit(c+168,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu op_alu_i", false,-1);
        tracep->declBit(c+167,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu op_add_i", false,-1);
        tracep->declBit(c+186,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu op_mul_i", false,-1);
        tracep->declBit(c+187,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu op_mul_signed_i", false,-1);
        tracep->declBit(c+188,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu op_mul_unsigned_i", false,-1);
        tracep->declBit(c+173,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu op_div_i", false,-1);
        tracep->declBit(c+174,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu op_div_signed_i", false,-1);
        tracep->declBit(c+175,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu op_div_unsigned_i", false,-1);
        tracep->declBit(c+191,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu op_shift_i", false,-1);
        tracep->declBit(c+176,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu op_ffl1_i", false,-1);
        tracep->declBit(c+190,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu op_setflag_i", false,-1);
        tracep->declBit(c+185,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu op_mtspr_i", false,-1);
        tracep->declBit(c+181,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu op_mfspr_i", false,-1);
        tracep->declBit(c+182,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu op_movhi_i", false,-1);
        tracep->declBit(c+183,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu op_ext_i", false,-1);
        tracep->declBus(c+1534,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu op_fpu_i", false,-1, 7,0);
        tracep->declBus(c+1478,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu fpu_round_mode_i", false,-1, 1,0);
        tracep->declBit(c+178,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu op_jbr_i", false,-1);
        tracep->declBit(c+179,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu op_jr_i", false,-1);
        tracep->declBus(c+162,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu immjbr_upper_i", false,-1, 9,0);
        tracep->declBus(c+106,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu pc_execute_i", false,-1, 31,0);
        tracep->declBit(c+150,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu adder_do_sub_i", false,-1);
        tracep->declBit(c+149,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu adder_do_carry_i", false,-1);
        tracep->declBus(c+488,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu decode_rfa_i", false,-1, 31,0);
        tracep->declBus(c+1045,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu decode_rfb_i", false,-1, 31,0);
        tracep->declBus(c+197,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu rfa_i", false,-1, 31,0);
        tracep->declBus(c+198,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu rfb_i", false,-1, 31,0);
        tracep->declBit(c+989,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu flag_i", false,-1);
        tracep->declBit(c+482,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu flag_set_o", false,-1);
        tracep->declBit(c+483,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu flag_clear_o", false,-1);
        tracep->declBit(c+487,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu carry_i", false,-1);
        tracep->declBit(c+486,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu carry_set_o", false,-1);
        tracep->declBit(c+485,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu carry_clear_o", false,-1);
        tracep->declBit(c+492,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu overflow_set_o", false,-1);
        tracep->declBit(c+491,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu overflow_clear_o", false,-1);
        tracep->declBus(c+1610,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu fpcsr_o", false,-1, 11,0);
        tracep->declBit(c+1476,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu fpcsr_set_o", false,-1);
        tracep->declBus(c+994,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu alu_result_o", false,-1, 31,0);
        tracep->declBit(c+108,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu alu_valid_o", false,-1);
        tracep->declBus(c+202,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu mul_result_o", false,-1, 31,0);
        tracep->declBus(c+993,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu adder_result_o", false,-1, 31,0);
        tracep->declBit(c+299,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu alu_stall", false,-1);
        tracep->declBus(c+197,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu a", false,-1, 31,0);
        tracep->declBus(c+300,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu b", false,-1, 31,0);
        tracep->declBus(c+993,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu adder_result", false,-1, 31,0);
        tracep->declBit(c+1091,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu adder_carryout", false,-1);
        tracep->declBit(c+1092,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu adder_signed_overflow", false,-1);
        tracep->declBit(c+1091,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu adder_unsigned_overflow", false,-1);
        tracep->declBit(c+1093,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu adder_result_sign", false,-1);
        tracep->declBus(c+301,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu b_neg", false,-1, 31,0);
        tracep->declBus(c+302,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu b_mux", false,-1, 31,0);
        tracep->declBit(c+1094,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu carry_in", false,-1);
        tracep->declBit(c+303,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu a_eq_b", false,-1);
        tracep->declBit(c+1095,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu a_lts_b", false,-1);
        tracep->declBit(c+1096,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu a_ltu_b", false,-1);
        tracep->declBus(c+304,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu opc_alu_shr", false,-1, 2,0);
        tracep->declBus(c+305,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu shift_result", false,-1, 31,0);
        tracep->declBit(c+1538,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu shift_valid", false,-1);
        tracep->declBit(c+1097,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu flag_set", false,-1);
        tracep->declBit(c+306,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu op_logic", false,-1);
        tracep->declBus(c+307,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu logic_result", false,-1, 31,0);
        tracep->declBus(c+202,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu mul_result", false,-1, 31,0);
        tracep->declBit(c+308,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu mul_valid", false,-1);
        tracep->declBit(c+309,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu mul_signed_overflow", false,-1);
        tracep->declBit(c+1476,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu mul_unsigned_overflow", false,-1);
        tracep->declBus(c+310,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu div_result", false,-1, 31,0);
        tracep->declBit(c+311,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu div_valid", false,-1);
        tracep->declBit(c+312,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu div_by_zero", false,-1);
        tracep->declBus(c+313,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu ffl1_result", false,-1, 31,0);
        tracep->declBit(c+314,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu op_cmov", false,-1);
        tracep->declBus(c+500,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu cmov_result", false,-1, 31,0);
        tracep->declBus(c+488,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu decode_a", false,-1, 31,0);
        tracep->declBus(c+1098,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu decode_b", false,-1, 31,0);
        tracep->declBus(c+1631,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu ext_result", false,-1, 31,0);
        tracep->declBus(c+304,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu opc_alu_ext", false,-1, 2,0);
        tracep->declBit(c+1476,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu fpu_op_is_arith", false,-1);
        tracep->declBit(c+1476,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu fpu_arith_valid", false,-1);
        tracep->declBus(c+1474,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu fpu_result", false,-1, 31,0);
        tracep->declBit(c+1476,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu fpu_op_is_cmp", false,-1);
        tracep->declBit(c+1476,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu fpu_cmp_valid", false,-1);
        tracep->declBit(c+1476,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu fpu_cmp_flag", false,-1);
        tracep->declBit(c+1538,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu ffl1_valid", false,-1);
        tracep->declBus(c+315,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu logic_lut", false,-1, 3,0);
        tracep->declBus(c+1632,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu i", false,-1, 31,0);
        tracep->declBus(c+316,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu threestagemultiply mul_opa", false,-1, 31,0);
        tracep->declBus(c+317,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu threestagemultiply mul_opb", false,-1, 31,0);
        tracep->declBus(c+318,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu threestagemultiply mul_result1", false,-1, 31,0);
        tracep->declBus(c+202,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu threestagemultiply mul_result2", false,-1, 31,0);
        tracep->declBus(c+319,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu threestagemultiply mul_valid_shr", false,-1, 2,0);
        tracep->declBus(c+320,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu genblk3 div_count", false,-1, 5,0);
        tracep->declBus(c+321,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu genblk3 div_n", false,-1, 31,0);
        tracep->declBus(c+322,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu genblk3 div_d", false,-1, 31,0);
        tracep->declBus(c+323,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu genblk3 div_r", false,-1, 31,0);
        tracep->declQuad(c+324,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu genblk3 div_sub", false,-1, 32,0);
        tracep->declBit(c+326,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu genblk3 div_neg", false,-1);
        tracep->declBit(c+327,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu genblk3 div_done", false,-1);
        tracep->declBit(c+312,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu genblk3 div_by_zero_r", false,-1);
        tracep->declBus(c+313,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu genblk5 ffl1_result_wire", false,-1, 31,0);
        tracep->declBit(c+328,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu barrel_shifter op_sll", false,-1);
        tracep->declBit(c+329,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu barrel_shifter op_srl", false,-1);
        tracep->declBit(c+330,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu barrel_shifter op_sra", false,-1);
        tracep->declBit(c+1476,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu barrel_shifter op_ror", false,-1);
        tracep->declBus(c+331,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu barrel_shifter shift_right", false,-1, 31,0);
        tracep->declBus(c+332,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu barrel_shifter shift_lsw", false,-1, 31,0);
        tracep->declBus(c+333,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu barrel_shifter shift_msw", false,-1, 31,0);
        tracep->declQuad(c+334,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_alu barrel_shifter shift_wide", false,-1, 63,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino FEATURE_DATACACHE", false,-1, 55,0);
        tracep->declBus(c+1471,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino OPTION_OPERAND_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1544,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino OPTION_DCACHE_BLOCK_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1497,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino OPTION_DCACHE_SET_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1486,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino OPTION_DCACHE_WAYS", false,-1, 31,0);
        tracep->declBus(c+1555,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino OPTION_DCACHE_LIMIT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino OPTION_DCACHE_SNOOP", false,-1, 31,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino FEATURE_DMMU", false,-1, 55,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino FEATURE_DMMU_HW_TLB_RELOAD", false,-1, 31,0);
        tracep->declBus(c+1496,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino OPTION_DMMU_SET_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1492,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino OPTION_DMMU_WAYS", false,-1, 31,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino FEATURE_STORE_BUFFER", false,-1, 55,0);
        tracep->declBus(c+1497,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino OPTION_STORE_BUFFER_DEPTH_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino FEATURE_ATOMIC", false,-1, 55,0);
        tracep->declBit(c+1391,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino clk", false,-1);
        tracep->declBit(c+941,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino rst", false,-1);
        tracep->declBit(c+1237,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino padv_execute_i", false,-1);
        tracep->declBit(c+203,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino padv_ctrl_i", false,-1);
        tracep->declBit(c+146,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino decode_valid_i", false,-1);
        tracep->declBus(c+993,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino exec_lsu_adr_i", false,-1, 31,0);
        tracep->declBus(c+999,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino ctrl_lsu_adr_i", false,-1, 31,0);
        tracep->declBus(c+141,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino ctrl_rfb_i", false,-1, 31,0);
        tracep->declBit(c+1047,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino exec_op_lsu_load_i", false,-1);
        tracep->declBit(c+1048,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino exec_op_lsu_store_i", false,-1);
        tracep->declBit(c+180,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino exec_op_lsu_atomic_i", false,-1);
        tracep->declBit(c+1000,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino ctrl_op_lsu_load_i", false,-1);
        tracep->declBit(c+130,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino ctrl_op_lsu_store_i", false,-1);
        tracep->declBit(c+129,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino ctrl_op_lsu_atomic_i", false,-1);
        tracep->declBit(c+132,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino ctrl_op_msync_i", false,-1);
        tracep->declBus(c+127,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino ctrl_lsu_length_i", false,-1, 1,0);
        tracep->declBit(c+128,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino ctrl_lsu_zext_i", false,-1);
        tracep->declBus(c+117,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino ctrl_epcr_i", false,-1, 31,0);
        tracep->declBus(c+1053,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino store_buffer_epcr_o", false,-1, 31,0);
        tracep->declBus(c+489,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino lsu_result_o", false,-1, 31,0);
        tracep->declBit(c+1195,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino lsu_valid_o", false,-1);
        tracep->declBit(c+1050,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino lsu_except_dbus_o", false,-1);
        tracep->declBit(c+1173,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino lsu_except_align_o", false,-1);
        tracep->declBit(c+1175,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino lsu_except_dtlb_miss_o", false,-1);
        tracep->declBit(c+1174,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino lsu_except_dpagefault_o", false,-1);
        tracep->declBit(c+1054,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino store_buffer_err_o", false,-1);
        tracep->declBit(c+110,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino atomic_flag_set_o", false,-1);
        tracep->declBit(c+109,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino atomic_flag_clear_o", false,-1);
        tracep->declBit(c+490,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino msync_stall_o", false,-1);
        tracep->declBus(c+1232,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino spr_bus_addr_i", false,-1, 15,0);
        tracep->declBit(c+1235,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino spr_bus_we_i", false,-1);
        tracep->declBit(c+1234,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino spr_bus_stb_i", false,-1);
        tracep->declBus(c+1233,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino spr_bus_dat_i", false,-1, 31,0);
        tracep->declBus(c+1611,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino spr_bus_dat_dc_o", false,-1, 31,0);
        tracep->declBit(c+1052,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino spr_bus_ack_dc_o", false,-1);
        tracep->declBus(c+205,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino spr_bus_dat_dmmu_o", false,-1, 31,0);
        tracep->declBit(c+509,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino spr_bus_ack_dmmu_o", false,-1);
        tracep->declBit(c+1099,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dc_enable_i", false,-1);
        tracep->declBit(c+1100,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_enable_i", false,-1);
        tracep->declBit(c+1057,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino supervisor_mode_i", false,-1);
        tracep->declBit(c+1609,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dc_hit_o", false,-1);
        tracep->declBus(c+962,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dbus_adr_o", false,-1, 31,0);
        tracep->declBit(c+966,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dbus_req_o", false,-1);
        tracep->declBus(c+963,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dbus_dat_o", false,-1, 31,0);
        tracep->declBus(c+964,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dbus_bsel_o", false,-1, 3,0);
        tracep->declBit(c+965,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dbus_we_o", false,-1);
        tracep->declBit(c+987,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dbus_burst_o", false,-1);
        tracep->declBit(c+968,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dbus_err_i", false,-1);
        tracep->declBit(c+1183,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dbus_ack_i", false,-1);
        tracep->declBus(c+1182,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dbus_dat_i", false,-1, 31,0);
        tracep->declBit(c+1196,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino pipeline_flush_i", false,-1);
        tracep->declBus(c+1585,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino snoop_adr_i", false,-1, 31,0);
        tracep->declBit(c+1586,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino snoop_en_i", false,-1);
        tracep->declBus(c+1101,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dbus_dat_aligned", false,-1, 31,0);
        tracep->declBus(c+489,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dbus_dat_extended", false,-1, 31,0);
        tracep->declBit(c+1102,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino access_done", false,-1);
        tracep->declBit(c+1103,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino align_err_word", false,-1);
        tracep->declBit(c+1104,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino align_err_short", false,-1);
        tracep->declBit(c+501,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino align_err", false,-1);
        tracep->declBit(c+1105,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino except_align", false,-1);
        tracep->declBit(c+1106,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino except_dbus", false,-1);
        tracep->declBit(c+1107,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dbus_ack", false,-1);
        tracep->declBit(c+1108,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dbus_err", false,-1);
        tracep->declBus(c+963,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dbus_dat", false,-1, 31,0);
        tracep->declBus(c+962,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dbus_adr", false,-1, 31,0);
        tracep->declBus(c+1109,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino next_dbus_adr", false,-1, 31,0);
        tracep->declBit(c+1110,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dbus_we", false,-1);
        tracep->declBus(c+1111,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dbus_bsel", false,-1, 3,0);
        tracep->declBit(c+1112,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dbus_access", false,-1);
        tracep->declBit(c+1197,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dbus_stall", false,-1);
        tracep->declBus(c+1113,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino lsu_ldat", false,-1, 31,0);
        tracep->declBus(c+336,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino lsu_sdat", false,-1, 31,0);
        tracep->declBit(c+1198,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino lsu_ack", false,-1);
        tracep->declBit(c+1179,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dc_ack", false,-1);
        tracep->declBit(c+1633,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dc_err", false,-1);
        tracep->declBus(c+1114,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dc_ldat", false,-1, 31,0);
        tracep->declBus(c+1634,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dc_sdat", false,-1, 31,0);
        tracep->declBus(c+1267,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dc_adr", false,-1, 31,0);
        tracep->declBus(c+1115,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dc_adr_match", false,-1, 31,0);
        tracep->declBit(c+1268,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dc_we", false,-1);
        tracep->declBus(c+1111,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dc_bsel", false,-1, 3,0);
        tracep->declBit(c+1116,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dc_access", false,-1);
        tracep->declBit(c+1117,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dc_hit", false,-1);
        tracep->declBit(c+1118,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dc_refill_allowed", false,-1);
        tracep->declBit(c+1119,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dc_refill", false,-1);
        tracep->declBit(c+1180,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dc_refill_req", false,-1);
        tracep->declBit(c+1120,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dc_refill_done", false,-1);
        tracep->declBit(c+337,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dc_enable_r", false,-1);
        tracep->declBit(c+1121,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dc_enabled", false,-1);
        tracep->declBit(c+1122,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino ctrl_op_lsu", false,-1);
        tracep->declBit(c+1123,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino tlb_miss", false,-1);
        tracep->declBit(c+1124,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino pagefault", false,-1);
        tracep->declBus(c+1125,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_phys_addr", false,-1, 31,0);
        tracep->declBit(c+1126,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino except_dtlb_miss", false,-1);
        tracep->declBit(c+338,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino except_dtlb_miss_r", false,-1);
        tracep->declBit(c+1127,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino except_dpagefault", false,-1);
        tracep->declBit(c+339,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino except_dpagefault_r", false,-1);
        tracep->declBit(c+1128,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_cache_inhibit", false,-1);
        tracep->declBit(c+1064,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino tlb_reload_req", false,-1);
        tracep->declBit(c+1476,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino tlb_reload_busy", false,-1);
        tracep->declBus(c+1065,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino tlb_reload_addr", false,-1, 31,0);
        tracep->declBit(c+1476,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino tlb_reload_pagefault", false,-1);
        tracep->declBit(c+1129,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino tlb_reload_ack", false,-1);
        tracep->declBus(c+1130,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino tlb_reload_data", false,-1, 31,0);
        tracep->declBit(c+1131,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino tlb_reload_pagefault_clear", false,-1);
        tracep->declBit(c+1132,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino tlb_reload_done", false,-1);
        tracep->declBit(c+1199,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino store_buffer_write", false,-1);
        tracep->declBit(c+1200,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino store_buffer_read", false,-1);
        tracep->declBit(c+340,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino store_buffer_full", false,-1);
        tracep->declBit(c+1133,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino store_buffer_empty", false,-1);
        tracep->declBus(c+1134,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino store_buffer_radr", false,-1, 31,0);
        tracep->declBus(c+1115,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino store_buffer_wadr", false,-1, 31,0);
        tracep->declBus(c+1135,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino store_buffer_dat", false,-1, 31,0);
        tracep->declBus(c+1136,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino store_buffer_bsel", false,-1, 3,0);
        tracep->declBit(c+1137,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino store_buffer_atomic", false,-1);
        tracep->declBit(c+341,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino store_buffer_write_pending", false,-1);
        tracep->declBit(c+1138,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dbus_atomic", false,-1);
        tracep->declBit(c+1139,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino last_write", false,-1);
        tracep->declBit(c+1140,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino write_done", false,-1);
        tracep->declBus(c+342,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino atomic_addr", false,-1, 31,0);
        tracep->declBit(c+343,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino atomic_reserve", false,-1);
        tracep->declBit(c+1141,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino swa_success", false,-1);
        tracep->declBit(c+1476,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino snoop_valid", false,-1);
        tracep->declBit(c+1476,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dc_snoop_hit", false,-1);
        tracep->declBus(c+1477,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino IDLE", false,-1, 2,0);
        tracep->declBus(c+1529,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino READ", false,-1, 2,0);
        tracep->declBus(c+1539,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino WRITE", false,-1, 2,0);
        tracep->declBus(c+1540,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino TLB_RELOAD", false,-1, 2,0);
        tracep->declBus(c+1541,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino DC_REFILL", false,-1, 2,0);
        tracep->declBus(c+1142,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino state", false,-1, 2,0);
        tracep->declBit(c+344,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dc_refill_r", false,-1);
        tracep->declBit(c+1199,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino store_buffer_ack", false,-1);
        tracep->declBit(c+110,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino atomic_gen atomic_flag_set", false,-1);
        tracep->declBit(c+109,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino atomic_gen atomic_flag_clear", false,-1);
        tracep->declBit(c+1201,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen dc_req", false,-1);
        tracep->declBus(c+1267,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen virt_addr", false,-1, 31,0);
        tracep->declBit(c+1269,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen dmmu_spr_bus_stb", false,-1);
        tracep->declBit(c+1181,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen dmmu_enable", false,-1);
        tracep->declBus(c+1497,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino store_buffer_gen or1k_store_buffer DEPTH_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1471,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino store_buffer_gen or1k_store_buffer OPTION_OPERAND_WIDTH", false,-1, 31,0);
        tracep->declBit(c+1391,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino store_buffer_gen or1k_store_buffer clk", false,-1);
        tracep->declBit(c+941,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino store_buffer_gen or1k_store_buffer rst", false,-1);
        tracep->declBus(c+117,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino store_buffer_gen or1k_store_buffer pc_i", false,-1, 31,0);
        tracep->declBus(c+1115,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino store_buffer_gen or1k_store_buffer adr_i", false,-1, 31,0);
        tracep->declBus(c+336,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino store_buffer_gen or1k_store_buffer dat_i", false,-1, 31,0);
        tracep->declBus(c+1111,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino store_buffer_gen or1k_store_buffer bsel_i", false,-1, 3,0);
        tracep->declBit(c+129,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino store_buffer_gen or1k_store_buffer atomic_i", false,-1);
        tracep->declBit(c+1199,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino store_buffer_gen or1k_store_buffer write_i", false,-1);
        tracep->declBus(c+1053,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino store_buffer_gen or1k_store_buffer pc_o", false,-1, 31,0);
        tracep->declBus(c+1134,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino store_buffer_gen or1k_store_buffer adr_o", false,-1, 31,0);
        tracep->declBus(c+1135,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino store_buffer_gen or1k_store_buffer dat_o", false,-1, 31,0);
        tracep->declBus(c+1136,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino store_buffer_gen or1k_store_buffer bsel_o", false,-1, 3,0);
        tracep->declBit(c+1137,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino store_buffer_gen or1k_store_buffer atomic_o", false,-1);
        tracep->declBit(c+1200,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino store_buffer_gen or1k_store_buffer read_i", false,-1);
        tracep->declBit(c+340,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino store_buffer_gen or1k_store_buffer full_o", false,-1);
        tracep->declBit(c+1133,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino store_buffer_gen or1k_store_buffer empty_o", false,-1);
        tracep->declBus(c+1635,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino store_buffer_gen or1k_store_buffer FIFO_DATA_WIDTH", false,-1, 31,0);
        tracep->declArray(c+1143,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino store_buffer_gen or1k_store_buffer fifo_dout", false,-1, 100,0);
        tracep->declArray(c+1147,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino store_buffer_gen or1k_store_buffer fifo_din", false,-1, 100,0);
        tracep->declBus(c+345,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino store_buffer_gen or1k_store_buffer write_pointer", false,-1, 8,0);
        tracep->declBus(c+346,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino store_buffer_gen or1k_store_buffer read_pointer", false,-1, 8,0);
        tracep->declBus(c+1497,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino store_buffer_gen or1k_store_buffer fifo_ram ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1635,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino store_buffer_gen or1k_store_buffer fifo_ram DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1536,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino store_buffer_gen or1k_store_buffer fifo_ram CLEAR_ON_INIT", false,-1, 31,0);
        tracep->declBus(c+1492,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino store_buffer_gen or1k_store_buffer fifo_ram ENABLE_BYPASS", false,-1, 31,0);
        tracep->declBit(c+1391,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino store_buffer_gen or1k_store_buffer fifo_ram clk", false,-1);
        tracep->declBus(c+347,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino store_buffer_gen or1k_store_buffer fifo_ram raddr", false,-1, 7,0);
        tracep->declBit(c+1200,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino store_buffer_gen or1k_store_buffer fifo_ram re", false,-1);
        tracep->declBus(c+348,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino store_buffer_gen or1k_store_buffer fifo_ram waddr", false,-1, 7,0);
        tracep->declBit(c+1199,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino store_buffer_gen or1k_store_buffer fifo_ram we", false,-1);
        tracep->declArray(c+1147,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino store_buffer_gen or1k_store_buffer fifo_ram din", false,-1, 100,0);
        tracep->declArray(c+1143,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino store_buffer_gen or1k_store_buffer fifo_ram dout", false,-1, 100,0);
        tracep->declArray(c+349,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino store_buffer_gen or1k_store_buffer fifo_ram rdata", false,-1, 100,0);
        tracep->declArray(c+353,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino store_buffer_gen or1k_store_buffer fifo_ram bypass_gen din_r", false,-1, 100,0);
        tracep->declBit(c+357,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino store_buffer_gen or1k_store_buffer fifo_ram bypass_gen bypass", false,-1);
        tracep->declBus(c+1471,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache OPTION_OPERAND_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1544,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache OPTION_DCACHE_BLOCK_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1497,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache OPTION_DCACHE_SET_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1486,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache OPTION_DCACHE_WAYS", false,-1, 31,0);
        tracep->declBus(c+1555,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache OPTION_DCACHE_LIMIT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache OPTION_DCACHE_SNOOP", false,-1, 31,0);
        tracep->declBit(c+1391,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache clk", false,-1);
        tracep->declBit(c+941,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache rst", false,-1);
        tracep->declBit(c+1108,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache dc_dbus_err_i", false,-1);
        tracep->declBit(c+1121,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache dc_enable_i", false,-1);
        tracep->declBit(c+1116,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache dc_access_i", false,-1);
        tracep->declBit(c+1119,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache refill_o", false,-1);
        tracep->declBit(c+1180,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache refill_req_o", false,-1);
        tracep->declBit(c+1120,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache refill_done_o", false,-1);
        tracep->declBit(c+1117,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache cache_hit_o", false,-1);
        tracep->declBit(c+1633,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache cpu_err_o", false,-1);
        tracep->declBit(c+1179,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache cpu_ack_o", false,-1);
        tracep->declBus(c+1114,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache cpu_dat_o", false,-1, 31,0);
        tracep->declBus(c+336,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache cpu_dat_i", false,-1, 31,0);
        tracep->declBus(c+1267,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache cpu_adr_i", false,-1, 31,0);
        tracep->declBus(c+1115,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache cpu_adr_match_i", false,-1, 31,0);
        tracep->declBit(c+1201,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache cpu_req_i", false,-1);
        tracep->declBit(c+1268,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache cpu_we_i", false,-1);
        tracep->declBus(c+1111,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache cpu_bsel_i", false,-1, 3,0);
        tracep->declBit(c+1118,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache refill_allowed", false,-1);
        tracep->declBus(c+962,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache wradr_i", false,-1, 31,0);
        tracep->declBus(c+1182,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache wrdat_i", false,-1, 31,0);
        tracep->declBit(c+1183,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache we_i", false,-1);
        tracep->declBus(c+1585,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache snoop_adr_i", false,-1, 31,0);
        tracep->declBit(c+1476,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache snoop_valid_i", false,-1);
        tracep->declBit(c+1476,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache snoop_hit_o", false,-1);
        tracep->declBus(c+1232,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache spr_bus_addr_i", false,-1, 15,0);
        tracep->declBit(c+1235,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache spr_bus_we_i", false,-1);
        tracep->declBit(c+1234,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache spr_bus_stb_i", false,-1);
        tracep->declBus(c+1233,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache spr_bus_dat_i", false,-1, 31,0);
        tracep->declBus(c+1611,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache spr_bus_dat_o", false,-1, 31,0);
        tracep->declBit(c+1052,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache spr_bus_ack_o", false,-1);
        tracep->declBus(c+1636,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache IDLE", false,-1, 4,0);
        tracep->declBus(c+1637,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache READ", false,-1, 4,0);
        tracep->declBus(c+1638,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache WRITE", false,-1, 4,0);
        tracep->declBus(c+1639,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache REFILL", false,-1, 4,0);
        tracep->declBus(c+1640,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache INVALIDATE", false,-1, 4,0);
        tracep->declBus(c+1618,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache WAY_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1641,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache TAG_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1619,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache TAGMEM_WAY_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1641,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache TAGMEM_WAY_VALID", false,-1, 31,0);
        tracep->declBus(c+1492,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache TAG_LRU_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1492,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache TAG_LRU_WIDTH_BITS", false,-1, 31,0);
        tracep->declBus(c+1642,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache TAGMEM_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1643,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache TAG_LRU_MSB", false,-1, 31,0);
        tracep->declBus(c+1643,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache TAG_LRU_LSB", false,-1, 31,0);
        tracep->declBus(c+1151,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache state", false,-1, 4,0);
        tracep->declBit(c+1152,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache read", false,-1);
        tracep->declBit(c+1153,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache write", false,-1);
        tracep->declBit(c+1119,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache refill", false,-1);
        tracep->declBus(c+358,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache invalidate_adr", false,-1, 12,5);
        tracep->declBus(c+1109,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache next_refill_adr", false,-1, 31,0);
        tracep->declBus(c+1202,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache way_wr_dat", false,-1, 31,0);
        tracep->declBit(c+1120,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache refill_done", false,-1);
        tracep->declBit(c+1154,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache refill_hit", false,-1);
        tracep->declBus(c+359,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache refill_valid", false,-1, 7,0);
        tracep->declBus(c+360,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache refill_valid_r", false,-1, 7,0);
        tracep->declBit(c+1270,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache invalidate", false,-1);
        tracep->declBus(c+1271,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache tag_rindex", false,-1, 7,0);
        tracep->declBus(c+502,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache tag_windex", false,-1, 7,0);
        tracep->declQuad(c+361,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache tag_dout", false,-1, 38,0);
        tracep->declBus(c+363,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache tag_lru_out", false,-1, 0,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+364+i*1,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache tag_way_out", true,(i+0), 18,0);}}
        tracep->declQuad(c+1203,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache tag_din", false,-1, 38,0);
        tracep->declBus(c+1205,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache tag_lru_in", false,-1, 0,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+1206+i*1,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache tag_way_in", true,(i+0), 18,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+366+i*1,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache tag_way_save", true,(i+0), 18,0);}}
        tracep->declBit(c+1208,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache tag_we", false,-1);
        tracep->declBus(c+1155,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache tag_wtag", false,-1, 17,0);
        tracep->declBus(c+1156,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache tag_tag", false,-1, 17,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+1272+i*1,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache way_raddr", true,(i+0), 10,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+1157+i*1,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache way_waddr", true,(i+0), 10,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+1209+i*1,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache way_din", true,(i+0), 31,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+368+i*1,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache way_dout", true,(i+0), 31,0);}}
        tracep->declBus(c+1211,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache way_we", false,-1, 1,0);
        tracep->declBit(c+1117,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache hit", false,-1);
        tracep->declBus(c+1159,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache way_hit", false,-1, 1,0);
        tracep->declBus(c+1212,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache lru", false,-1, 1,0);
        tracep->declBus(c+370,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache tag_save_lru", false,-1, 1,0);
        tracep->declBus(c+1213,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache access", false,-1, 1,0);
        tracep->declBus(c+363,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache current_lru_history", false,-1, 0,0);
        tracep->declBus(c+1214,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache next_lru_history", false,-1, 0,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+371+i*1,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache check_way_tag", true,(i+0), 17,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBit(c+1160+i*1,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache check_way_match", true,(i+0));}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBit(c+373+i*1,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache check_way_valid", true,(i+0));}}
        tracep->declBit(c+1162,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache write_pending", false,-1);
        tracep->declBus(c+1644,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache snoop_index", false,-1, 7,0);
        tracep->declBit(c+375,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache snoop_check", false,-1);
        tracep->declBus(c+1645,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache snoop_tag", false,-1, 17,0);
        tracep->declBus(c+1646,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache snoop_windex", false,-1, 7,0);
        tracep->declQuad(c+1647,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache snoop_dout", false,-1, 38,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+1649+i*1,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache snoop_way_out", true,(i+0), 18,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+1651+i*1,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache snoop_check_way_tag", true,(i+0), 17,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBit(c+1653+i*1,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache snoop_check_way_match", true,(i+0));}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBit(c+1655+i*1,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache snoop_check_way_valid", true,(i+0));}}
        tracep->declBus(c+1657,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache snoop_way_hit", false,-1, 1,0);
        tracep->declBit(c+1476,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache snoop_hit", false,-1);
        tracep->declBus(c+1623,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache w0", false,-1, 31,0);
        tracep->declBit(c+1052,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache invalidate_ack", false,-1);
        tracep->declBus(c+376,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache w1", false,-1, 31,0);
        tracep->declBus(c+1215,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache w2", false,-1, 31,0);
        tracep->declBus(c+1497,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache tag_ram ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1642,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache tag_ram DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1536,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache tag_ram CLEAR_ON_INIT", false,-1, 31,0);
        tracep->declBus(c+1588,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache tag_ram ENABLE_BYPASS", false,-1, 0,0);
        tracep->declBit(c+1391,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache tag_ram clk", false,-1);
        tracep->declBus(c+1271,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache tag_ram raddr", false,-1, 7,0);
        tracep->declBit(c+1538,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache tag_ram re", false,-1);
        tracep->declBus(c+502,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache tag_ram waddr", false,-1, 7,0);
        tracep->declBit(c+1208,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache tag_ram we", false,-1);
        tracep->declQuad(c+1203,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache tag_ram din", false,-1, 38,0);
        tracep->declQuad(c+361,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache tag_ram dout", false,-1, 38,0);
        tracep->declQuad(c+361,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache tag_ram rdata", false,-1, 38,0);
        tracep->declBus(c+1551,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache way_memories[0] way_data_ram ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1471,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache way_memories[0] way_data_ram DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1536,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache way_memories[0] way_data_ram CLEAR_ON_INIT", false,-1, 31,0);
        tracep->declBus(c+1492,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache way_memories[0] way_data_ram ENABLE_BYPASS", false,-1, 31,0);
        tracep->declBit(c+1391,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache way_memories[0] way_data_ram clk", false,-1);
        tracep->declBus(c+1274,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache way_memories[0] way_data_ram raddr", false,-1, 10,0);
        tracep->declBit(c+1538,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache way_memories[0] way_data_ram re", false,-1);
        tracep->declBus(c+1163,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache way_memories[0] way_data_ram waddr", false,-1, 10,0);
        tracep->declBit(c+1216,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache way_memories[0] way_data_ram we", false,-1);
        tracep->declBus(c+1217,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache way_memories[0] way_data_ram din", false,-1, 31,0);
        tracep->declBus(c+377,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache way_memories[0] way_data_ram dout", false,-1, 31,0);
        tracep->declBus(c+378,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache way_memories[0] way_data_ram rdata", false,-1, 31,0);
        tracep->declBus(c+379,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache way_memories[0] way_data_ram bypass_gen din_r", false,-1, 31,0);
        tracep->declBit(c+380,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache way_memories[0] way_data_ram bypass_gen bypass", false,-1);
        tracep->declBus(c+1551,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache way_memories[1] way_data_ram ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1471,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache way_memories[1] way_data_ram DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1536,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache way_memories[1] way_data_ram CLEAR_ON_INIT", false,-1, 31,0);
        tracep->declBus(c+1492,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache way_memories[1] way_data_ram ENABLE_BYPASS", false,-1, 31,0);
        tracep->declBit(c+1391,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache way_memories[1] way_data_ram clk", false,-1);
        tracep->declBus(c+1275,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache way_memories[1] way_data_ram raddr", false,-1, 10,0);
        tracep->declBit(c+1538,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache way_memories[1] way_data_ram re", false,-1);
        tracep->declBus(c+1164,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache way_memories[1] way_data_ram waddr", false,-1, 10,0);
        tracep->declBit(c+1218,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache way_memories[1] way_data_ram we", false,-1);
        tracep->declBus(c+1219,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache way_memories[1] way_data_ram din", false,-1, 31,0);
        tracep->declBus(c+381,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache way_memories[1] way_data_ram dout", false,-1, 31,0);
        tracep->declBus(c+382,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache way_memories[1] way_data_ram rdata", false,-1, 31,0);
        tracep->declBus(c+383,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache way_memories[1] way_data_ram bypass_gen din_r", false,-1, 31,0);
        tracep->declBit(c+384,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache way_memories[1] way_data_ram bypass_gen bypass", false,-1);
        tracep->declBus(c+1486,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache gen_u_lru u_lru NUMWAYS", false,-1, 31,0);
        tracep->declBus(c+1492,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache gen_u_lru u_lru WIDTH", false,-1, 31,0);
        tracep->declBus(c+363,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache gen_u_lru u_lru current", false,-1, 0,0);
        tracep->declBus(c+1214,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache gen_u_lru u_lru update", false,-1, 0,0);
        tracep->declBus(c+1213,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache gen_u_lru u_lru access", false,-1, 1,0);
        tracep->declBus(c+1212,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache gen_u_lru u_lru lru_pre", false,-1, 1,0);
        tracep->declBus(c+1220,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache gen_u_lru u_lru lru_post", false,-1, 1,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+1221+i*1,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache gen_u_lru u_lru expand", true,(i+0), 1,0);}}
        tracep->declBus(c+1623,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache gen_u_lru u_lru i", false,-1, 31,0);
        tracep->declBus(c+1223,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache gen_u_lru u_lru j", false,-1, 31,0);
        tracep->declBus(c+1224,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dcache_gen or1k_dcache gen_u_lru u_lru offset", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu FEATURE_DMMU_HW_TLB_RELOAD", false,-1, 31,0);
        tracep->declBus(c+1471,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu OPTION_OPERAND_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1496,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu OPTION_DMMU_SET_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1492,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu OPTION_DMMU_WAYS", false,-1, 31,0);
        tracep->declBit(c+1391,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu clk", false,-1);
        tracep->declBit(c+941,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu rst", false,-1);
        tracep->declBit(c+1181,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu enable_i", false,-1);
        tracep->declBus(c+1267,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu virt_addr_i", false,-1, 31,0);
        tracep->declBus(c+999,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu virt_addr_match_i", false,-1, 31,0);
        tracep->declBus(c+1125,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu phys_addr_o", false,-1, 31,0);
        tracep->declBit(c+1128,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu cache_inhibit_o", false,-1);
        tracep->declBit(c+130,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu op_store_i", false,-1);
        tracep->declBit(c+1000,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu op_load_i", false,-1);
        tracep->declBit(c+1057,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu supervisor_mode_i", false,-1);
        tracep->declBit(c+1123,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu tlb_miss_o", false,-1);
        tracep->declBit(c+1124,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu pagefault_o", false,-1);
        tracep->declBit(c+1064,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu tlb_reload_req_o", false,-1);
        tracep->declBit(c+1476,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu tlb_reload_busy_o", false,-1);
        tracep->declBit(c+1129,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu tlb_reload_ack_i", false,-1);
        tracep->declBus(c+1065,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu tlb_reload_addr_o", false,-1, 31,0);
        tracep->declBus(c+1130,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu tlb_reload_data_i", false,-1, 31,0);
        tracep->declBit(c+1476,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu tlb_reload_pagefault_o", false,-1);
        tracep->declBit(c+1131,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu tlb_reload_pagefault_clear_i", false,-1);
        tracep->declBus(c+1232,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu spr_bus_addr_i", false,-1, 15,0);
        tracep->declBit(c+1235,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu spr_bus_we_i", false,-1);
        tracep->declBit(c+1269,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu spr_bus_stb_i", false,-1);
        tracep->declBus(c+1233,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu spr_bus_dat_i", false,-1, 31,0);
        tracep->declBus(c+205,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu spr_bus_dat_o", false,-1, 31,0);
        tracep->declBit(c+509,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu spr_bus_ack_o", false,-1);
        tracep->declBus(c+1492,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu WAYS_WIDTH", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+385+i*1,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu dtlb_match_dout", true,(i+0), 31,0);}}
        tracep->declBus(c+1276,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu dtlb_match_addr", false,-1, 5,0);
        tracep->declBus(c+1277,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu dtlb_match_we", false,-1, 0,0);
        tracep->declBus(c+1278,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu dtlb_match_din", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+386+i*1,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu dtlb_match_huge_dout", true,(i+0), 31,0);}}
        tracep->declBus(c+1279,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu dtlb_match_huge_addr", false,-1, 5,0);
        tracep->declBit(c+387,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu dtlb_match_huge_we", false,-1);
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+388+i*1,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu dtlb_trans_dout", true,(i+0), 31,0);}}
        tracep->declBus(c+1280,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu dtlb_trans_addr", false,-1, 5,0);
        tracep->declBus(c+1281,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu dtlb_trans_we", false,-1, 0,0);
        tracep->declBus(c+1282,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu dtlb_trans_din", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+389+i*1,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu dtlb_trans_huge_dout", true,(i+0), 31,0);}}
        tracep->declBus(c+1279,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu dtlb_trans_huge_addr", false,-1, 5,0);
        tracep->declBit(c+390,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu dtlb_trans_huge_we", false,-1);
        tracep->declBit(c+391,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu dtlb_match_reload_we", false,-1);
        tracep->declBus(c+392,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu dtlb_match_reload_din", false,-1, 31,0);
        tracep->declBit(c+393,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu dtlb_trans_reload_we", false,-1);
        tracep->declBus(c+394,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu dtlb_trans_reload_din", false,-1, 31,0);
        tracep->declBit(c+1283,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu dtlb_match_spr_cs", false,-1);
        tracep->declBit(c+395,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu dtlb_match_spr_cs_r", false,-1);
        tracep->declBit(c+1284,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu dtlb_trans_spr_cs", false,-1);
        tracep->declBit(c+396,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu dtlb_trans_spr_cs_r", false,-1);
        tracep->declBit(c+1476,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu dmmucr_spr_cs", false,-1);
        tracep->declBit(c+397,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu dmmucr_spr_cs_r", false,-1);
        tracep->declBus(c+398,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu dmmucr", false,-1, 31,0);
        tracep->declBus(c+1285,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu spr_way_idx_full", false,-1, 1,0);
        tracep->declBus(c+1286,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu spr_way_idx", false,-1, 0,0);
        tracep->declBus(c+399,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu spr_way_idx_r", false,-1, 0,0);
        tracep->declBus(c+400,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu way_huge", false,-1, 0,0);
        tracep->declBus(c+1165,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu way_hit", false,-1, 0,0);
        tracep->declBus(c+1166,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu way_huge_hit", false,-1, 0,0);
        tracep->declBit(c+401,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu tlb_reload_pagefault", false,-1);
        tracep->declBit(c+1658,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu tlb_reload_huge", false,-1);
        tracep->declBit(c+1167,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu ure", false,-1);
        tracep->declBit(c+1168,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu uwe", false,-1);
        tracep->declBit(c+1169,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu sre", false,-1);
        tracep->declBit(c+1170,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu swe", false,-1);
        tracep->declBit(c+402,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu spr_bus_ack", false,-1);
        tracep->declBus(c+1624,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu j", false,-1, 31,0);
        tracep->declBus(c+1478,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu TLB_IDLE", false,-1, 1,0);
        tracep->declBus(c+1591,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu TLB_GET_PTE_POINTER", false,-1, 1,0);
        tracep->declBus(c+1473,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu TLB_GET_PTE", false,-1, 1,0);
        tracep->declBus(c+1592,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu TLB_READ", false,-1, 1,0);
        tracep->declBus(c+1496,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu dtlb[0] dtlb_match_regs ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1471,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu dtlb[0] dtlb_match_regs DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+1391,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu dtlb[0] dtlb_match_regs clk_a", false,-1);
        tracep->declBus(c+1276,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu dtlb[0] dtlb_match_regs addr_a", false,-1, 5,0);
        tracep->declBit(c+1277,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu dtlb[0] dtlb_match_regs we_a", false,-1);
        tracep->declBus(c+1278,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu dtlb[0] dtlb_match_regs din_a", false,-1, 31,0);
        tracep->declBus(c+403,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu dtlb[0] dtlb_match_regs dout_a", false,-1, 31,0);
        tracep->declBit(c+1391,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu dtlb[0] dtlb_match_regs clk_b", false,-1);
        tracep->declBus(c+1279,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu dtlb[0] dtlb_match_regs addr_b", false,-1, 5,0);
        tracep->declBit(c+387,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu dtlb[0] dtlb_match_regs we_b", false,-1);
        tracep->declBus(c+392,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu dtlb[0] dtlb_match_regs din_b", false,-1, 31,0);
        tracep->declBus(c+404,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu dtlb[0] dtlb_match_regs dout_b", false,-1, 31,0);
        tracep->declBus(c+403,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu dtlb[0] dtlb_match_regs rdata_a", false,-1, 31,0);
        tracep->declBus(c+404,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu dtlb[0] dtlb_match_regs rdata_b", false,-1, 31,0);
        tracep->declBus(c+1496,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu dtlb[0] dtlb_translate_regs ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1471,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu dtlb[0] dtlb_translate_regs DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+1391,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu dtlb[0] dtlb_translate_regs clk_a", false,-1);
        tracep->declBus(c+1280,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu dtlb[0] dtlb_translate_regs addr_a", false,-1, 5,0);
        tracep->declBit(c+1281,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu dtlb[0] dtlb_translate_regs we_a", false,-1);
        tracep->declBus(c+1282,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu dtlb[0] dtlb_translate_regs din_a", false,-1, 31,0);
        tracep->declBus(c+405,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu dtlb[0] dtlb_translate_regs dout_a", false,-1, 31,0);
        tracep->declBit(c+1391,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu dtlb[0] dtlb_translate_regs clk_b", false,-1);
        tracep->declBus(c+1279,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu dtlb[0] dtlb_translate_regs addr_b", false,-1, 5,0);
        tracep->declBit(c+390,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu dtlb[0] dtlb_translate_regs we_b", false,-1);
        tracep->declBus(c+394,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu dtlb[0] dtlb_translate_regs din_b", false,-1, 31,0);
        tracep->declBus(c+406,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu dtlb[0] dtlb_translate_regs dout_b", false,-1, 31,0);
        tracep->declBus(c+405,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu dtlb[0] dtlb_translate_regs rdata_a", false,-1, 31,0);
        tracep->declBus(c+406,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_lsu_cappuccino dmmu_gen or1k_dmmu dtlb[0] dtlb_translate_regs rdata_b", false,-1, 31,0);
        tracep->declBus(c+1471,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_wb_mux_cappuccino OPTION_OPERAND_WIDTH", false,-1, 31,0);
        tracep->declBit(c+1391,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_wb_mux_cappuccino clk", false,-1);
        tracep->declBit(c+941,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_wb_mux_cappuccino rst", false,-1);
        tracep->declBus(c+111,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_wb_mux_cappuccino alu_result_i", false,-1, 31,0);
        tracep->declBus(c+489,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_wb_mux_cappuccino lsu_result_i", false,-1, 31,0);
        tracep->declBus(c+202,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_wb_mux_cappuccino mul_result_i", false,-1, 31,0);
        tracep->declBus(c+1462,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_wb_mux_cappuccino spr_i", false,-1, 31,0);
        tracep->declBus(c+99,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_wb_mux_cappuccino rf_result_o", false,-1, 31,0);
        tracep->declBit(c+134,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_wb_mux_cappuccino op_mul_i", false,-1);
        tracep->declBit(c+1000,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_wb_mux_cappuccino op_lsu_load_i", false,-1);
        tracep->declBit(c+131,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_wb_mux_cappuccino op_mfspr_i", false,-1);
        tracep->declBus(c+407,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_wb_mux_cappuccino rf_result", false,-1, 31,0);
        tracep->declBit(c+408,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_wb_mux_cappuccino wb_op_mul", false,-1);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino FEATURE_FASTCONTEXTS", false,-1, 31,0);
        tracep->declBus(c+1536,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino OPTION_RF_CLEAR_ON_INIT", false,-1, 31,0);
        tracep->declBus(c+1492,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino OPTION_RF_NUM_SHADOW_GPR", false,-1, 31,0);
        tracep->declBus(c+1544,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino OPTION_RF_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1471,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino OPTION_RF_WORDS", false,-1, 31,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino FEATURE_DEBUGUNIT", false,-1, 55,0);
        tracep->declBus(c+1471,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino OPTION_OPERAND_WIDTH", false,-1, 31,0);
        tracep->declBit(c+1391,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino clk", false,-1);
        tracep->declBit(c+941,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino rst", false,-1);
        tracep->declBit(c+1245,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino padv_decode_i", false,-1);
        tracep->declBit(c+1237,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino padv_execute_i", false,-1);
        tracep->declBit(c+203,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino padv_ctrl_i", false,-1);
        tracep->declBit(c+146,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino decode_valid_i", false,-1);
        tracep->declBit(c+1242,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino fetch_rf_adr_valid_i", false,-1);
        tracep->declBus(c+1243,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino fetch_rfa_adr_i", false,-1, 4,0);
        tracep->declBus(c+1244,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino fetch_rfb_adr_i", false,-1, 4,0);
        tracep->declBus(c+1043,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino decode_rfa_adr_i", false,-1, 4,0);
        tracep->declBus(c+1044,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino decode_rfb_adr_i", false,-1, 4,0);
        tracep->declBus(c+199,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino execute_rfd_adr_i", false,-1, 4,0);
        tracep->declBus(c+142,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino ctrl_rfd_adr_i", false,-1, 4,0);
        tracep->declBus(c+209,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino wb_rfd_adr_i", false,-1, 4,0);
        tracep->declBus(c+1232,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino spr_bus_addr_i", false,-1, 15,0);
        tracep->declBit(c+1234,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino spr_bus_stb_i", false,-1);
        tracep->declBit(c+1235,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino spr_bus_we_i", false,-1);
        tracep->declBus(c+1233,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino spr_bus_dat_i", false,-1, 31,0);
        tracep->declBit(c+511,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino spr_gpr_ack_o", false,-1);
        tracep->declBus(c+207,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino spr_gpr_dat_o", false,-1, 31,0);
        tracep->declBit(c+196,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino execute_rf_wb_i", false,-1);
        tracep->declBit(c+140,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino ctrl_rf_wb_i", false,-1);
        tracep->declBit(c+208,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino wb_rf_wb_i", false,-1);
        tracep->declBus(c+99,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino result_i", false,-1, 31,0);
        tracep->declBus(c+111,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino ctrl_alu_result_i", false,-1, 31,0);
        tracep->declBit(c+1196,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino pipeline_flush_i", false,-1);
        tracep->declBus(c+488,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino decode_rfa_o", false,-1, 31,0);
        tracep->declBus(c+1045,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino decode_rfb_o", false,-1, 31,0);
        tracep->declBus(c+197,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino execute_rfa_o", false,-1, 31,0);
        tracep->declBus(c+198,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino execute_rfb_o", false,-1, 31,0);
        tracep->declBus(c+1496,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino RF_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+409,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino rfa_ram_o", false,-1, 31,0);
        tracep->declBus(c+410,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino rfb_ram_o", false,-1, 31,0);
        tracep->declBus(c+411,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino wb_hazard_result", false,-1, 31,0);
        tracep->declBus(c+412,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino execute_rfa", false,-1, 31,0);
        tracep->declBus(c+413,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino execute_rfb", false,-1, 31,0);
        tracep->declBus(c+1287,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino rfa_rdad", false,-1, 5,0);
        tracep->declBus(c+1288,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino rfb_rdad", false,-1, 5,0);
        tracep->declBit(c+1242,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino rfa_rden", false,-1);
        tracep->declBit(c+1242,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino rfb_rden", false,-1);
        tracep->declBit(c+1289,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino rf_wren", false,-1);
        tracep->declBus(c+1290,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino rf_wradr", false,-1, 5,0);
        tracep->declBus(c+1291,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino rf_wrdat", false,-1, 31,0);
        tracep->declBit(c+414,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino flushing", false,-1);
        tracep->declBit(c+415,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino execute_hazard_a", false,-1);
        tracep->declBit(c+416,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino execute_hazard_b", false,-1);
        tracep->declBus(c+417,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino execute_hazard_result_r", false,-1, 31,0);
        tracep->declBus(c+418,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino execute_hazard_result", false,-1, 31,0);
        tracep->declBit(c+419,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino ctrl_hazard_a", false,-1);
        tracep->declBit(c+420,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino ctrl_hazard_b", false,-1);
        tracep->declBus(c+421,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino ctrl_hazard_result_r", false,-1, 31,0);
        tracep->declBus(c+422,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino ctrl_hazard_result", false,-1, 31,0);
        tracep->declBit(c+423,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino wb_hazard_a", false,-1);
        tracep->declBit(c+424,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino wb_hazard_b", false,-1);
        tracep->declBit(c+425,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino use_last_wb_a", false,-1);
        tracep->declBit(c+426,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino wb_to_decode_bypass_a", false,-1);
        tracep->declBus(c+427,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino wb_to_decode_result_a", false,-1, 31,0);
        tracep->declBit(c+503,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino execute_to_decode_bypass_a", false,-1);
        tracep->declBit(c+504,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino ctrl_to_decode_bypass_a", false,-1);
        tracep->declBus(c+428,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino ctrl_to_decode_result_a", false,-1, 31,0);
        tracep->declBit(c+429,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino use_last_wb_b", false,-1);
        tracep->declBit(c+430,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino wb_to_decode_bypass_b", false,-1);
        tracep->declBus(c+431,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino wb_to_decode_result_b", false,-1, 31,0);
        tracep->declBit(c+505,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino execute_to_decode_bypass_b", false,-1);
        tracep->declBit(c+506,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino ctrl_to_decode_bypass_b", false,-1);
        tracep->declBus(c+432,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino ctrl_to_decode_result_b", false,-1, 31,0);
        tracep->declBit(c+1292,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino genblk1 spr_gpr_we", false,-1);
        tracep->declBit(c+1293,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino genblk1 spr_gpr_re", false,-1);
        tracep->declBit(c+433,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino genblk1 spr_gpr_read_ack", false,-1);
        tracep->declBus(c+434,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino genblk1 wb_rfd_adr_expand", false,-1, 5,0);
        tracep->declBus(c+1496,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino rfa ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1471,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino rfa DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1536,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino rfa CLEAR_ON_INIT", false,-1, 31,0);
        tracep->declBus(c+1536,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino rfa ENABLE_BYPASS", false,-1, 31,0);
        tracep->declBit(c+1391,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino rfa clk", false,-1);
        tracep->declBus(c+1287,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino rfa raddr", false,-1, 5,0);
        tracep->declBit(c+1242,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino rfa re", false,-1);
        tracep->declBus(c+1290,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino rfa waddr", false,-1, 5,0);
        tracep->declBit(c+1289,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino rfa we", false,-1);
        tracep->declBus(c+1291,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino rfa din", false,-1, 31,0);
        tracep->declBus(c+409,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino rfa dout", false,-1, 31,0);
        tracep->declBus(c+409,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino rfa rdata", false,-1, 31,0);
        tracep->declBus(c+1496,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino rfb ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1471,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino rfb DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1536,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino rfb CLEAR_ON_INIT", false,-1, 31,0);
        tracep->declBus(c+1536,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino rfb ENABLE_BYPASS", false,-1, 31,0);
        tracep->declBit(c+1391,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino rfb clk", false,-1);
        tracep->declBus(c+1288,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino rfb raddr", false,-1, 5,0);
        tracep->declBit(c+1242,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino rfb re", false,-1);
        tracep->declBus(c+1290,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino rfb waddr", false,-1, 5,0);
        tracep->declBit(c+1289,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino rfb we", false,-1);
        tracep->declBus(c+1291,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino rfb din", false,-1, 31,0);
        tracep->declBus(c+410,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino rfb dout", false,-1, 31,0);
        tracep->declBus(c+410,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino rfb rdata", false,-1, 31,0);
        tracep->declBus(c+1496,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino rfspr_gen rfspr ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1471,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino rfspr_gen rfspr DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1536,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino rfspr_gen rfspr CLEAR_ON_INIT", false,-1, 31,0);
        tracep->declBus(c+1536,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino rfspr_gen rfspr ENABLE_BYPASS", false,-1, 31,0);
        tracep->declBit(c+1391,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino rfspr_gen rfspr clk", false,-1);
        tracep->declBus(c+1294,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino rfspr_gen rfspr raddr", false,-1, 5,0);
        tracep->declBit(c+1538,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino rfspr_gen rfspr re", false,-1);
        tracep->declBus(c+1290,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino rfspr_gen rfspr waddr", false,-1, 5,0);
        tracep->declBit(c+1289,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino rfspr_gen rfspr we", false,-1);
        tracep->declBus(c+1291,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino rfspr_gen rfspr din", false,-1, 31,0);
        tracep->declBus(c+207,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino rfspr_gen rfspr dout", false,-1, 31,0);
        tracep->declBus(c+207,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_rf_cappuccino rfspr_gen rfspr rdata", false,-1, 31,0);
        tracep->declBus(c+1471,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino OPTION_OPERAND_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1558,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino OPTION_RESET_PC", false,-1, 31,0);
        tracep->declBus(c+1544,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino OPTION_RF_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino FEATURE_FPU", false,-1, 31,0);
        tracep->declArray(c+1559,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino FEATURE_MULTIPLIER", false,-1, 79,0);
        tracep->declBit(c+1391,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino clk", false,-1);
        tracep->declBit(c+941,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino rst", false,-1);
        tracep->declBit(c+1237,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino padv_i", false,-1);
        tracep->declBit(c+203,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino padv_ctrl_i", false,-1);
        tracep->declBit(c+153,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino execute_except_ibus_err_i", false,-1);
        tracep->declBit(c+156,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino execute_except_itlb_miss_i", false,-1);
        tracep->declBit(c+155,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino execute_except_ipagefault_i", false,-1);
        tracep->declBit(c+154,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino execute_except_illegal_i", false,-1);
        tracep->declBit(c+152,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino execute_except_ibus_align_i", false,-1);
        tracep->declBit(c+157,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino execute_except_syscall_i", false,-1);
        tracep->declBit(c+1050,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino lsu_except_dbus_i", false,-1);
        tracep->declBit(c+1173,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino lsu_except_align_i", false,-1);
        tracep->declBit(c+1175,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino lsu_except_dtlb_miss_i", false,-1);
        tracep->declBit(c+1174,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino lsu_except_dpagefault_i", false,-1);
        tracep->declBit(c+158,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino execute_except_trap_i", false,-1);
        tracep->declBit(c+1196,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino pipeline_flush_i", false,-1);
        tracep->declBit(c+186,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino op_mul_i", false,-1);
        tracep->declBit(c+1047,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino op_lsu_load_i", false,-1);
        tracep->declBit(c+1048,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino op_lsu_store_i", false,-1);
        tracep->declBit(c+180,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino op_lsu_atomic_i", false,-1);
        tracep->declBus(c+164,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino lsu_length_i", false,-1, 1,0);
        tracep->declBit(c+165,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino lsu_zext_i", false,-1);
        tracep->declBit(c+184,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino op_msync_i", false,-1);
        tracep->declBit(c+181,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino op_mfspr_i", false,-1);
        tracep->declBit(c+185,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino op_mtspr_i", false,-1);
        tracep->declBit(c+108,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino alu_valid_i", false,-1);
        tracep->declBit(c+1195,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino lsu_valid_i", false,-1);
        tracep->declBit(c+490,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino msync_stall_i", false,-1);
        tracep->declBit(c+179,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino op_jr_i", false,-1);
        tracep->declBit(c+177,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino op_jal_i", false,-1);
        tracep->declBit(c+189,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino op_rfe_i", false,-1);
        tracep->declBus(c+994,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino alu_result_i", false,-1, 31,0);
        tracep->declBus(c+993,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino adder_result_i", false,-1, 31,0);
        tracep->declBus(c+198,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino rfb_i", false,-1, 31,0);
        tracep->declBus(c+163,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino execute_jal_result_i", false,-1, 31,0);
        tracep->declBit(c+482,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino flag_set_i", false,-1);
        tracep->declBit(c+483,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino flag_clear_i", false,-1);
        tracep->declBit(c+486,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino carry_set_i", false,-1);
        tracep->declBit(c+485,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino carry_clear_i", false,-1);
        tracep->declBit(c+492,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino overflow_set_i", false,-1);
        tracep->declBit(c+491,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino overflow_clear_i", false,-1);
        tracep->declBus(c+1610,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino fpcsr_i", false,-1, 11,0);
        tracep->declBit(c+1476,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino fpcsr_set_i", false,-1);
        tracep->declBus(c+106,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino pc_execute_i", false,-1, 31,0);
        tracep->declBit(c+196,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino execute_rf_wb_i", false,-1);
        tracep->declBit(c+140,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino ctrl_rf_wb_o", false,-1);
        tracep->declBit(c+208,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino wb_rf_wb_o", false,-1);
        tracep->declBus(c+199,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino execute_rfd_adr_i", false,-1, 4,0);
        tracep->declBus(c+142,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino ctrl_rfd_adr_o", false,-1, 4,0);
        tracep->declBus(c+209,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino wb_rfd_adr_o", false,-1, 4,0);
        tracep->declBit(c+151,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino execute_bubble_i", false,-1);
        tracep->declBit(c+1238,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino ctrl_mfspr_ack_i", false,-1);
        tracep->declBit(c+1238,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino ctrl_mtspr_ack_i", false,-1);
        tracep->declBus(c+111,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino ctrl_alu_result_o", false,-1, 31,0);
        tracep->declBus(c+999,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino ctrl_lsu_adr_o", false,-1, 31,0);
        tracep->declBus(c+141,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino ctrl_rfb_o", false,-1, 31,0);
        tracep->declBit(c+126,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino ctrl_flag_set_o", false,-1);
        tracep->declBit(c+125,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino ctrl_flag_clear_o", false,-1);
        tracep->declBit(c+116,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino ctrl_carry_set_o", false,-1);
        tracep->declBit(c+115,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino ctrl_carry_clear_o", false,-1);
        tracep->declBit(c+137,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino ctrl_overflow_set_o", false,-1);
        tracep->declBit(c+136,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino ctrl_overflow_clear_o", false,-1);
        tracep->declBus(c+138,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino ctrl_fpcsr_o", false,-1, 11,0);
        tracep->declBit(c+139,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino ctrl_fpcsr_set_o", false,-1);
        tracep->declBus(c+107,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino pc_ctrl_o", false,-1, 31,0);
        tracep->declBit(c+134,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino ctrl_op_mul_o", false,-1);
        tracep->declBit(c+1000,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino ctrl_op_lsu_load_o", false,-1);
        tracep->declBit(c+130,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino ctrl_op_lsu_store_o", false,-1);
        tracep->declBit(c+129,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino ctrl_op_lsu_atomic_o", false,-1);
        tracep->declBus(c+127,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino ctrl_lsu_length_o", false,-1, 1,0);
        tracep->declBit(c+128,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino ctrl_lsu_zext_o", false,-1);
        tracep->declBit(c+132,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino ctrl_op_msync_o", false,-1);
        tracep->declBit(c+131,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino ctrl_op_mfspr_o", false,-1);
        tracep->declBit(c+133,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino ctrl_op_mtspr_o", false,-1);
        tracep->declBit(c+135,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino ctrl_op_rfe_o", false,-1);
        tracep->declBit(c+119,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino ctrl_except_ibus_err_o", false,-1);
        tracep->declBit(c+122,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino ctrl_except_itlb_miss_o", false,-1);
        tracep->declBit(c+121,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino ctrl_except_ipagefault_o", false,-1);
        tracep->declBit(c+118,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino ctrl_except_ibus_align_o", false,-1);
        tracep->declBit(c+120,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino ctrl_except_illegal_o", false,-1);
        tracep->declBit(c+123,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino ctrl_except_syscall_o", false,-1);
        tracep->declBit(c+996,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino ctrl_except_dbus_o", false,-1);
        tracep->declBit(c+998,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino ctrl_except_dtlb_miss_o", false,-1);
        tracep->declBit(c+997,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino ctrl_except_dpagefault_o", false,-1);
        tracep->declBit(c+995,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino ctrl_except_align_o", false,-1);
        tracep->declBit(c+124,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino ctrl_except_trap_o", false,-1);
        tracep->declBit(c+1241,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino execute_valid_o", false,-1);
        tracep->declBit(c+1239,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino ctrl_valid_o", false,-1);
        tracep->declBit(c+1295,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino ctrl_stall", false,-1);
        tracep->declBit(c+1296,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_execute_ctrl_cappuccino execute_stall", false,-1);
        tracep->declBus(c+1471,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino OPTION_OPERAND_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1558,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino OPTION_RESET_PC", false,-1, 31,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino FEATURE_SYSCALL", false,-1, 55,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino FEATURE_TRAP", false,-1, 55,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino FEATURE_RANGE", false,-1, 55,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino FEATURE_DATACACHE", false,-1, 55,0);
        tracep->declBus(c+1544,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino OPTION_DCACHE_BLOCK_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1497,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino OPTION_DCACHE_SET_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1486,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino OPTION_DCACHE_WAYS", false,-1, 31,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino FEATURE_DMMU", false,-1, 55,0);
        tracep->declBus(c+1496,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino OPTION_DMMU_SET_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1492,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino OPTION_DMMU_WAYS", false,-1, 31,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino FEATURE_INSTRUCTIONCACHE", false,-1, 55,0);
        tracep->declBus(c+1544,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino OPTION_ICACHE_BLOCK_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1497,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino OPTION_ICACHE_SET_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1486,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino OPTION_ICACHE_WAYS", false,-1, 31,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino FEATURE_IMMU", false,-1, 55,0);
        tracep->declBus(c+1496,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino OPTION_IMMU_SET_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1492,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino OPTION_IMMU_WAYS", false,-1, 31,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino FEATURE_TIMER", false,-1, 55,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino FEATURE_DEBUGUNIT", false,-1, 55,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino FEATURE_PERFCOUNTERS", false,-1, 31,0);
        tracep->declBus(c+1536,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino OPTION_PERFCOUNTERS_NUM", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino FEATURE_PMU", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino FEATURE_MAC", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino FEATURE_FPU", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino FEATURE_MULTICORE", false,-1, 31,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino FEATURE_PIC", false,-1, 55,0);
        tracep->declQuad(c+1556,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino OPTION_PIC_TRIGGER", false,-1, 39,0);
        tracep->declBus(c+1536,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino OPTION_PIC_NMI_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino FEATURE_DSX", false,-1, 55,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino FEATURE_FASTCONTEXTS", false,-1, 31,0);
        tracep->declBus(c+1492,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino OPTION_RF_NUM_SHADOW_GPR", false,-1, 31,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino FEATURE_OVERFLOW", false,-1, 55,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino FEATURE_CARRY_FLAG", false,-1, 55,0);
        tracep->declBus(c+1543,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino SPR_SR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1659,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino SPR_SR_RESET_VALUE", false,-1, 15,0);
        tracep->declBit(c+1391,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino clk", false,-1);
        tracep->declBit(c+941,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino rst", false,-1);
        tracep->declBus(c+111,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino ctrl_alu_result_i", false,-1, 31,0);
        tracep->declBus(c+999,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino ctrl_lsu_adr_i", false,-1, 31,0);
        tracep->declBus(c+141,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino ctrl_rfb_i", false,-1, 31,0);
        tracep->declBit(c+126,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino ctrl_flag_set_i", false,-1);
        tracep->declBit(c+125,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino ctrl_flag_clear_i", false,-1);
        tracep->declBit(c+110,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino atomic_flag_set_i", false,-1);
        tracep->declBit(c+109,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino atomic_flag_clear_i", false,-1);
        tracep->declBus(c+107,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino pc_ctrl_i", false,-1, 31,0);
        tracep->declBit(c+131,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino ctrl_op_mfspr_i", false,-1);
        tracep->declBit(c+133,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino ctrl_op_mtspr_i", false,-1);
        tracep->declBit(c+135,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino ctrl_op_rfe_i", false,-1);
        tracep->declBit(c+1194,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino decode_branch_i", false,-1);
        tracep->declBus(c+1003,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino decode_branch_target_i", false,-1, 31,0);
        tracep->declBit(c+991,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino branch_mispredict_i", false,-1);
        tracep->declBus(c+166,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino execute_mispredict_target_i", false,-1, 31,0);
        tracep->declBus(c+106,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino pc_execute_i", false,-1, 31,0);
        tracep->declBit(c+171,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino execute_op_branch_i", false,-1);
        tracep->declBit(c+119,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino except_ibus_err_i", false,-1);
        tracep->declBit(c+122,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino except_itlb_miss_i", false,-1);
        tracep->declBit(c+121,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino except_ipagefault_i", false,-1);
        tracep->declBit(c+118,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino except_ibus_align_i", false,-1);
        tracep->declBit(c+120,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino except_illegal_i", false,-1);
        tracep->declBit(c+123,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino except_syscall_i", false,-1);
        tracep->declBit(c+996,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino except_dbus_i", false,-1);
        tracep->declBit(c+998,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino except_dtlb_miss_i", false,-1);
        tracep->declBit(c+997,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino except_dpagefault_i", false,-1);
        tracep->declBit(c+124,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino except_trap_i", false,-1);
        tracep->declBit(c+995,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino except_align_i", false,-1);
        tracep->declBit(c+201,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino fetch_valid_i", false,-1);
        tracep->declBit(c+146,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino decode_valid_i", false,-1);
        tracep->declBit(c+1241,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino execute_valid_i", false,-1);
        tracep->declBit(c+1239,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino ctrl_valid_i", false,-1);
        tracep->declBit(c+200,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino fetch_exception_taken_i", false,-1);
        tracep->declBit(c+1240,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino decode_bubble_i", false,-1);
        tracep->declBit(c+151,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino execute_bubble_i", false,-1);
        tracep->declBit(c+1047,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino execute_op_lsu_load_i", false,-1);
        tracep->declBit(c+1048,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino execute_op_lsu_store_i", false,-1);
        tracep->declBit(c+1049,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino icache_hit_i", false,-1);
        tracep->declBit(c+1609,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino dcache_hit_i", false,-1);
        tracep->declBus(c+551,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino irq_i", false,-1, 31,0);
        tracep->declBus(c+117,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino ctrl_epcr_o", false,-1, 31,0);
        tracep->declBus(c+1053,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino store_buffer_epcr_i", false,-1, 31,0);
        tracep->declBit(c+1054,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino store_buffer_err_i", false,-1);
        tracep->declBus(c+1462,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino mfspr_dat_o", false,-1, 31,0);
        tracep->declBit(c+1238,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino ctrl_mfspr_ack_o", false,-1);
        tracep->declBit(c+1238,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino ctrl_mtspr_ack_o", false,-1);
        tracep->declBit(c+989,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino ctrl_flag_o", false,-1);
        tracep->declBit(c+487,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino ctrl_carry_o", false,-1);
        tracep->declBit(c+116,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino ctrl_carry_set_i", false,-1);
        tracep->declBit(c+115,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino ctrl_carry_clear_i", false,-1);
        tracep->declBit(c+137,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino ctrl_overflow_set_i", false,-1);
        tracep->declBit(c+136,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino ctrl_overflow_clear_i", false,-1);
        tracep->declBus(c+1478,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino ctrl_fpu_round_mode_o", false,-1, 1,0);
        tracep->declBus(c+138,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino ctrl_fpcsr_i", false,-1, 11,0);
        tracep->declBit(c+139,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino ctrl_fpcsr_set_i", false,-1);
        tracep->declBit(c+113,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino ctrl_branch_exception_o", false,-1);
        tracep->declBus(c+112,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino ctrl_branch_except_pc_o", false,-1, 31,0);
        tracep->declBit(c+1196,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino pipeline_flush_o", false,-1);
        tracep->declBit(c+147,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino doing_rfe_o", false,-1);
        tracep->declBit(c+1246,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino padv_fetch_o", false,-1);
        tracep->declBit(c+1245,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino padv_decode_o", false,-1);
        tracep->declBit(c+1237,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino padv_execute_o", false,-1);
        tracep->declBit(c+203,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino padv_ctrl_o", false,-1);
        tracep->declBus(c+940,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino du_addr_i", false,-1, 15,0);
        tracep->declBit(c+1229,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino du_stb_i", false,-1);
        tracep->declBus(c+768,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino du_dat_i", false,-1, 31,0);
        tracep->declBit(c+769,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino du_we_i", false,-1);
        tracep->declBus(c+1404,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino du_dat_o", false,-1, 31,0);
        tracep->declBit(c+30,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino du_ack_o", false,-1);
        tracep->declBit(c+1384,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino du_stall_i", false,-1);
        tracep->declBit(c+1405,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino du_stall_o", false,-1);
        tracep->declBus(c+148,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino du_restart_pc_o", false,-1, 31,0);
        tracep->declBit(c+1390,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino du_restart_o", false,-1);
        tracep->declBus(c+1232,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_bus_addr_o", false,-1, 15,0);
        tracep->declBit(c+1235,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_bus_we_o", false,-1);
        tracep->declBit(c+1234,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_bus_stb_o", false,-1);
        tracep->declBus(c+1233,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_bus_dat_o", false,-1, 31,0);
        tracep->declBus(c+1611,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_bus_dat_dc_i", false,-1, 31,0);
        tracep->declBit(c+1052,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_bus_ack_dc_i", false,-1);
        tracep->declBus(c+1612,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_bus_dat_ic_i", false,-1, 31,0);
        tracep->declBit(c+204,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_bus_ack_ic_i", false,-1);
        tracep->declBus(c+205,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_bus_dat_dmmu_i", false,-1, 31,0);
        tracep->declBit(c+509,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_bus_ack_dmmu_i", false,-1);
        tracep->declBus(c+206,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_bus_dat_immu_i", false,-1, 31,0);
        tracep->declBit(c+510,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_bus_ack_immu_i", false,-1);
        tracep->declBus(c+1599,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_bus_dat_mac_i", false,-1, 31,0);
        tracep->declBit(c+1600,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_bus_ack_mac_i", false,-1);
        tracep->declBus(c+1601,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_bus_dat_pmu_i", false,-1, 31,0);
        tracep->declBit(c+1602,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_bus_ack_pmu_i", false,-1);
        tracep->declBus(c+1603,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_bus_dat_pcu_i", false,-1, 31,0);
        tracep->declBit(c+1604,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_bus_ack_pcu_i", false,-1);
        tracep->declBus(c+1605,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_bus_dat_fpu_i", false,-1, 31,0);
        tracep->declBit(c+1606,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_bus_ack_fpu_i", false,-1);
        tracep->declBus(c+207,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_gpr_dat_i", false,-1, 31,0);
        tracep->declBit(c+511,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_gpr_ack_i", false,-1);
        tracep->declBus(c+988,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_sr_o", false,-1, 15,0);
        tracep->declBit(c+114,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino ctrl_bubble_o", false,-1);
        tracep->declBus(c+1583,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino multicore_coreid_i", false,-1, 31,0);
        tracep->declBus(c+1584,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino multicore_numcores_i", false,-1, 31,0);
        tracep->declBus(c+988,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_sr", false,-1, 15,0);
        tracep->declBus(c+435,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_esr", false,-1, 15,0);
        tracep->declBus(c+100,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_epcr", false,-1, 31,0);
        tracep->declBus(c+101,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_eear", false,-1, 31,0);
        tracep->declBus(c+436,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_evbar", false,-1, 31,0);
        tracep->declBus(c+437,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_picmr", false,-1, 31,0);
        tracep->declBus(c+760,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_picsr", false,-1, 31,0);
        tracep->declBus(c+438,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_ttmr", false,-1, 31,0);
        tracep->declBus(c+439,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_ttcr", false,-1, 31,0);
        tracep->declBus(c+440,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_fpcsr", false,-1, 11,0);
        tracep->declBit(c+1476,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino except_fpu", false,-1);
        tracep->declBus(c+441,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_ppc", false,-1, 31,0);
        tracep->declBus(c+148,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_npc", false,-1, 31,0);
        tracep->declBit(c+442,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino execute_delay_slot", false,-1);
        tracep->declBit(c+443,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino ctrl_delay_slot", false,-1);
        tracep->declBit(c+1296,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino execute_waiting", false,-1);
        tracep->declBit(c+444,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino execute_waiting_r", false,-1);
        tracep->declBit(c+445,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino decode_execute_halt", false,-1);
        tracep->declBit(c+446,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino exception_taken", false,-1);
        tracep->declBus(c+447,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino last_branch_insn_pc", false,-1, 31,0);
        tracep->declBus(c+448,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino last_branch_target_pc", false,-1, 31,0);
        tracep->declBit(c+203,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino padv_ctrl", false,-1);
        tracep->declBit(c+449,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino exception_r", false,-1);
        tracep->declBus(c+450,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino exception_pc_addr", false,-1, 31,0);
        tracep->declBit(c+451,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino waiting_for_fetch", false,-1);
        tracep->declBit(c+452,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino doing_rfe_r", false,-1);
        tracep->declBit(c+147,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino doing_rfe", false,-1);
        tracep->declBit(c+453,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino deassert_doing_rfe", false,-1);
        tracep->declBit(c+1225,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino exception", false,-1);
        tracep->declBit(c+1466,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino exception_pending", false,-1);
        tracep->declBit(c+454,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino ctrl_stage_exceptions", false,-1);
        tracep->declBit(c+1226,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino exception_re", false,-1);
        tracep->declBit(c+1171,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino except_ticktimer", false,-1);
        tracep->declBit(c+1227,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino except_pic", false,-1);
        tracep->declBit(c+1172,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino except_range", false,-1);
        tracep->declBus(c+1232,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_addr", false,-1, 15,0);
        tracep->declBus(c+141,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino b", false,-1, 31,0);
        tracep->declBit(c+455,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino deassert_decode_execute_halt", false,-1);
        tracep->declBus(c+456,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_dmr1", false,-1, 31,0);
        tracep->declBus(c+457,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_dmr2", false,-1, 31,0);
        tracep->declBus(c+458,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_dsr", false,-1, 31,0);
        tracep->declBus(c+459,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_drr", false,-1, 31,0);
        tracep->declBit(c+1229,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino du_access", false,-1);
        tracep->declBit(c+460,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino cpu_stall", false,-1);
        tracep->declBit(c+1390,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino du_restart_from_stall", false,-1);
        tracep->declBus(c+461,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino pstep", false,-1, 5,0);
        tracep->declBit(c+462,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino stepping", false,-1);
        tracep->declBit(c+463,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino stepped_into_delay_slot", false,-1);
        tracep->declBit(c+464,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino stepped_into_exception", false,-1);
        tracep->declBit(c+465,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino stepped_into_rfe", false,-1);
        tracep->declBit(c+1297,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino du_npc_write", false,-1);
        tracep->declBit(c+466,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino du_npc_written", false,-1);
        tracep->declBit(c+467,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino stall_on_trap", false,-1);
        tracep->declBit(c+1298,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_access_valid", false,-1);
        tracep->declBit(c+1299,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_we", false,-1);
        tracep->declBit(c+1467,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_read", false,-1);
        tracep->declBit(c+1238,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_ack", false,-1);
        tracep->declBus(c+1233,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_write_dat", false,-1, 31,0);
        tracep->declBus(c+1300,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_access", false,-1, 11,0);
        tracep->declBus(c+1301,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_access_ack", false,-1, 11,0);
        {int i; for (i=0; i<12; i++) {
                tracep->declBus(c+1302+i*1,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_internal_read_dat", true,(i+0), 31,0);}}
        tracep->declBit(c+1468,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_read_access", false,-1);
        tracep->declBit(c+1314,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_write_access", false,-1);
        tracep->declBit(c+1315,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_bus_access", false,-1);
        tracep->declBus(c+1316,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_sys_group_read", false,-1, 31,0);
        tracep->declBus(c+1317,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_group", false,-1, 3,0);
        tracep->declBus(c+5,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_vr", false,-1, 31,0);
        tracep->declBus(c+6,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_vr2", false,-1, 31,0);
        tracep->declBus(c+7,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_avr", false,-1, 31,0);
        tracep->declBus(c+8,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_upr", false,-1, 31,0);
        tracep->declBus(c+9,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_cpucfgr", false,-1, 31,0);
        tracep->declBus(c+10,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_dmmucfgr", false,-1, 31,0);
        tracep->declBus(c+11,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_immucfgr", false,-1, 31,0);
        tracep->declBus(c+12,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_dccfgr", false,-1, 31,0);
        tracep->declBus(c+13,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_iccfgr", false,-1, 31,0);
        tracep->declBus(c+1536,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_dcfgr", false,-1, 31,0);
        tracep->declBus(c+1536,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_pccfgr", false,-1, 31,0);
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+14+i*1,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino spr_isr", true,(i+0), 31,0);}}
        tracep->declBit(c+468,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino ctrl_flag_clear", false,-1);
        tracep->declBit(c+469,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino ctrl_flag_set", false,-1);
        tracep->declBit(c+1469,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino dchache_miss", false,-1);
        tracep->declBus(c+1404,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino du du_read_dat", false,-1, 31,0);
        tracep->declBit(c+30,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino du du_ack", false,-1);
        tracep->declBit(c+470,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino du du_stall_r", false,-1);
        tracep->declBus(c+471,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino du branch_step", false,-1, 1,0);
        tracep->declBus(c+1318,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino du spr_read_data_group_0", false,-1, 31,0);
        tracep->declBus(c+1319,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino du spr_read_data_group_1", false,-1, 31,0);
        tracep->declBus(c+1320,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino du spr_read_data_group_2", false,-1, 31,0);
        tracep->declBus(c+1321,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino du spr_read_data_group_3", false,-1, 31,0);
        tracep->declBus(c+1322,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino du spr_read_data_group_4", false,-1, 31,0);
        tracep->declBus(c+1323,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino du spr_read_data_group_5", false,-1, 31,0);
        tracep->declBus(c+1324,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino du spr_read_data_group_6", false,-1, 31,0);
        tracep->declBus(c+1325,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino du spr_read_data_group_7", false,-1, 31,0);
        tracep->declBus(c+1326,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino du spr_read_data_group_8", false,-1, 31,0);
        tracep->declBus(c+1327,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino du spr_read_data_group_9", false,-1, 31,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino or1k_cfgrs FEATURE_SYSCALL", false,-1, 55,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino or1k_cfgrs FEATURE_TRAP", false,-1, 55,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino or1k_cfgrs FEATURE_RANGE", false,-1, 55,0);
        tracep->declBus(c+1660,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino or1k_cfgrs OPTION_DMMU_SET_WIDTH", false,-1, 2,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino or1k_cfgrs FEATURE_DATACACHE", false,-1, 55,0);
        tracep->declBus(c+1544,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino or1k_cfgrs OPTION_DCACHE_BLOCK_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1497,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino or1k_cfgrs OPTION_DCACHE_SET_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1486,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino or1k_cfgrs OPTION_DCACHE_WAYS", false,-1, 31,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino or1k_cfgrs FEATURE_DMMU", false,-1, 55,0);
        tracep->declBus(c+1492,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino or1k_cfgrs OPTION_DMMU_WAYS", false,-1, 31,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino or1k_cfgrs FEATURE_INSTRUCTIONCACHE", false,-1, 55,0);
        tracep->declBus(c+1544,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino or1k_cfgrs OPTION_ICACHE_BLOCK_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1497,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino or1k_cfgrs OPTION_ICACHE_SET_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1486,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino or1k_cfgrs OPTION_ICACHE_WAYS", false,-1, 31,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino or1k_cfgrs FEATURE_IMMU", false,-1, 55,0);
        tracep->declBus(c+1496,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino or1k_cfgrs OPTION_IMMU_SET_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1492,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino or1k_cfgrs OPTION_IMMU_WAYS", false,-1, 31,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino or1k_cfgrs FEATURE_PIC", false,-1, 55,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino or1k_cfgrs FEATURE_TIMER", false,-1, 55,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino or1k_cfgrs FEATURE_DEBUGUNIT", false,-1, 55,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino or1k_cfgrs FEATURE_PERFCOUNTERS", false,-1, 31,0);
        tracep->declBus(c+1536,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino or1k_cfgrs OPTION_PERFCOUNTERS_NUM", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino or1k_cfgrs FEATURE_PMU", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino or1k_cfgrs FEATURE_MAC", false,-1, 31,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino or1k_cfgrs FEATURE_FPU", false,-1, 31,0);
        tracep->declQuad(c+1556,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino or1k_cfgrs OPTION_PIC_TRIGGER", false,-1, 39,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino or1k_cfgrs FEATURE_DSX", false,-1, 55,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino or1k_cfgrs FEATURE_FASTCONTEXTS", false,-1, 31,0);
        tracep->declBus(c+1492,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino or1k_cfgrs OPTION_RF_NUM_SHADOW_GPR", false,-1, 31,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino or1k_cfgrs FEATURE_OVERFLOW", false,-1, 55,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino or1k_cfgrs FEATURE_DELAYSLOT", false,-1, 55,0);
        tracep->declQuad(c+1505,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino or1k_cfgrs FEATURE_EVBAR", false,-1, 55,0);
        tracep->declBus(c+1507,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino or1k_cfgrs FEATURE_AECSR", false,-1, 31,0);
        tracep->declBus(c+5,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino or1k_cfgrs spr_vr", false,-1, 31,0);
        tracep->declBus(c+6,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino or1k_cfgrs spr_vr2", false,-1, 31,0);
        tracep->declBus(c+8,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino or1k_cfgrs spr_upr", false,-1, 31,0);
        tracep->declBus(c+9,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino or1k_cfgrs spr_cpucfgr", false,-1, 31,0);
        tracep->declBus(c+10,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino or1k_cfgrs spr_dmmucfgr", false,-1, 31,0);
        tracep->declBus(c+11,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino or1k_cfgrs spr_immucfgr", false,-1, 31,0);
        tracep->declBus(c+12,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino or1k_cfgrs spr_dccfgr", false,-1, 31,0);
        tracep->declBus(c+13,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino or1k_cfgrs spr_iccfgr", false,-1, 31,0);
        tracep->declBus(c+1536,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino or1k_cfgrs spr_dcfgr", false,-1, 31,0);
        tracep->declBus(c+1536,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino or1k_cfgrs spr_pccfgr", false,-1, 31,0);
        tracep->declBus(c+7,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino or1k_cfgrs spr_avr", false,-1, 31,0);
        tracep->declQuad(c+1556,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino pic or1k_pic OPTION_PIC_TRIGGER", false,-1, 39,0);
        tracep->declBus(c+1536,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino pic or1k_pic OPTION_PIC_NMI_WIDTH", false,-1, 31,0);
        tracep->declBit(c+1391,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino pic or1k_pic clk", false,-1);
        tracep->declBit(c+941,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino pic or1k_pic rst", false,-1);
        tracep->declBus(c+551,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino pic or1k_pic irq_i", false,-1, 31,0);
        tracep->declBus(c+437,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino pic or1k_pic spr_picmr_o", false,-1, 31,0);
        tracep->declBus(c+760,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino pic or1k_pic spr_picsr_o", false,-1, 31,0);
        tracep->declBit(c+1328,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino pic or1k_pic spr_access_i", false,-1);
        tracep->declBit(c+1299,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino pic or1k_pic spr_we_i", false,-1);
        tracep->declBus(c+1232,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino pic or1k_pic spr_addr_i", false,-1, 15,0);
        tracep->declBus(c+1233,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino pic or1k_pic spr_dat_i", false,-1, 31,0);
        tracep->declBit(c+1328,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino pic or1k_pic spr_bus_ack", false,-1);
        tracep->declBus(c+1470,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino pic or1k_pic spr_dat_o", false,-1, 31,0);
        tracep->declBus(c+437,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino pic or1k_pic spr_picmr", false,-1, 31,0);
        tracep->declBus(c+760,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino pic or1k_pic spr_picsr", false,-1, 31,0);
        tracep->declBit(c+1329,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino pic or1k_pic spr_picmr_access", false,-1);
        tracep->declBit(c+1330,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino pic or1k_pic spr_picsr_access", false,-1);
        tracep->declBus(c+761,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino pic or1k_pic irq_unmasked", false,-1, 31,0);
        tracep->declBit(c+1391,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino tt or1k_ticktimer clk", false,-1);
        tracep->declBit(c+941,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino tt or1k_ticktimer rst", false,-1);
        tracep->declBus(c+438,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino tt or1k_ticktimer spr_ttmr_o", false,-1, 31,0);
        tracep->declBus(c+439,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino tt or1k_ticktimer spr_ttcr_o", false,-1, 31,0);
        tracep->declBit(c+1331,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino tt or1k_ticktimer spr_access_i", false,-1);
        tracep->declBit(c+1299,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino tt or1k_ticktimer spr_we_i", false,-1);
        tracep->declBus(c+1232,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino tt or1k_ticktimer spr_addr_i", false,-1, 15,0);
        tracep->declBus(c+1233,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino tt or1k_ticktimer spr_dat_i", false,-1, 31,0);
        tracep->declBit(c+1331,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino tt or1k_ticktimer spr_bus_ack", false,-1);
        tracep->declBus(c+513,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino tt or1k_ticktimer spr_dat_o", false,-1, 31,0);
        tracep->declBus(c+438,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino tt or1k_ticktimer spr_ttmr", false,-1, 31,0);
        tracep->declBus(c+439,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino tt or1k_ticktimer spr_ttcr", false,-1, 31,0);
        tracep->declBit(c+1332,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino tt or1k_ticktimer spr_ttmr_access", false,-1);
        tracep->declBit(c+1333,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino tt or1k_ticktimer spr_ttcr_access", false,-1);
        tracep->declBit(c+472,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino tt or1k_ticktimer ttcr_clear", false,-1);
        tracep->declBit(c+473,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino tt or1k_ticktimer ttcr_run", false,-1);
        tracep->declBit(c+474,"or1k_pu core or1k_cpu cappuccino or1k_cpu or1k_ctrl_cappuccino tt or1k_ticktimer ttcr_match", false,-1);
    }
}

void Vor1k_pu::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vor1k_pu::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vor1k_pu__Syms* __restrict vlSymsp = static_cast<Vor1k_pu__Syms*>(userp);
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vor1k_pu::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vor1k_pu__Syms* __restrict vlSymsp = static_cast<Vor1k_pu__Syms*>(userp);
    Vor1k_pu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Variables
    WData/*95:0*/ __Vtemp1[3];
    WData/*95:0*/ __Vtemp2[3];
    WData/*95:0*/ __Vtemp3[3];
    WData/*95:0*/ __Vtemp4[3];
    WData/*95:0*/ __Vtemp5[3];
    WData/*95:0*/ __Vtemp6[3];
    WData/*95:0*/ __Vtemp7[3];
    WData/*95:0*/ __Vtemp8[3];
    WData/*95:0*/ __Vtemp9[3];
    WData/*191:0*/ __Vtemp10[6];
    WData/*95:0*/ __Vtemp11[3];
    // Body
    {
        tracep->fullBit(oldp+1,(((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__reg_fcr_wren) 
                                 & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_dat_i 
                                    >> 9U))));
        tracep->fullBit(oldp+2,(((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__reg_fcr_wren) 
                                 & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_dat_i 
                                    >> 0xaU))));
        tracep->fullBit(oldp+3,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__reg_fcr_wren));
        tracep->fullBit(oldp+4,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__fifo_access));
        tracep->fullIData(oldp+5,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_vr),32);
        tracep->fullIData(oldp+6,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_vr2),32);
        tracep->fullIData(oldp+7,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_avr),32);
        tracep->fullIData(oldp+8,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_upr),32);
        tracep->fullIData(oldp+9,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_cpucfgr),32);
        tracep->fullIData(oldp+10,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_dmmucfgr),32);
        tracep->fullIData(oldp+11,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_immucfgr),32);
        tracep->fullIData(oldp+12,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_dccfgr),32);
        tracep->fullIData(oldp+13,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_iccfgr),32);
        tracep->fullIData(oldp+14,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_isr[0]),32);
        tracep->fullIData(oldp+15,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_isr[1]),32);
        tracep->fullIData(oldp+16,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_isr[2]),32);
        tracep->fullIData(oldp+17,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_isr[3]),32);
        tracep->fullIData(oldp+18,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_isr[4]),32);
        tracep->fullIData(oldp+19,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_isr[5]),32);
        tracep->fullIData(oldp+20,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_isr[6]),32);
        tracep->fullIData(oldp+21,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_isr[7]),32);
        tracep->fullIData(oldp+22,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_adr),32);
        tracep->fullBit(oldp+23,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_req));
        tracep->fullIData(oldp+24,(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_or1k_i_dat),32);
        tracep->fullBit(oldp+25,(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_or1k_i_ack));
        tracep->fullBit(oldp+26,(0U));
        tracep->fullCData(oldp+27,(((5U >= (7U & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                                  << 1U)))
                                     ? (3U & (0x28U 
                                              >> (7U 
                                                  & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                                     << 1U))))
                                     : 0U)),2);
        tracep->fullIData(oldp+28,(vlSymsp->TOP__or1k_pu__wb_bfm_memory0__ram0.__PVT__dout),32);
        tracep->fullBit(oldp+29,(vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__wb_ack_o));
        tracep->fullBit(oldp+30,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__du__DOT__du_ack));
        tracep->fullBit(oldp+31,((1U & ((IData)(vlSymsp->TOP__or1k_pu.wb_interface0__DOT____Vcellout__wb_arbiter_mem__wbm_ack_o) 
                                        >> 1U))));
        tracep->fullBit(oldp+32,(((0U == (0xfe000000U 
                                          & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_adr)) 
                                  & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_req) 
                                     << (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_mux_or1k_i__DOT__slave_sel)))));
        tracep->fullBit(oldp+33,((1U & ((IData)(vlSymsp->TOP__or1k_pu.wb_interface0__DOT____Vcellout__wb_arbiter_mem__wbm_ack_o) 
                                        >> 2U))));
        tracep->fullBit(oldp+34,((1U & (IData)(vlSymsp->TOP__or1k_pu.wb_interface0__DOT____Vcellout__wb_arbiter_mem__wbm_ack_o))));
        tracep->fullBit(oldp+35,(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_mux_or1k_d__DOT__wbm_err));
        tracep->fullBit(oldp+36,(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_mux_or1k_i__DOT__wbm_err));
        tracep->fullBit(oldp+37,(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_mux_or1k_i__DOT__slave_sel));
        tracep->fullBit(oldp+38,((0U == (0xfe000000U 
                                         & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_adr))));
        tracep->fullBit(oldp+39,(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_mux_dbg__DOT__wbm_err));
        __Vtemp1[0U] = vlSymsp->TOP__or1k_pu__wb_bfm_memory0__ram0.__PVT__dout;
        __Vtemp1[1U] = vlSymsp->TOP__or1k_pu__wb_bfm_memory0__ram0.__PVT__dout;
        __Vtemp1[2U] = vlSymsp->TOP__or1k_pu__wb_bfm_memory0__ram0.__PVT__dout;
        tracep->fullWData(oldp+40,(__Vtemp1),96);
        tracep->fullCData(oldp+43,(vlSymsp->TOP__or1k_pu.wb_interface0__DOT____Vcellout__wb_arbiter_mem__wbm_ack_o),3);
        tracep->fullCData(oldp+44,(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__grant),3);
        tracep->fullCData(oldp+45,(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel),2);
        tracep->fullBit(oldp+46,(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__active));
        tracep->fullIData(oldp+47,(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__yy),32);
        tracep->fullCData(oldp+48,(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__token),3);
        tracep->fullCData(oldp+49,(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__token_lookahead[0]),3);
        tracep->fullCData(oldp+50,(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__token_lookahead[1]),3);
        tracep->fullCData(oldp+51,(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__token_lookahead[2]),3);
        tracep->fullCData(oldp+52,((0x3fU & (((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__token) 
                                              << 3U) 
                                             | (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__token)))),6);
        tracep->fullBit(oldp+53,((((((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_cyc_i) 
                                     & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_stb_i)) 
                                    & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_we_i))) 
                                   & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__fifo_access)) 
                                  & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__reg_dlab_bit)))));
        tracep->fullBit(oldp+54,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wb_wr));
        tracep->fullBit(oldp+55,(((((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_cyc_i) 
                                    & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_stb_i)) 
                                   & (0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_sel_i))) 
                                  & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__reg_dlab_bit) 
                                     | (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__fifo_access))))));
        tracep->fullBit(oldp+56,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__reg_dlab_bit));
        tracep->fullCData(oldp+57,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__reg_ier),4);
        tracep->fullBit(oldp+58,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__thr_int_arm));
        tracep->fullBit(oldp+59,(((((((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_cyc_i) 
                                      & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_stb_i)) 
                                     & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_we_i)) 
                                    & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_sel_i) 
                                       >> 2U)) & (~ 
                                                  (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_adr_i 
                                                   >> 2U))) 
                                  & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__reg_dlab_bit)))));
        tracep->fullCData(oldp+60,((3U | ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__reg_dlab_bit) 
                                          << 7U))),8);
        tracep->fullCData(oldp+61,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
        tracep->fullCData(oldp+62,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
        tracep->fullCData(oldp+63,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
        tracep->fullCData(oldp+64,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
        tracep->fullCData(oldp+65,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
        tracep->fullCData(oldp+66,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
        tracep->fullCData(oldp+67,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
        tracep->fullCData(oldp+68,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
        tracep->fullCData(oldp+69,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
        tracep->fullCData(oldp+70,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
        tracep->fullCData(oldp+71,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
        tracep->fullCData(oldp+72,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
        tracep->fullCData(oldp+73,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
        tracep->fullCData(oldp+74,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
        tracep->fullCData(oldp+75,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
        tracep->fullCData(oldp+76,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
        tracep->fullCData(oldp+77,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
        tracep->fullCData(oldp+78,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
        tracep->fullCData(oldp+79,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
        tracep->fullCData(oldp+80,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
        tracep->fullCData(oldp+81,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
        tracep->fullCData(oldp+82,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
        tracep->fullCData(oldp+83,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
        tracep->fullCData(oldp+84,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
        tracep->fullCData(oldp+85,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
        tracep->fullCData(oldp+86,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
        tracep->fullCData(oldp+87,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
        tracep->fullCData(oldp+88,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
        tracep->fullCData(oldp+89,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
        tracep->fullCData(oldp+90,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
        tracep->fullCData(oldp+91,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
        tracep->fullCData(oldp+92,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
        tracep->fullBit(oldp+93,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__traceport_exec_valid_o));
        tracep->fullIData(oldp+94,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__traceport_exec_pc_o),32);
        tracep->fullIData(oldp+95,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__traceport_exec_insn_o),32);
        tracep->fullIData(oldp+96,(vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__adr_r),23);
        tracep->fullBit(oldp+97,(vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__valid_r));
        tracep->fullBit(oldp+98,(vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__is_last_r));
        tracep->fullIData(oldp+99,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__rf_result_o),32);
        tracep->fullIData(oldp+100,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_epcr),32);
        tracep->fullIData(oldp+101,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_eear),32);
        tracep->fullIData(oldp+102,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_esr),32);
        tracep->fullIData(oldp+103,(vlSymsp->TOP__or1k_pu__core__or1k_cpu.__PVT__cappuccino__DOT__monitor_execute_insn_reg),32);
        tracep->fullIData(oldp+104,((0x1fffffU & (vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__adr_r 
                                                  >> 2U))),21);
        tracep->fullIData(oldp+105,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pc_fetch_to_decode),32);
        tracep->fullIData(oldp+106,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pc_decode_to_execute),32);
        tracep->fullIData(oldp+107,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pc_execute_to_ctrl),32);
        tracep->fullBit(oldp+108,((1U & (~ (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_div_o) 
                                             & (~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_done) 
                                                   & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_valid_o))))) 
                                            | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_mul_o) 
                                               & (~ 
                                                  (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__threestagemultiply__DOT__mul_valid_shr) 
                                                    >> 2U) 
                                                   & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_valid_o))))))))));
        tracep->fullBit(oldp+109,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__atomic_gen__DOT__atomic_flag_clear));
        tracep->fullBit(oldp+110,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__atomic_gen__DOT__atomic_flag_set));
        tracep->fullIData(oldp+111,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_alu_result_o),32);
        tracep->fullIData(oldp+112,((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_rfe_o) 
                                      | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__doing_rfe))
                                      ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_epcr
                                      : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__exception_pc_addr)),32);
        tracep->fullBit(oldp+113,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_branch_exception_o));
        tracep->fullBit(oldp+114,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_bubble_o));
        tracep->fullBit(oldp+115,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_carry_clear_o));
        tracep->fullBit(oldp+116,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_carry_set_o));
        tracep->fullIData(oldp+117,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_epcr_o),32);
        tracep->fullBit(oldp+118,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ibus_align_o));
        tracep->fullBit(oldp+119,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ibus_err_o));
        tracep->fullBit(oldp+120,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_illegal_o));
        tracep->fullBit(oldp+121,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ipagefault_o));
        tracep->fullBit(oldp+122,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_itlb_miss_o));
        tracep->fullBit(oldp+123,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_syscall_o));
        tracep->fullBit(oldp+124,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_trap_o));
        tracep->fullBit(oldp+125,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_flag_clear_o));
        tracep->fullBit(oldp+126,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_flag_set_o));
        tracep->fullCData(oldp+127,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_length_o),2);
        tracep->fullBit(oldp+128,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_zext_o));
        tracep->fullBit(oldp+129,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_lsu_atomic_o));
        tracep->fullBit(oldp+130,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_lsu_store_o));
        tracep->fullBit(oldp+131,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_mfspr_o));
        tracep->fullBit(oldp+132,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_msync_o));
        tracep->fullBit(oldp+133,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_mtspr_o));
        tracep->fullBit(oldp+134,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_mul_o));
        tracep->fullBit(oldp+135,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_rfe_o));
        tracep->fullBit(oldp+136,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_overflow_clear_o));
        tracep->fullBit(oldp+137,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_overflow_set_o));
        tracep->fullSData(oldp+138,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_fpcsr_o),12);
        tracep->fullBit(oldp+139,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_fpcsr_set_o));
        tracep->fullBit(oldp+140,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_rf_wb_o));
        tracep->fullIData(oldp+141,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_rfb_o),32);
        tracep->fullCData(oldp+142,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_rfd_adr_o),5);
        tracep->fullBit(oldp+143,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_except_ibus_err_o));
        tracep->fullBit(oldp+144,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_except_ipagefault_o));
        tracep->fullBit(oldp+145,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_except_itlb_miss_o));
        tracep->fullBit(oldp+146,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_valid_o));
        tracep->fullBit(oldp+147,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__doing_rfe));
        tracep->fullIData(oldp+148,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_npc),32);
        tracep->fullBit(oldp+149,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_adder_do_carry_o));
        tracep->fullBit(oldp+150,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_adder_do_sub_o));
        tracep->fullBit(oldp+151,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_bubble_o));
        tracep->fullBit(oldp+152,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_except_ibus_align_o));
        tracep->fullBit(oldp+153,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_except_ibus_err_o));
        tracep->fullBit(oldp+154,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_except_illegal_o));
        tracep->fullBit(oldp+155,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_except_ipagefault_o));
        tracep->fullBit(oldp+156,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_except_itlb_miss_o));
        tracep->fullBit(oldp+157,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_except_syscall_o));
        tracep->fullBit(oldp+158,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_except_trap_o));
        tracep->fullSData(oldp+159,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_imm16_o),16);
        tracep->fullIData(oldp+160,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_immediate_o),32);
        tracep->fullBit(oldp+161,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_immediate_sel_o));
        tracep->fullSData(oldp+162,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_immjbr_upper_o),10);
        tracep->fullIData(oldp+163,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_jal_result_o),32);
        tracep->fullCData(oldp+164,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_lsu_length_o),2);
        tracep->fullBit(oldp+165,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_lsu_zext_o));
        tracep->fullIData(oldp+166,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_mispredict_target_o),32);
        tracep->fullBit(oldp+167,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_add_o));
        tracep->fullBit(oldp+168,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_alu_o));
        tracep->fullBit(oldp+169,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_bf_o));
        tracep->fullBit(oldp+170,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_bnf_o));
        tracep->fullBit(oldp+171,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_branch_o));
        tracep->fullBit(oldp+172,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_brcond_o));
        tracep->fullBit(oldp+173,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_div_o));
        tracep->fullBit(oldp+174,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_div_signed_o));
        tracep->fullBit(oldp+175,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_div_unsigned_o));
        tracep->fullBit(oldp+176,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_ffl1_o));
        tracep->fullBit(oldp+177,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_jal_o));
        tracep->fullBit(oldp+178,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_jbr_o));
        tracep->fullBit(oldp+179,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_jr_o));
        tracep->fullBit(oldp+180,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_lsu_atomic_o));
        tracep->fullBit(oldp+181,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_mfspr_o));
        tracep->fullBit(oldp+182,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_movhi_o));
        tracep->fullBit(oldp+183,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_ext_o));
        tracep->fullBit(oldp+184,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_msync_o));
        tracep->fullBit(oldp+185,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_mtspr_o));
        tracep->fullBit(oldp+186,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_mul_o));
        tracep->fullBit(oldp+187,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_mul_signed_o));
        tracep->fullBit(oldp+188,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_mul_unsigned_o));
        tracep->fullBit(oldp+189,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_rfe_o));
        tracep->fullBit(oldp+190,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_setflag_o));
        tracep->fullBit(oldp+191,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_shift_o));
        tracep->fullCData(oldp+192,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_opc_alu_o),4);
        tracep->fullCData(oldp+193,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_opc_alu_secondary_o),4);
        tracep->fullCData(oldp+194,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_opc_insn_o),6);
        tracep->fullBit(oldp+195,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_predicted_flag_o));
        tracep->fullBit(oldp+196,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rf_wb_o));
        tracep->fullIData(oldp+197,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o),32);
        tracep->fullIData(oldp+198,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfb_o),32);
        tracep->fullCData(oldp+199,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfd_adr_o),5);
        tracep->fullBit(oldp+200,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__fetch_exception_taken_o));
        tracep->fullBit(oldp+201,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__fetch_valid_o));
        tracep->fullIData(oldp+202,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__threestagemultiply__DOT__mul_result2),32);
        tracep->fullBit(oldp+203,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__padv_ctrl));
        tracep->fullBit(oldp+204,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__spr_bus_ack_ic_i));
        tracep->fullIData(oldp+205,(((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_spr_cs_r)
                                      ? ((0U >= (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__spr_way_idx_r))
                                          ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_dout
                                         [vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__spr_way_idx_r]
                                          : 0U) : ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_spr_cs_r)
                                                    ? 
                                                   ((0U 
                                                     >= (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__spr_way_idx_r))
                                                     ? 
                                                    vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_dout
                                                    [vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__spr_way_idx_r]
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dmmucr_spr_cs_r)
                                                     ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dmmucr
                                                     : 0U)))),32);
        tracep->fullIData(oldp+206,((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__spr_bus_ack) 
                                      & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__spr_bus_ack_r)))
                                      ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__spr_bus_dat
                                      : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__spr_bus_dat_r)),32);
        tracep->fullIData(oldp+207,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__rfspr_gen__DOT__rfspr__DOT__rdata),32);
        tracep->fullBit(oldp+208,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__wb_rf_wb_o));
        tracep->fullCData(oldp+209,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__wb_rfd_adr_o),5);
        tracep->fullIData(oldp+210,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__traceport_stage_decode_insn),32);
        tracep->fullIData(oldp+211,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__traceport_stage_exec_insn),32);
        tracep->fullIData(oldp+212,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__pc_fetch),32);
        tracep->fullBit(oldp+213,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ctrl_branch_exception_r));
        tracep->fullBit(oldp+214,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__nop_ack));
        tracep->fullBit(oldp+215,((4U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state))));
        tracep->fullBit(oldp+216,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__refill_done));
        tracep->fullIData(oldp+217,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_phys_addr),32);
        tracep->fullBit(oldp+218,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_cache_inhibit));
        tracep->fullBit(oldp+219,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__tlb_reload_ack));
        tracep->fullIData(oldp+220,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__tlb_reload_data),32);
        tracep->fullBit(oldp+221,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__fetching_brcond));
        tracep->fullBit(oldp+222,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__fetching_mispredicted_branch));
        tracep->fullBit(oldp+223,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__exception_while_tlb_reload));
        tracep->fullBit(oldp+224,(((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_except_ipagefault_o) 
                                   & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_branch_exception_o))));
        tracep->fullCData(oldp+225,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__state),3);
        tracep->fullIData(oldp+226,(((0xffffffe0U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_adr) 
                                     | (0x1fU & ((IData)(4U) 
                                                 + vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_adr)))),32);
        tracep->fullIData(oldp+227,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_dat),32);
        tracep->fullBit(oldp+228,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_ack));
        tracep->fullBit(oldp+229,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__ic_enable_r));
        tracep->fullCData(oldp+230,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state),4);
        tracep->fullBit(oldp+231,((2U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state))));
        tracep->fullBit(oldp+232,((8U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state))));
        tracep->fullCData(oldp+233,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__invalidate_adr),8);
        tracep->fullCData(oldp+234,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__refill_valid),8);
        tracep->fullCData(oldp+235,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__refill_valid_r),8);
        tracep->fullQData(oldp+236,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_ram__DOT__rdata),41);
        tracep->fullBit(oldp+238,((1U & (IData)((vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_ram__DOT__rdata 
                                                 >> 0x28U)))));
        tracep->fullIData(oldp+239,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_way_out[0]),20);
        tracep->fullIData(oldp+240,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_way_out[1]),20);
        tracep->fullIData(oldp+241,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_way_in[0]),20);
        tracep->fullIData(oldp+242,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_way_in[1]),20);
        tracep->fullIData(oldp+243,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_way_save[0]),20);
        tracep->fullIData(oldp+244,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_way_save[1]),20);
        tracep->fullIData(oldp+245,((0x7ffffU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_adr 
                                                 >> 0xdU))),19);
        tracep->fullSData(oldp+246,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_waddr[0]),11);
        tracep->fullSData(oldp+247,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_waddr[1]),11);
        tracep->fullIData(oldp+248,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_din[0]),32);
        tracep->fullIData(oldp+249,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_din[1]),32);
        tracep->fullIData(oldp+250,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_dout[0]),32);
        tracep->fullIData(oldp+251,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_dout[1]),32);
        tracep->fullCData(oldp+252,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_we),2);
        tracep->fullCData(oldp+253,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_save_lru),2);
        tracep->fullIData(oldp+254,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__check_way_tag[0]),19);
        tracep->fullIData(oldp+255,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__check_way_tag[1]),19);
        tracep->fullBit(oldp+256,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__check_way_valid[0]));
        tracep->fullBit(oldp+257,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__check_way_valid[1]));
        tracep->fullIData(oldp+258,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__w1),32);
        tracep->fullIData(oldp+259,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__w2),32);
        tracep->fullSData(oldp+260,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_waddr
                                    [0U]),11);
        tracep->fullBit(oldp+261,((1U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_we))));
        tracep->fullIData(oldp+262,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_din
                                    [0U]),32);
        tracep->fullIData(oldp+263,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_memories__BRA__0__KET____DOT__way_data_ram__DOT__rdata),32);
        tracep->fullSData(oldp+264,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_waddr
                                    [1U]),11);
        tracep->fullBit(oldp+265,((1U & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_we) 
                                         >> 1U))));
        tracep->fullIData(oldp+266,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_din
                                    [1U]),32);
        tracep->fullIData(oldp+267,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_memories__BRA__1__KET____DOT__way_data_ram__DOT__rdata),32);
        tracep->fullIData(oldp+268,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_dout[0]),32);
        tracep->fullIData(oldp+269,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_huge_dout[0]),32);
        tracep->fullBit(oldp+270,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_huge_we));
        tracep->fullIData(oldp+271,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_dout[0]),32);
        tracep->fullIData(oldp+272,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_huge_dout[0]),32);
        tracep->fullBit(oldp+273,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_huge_we));
        tracep->fullBit(oldp+274,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_reload_we));
        tracep->fullIData(oldp+275,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_reload_din),32);
        tracep->fullBit(oldp+276,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_reload_we));
        tracep->fullIData(oldp+277,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_reload_din),32);
        tracep->fullBit(oldp+278,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_spr_cs_r));
        tracep->fullBit(oldp+279,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_spr_cs_r));
        tracep->fullBit(oldp+280,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__immucr_spr_cs_r));
        tracep->fullIData(oldp+281,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__immucr),32);
        tracep->fullBit(oldp+282,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__spr_way_idx_r));
        tracep->fullBit(oldp+283,((3U == (3U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_huge_dout
                                          [0U]))));
        tracep->fullBit(oldp+284,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__way_hit));
        tracep->fullBit(oldp+285,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__way_huge_hit));
        tracep->fullBit(oldp+286,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__tlb_reload_pagefault));
        tracep->fullBit(oldp+287,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__tlb_reload_huge));
        tracep->fullBit(oldp+288,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__sxe));
        tracep->fullBit(oldp+289,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__uxe));
        tracep->fullBit(oldp+290,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__spr_bus_ack));
        tracep->fullBit(oldp+291,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__spr_bus_ack_r));
        tracep->fullIData(oldp+292,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__spr_bus_dat),32);
        tracep->fullIData(oldp+293,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__spr_bus_dat_r),32);
        tracep->fullIData(oldp+294,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_match_regs__DOT__rdata_a),32);
        tracep->fullIData(oldp+295,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_match_regs__DOT__rdata_b),32);
        tracep->fullIData(oldp+296,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_translate_regs__DOT__rdata_a),32);
        tracep->fullIData(oldp+297,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb__BRA__0__KET____DOT__itlb_translate_regs__DOT__rdata_b),32);
        tracep->fullIData(oldp+298,(((IData)(8U) + vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pc_fetch_to_decode)),32);
        tracep->fullBit(oldp+299,((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_div_o) 
                                    & (~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_done) 
                                          & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_valid_o))))) 
                                   | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_mul_o) 
                                      & (~ (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__threestagemultiply__DOT__mul_valid_shr) 
                                             >> 2U) 
                                            & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_valid_o))))))));
        tracep->fullIData(oldp+300,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__b),32);
        tracep->fullIData(oldp+301,((~ vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__b)),32);
        tracep->fullIData(oldp+302,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__b_mux),32);
        tracep->fullBit(oldp+303,((vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o 
                                   == vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__b)));
        tracep->fullCData(oldp+304,((7U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_opc_alu_secondary_o))),3);
        tracep->fullIData(oldp+305,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__shift_result),32);
        tracep->fullBit(oldp+306,((0U != (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_lut))));
        tracep->fullIData(oldp+307,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_result),32);
        tracep->fullBit(oldp+308,((1U & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__threestagemultiply__DOT__mul_valid_shr) 
                                          >> 2U) & 
                                         (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_valid_o))))));
        tracep->fullBit(oldp+309,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__mul_signed_overflow));
        tracep->fullIData(oldp+310,(((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_neg)
                                      ? ((IData)(1U) 
                                         + (~ vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_n))
                                      : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_n)),32);
        tracep->fullBit(oldp+311,(((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_done) 
                                   & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_valid_o)))));
        tracep->fullBit(oldp+312,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_by_zero_r));
        tracep->fullIData(oldp+313,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk5__DOT__ffl1_result_wire),32);
        tracep->fullBit(oldp+314,(((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_alu_o) 
                                   & (0xeU == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_opc_alu_o)))));
        tracep->fullCData(oldp+315,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__logic_lut),4);
        tracep->fullIData(oldp+316,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__threestagemultiply__DOT__mul_opa),32);
        tracep->fullIData(oldp+317,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__threestagemultiply__DOT__mul_opb),32);
        tracep->fullIData(oldp+318,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__threestagemultiply__DOT__mul_result1),32);
        tracep->fullCData(oldp+319,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__threestagemultiply__DOT__mul_valid_shr),3);
        tracep->fullCData(oldp+320,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_count),6);
        tracep->fullIData(oldp+321,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_n),32);
        tracep->fullIData(oldp+322,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_d),32);
        tracep->fullIData(oldp+323,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_r),32);
        tracep->fullQData(oldp+324,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_sub),33);
        tracep->fullBit(oldp+326,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_neg));
        tracep->fullBit(oldp+327,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_done));
        tracep->fullBit(oldp+328,((0U == (7U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_opc_alu_secondary_o)))));
        tracep->fullBit(oldp+329,((1U == (7U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_opc_alu_secondary_o)))));
        tracep->fullBit(oldp+330,((2U == (7U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_opc_alu_secondary_o)))));
        tracep->fullIData(oldp+331,((IData)(((((QData)((IData)(
                                                               ((2U 
                                                                 == 
                                                                 (7U 
                                                                  & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_opc_alu_secondary_o)))
                                                                 ? 
                                                                (- (IData)(
                                                                           (1U 
                                                                            & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o 
                                                                               >> 0x1fU))))
                                                                 : 0U))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__barrel_shifter__DOT__shift_lsw))) 
                                             >> (0x1fU 
                                                 & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__b)))),32);
        tracep->fullIData(oldp+332,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__barrel_shifter__DOT__shift_lsw),32);
        tracep->fullIData(oldp+333,(((2U == (7U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_opc_alu_secondary_o)))
                                      ? (- (IData)(
                                                   (1U 
                                                    & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o 
                                                       >> 0x1fU))))
                                      : 0U)),32);
        tracep->fullQData(oldp+334,(((((QData)((IData)(
                                                       ((2U 
                                                         == 
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_opc_alu_secondary_o)))
                                                         ? 
                                                        (- (IData)(
                                                                   (1U 
                                                                    & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o 
                                                                       >> 0x1fU))))
                                                         : 0U))) 
                                       << 0x20U) | (QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__barrel_shifter__DOT__shift_lsw))) 
                                     >> (0x1fU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__b))),64);
        tracep->fullIData(oldp+336,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__lsu_sdat),32);
        tracep->fullBit(oldp+337,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_enable_r));
        tracep->fullBit(oldp+338,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__except_dtlb_miss_r));
        tracep->fullBit(oldp+339,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__except_dpagefault_r));
        tracep->fullBit(oldp+340,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_full));
        tracep->fullBit(oldp+341,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_write_pending));
        tracep->fullIData(oldp+342,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__atomic_addr),32);
        tracep->fullBit(oldp+343,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__atomic_reserve));
        tracep->fullBit(oldp+344,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_refill_r));
        tracep->fullSData(oldp+345,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__write_pointer),9);
        tracep->fullSData(oldp+346,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__read_pointer),9);
        tracep->fullCData(oldp+347,((0xffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__read_pointer))),8);
        tracep->fullCData(oldp+348,((0xffU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__write_pointer))),8);
        tracep->fullWData(oldp+349,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_ram__DOT__rdata),101);
        tracep->fullWData(oldp+353,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_ram__DOT__bypass_gen__DOT__din_r),101);
        tracep->fullBit(oldp+357,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_ram__DOT__bypass_gen__DOT__bypass));
        tracep->fullCData(oldp+358,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__invalidate_adr),8);
        tracep->fullCData(oldp+359,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__refill_valid),8);
        tracep->fullCData(oldp+360,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__refill_valid_r),8);
        tracep->fullQData(oldp+361,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_ram__DOT__rdata),39);
        tracep->fullBit(oldp+363,((1U & (IData)((vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_ram__DOT__rdata 
                                                 >> 0x26U)))));
        tracep->fullIData(oldp+364,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_way_out[0]),19);
        tracep->fullIData(oldp+365,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_way_out[1]),19);
        tracep->fullIData(oldp+366,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_way_save[0]),19);
        tracep->fullIData(oldp+367,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_way_save[1]),19);
        tracep->fullIData(oldp+368,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_dout[0]),32);
        tracep->fullIData(oldp+369,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_dout[1]),32);
        tracep->fullCData(oldp+370,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_save_lru),2);
        tracep->fullIData(oldp+371,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__check_way_tag[0]),18);
        tracep->fullIData(oldp+372,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__check_way_tag[1]),18);
        tracep->fullBit(oldp+373,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__check_way_valid[0]));
        tracep->fullBit(oldp+374,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__check_way_valid[1]));
        tracep->fullBit(oldp+375,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__snoop_check));
        tracep->fullIData(oldp+376,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__w1),32);
        tracep->fullIData(oldp+377,(((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__0__KET____DOT__way_data_ram__DOT__bypass_gen__DOT__bypass)
                                      ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__0__KET____DOT__way_data_ram__DOT__bypass_gen__DOT__din_r
                                      : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__0__KET____DOT__way_data_ram__DOT__rdata)),32);
        tracep->fullIData(oldp+378,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__0__KET____DOT__way_data_ram__DOT__rdata),32);
        tracep->fullIData(oldp+379,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__0__KET____DOT__way_data_ram__DOT__bypass_gen__DOT__din_r),32);
        tracep->fullBit(oldp+380,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__0__KET____DOT__way_data_ram__DOT__bypass_gen__DOT__bypass));
        tracep->fullIData(oldp+381,(((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__1__KET____DOT__way_data_ram__DOT__bypass_gen__DOT__bypass)
                                      ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__1__KET____DOT__way_data_ram__DOT__bypass_gen__DOT__din_r
                                      : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__1__KET____DOT__way_data_ram__DOT__rdata)),32);
        tracep->fullIData(oldp+382,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__1__KET____DOT__way_data_ram__DOT__rdata),32);
        tracep->fullIData(oldp+383,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__1__KET____DOT__way_data_ram__DOT__bypass_gen__DOT__din_r),32);
        tracep->fullBit(oldp+384,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_memories__BRA__1__KET____DOT__way_data_ram__DOT__bypass_gen__DOT__bypass));
        tracep->fullIData(oldp+385,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_dout[0]),32);
        tracep->fullIData(oldp+386,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_huge_dout[0]),32);
        tracep->fullBit(oldp+387,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_huge_we));
        tracep->fullIData(oldp+388,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_dout[0]),32);
        tracep->fullIData(oldp+389,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_huge_dout[0]),32);
        tracep->fullBit(oldp+390,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_huge_we));
        tracep->fullBit(oldp+391,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_reload_we));
        tracep->fullIData(oldp+392,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_reload_din),32);
        tracep->fullBit(oldp+393,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_reload_we));
        tracep->fullIData(oldp+394,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_reload_din),32);
        tracep->fullBit(oldp+395,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_spr_cs_r));
        tracep->fullBit(oldp+396,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_spr_cs_r));
        tracep->fullBit(oldp+397,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dmmucr_spr_cs_r));
        tracep->fullIData(oldp+398,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dmmucr),32);
        tracep->fullBit(oldp+399,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__spr_way_idx_r));
        tracep->fullBit(oldp+400,((3U == (3U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_huge_dout
                                          [0U]))));
        tracep->fullBit(oldp+401,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__tlb_reload_pagefault));
        tracep->fullBit(oldp+402,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__spr_bus_ack));
        tracep->fullIData(oldp+403,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_match_regs__DOT__rdata_a),32);
        tracep->fullIData(oldp+404,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_match_regs__DOT__rdata_b),32);
        tracep->fullIData(oldp+405,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_translate_regs__DOT__rdata_a),32);
        tracep->fullIData(oldp+406,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb__BRA__0__KET____DOT__dtlb_translate_regs__DOT__rdata_b),32);
        tracep->fullIData(oldp+407,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_wb_mux_cappuccino__DOT__rf_result),32);
        tracep->fullBit(oldp+408,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_wb_mux_cappuccino__DOT__wb_op_mul));
        tracep->fullIData(oldp+409,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__rfa__DOT__rdata),32);
        tracep->fullIData(oldp+410,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__rfb__DOT__rdata),32);
        tracep->fullIData(oldp+411,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__wb_hazard_result),32);
        tracep->fullIData(oldp+412,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__execute_rfa),32);
        tracep->fullIData(oldp+413,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__execute_rfb),32);
        tracep->fullBit(oldp+414,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__flushing));
        tracep->fullBit(oldp+415,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__execute_hazard_a));
        tracep->fullBit(oldp+416,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__execute_hazard_b));
        tracep->fullIData(oldp+417,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__execute_hazard_result_r),32);
        tracep->fullIData(oldp+418,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__execute_hazard_result),32);
        tracep->fullBit(oldp+419,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__ctrl_hazard_a));
        tracep->fullBit(oldp+420,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__ctrl_hazard_b));
        tracep->fullIData(oldp+421,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__ctrl_hazard_result_r),32);
        tracep->fullIData(oldp+422,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__ctrl_hazard_result),32);
        tracep->fullBit(oldp+423,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__wb_hazard_a));
        tracep->fullBit(oldp+424,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__wb_hazard_b));
        tracep->fullBit(oldp+425,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__use_last_wb_a));
        tracep->fullBit(oldp+426,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__wb_to_decode_bypass_a));
        tracep->fullIData(oldp+427,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__wb_to_decode_result_a),32);
        tracep->fullIData(oldp+428,(((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__use_last_wb_a)
                                      ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__wb_to_decode_result_a
                                      : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__rf_result_o)),32);
        tracep->fullBit(oldp+429,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__use_last_wb_b));
        tracep->fullBit(oldp+430,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__wb_to_decode_bypass_b));
        tracep->fullIData(oldp+431,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__wb_to_decode_result_b),32);
        tracep->fullIData(oldp+432,(((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__use_last_wb_b)
                                      ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__wb_to_decode_result_b
                                      : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__rf_result_o)),32);
        tracep->fullBit(oldp+433,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__genblk1__DOT__spr_gpr_read_ack));
        tracep->fullCData(oldp+434,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__genblk1__DOT__wb_rfd_adr_expand),6);
        tracep->fullSData(oldp+435,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_esr),16);
        tracep->fullIData(oldp+436,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_evbar),32);
        tracep->fullIData(oldp+437,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picmr),32);
        tracep->fullIData(oldp+438,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__spr_ttmr),32);
        tracep->fullIData(oldp+439,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__spr_ttcr),32);
        tracep->fullSData(oldp+440,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_fpcsr),12);
        tracep->fullIData(oldp+441,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_ppc),32);
        tracep->fullBit(oldp+442,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__execute_delay_slot));
        tracep->fullBit(oldp+443,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__ctrl_delay_slot));
        tracep->fullBit(oldp+444,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__execute_waiting_r));
        tracep->fullBit(oldp+445,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__decode_execute_halt));
        tracep->fullBit(oldp+446,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__exception_taken));
        tracep->fullIData(oldp+447,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__last_branch_insn_pc),32);
        tracep->fullIData(oldp+448,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__last_branch_target_pc),32);
        tracep->fullBit(oldp+449,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__exception_r));
        tracep->fullIData(oldp+450,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__exception_pc_addr),32);
        tracep->fullBit(oldp+451,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__waiting_for_fetch));
        tracep->fullBit(oldp+452,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__doing_rfe_r));
        tracep->fullBit(oldp+453,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__deassert_doing_rfe));
        tracep->fullBit(oldp+454,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__ctrl_stage_exceptions));
        tracep->fullBit(oldp+455,(((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__fetch_exception_taken_o) 
                                   & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__decode_execute_halt))));
        tracep->fullIData(oldp+456,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_dmr1),32);
        tracep->fullIData(oldp+457,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_dmr2),32);
        tracep->fullIData(oldp+458,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_dsr),32);
        tracep->fullIData(oldp+459,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_drr),32);
        tracep->fullBit(oldp+460,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__cpu_stall));
        tracep->fullCData(oldp+461,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pstep),6);
        tracep->fullBit(oldp+462,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__stepping));
        tracep->fullBit(oldp+463,((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__du__DOT__branch_step) 
                                    >> 1U) & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__stepping))));
        tracep->fullBit(oldp+464,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__stepped_into_exception));
        tracep->fullBit(oldp+465,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__stepped_into_rfe));
        tracep->fullBit(oldp+466,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__du_npc_written));
        tracep->fullBit(oldp+467,((1U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_dsr 
                                         >> 0xdU))));
        tracep->fullBit(oldp+468,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__ctrl_flag_clear));
        tracep->fullBit(oldp+469,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__ctrl_flag_set));
        tracep->fullBit(oldp+470,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__du__DOT__du_stall_r));
        tracep->fullCData(oldp+471,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__du__DOT__branch_step),2);
        tracep->fullBit(oldp+472,(((1U == (3U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__spr_ttmr 
                                                 >> 0x1eU))) 
                                   & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__ttcr_match))));
        tracep->fullBit(oldp+473,((((0U != (3U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__spr_ttmr 
                                                  >> 0x1eU))) 
                                    & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__ttcr_match))) 
                                   | (3U == (3U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__spr_ttmr 
                                                   >> 0x1eU))))));
        tracep->fullBit(oldp+474,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__ttcr_match));
        __Vtemp2[0U] = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__addr_reg;
        __Vtemp2[1U] = (IData)((((QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_adr)) 
                                 << 0x20U) | (QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_adr))));
        __Vtemp2[2U] = (IData)(((((QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_adr)) 
                                  << 0x20U) | (QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_adr))) 
                                >> 0x20U));
        tracep->fullIData(oldp+475,(((0x5fU >= (0x7fU 
                                                & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                                   << 5U)))
                                      ? (((0U == (0x1fU 
                                                  & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                                     << 5U)))
                                           ? 0U : (
                                                   __Vtemp2[
                                                   ((IData)(1U) 
                                                    + 
                                                    (3U 
                                                     & (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                                        << 5U))))) 
                                         | (__Vtemp2[
                                            (3U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel))] 
                                            >> (0x1fU 
                                                & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                                   << 5U))))
                                      : 0U)),32);
        __Vtemp3[0U] = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__data_in_reg;
        __Vtemp3[1U] = (IData)((QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat)));
        __Vtemp3[2U] = (IData)(((QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat)) 
                                >> 0x20U));
        tracep->fullIData(oldp+476,(((0x5fU >= (0x7fU 
                                                & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                                   << 5U)))
                                      ? (((0U == (0x1fU 
                                                  & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                                     << 5U)))
                                           ? 0U : (
                                                   __Vtemp3[
                                                   ((IData)(1U) 
                                                    + 
                                                    (3U 
                                                     & (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                                        << 5U))))) 
                                         | (__Vtemp3[
                                            (3U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel))] 
                                            >> (0x1fU 
                                                & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                                   << 5U))))
                                      : 0U)),32);
        tracep->fullBit(oldp+477,(((2U >= (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel)) 
                                   & ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_we_o) 
                                        << 1U) | (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__wr_reg)) 
                                      >> (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel)))));
        __Vtemp4[0U] = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__addr_reg;
        __Vtemp4[1U] = (IData)((((QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_adr)) 
                                 << 0x20U) | (QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_adr))));
        __Vtemp4[2U] = (IData)(((((QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_adr)) 
                                  << 0x20U) | (QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_adr))) 
                                >> 0x20U));
        tracep->fullWData(oldp+478,(__Vtemp4),96);
        __Vtemp5[0U] = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__addr_reg;
        __Vtemp5[1U] = (IData)((((QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_adr)) 
                                 << 0x20U) | (QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_adr))));
        __Vtemp5[2U] = (IData)(((((QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_adr)) 
                                  << 0x20U) | (QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_adr))) 
                                >> 0x20U));
        tracep->fullIData(oldp+481,(((0x5fU >= (0x7fU 
                                                & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                                   << 5U)))
                                      ? (0x7fffffU 
                                         & (((0U == 
                                              (0x1fU 
                                               & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                                  << 5U)))
                                              ? 0U : 
                                             (__Vtemp5[
                                              ((IData)(1U) 
                                               + (3U 
                                                  & (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                                      << 5U))))) 
                                            | (__Vtemp5[
                                               (3U 
                                                & (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel))] 
                                               >> (0x1fU 
                                                   & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                                      << 5U)))))
                                      : 0U)),23);
        tracep->fullBit(oldp+482,(((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__flag_set) 
                                   & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_setflag_o))));
        tracep->fullBit(oldp+483,(((~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__flag_set)) 
                                   & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_setflag_o))));
        tracep->fullBit(oldp+484,((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__flag_set) 
                                    & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_setflag_o))
                                    ? 1U : (((~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__flag_set)) 
                                             & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_setflag_o))
                                             ? 0U : 
                                            (1U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_flag_o))))));
        tracep->fullBit(oldp+485,(((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_add_o) 
                                     & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__adder_carryout))) 
                                    | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_mul_unsigned_o)) 
                                   | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_div_unsigned_o) 
                                      & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_by_zero_r))))));
        tracep->fullBit(oldp+486,((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_add_o) 
                                    & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__adder_carryout)) 
                                   | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_div_unsigned_o) 
                                      & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_by_zero_r)))));
        tracep->fullBit(oldp+487,((1U & (((~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_carry_clear_o)) 
                                          & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr) 
                                             >> 0xaU)) 
                                         | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_carry_set_o)))));
        tracep->fullIData(oldp+488,((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_rf_wb_o) 
                                      & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_rfd_adr_o) 
                                         == (0x1fU 
                                             & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                >> 0x10U))))
                                      ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_alu_result_o
                                      : (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__use_last_wb_a) 
                                          | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__wb_rf_wb_o) 
                                             & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__wb_rfd_adr_o) 
                                                == 
                                                (0x1fU 
                                                 & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                    >> 0x10U)))))
                                          ? ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__use_last_wb_a)
                                              ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__wb_to_decode_result_a
                                              : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__rf_result_o)
                                          : ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__wb_to_decode_bypass_a)
                                              ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__wb_to_decode_result_a
                                              : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__rfa__DOT__rdata)))),32);
        tracep->fullIData(oldp+489,(((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_zext_o)
                                      ? ((2U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_length_o))
                                          ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat_aligned
                                          : ((1U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_length_o))
                                              ? (0xffffU 
                                                 & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat_aligned 
                                                    >> 0x10U))
                                              : (0xffU 
                                                 & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat_aligned 
                                                    >> 0x18U))))
                                      : ((2U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_length_o))
                                          ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat_aligned
                                          : ((1U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_length_o))
                                              ? ((0xffff0000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat_aligned 
                                                                    >> 0x1fU)))) 
                                                     << 0x10U)) 
                                                 | (0xffffU 
                                                    & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat_aligned 
                                                       >> 0x10U)))
                                              : ((0xffffff00U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat_aligned 
                                                                    >> 0x1fU)))) 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat_aligned 
                                                       >> 0x18U))))))),32);
        tracep->fullBit(oldp+490,(((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_msync_o) 
                                   & (2U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__state)))));
        tracep->fullBit(oldp+491,(((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_add_o) 
                                     & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__adder_signed_overflow))) 
                                    | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_mul_signed_o) 
                                       & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__mul_signed_overflow)))) 
                                   | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_div_signed_o) 
                                      & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_by_zero_r))))));
        tracep->fullBit(oldp+492,(((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_add_o) 
                                     & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__adder_signed_overflow)) 
                                    | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_mul_signed_o) 
                                       & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__mul_signed_overflow))) 
                                   | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_div_signed_o) 
                                      & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__genblk3__DOT__div_by_zero_r)))));
        tracep->fullBit(oldp+493,((((2U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state)) 
                                    & (0U != (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_hit))) 
                                   | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__refill_hit) 
                                      & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ic_access)))));
        tracep->fullBit(oldp+494,((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr) 
                                    >> 4U) & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__ic_enable_r))));
        tracep->fullCData(oldp+495,((0xffU & ((2U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state))
                                               ? (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ic_addr_match 
                                                  >> 5U)
                                               : ((8U 
                                                   == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state))
                                                   ? (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__invalidate_adr)
                                                   : 
                                                  (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_adr 
                                                   >> 5U))))),8);
        tracep->fullQData(oldp+496,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_din),41);
        tracep->fullBit(oldp+498,(((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_jr_o) 
                                   & (~ ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_decode_execute_cappuccino__DOT__ctrl_to_decode_interlock) 
                                         | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rf_wb_o) 
                                            & ((0x1fU 
                                                & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                   >> 0xbU)) 
                                               == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfd_adr_o))))))));
        tracep->fullIData(oldp+499,(((((4U == (0x3fU 
                                               & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                  >> 0x1aU))) 
                                       & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__predicted_flag_o))) 
                                      | ((3U == (0x3fU 
                                                 & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                    >> 0x1aU))) 
                                         & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__predicted_flag_o)))
                                      ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_decode_execute_cappuccino__DOT__branch_to_imm_target
                                      : ((IData)(8U) 
                                         + vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pc_fetch_to_decode))),32);
        tracep->fullIData(oldp+500,(((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_flag_o)
                                      ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_rfa_o
                                      : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__b)),32);
        tracep->fullBit(oldp+501,((((2U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_length_o)) 
                                    & (0U != (3U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_adr_o))) 
                                   | ((1U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_length_o)) 
                                      & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_adr_o))));
        tracep->fullCData(oldp+502,((0xffU & (((2U 
                                                == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state)) 
                                               | (4U 
                                                  == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state)))
                                               ? (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_adr_match 
                                                  >> 5U)
                                               : ((0x10U 
                                                   == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state))
                                                   ? (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__invalidate_adr)
                                                   : 
                                                  (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_adr 
                                                   >> 5U))))),8);
        tracep->fullBit(oldp+503,(((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_rf_wb_o) 
                                   & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_rfd_adr_o) 
                                      == (0x1fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                   >> 0x10U))))));
        tracep->fullBit(oldp+504,(((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__use_last_wb_a) 
                                   | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__wb_rf_wb_o) 
                                      & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__wb_rfd_adr_o) 
                                         == (0x1fU 
                                             & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                >> 0x10U)))))));
        tracep->fullBit(oldp+505,(((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_rf_wb_o) 
                                   & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_rfd_adr_o) 
                                      == (0x1fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                   >> 0xbU))))));
        tracep->fullBit(oldp+506,(((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__use_last_wb_b) 
                                   | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__wb_rf_wb_o) 
                                      & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__wb_rfd_adr_o) 
                                         == (0x1fU 
                                             & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                >> 0xbU)))))));
        tracep->fullCData(oldp+507,(((((~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_access)) 
                                       & (4U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state))) 
                                      & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__refill_done)))
                                      ? 2U : 7U)),3);
        tracep->fullBit(oldp+508,((((~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_access)) 
                                    & (4U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state))) 
                                   & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__refill_done)))));
        tracep->fullBit(oldp+509,((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__spr_bus_ack) 
                                    & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__dmmu_spr_bus_stb)) 
                                   & (1U == (0x1fU 
                                             & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr) 
                                                >> 0xbU))))));
        tracep->fullBit(oldp+510,((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__spr_bus_ack) 
                                    & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__immu_spr_bus_stb)) 
                                   & (2U == (0x1fU 
                                             & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr) 
                                                >> 0xbU))))));
        tracep->fullBit(oldp+511,((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__genblk1__DOT__spr_gpr_we) 
                                    & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__wb_rf_wb_o))) 
                                   | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__genblk1__DOT__spr_gpr_re) 
                                      & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__genblk1__DOT__spr_gpr_read_ack)))));
        tracep->fullBit(oldp+512,(((~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_fetch_o)) 
                                   & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__fetch_valid_o))));
        tracep->fullIData(oldp+513,(((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access) 
                                       >> 0xaU) & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__spr_ttcr_access))
                                      ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__spr_ttcr
                                      : ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access) 
                                           >> 0xaU) 
                                          & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__spr_ttmr_access))
                                          ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__spr_ttmr
                                          : 0U))),32);
        tracep->fullIData(oldp+514,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__addr_reg),32);
        tracep->fullIData(oldp+515,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__data_in_reg),32);
        tracep->fullBit(oldp+516,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__wr_reg));
        tracep->fullBit(oldp+517,(0U));
        tracep->fullBit(oldp+518,(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_mux_dbg__DOT__slave_sel));
        tracep->fullBit(oldp+519,((0U == (0xfe000000U 
                                          & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__addr_reg))));
        tracep->fullBit(oldp+520,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__rdy_sync_tff1));
        tracep->fullBit(oldp+521,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__rdy_sync_tff2));
        tracep->fullBit(oldp+522,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__rdy_sync_tff2q));
        tracep->fullBit(oldp+523,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__rdy_sync));
        tracep->fullBit(oldp+524,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__str_sync_wbff1));
        tracep->fullBit(oldp+525,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__str_sync_wbff2));
        tracep->fullBit(oldp+526,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__str_sync_wbff2q));
        tracep->fullBit(oldp+527,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__start_toggle));
        tracep->fullBit(oldp+528,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__wb_fsm_state));
        tracep->fullBit(oldp+529,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__tms_q1));
        tracep->fullBit(oldp+530,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__tms_q2));
        tracep->fullBit(oldp+531,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__tms_q3));
        tracep->fullBit(oldp+532,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__tms_q4));
        tracep->fullIData(oldp+533,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__idcode_reg),32);
        tracep->fullBit(oldp+534,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__tdo_padoe_o));
        tracep->fullBit(oldp+535,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__shift_ir_neg));
        tracep->fullCData(oldp+536,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__latched_jtag_ir_neg),4);
        tracep->fullBit(oldp+537,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__instruction_tdo));
        tracep->fullBit(oldp+538,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__idcode_tdo));
        tracep->fullBit(oldp+539,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__bypassed_tdo));
        tracep->fullCData(oldp+540,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg0),8);
        tracep->fullCData(oldp+541,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg1),8);
        tracep->fullCData(oldp+542,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg2),8);
        tracep->fullCData(oldp+543,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg3),8);
        tracep->fullCData(oldp+544,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg4),8);
        tracep->fullCData(oldp+545,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg5),8);
        tracep->fullCData(oldp+546,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg6),8);
        tracep->fullCData(oldp+547,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg7),8);
        tracep->fullCData(oldp+548,(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_uart_dat),8);
        tracep->fullBit(oldp+549,(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_uart_ack));
        tracep->fullBit(oldp+550,(vlSymsp->TOP__or1k_pu.__PVT__or1k_dbg_rst));
        tracep->fullIData(oldp+551,(vlSymsp->TOP__or1k_pu.__PVT__or1k_irq),32);
        tracep->fullBit(oldp+552,(vlSymsp->TOP__or1k_pu.__PVT__uart_irq));
        tracep->fullBit(oldp+553,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__cpu_reset_csff));
        tracep->fullBit(oldp+554,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync_wbff1));
        tracep->fullBit(oldp+555,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync_wbff2));
        tracep->fullBit(oldp+556,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync_wbff2q));
        tracep->fullBit(oldp+557,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__start_toggle));
        tracep->fullBit(oldp+558,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__cpu_fsm_state));
        tracep->fullBit(oldp+559,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__next_fsm_state));
        tracep->fullBit(oldp+560,(((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__ren_sff__DOT__srflop) 
                                   | (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__ren_sff__DOT__syncxor))));
        tracep->fullBit(oldp+561,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wda_rst));
        tracep->fullBit(oldp+562,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wpp));
        tracep->fullBit(oldp+563,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__w_fifo_en));
        tracep->fullBit(oldp+564,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__w_wb_ack));
        tracep->fullBit(oldp+565,(((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wen_sff__DOT__srflop) 
                                   | (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wen_sff__DOT__syncxor))));
        tracep->fullCData(oldp+566,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fsm_state),2);
        tracep->fullCData(oldp+567,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fsm_state),2);
        tracep->fullCData(oldp+568,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__next_wr_fsm_state),2);
        tracep->fullBit(oldp+569,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wen_sff__DOT__sync1));
        tracep->fullBit(oldp+570,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wen_sff__DOT__sync2));
        tracep->fullBit(oldp+571,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wen_sff__DOT__syncprev));
        tracep->fullBit(oldp+572,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wen_sff__DOT__srflop));
        tracep->fullBit(oldp+573,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wen_sff__DOT__syncxor));
        tracep->fullBit(oldp+574,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__ren_sff__DOT__sync1));
        tracep->fullBit(oldp+575,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__ren_sff__DOT__sync2));
        tracep->fullBit(oldp+576,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__ren_sff__DOT__syncprev));
        tracep->fullBit(oldp+577,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__ren_sff__DOT__srflop));
        tracep->fullBit(oldp+578,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__ren_sff__DOT__syncxor));
        tracep->fullBit(oldp+579,(((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__ack_sff__DOT__srflop) 
                                   | (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__ack_sff__DOT__syncxor))));
        tracep->fullBit(oldp+580,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__ack_sff__DOT__sync1));
        tracep->fullBit(oldp+581,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__ack_sff__DOT__sync2));
        tracep->fullBit(oldp+582,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__ack_sff__DOT__syncprev));
        tracep->fullBit(oldp+583,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__ack_sff__DOT__srflop));
        tracep->fullBit(oldp+584,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__ack_sff__DOT__syncxor));
        tracep->fullBit(oldp+585,(((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__ack_sff__DOT__srflop) 
                                   | (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__ack_sff__DOT__syncxor))));
        tracep->fullBit(oldp+586,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__ack_sff__DOT__sync1));
        tracep->fullBit(oldp+587,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__ack_sff__DOT__sync2));
        tracep->fullBit(oldp+588,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__ack_sff__DOT__syncprev));
        tracep->fullBit(oldp+589,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__ack_sff__DOT__srflop));
        tracep->fullBit(oldp+590,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__ack_sff__DOT__syncxor));
        tracep->fullBit(oldp+591,((1U & (((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__mcr) 
                                          >> 4U) | 
                                         ((~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lcr) 
                                              >> 6U)) 
                                          & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__stx_o_tmp))))));
        tracep->fullBit(oldp+592,((1U & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__mcr) 
                                         >> 1U))));
        tracep->fullBit(oldp+593,((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__mcr))));
        tracep->fullBit(oldp+594,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__enable));
        tracep->fullCData(oldp+595,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_dat_is),8);
        tracep->fullCData(oldp+596,((0xffU & ((4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_adr_is))
                                               ? ((2U 
                                                   & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_adr_is))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_adr_is))
                                                    ? (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__scratch)
                                                    : (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__msr))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_adr_is))
                                                    ? (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr)
                                                    : 0U))
                                               : ((2U 
                                                   & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_adr_is))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_adr_is))
                                                    ? (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lcr)
                                                    : 
                                                   (0xc0U 
                                                    | (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__iir)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_adr_is))
                                                    ? 
                                                   ((0x80U 
                                                     & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lcr))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__dl) 
                                                     >> 8U)
                                                     : (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__ier))
                                                    : 
                                                   ((0x80U 
                                                     & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lcr))
                                                     ? (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__dl)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rf_data_out) 
                                                     >> 3U))))))),8);
        tracep->fullCData(oldp+597,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_adr_is),3);
        tracep->fullBit(oldp+598,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__we_o));
        tracep->fullBit(oldp+599,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__re_o));
        tracep->fullBit(oldp+600,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_we_is));
        tracep->fullBit(oldp+601,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_cyc_is));
        tracep->fullBit(oldp+602,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wb_stb_is));
        tracep->fullBit(oldp+603,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wre));
        tracep->fullCData(oldp+604,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_interface__DOT__wbstate),2);
        tracep->fullBit(oldp+605,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__srx_pad));
        tracep->fullCData(oldp+606,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__ier),4);
        tracep->fullCData(oldp+607,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__iir),4);
        tracep->fullCData(oldp+608,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__fcr),2);
        tracep->fullCData(oldp+609,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__mcr),5);
        tracep->fullCData(oldp+610,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lcr),8);
        tracep->fullCData(oldp+611,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__msr),8);
        tracep->fullSData(oldp+612,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__dl),16);
        tracep->fullCData(oldp+613,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__scratch),8);
        tracep->fullBit(oldp+614,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__start_dlc));
        tracep->fullBit(oldp+615,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr_mask_d));
        tracep->fullBit(oldp+616,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__msi_reset));
        tracep->fullSData(oldp+617,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__dlc),16);
        tracep->fullCData(oldp+618,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__trigger_level),4);
        tracep->fullBit(oldp+619,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rx_reset));
        tracep->fullBit(oldp+620,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__tx_reset));
        tracep->fullBit(oldp+621,((1U & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lcr) 
                                         >> 7U))));
        tracep->fullBit(oldp+622,((1U & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__mcr) 
                                         >> 4U))));
        tracep->fullBit(oldp+623,((1U & (((0x10U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__mcr))
                                           ? ((0xcU 
                                               & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__mcr) 
                                                  << 2U)) 
                                              | ((2U 
                                                  & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__mcr) 
                                                     >> 1U)) 
                                                 | (1U 
                                                    & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__mcr) 
                                                       >> 3U))))
                                           : 0U) >> 3U))));
        tracep->fullBit(oldp+624,((1U & (((0x10U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__mcr))
                                           ? ((0xcU 
                                               & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__mcr) 
                                                  << 2U)) 
                                              | ((2U 
                                                  & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__mcr) 
                                                     >> 1U)) 
                                                 | (1U 
                                                    & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__mcr) 
                                                       >> 3U))))
                                           : 0U) >> 2U))));
        tracep->fullBit(oldp+625,((1U & (((0x10U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__mcr))
                                           ? ((0xcU 
                                               & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__mcr) 
                                                  << 2U)) 
                                              | ((2U 
                                                  & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__mcr) 
                                                     >> 1U)) 
                                                 | (1U 
                                                    & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__mcr) 
                                                       >> 3U))))
                                           : 0U) >> 1U))));
        tracep->fullBit(oldp+626,(((0x10U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__mcr))
                                    ? (1U & ((0xcU 
                                              & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__mcr) 
                                                 << 2U)) 
                                             | ((2U 
                                                 & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__mcr) 
                                                    >> 1U)) 
                                                | (1U 
                                                   & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__mcr) 
                                                      >> 3U)))))
                                    : 0U)));
        tracep->fullCData(oldp+627,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr),8);
        tracep->fullBit(oldp+628,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr0));
        tracep->fullBit(oldp+629,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rf_overrun));
        tracep->fullBit(oldp+630,((1U & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rf_data_out) 
                                         >> 1U))));
        tracep->fullBit(oldp+631,((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rf_data_out))));
        tracep->fullBit(oldp+632,((1U & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rf_data_out) 
                                         >> 2U))));
        tracep->fullBit(oldp+633,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr5));
        tracep->fullBit(oldp+634,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr6));
        tracep->fullBit(oldp+635,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr7));
        tracep->fullBit(oldp+636,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr0r));
        tracep->fullBit(oldp+637,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr1r));
        tracep->fullBit(oldp+638,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr2r));
        tracep->fullBit(oldp+639,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr3r));
        tracep->fullBit(oldp+640,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr4r));
        tracep->fullBit(oldp+641,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr5r));
        tracep->fullBit(oldp+642,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr6r));
        tracep->fullBit(oldp+643,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr7r));
        tracep->fullBit(oldp+644,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr_mask));
        tracep->fullBit(oldp+645,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rls_int));
        tracep->fullBit(oldp+646,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rda_int));
        tracep->fullBit(oldp+647,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__ti_int));
        tracep->fullBit(oldp+648,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__thre_int));
        tracep->fullBit(oldp+649,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__ms_int));
        tracep->fullBit(oldp+650,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__tf_push));
        tracep->fullBit(oldp+651,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rf_pop));
        tracep->fullSData(oldp+652,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rf_data_out),11);
        tracep->fullBit(oldp+653,((0U != ((((((((((
                                                   (((((vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                        [0U] 
                                                        | vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                        [1U]) 
                                                       | vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                       [2U]) 
                                                      | vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                      [3U]) 
                                                     | vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                     [4U]) 
                                                    | vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                    [5U]) 
                                                   | vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                   [6U]) 
                                                  | vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                  [7U]) 
                                                 | vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                 [8U]) 
                                                | vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                [9U]) 
                                               | vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                               [0xaU]) 
                                              | vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                              [0xbU]) 
                                             | vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                             [0xcU]) 
                                            | vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                            [0xdU]) 
                                           | vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                           [0xeU]) 
                                          | vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                          [0xfU]))));
        tracep->fullBit(oldp+654,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rf_push_pulse));
        tracep->fullCData(oldp+655,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rf_count),5);
        tracep->fullCData(oldp+656,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__tf_count),5);
        tracep->fullCData(oldp+657,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__tstate),3);
        tracep->fullCData(oldp+658,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rstate),4);
        tracep->fullSData(oldp+659,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__counter_t),10);
        tracep->fullBit(oldp+660,((1U & (~ (IData)(
                                                   (0U 
                                                    != (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__block_cnt)))))));
        tracep->fullCData(oldp+661,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__block_cnt),8);
        tracep->fullCData(oldp+662,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__block_value),8);
        tracep->fullBit(oldp+663,(((~ ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lcr) 
                                       >> 6U)) & (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__stx_o_tmp))));
        tracep->fullBit(oldp+664,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__serial_in));
        tracep->fullBit(oldp+665,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr_mask_condition));
        tracep->fullBit(oldp+666,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__iir_read));
        tracep->fullBit(oldp+667,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__msr_read));
        tracep->fullBit(oldp+668,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__fifo_read));
        tracep->fullBit(oldp+669,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__fifo_write));
        tracep->fullCData(oldp+670,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__delayed_modem_signals),4);
        tracep->fullBit(oldp+671,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr0_d));
        tracep->fullBit(oldp+672,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr1_d));
        tracep->fullBit(oldp+673,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr2_d));
        tracep->fullBit(oldp+674,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr3_d));
        tracep->fullBit(oldp+675,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr4_d));
        tracep->fullBit(oldp+676,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr5_d));
        tracep->fullBit(oldp+677,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr6_d));
        tracep->fullBit(oldp+678,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__lsr7_d));
        tracep->fullBit(oldp+679,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rls_int_d));
        tracep->fullBit(oldp+680,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__thre_int_d));
        tracep->fullBit(oldp+681,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__ms_int_d));
        tracep->fullBit(oldp+682,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__ti_int_d));
        tracep->fullBit(oldp+683,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rda_int_d));
        tracep->fullBit(oldp+684,(((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rls_int) 
                                   & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rls_int_d)))));
        tracep->fullBit(oldp+685,(((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__thre_int) 
                                   & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__thre_int_d)))));
        tracep->fullBit(oldp+686,(((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__ms_int) 
                                   & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__ms_int_d)))));
        tracep->fullBit(oldp+687,(((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__ti_int) 
                                   & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__ti_int_d)))));
        tracep->fullBit(oldp+688,(((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rda_int) 
                                   & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rda_int_d)))));
        tracep->fullBit(oldp+689,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rls_int_pnd));
        tracep->fullBit(oldp+690,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__rda_int_pnd));
        tracep->fullBit(oldp+691,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__thre_int_pnd));
        tracep->fullBit(oldp+692,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__ms_int_pnd));
        tracep->fullBit(oldp+693,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__ti_int_pnd));
        tracep->fullCData(oldp+694,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__counter),5);
        tracep->fullCData(oldp+695,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__bit_counter),3);
        tracep->fullCData(oldp+696,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__shift_out),7);
        tracep->fullBit(oldp+697,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__stx_o_tmp));
        tracep->fullBit(oldp+698,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__parity_xor));
        tracep->fullBit(oldp+699,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__tf_pop));
        tracep->fullBit(oldp+700,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__bit_out));
        tracep->fullCData(oldp+701,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__tf_data_out),8);
        tracep->fullBit(oldp+702,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__tf_overrun));
        tracep->fullCData(oldp+703,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
        tracep->fullCData(oldp+704,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
        tracep->fullCData(oldp+705,((0xfU & ((IData)(1U) 
                                             + (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
        tracep->fullBit(oldp+706,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__i_uart_sync_flops__DOT__flop_0));
        tracep->fullCData(oldp+707,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rcounter16),4);
        tracep->fullCData(oldp+708,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rbit_counter),3);
        tracep->fullCData(oldp+709,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rshift),8);
        tracep->fullBit(oldp+710,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rparity));
        tracep->fullBit(oldp+711,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rparity_error));
        tracep->fullBit(oldp+712,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rframing_error));
        tracep->fullBit(oldp+713,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rparity_xor));
        tracep->fullCData(oldp+714,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__counter_b),8);
        tracep->fullBit(oldp+715,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rf_push_q));
        tracep->fullSData(oldp+716,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rf_data_in),11);
        tracep->fullBit(oldp+717,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rf_push));
        tracep->fullBit(oldp+718,((0U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__counter_b))));
        tracep->fullBit(oldp+719,((7U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rcounter16))));
        tracep->fullBit(oldp+720,((0U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rcounter16))));
        tracep->fullCData(oldp+721,((0xfU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rcounter16) 
                                             - (IData)(1U)))),4);
        tracep->fullSData(oldp+722,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__toc_value),10);
        tracep->fullCData(oldp+723,((0xffU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__toc_value) 
                                              >> 2U))),8);
        tracep->fullCData(oldp+724,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
        tracep->fullCData(oldp+725,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
        tracep->fullCData(oldp+726,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
        tracep->fullCData(oldp+727,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
        tracep->fullCData(oldp+728,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
        tracep->fullCData(oldp+729,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
        tracep->fullCData(oldp+730,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
        tracep->fullCData(oldp+731,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
        tracep->fullCData(oldp+732,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
        tracep->fullCData(oldp+733,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
        tracep->fullCData(oldp+734,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
        tracep->fullCData(oldp+735,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
        tracep->fullCData(oldp+736,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
        tracep->fullCData(oldp+737,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
        tracep->fullCData(oldp+738,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
        tracep->fullCData(oldp+739,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
        tracep->fullCData(oldp+740,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
        tracep->fullCData(oldp+741,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
        tracep->fullCData(oldp+742,((0xfU & ((IData)(1U) 
                                             + (IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
        tracep->fullCData(oldp+743,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                    [0U]),3);
        tracep->fullCData(oldp+744,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                    [1U]),3);
        tracep->fullCData(oldp+745,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                    [2U]),3);
        tracep->fullCData(oldp+746,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                    [3U]),3);
        tracep->fullCData(oldp+747,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                    [4U]),3);
        tracep->fullCData(oldp+748,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                    [5U]),3);
        tracep->fullCData(oldp+749,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                    [6U]),3);
        tracep->fullCData(oldp+750,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                    [7U]),3);
        tracep->fullCData(oldp+751,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                    [8U]),3);
        tracep->fullCData(oldp+752,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                    [9U]),3);
        tracep->fullCData(oldp+753,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                    [0xaU]),3);
        tracep->fullCData(oldp+754,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                    [0xbU]),3);
        tracep->fullCData(oldp+755,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                    [0xcU]),3);
        tracep->fullCData(oldp+756,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                    [0xdU]),3);
        tracep->fullCData(oldp+757,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                    [0xeU]),3);
        tracep->fullCData(oldp+758,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                    [0xfU]),3);
        tracep->fullCData(oldp+759,((0xffU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__rf_data_in) 
                                              >> 3U))),8);
        tracep->fullIData(oldp+760,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr),32);
        tracep->fullIData(oldp+761,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__irq_unmasked),32);
        tracep->fullBit(oldp+762,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__debug_select));
        tracep->fullBit(oldp+763,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__shift_dr));
        tracep->fullBit(oldp+764,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__pause_dr));
        tracep->fullBit(oldp+765,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__update_dr));
        tracep->fullBit(oldp+766,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__capture_dr));
        tracep->fullIData(oldp+767,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__addr_reg),32);
        tracep->fullIData(oldp+768,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_in_reg),32);
        tracep->fullBit(oldp+769,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__wr_reg));
        tracep->fullBit(oldp+770,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__extest_select));
        tracep->fullBit(oldp+771,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__sample_preload_select));
        tracep->fullBit(oldp+772,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__mbist_select));
        tracep->fullBit(oldp+773,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__test_logic_reset));
        tracep->fullBit(oldp+774,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__run_test_idle));
        tracep->fullBit(oldp+775,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__select_dr_scan));
        tracep->fullBit(oldp+776,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__exit1_dr));
        tracep->fullBit(oldp+777,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__exit2_dr));
        tracep->fullBit(oldp+778,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__select_ir_scan));
        tracep->fullBit(oldp+779,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__capture_ir));
        tracep->fullBit(oldp+780,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__shift_ir));
        tracep->fullBit(oldp+781,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__exit1_ir));
        tracep->fullBit(oldp+782,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__pause_ir));
        tracep->fullBit(oldp+783,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__exit2_ir));
        tracep->fullBit(oldp+784,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__update_ir));
        tracep->fullBit(oldp+785,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__idcode_select));
        tracep->fullBit(oldp+786,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__bypass_select));
        tracep->fullCData(oldp+787,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__jtag_ir),4);
        tracep->fullCData(oldp+788,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__latched_jtag_ir),4);
        tracep->fullBit(oldp+789,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__bypass_reg));
        tracep->fullBit(oldp+790,((1U & ((0U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__tdo_output_sel))
                                          ? (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__biu_ready)
                                          : ((1U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__tdo_output_sel))
                                              ? vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__data_out_shift_reg
                                              : ((2U 
                                                  == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__tdo_output_sel))
                                                  ? 
                                                 ((IData)(
                                                          (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                                           >> 0x15U)) 
                                                  == vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc)
                                                  : vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc))))));
        tracep->fullBit(oldp+791,((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__data_out_shift_reg))));
        tracep->fullQData(oldp+792,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg),53);
        tracep->fullCData(oldp+794,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__module_id_reg),2);
        tracep->fullBit(oldp+795,((1U & (IData)((vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                                 >> 0x34U)))));
        tracep->fullCData(oldp+796,((3U & (IData)((vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                                   >> 0x32U)))),2);
        tracep->fullCData(oldp+797,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__module_selects),4);
        tracep->fullBit(oldp+798,((0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__module_inhibit))));
        tracep->fullCData(oldp+799,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__module_inhibit),4);
        tracep->fullBit(oldp+800,((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__module_selects))));
        tracep->fullBit(oldp+801,(vlSymsp->TOP__or1k_pu.dbg_if0__DOT____Vcellout__wb__DOT__i_dbg_wb__top_inhibit_o));
        tracep->fullIData(oldp+802,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__address_counter),32);
        tracep->fullCData(oldp+803,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__bit_count),6);
        tracep->fullSData(oldp+804,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_count),16);
        tracep->fullCData(oldp+805,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__operation),4);
        tracep->fullQData(oldp+806,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__data_out_shift_reg),33);
        tracep->fullQData(oldp+808,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__internal_reg_error),33);
        tracep->fullBit(oldp+810,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__internal_register_select));
        tracep->fullBit(oldp+811,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__out_reg_shift_en));
        tracep->fullBit(oldp+812,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__crc_shift_en));
        tracep->fullBit(oldp+813,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__regsel_ld_en));
        tracep->fullBit(oldp+814,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__intreg_ld_en));
        tracep->fullBit(oldp+815,((0U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_count))));
        tracep->fullBit(oldp+816,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__bit_count_max));
        tracep->fullBit(oldp+817,((1U & (~ (IData)(
                                                   (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                                    >> 0x34U))))));
        tracep->fullBit(oldp+818,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__burst_instruction));
        tracep->fullBit(oldp+819,(((9U == (0xfU & (IData)(
                                                          (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                                           >> 0x30U)))) 
                                   | (0xdU == (0xfU 
                                               & (IData)(
                                                         (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                                          >> 0x30U)))))));
        tracep->fullBit(oldp+820,((9U == (0xfU & (IData)(
                                                         (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                                          >> 0x30U))))));
        tracep->fullBit(oldp+821,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__rd_op));
        tracep->fullBit(oldp+822,(((IData)((vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                            >> 0x15U)) 
                                   == vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc)));
        tracep->fullBit(oldp+823,((0x20U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__bit_count))));
        tracep->fullCData(oldp+824,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_size_bits),6);
        tracep->fullCData(oldp+825,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_size_bytes),3);
        tracep->fullQData(oldp+826,((0x1ffffffffULL 
                                     & ((QData)((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__address_counter)) 
                                        + (QData)((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_size_bytes))))),33);
        tracep->fullSData(oldp+828,((0xffffU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_count) 
                                                - (IData)(1U)))),16);
        tracep->fullIData(oldp+829,((IData)((vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                             >> 0x10U))),32);
        tracep->fullSData(oldp+830,((0xffffU & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg))),16);
        tracep->fullCData(oldp+831,((0xfU & (IData)(
                                                    (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                                     >> 0x30U)))),4);
        tracep->fullIData(oldp+832,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc),32);
        tracep->fullBit(oldp+833,((1U & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc)));
        tracep->fullBit(oldp+834,((1U & (IData)((vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                                 >> 0x2fU)))));
        tracep->fullCData(oldp+835,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_state),4);
        tracep->fullBit(oldp+836,((1U & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__module_selects) 
                                         >> 1U))));
        tracep->fullBit(oldp+837,(vlSymsp->TOP__or1k_pu.dbg_if0__DOT____Vcellout__cpu0__DOT__i_dbg_cpu_or1k__top_inhibit_o));
        tracep->fullIData(oldp+838,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__address_counter),32);
        tracep->fullCData(oldp+839,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__bit_count),6);
        tracep->fullSData(oldp+840,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__word_count),16);
        tracep->fullCData(oldp+841,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__operation),4);
        tracep->fullIData(oldp+842,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__data_out_shift_reg),32);
        tracep->fullBit(oldp+843,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__internal_register_select));
        tracep->fullBit(oldp+844,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__addr_sel));
        tracep->fullBit(oldp+845,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__addr_ct_en));
        tracep->fullBit(oldp+846,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__op_reg_en));
        tracep->fullBit(oldp+847,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__bit_ct_en));
        tracep->fullBit(oldp+848,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__bit_ct_rst));
        tracep->fullBit(oldp+849,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__word_ct_sel));
        tracep->fullBit(oldp+850,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__word_ct_en));
        tracep->fullBit(oldp+851,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__out_reg_ld_en));
        tracep->fullBit(oldp+852,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__out_reg_shift_en));
        tracep->fullBit(oldp+853,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__out_reg_data_sel));
        tracep->fullCData(oldp+854,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__tdo_output_sel),2);
        tracep->fullBit(oldp+855,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__biu_strobe));
        tracep->fullBit(oldp+856,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__crc_clr));
        tracep->fullBit(oldp+857,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__crc_en));
        tracep->fullBit(oldp+858,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__crc_in_sel));
        tracep->fullBit(oldp+859,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__crc_shift_en));
        tracep->fullBit(oldp+860,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__regsel_ld_en));
        tracep->fullBit(oldp+861,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__intreg_ld_en));
        tracep->fullBit(oldp+862,((0U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__word_count))));
        tracep->fullBit(oldp+863,((0x1fU == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__bit_count))));
        tracep->fullBit(oldp+864,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__biu_ready));
        tracep->fullBit(oldp+865,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__burst_instruction));
        tracep->fullBit(oldp+866,((1U & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__operation) 
                                         >> 2U))));
        tracep->fullBit(oldp+867,(((IData)((vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                            >> 0x15U)) 
                                   == vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc)));
        tracep->fullBit(oldp+868,((0x20U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__bit_count))));
        tracep->fullQData(oldp+869,((0x1ffffffffULL 
                                     & (1ULL + (QData)((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__address_counter))))),33);
        tracep->fullIData(oldp+871,(((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__addr_sel)
                                      ? ((IData)(1U) 
                                         + vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__address_counter)
                                      : (IData)((vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                                 >> 0x10U)))),32);
        tracep->fullSData(oldp+872,((0xffffU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__word_ct_sel)
                                                 ? 
                                                ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__word_count) 
                                                 - (IData)(1U))
                                                 : (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg)))),16);
        tracep->fullSData(oldp+873,((0xffffU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__word_count) 
                                                - (IData)(1U)))),16);
        tracep->fullIData(oldp+874,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc),32);
        tracep->fullBit(oldp+875,((1U & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc)));
        tracep->fullBit(oldp+876,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__status_reg_wr));
        tracep->fullCData(oldp+877,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_state),4);
        tracep->fullCData(oldp+878,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__module_next_state),4);
        tracep->fullCData(oldp+879,((3U & (IData)((vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                                   >> 0x2dU)))),2);
        tracep->fullBit(oldp+880,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__cpu_reset));
        tracep->fullBit(oldp+881,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp_csff));
        tracep->fullBit(oldp+882,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp_tck));
        tracep->fullBit(oldp+883,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__str_sync));
        tracep->fullBit(oldp+884,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_tff1));
        tracep->fullBit(oldp+885,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_tff2));
        tracep->fullBit(oldp+886,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_tff2q));
        tracep->fullBit(oldp+887,((1U & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__module_selects) 
                                         >> 3U))));
        tracep->fullCData(oldp+888,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__read_bit_count),4);
        tracep->fullCData(oldp+889,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__write_bit_count),4);
        tracep->fullCData(oldp+890,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__input_word_count),4);
        tracep->fullCData(oldp+891,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__output_word_count),4);
        tracep->fullCData(oldp+892,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__user_word_count),4);
        tracep->fullCData(oldp+893,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__data_out_shift_reg),8);
        tracep->fullBit(oldp+894,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_bit_ct_en));
        tracep->fullBit(oldp+895,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_bit_ct_rst));
        tracep->fullBit(oldp+896,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__wr_bit_ct_en));
        tracep->fullBit(oldp+897,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__in_word_ct_sel));
        tracep->fullBit(oldp+898,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__out_word_ct_sel));
        tracep->fullBit(oldp+899,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__out_word_ct_en));
        tracep->fullBit(oldp+900,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__user_word_ct_en));
        tracep->fullBit(oldp+901,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__user_word_ct_sel));
        tracep->fullBit(oldp+902,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__out_reg_ld_en));
        tracep->fullBit(oldp+903,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__out_reg_shift_en));
        tracep->fullBit(oldp+904,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__out_reg_data_sel));
        tracep->fullBit(oldp+905,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__biu_rd_strobe));
        tracep->fullBit(oldp+906,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__biu_wr_strobe));
        tracep->fullBit(oldp+907,((0U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__input_word_count))));
        tracep->fullBit(oldp+908,((0U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__output_word_count))));
        tracep->fullBit(oldp+909,((0U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__user_word_count))));
        tracep->fullBit(oldp+910,((7U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__read_bit_count))));
        tracep->fullBit(oldp+911,((7U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__write_bit_count))));
        tracep->fullCData(oldp+912,((0xfU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__in_word_ct_sel)
                                              ? ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__input_word_count) 
                                                 - (IData)(1U))
                                              : (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__regB)))),4);
        tracep->fullCData(oldp+913,((0xfU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__out_word_ct_sel)
                                              ? ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__output_word_count) 
                                                 - (IData)(1U))
                                              : (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__regB)))),4);
        tracep->fullCData(oldp+914,((0xfU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__input_word_count) 
                                             - (IData)(1U)))),4);
        tracep->fullCData(oldp+915,((0xfU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__output_word_count) 
                                             - (IData)(1U)))),4);
        tracep->fullCData(oldp+916,((0xfU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__user_word_count) 
                                             - (IData)(1U)))),4);
        tracep->fullCData(oldp+917,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__regB),4);
        tracep->fullCData(oldp+918,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__regB),4);
        tracep->fullCData(oldp+919,((((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__regB) 
                                      << 4U) | (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__regB))),8);
        tracep->fullCData(oldp+920,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__wr_module_state),3);
        tracep->fullCData(oldp+921,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_module_state),3);
        tracep->fullCData(oldp+922,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__rd_module_next_state),3);
        tracep->fullCData(oldp+923,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__data_in),8);
        tracep->fullBit(oldp+924,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wen_tff));
        tracep->fullBit(oldp+925,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__ren_tff));
        tracep->fullBit(oldp+926,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__ack_toggle));
        tracep->fullBit(oldp+927,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__strobe_sff_out));
        tracep->fullBit(oldp+928,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__strobe_sff__DOT__sync1));
        tracep->fullBit(oldp+929,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__strobe_sff__DOT__sync2));
        tracep->fullBit(oldp+930,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__strobe_sff__DOT__syncprev));
        tracep->fullBit(oldp+931,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__strobe_sff__DOT__srflop));
        tracep->fullBit(oldp+932,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__strobe_sff__DOT__syncxor));
        tracep->fullBit(oldp+933,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__ack_toggle));
        tracep->fullBit(oldp+934,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__strobe_sff_out));
        tracep->fullBit(oldp+935,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__strobe_sff__DOT__sync1));
        tracep->fullBit(oldp+936,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__strobe_sff__DOT__sync2));
        tracep->fullBit(oldp+937,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__strobe_sff__DOT__syncprev));
        tracep->fullBit(oldp+938,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__strobe_sff__DOT__srflop));
        tracep->fullBit(oldp+939,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__strobe_sff__DOT__syncxor));
        tracep->fullSData(oldp+940,((0xffffU & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__addr_reg)),16);
        tracep->fullBit(oldp+941,(vlSymsp->TOP__or1k_pu.__PVT__or1k_rst));
        tracep->fullBit(oldp+942,(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__tms_reset));
        tracep->fullIData(oldp+943,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__data_to_biu),32);
        tracep->fullBit(oldp+944,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__crc_data_in));
        tracep->fullBit(oldp+945,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_rst));
        tracep->fullBit(oldp+946,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__crc_data_in));
        tracep->fullBit(oldp+947,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__wr_bit_ct_rst));
        tracep->fullBit(oldp+948,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__in_word_ct_en));
        tracep->fullCData(oldp+949,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__wr_module_next_state),3);
        tracep->fullBit(oldp+950,(vlSymsp->TOP__or1k_pu.dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__wr_fifo__RST));
        tracep->fullBit(oldp+951,(vlSymsp->TOP__or1k_pu.dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT____Vcellinp__rd_fifo__RST));
        tracep->fullIData(oldp+952,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__pc_addr),32);
        tracep->fullIData(oldp+953,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ic_addr),32);
        tracep->fullCData(oldp+954,((0xffU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ic_addr 
                                              >> 5U))),8);
        tracep->fullSData(oldp+955,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_raddr[0]),11);
        tracep->fullSData(oldp+956,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_raddr[1]),11);
        tracep->fullSData(oldp+957,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_raddr
                                    [0U]),11);
        tracep->fullSData(oldp+958,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_raddr
                                    [1U]),11);
        tracep->fullCData(oldp+959,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_addr),6);
        tracep->fullCData(oldp+960,((0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ic_addr 
                                              >> 0x18U))),6);
        tracep->fullCData(oldp+961,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_addr),6);
        tracep->fullIData(oldp+962,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_adr),32);
        tracep->fullIData(oldp+963,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat),32);
        tracep->fullCData(oldp+964,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_bsel_o),4);
        tracep->fullBit(oldp+965,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_we_o));
        tracep->fullBit(oldp+966,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_req_o));
        tracep->fullCData(oldp+967,((((4U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__state)) 
                                      & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__refill_done)))
                                      ? 2U : 7U)),3);
        tracep->fullBit(oldp+968,(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_or1k_d_err));
        tracep->fullBit(oldp+969,(0U));
        tracep->fullBit(oldp+970,(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_or1k_i_err));
        tracep->fullIData(oldp+971,(vlSymsp->TOP__or1k_pu.__PVT__wb_m2s_uart_adr),32);
        tracep->fullCData(oldp+972,((0xffU & ((8U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_bsel_o))
                                               ? (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat 
                                                  >> 0x18U)
                                               : ((4U 
                                                   & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_bsel_o))
                                                   ? 
                                                  (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat 
                                                   >> 0x10U)
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_bsel_o))
                                                    ? 
                                                   (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat 
                                                    >> 8U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_bsel_o))
                                                     ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat
                                                     : 0U)))))),8);
        tracep->fullBit(oldp+973,((1U & (IData)(vlSymsp->TOP__or1k_pu.wb_interface0__DOT____Vcellout__wb_mux_or1k_d__wbs_cyc_o))));
        tracep->fullBit(oldp+974,((1U & ((IData)(vlSymsp->TOP__or1k_pu.wb_interface0__DOT____Vcellout__wb_mux_or1k_d__wbs_cyc_o) 
                                         >> 1U))));
        tracep->fullQData(oldp+975,((((QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_adr)) 
                                      << 0x20U) | (QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_adr)))),64);
        tracep->fullQData(oldp+977,((((QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat)) 
                                      << 0x20U) | (QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat)))),64);
        tracep->fullCData(oldp+979,((0xffU & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_bsel_o) 
                                               << 4U) 
                                              | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_bsel_o)))),8);
        tracep->fullCData(oldp+980,((3U & (- (IData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_we_o))))),2);
        tracep->fullCData(oldp+981,(vlSymsp->TOP__or1k_pu.wb_interface0__DOT____Vcellout__wb_mux_or1k_d__wbs_cyc_o),2);
        tracep->fullCData(oldp+982,((3U & (- (IData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_req_o))))),2);
        tracep->fullCData(oldp+983,((0x3fU & (((((4U 
                                                  == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__state)) 
                                                 & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__refill_done)))
                                                 ? 2U
                                                 : 7U) 
                                               << 3U) 
                                              | (((4U 
                                                   == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__state)) 
                                                  & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__refill_done)))
                                                  ? 2U
                                                  : 7U)))),6);
        tracep->fullBit(oldp+984,(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_mux_or1k_d__DOT__slave_sel));
        tracep->fullCData(oldp+985,(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_mux_or1k_d__DOT__match),2);
        tracep->fullCData(oldp+986,((7U & vlSymsp->TOP__or1k_pu.__PVT__wb_m2s_uart_adr)),3);
        tracep->fullBit(oldp+987,(((4U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__state)) 
                                   & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__refill_done)))));
        tracep->fullSData(oldp+988,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr),16);
        tracep->fullBit(oldp+989,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_flag_o));
        tracep->fullIData(oldp+990,(((0xfc00U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr)) 
                                     | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_flag_o) 
                                         << 9U) | (0x1ffU 
                                                   & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr))))),32);
        tracep->fullBit(oldp+991,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__branch_mispredict_o));
        tracep->fullIData(oldp+992,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode),32);
        tracep->fullIData(oldp+993,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__adder_result),32);
        tracep->fullIData(oldp+994,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__alu_result_o),32);
        tracep->fullBit(oldp+995,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_align_o));
        tracep->fullBit(oldp+996,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dbus_o));
        tracep->fullBit(oldp+997,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dpagefault_o));
        tracep->fullBit(oldp+998,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dtlb_miss_o));
        tracep->fullIData(oldp+999,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_adr_o),32);
        tracep->fullBit(oldp+1000,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_lsu_load_o));
        tracep->fullBit(oldp+1001,((((0x38U == (0x3fU 
                                                & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                   >> 0x1aU))) 
                                     & (1U == (0xfU 
                                               & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode))) 
                                    | (0x28U == (0x3fU 
                                                 & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                    >> 0x1aU))))));
        tracep->fullBit(oldp+1002,((((0x38U == (0x3fU 
                                                & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                   >> 0x1aU))) 
                                     & (2U == (0xfU 
                                               & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode))) 
                                    | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_setflag_o))));
        tracep->fullIData(oldp+1003,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_branch_target_o),32);
        tracep->fullBit(oldp+1004,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_except_illegal_o));
        tracep->fullBit(oldp+1005,(((8U == (0x3fU & 
                                            (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                             >> 0x1aU))) 
                                    & (0U == (7U & 
                                              (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                               >> 0x17U))))));
        tracep->fullBit(oldp+1006,(((8U == (0x3fU & 
                                            (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                             >> 0x1aU))) 
                                    & (2U == (7U & 
                                              (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                               >> 0x17U))))));
        tracep->fullSData(oldp+1007,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_imm16_o),16);
        tracep->fullIData(oldp+1008,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_immediate_o),32);
        tracep->fullBit(oldp+1009,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_immediate_sel_o));
        tracep->fullSData(oldp+1010,((0x3ffU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                >> 0x10U))),10);
        tracep->fullCData(oldp+1011,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_lsu_length_o),2);
        tracep->fullBit(oldp+1012,((1U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                          >> 0x1aU))));
        tracep->fullBit(oldp+1013,(((((0x38U == (0x3fU 
                                                 & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                    >> 0x1aU))) 
                                      & (((1U == (0xfU 
                                                  & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode)) 
                                          | (0U == 
                                             (0xfU 
                                              & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode))) 
                                         | (2U == (0xfU 
                                                   & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode)))) 
                                     | (0x28U == (0x3fU 
                                                  & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                     >> 0x1aU)))) 
                                    | (0x27U == (0x3fU 
                                                 & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                    >> 0x1aU))))));
        tracep->fullBit(oldp+1014,(((((0x38U == (0x3fU 
                                                 & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                    >> 0x1aU))) 
                                      | (0x2aU == (0x3fU 
                                                   & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                      >> 0x1aU)))) 
                                     | (0x29U == (0x3fU 
                                                  & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                     >> 0x1aU)))) 
                                    | (0x2bU == (0x3fU 
                                                 & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                    >> 0x1aU))))));
        tracep->fullBit(oldp+1015,((4U == (0x3fU & 
                                           (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                            >> 0x1aU)))));
        tracep->fullBit(oldp+1016,((3U == (0x3fU & 
                                           (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                            >> 0x1aU)))));
        tracep->fullBit(oldp+1017,((((5U > (0x3fU & 
                                            (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                             >> 0x1aU))) 
                                     | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_jr_o)) 
                                    | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_jal_o))));
        tracep->fullBit(oldp+1018,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_brcond_o));
        tracep->fullBit(oldp+1019,(((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_div_signed_o) 
                                    | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_div_unsigned_o))));
        tracep->fullBit(oldp+1020,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_div_signed_o));
        tracep->fullBit(oldp+1021,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_div_unsigned_o));
        tracep->fullBit(oldp+1022,((((0x38U == (0x3fU 
                                                & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                   >> 0x1aU))) 
                                     & ((0U == (3U 
                                                & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                   >> 8U))) 
                                        | (1U == (3U 
                                                  & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                     >> 8U))))) 
                                    & (0xfU == (0xfU 
                                                & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode)))));
        tracep->fullBit(oldp+1023,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_jal_o));
        tracep->fullBit(oldp+1024,((5U > (0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                   >> 0x1aU)))));
        tracep->fullBit(oldp+1025,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_jr_o));
        tracep->fullBit(oldp+1026,(((0x1bU == (0x3fU 
                                               & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                  >> 0x1aU))) 
                                    | (0x33U == (0x3fU 
                                                 & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                    >> 0x1aU))))));
        tracep->fullBit(oldp+1027,(((((2U == (3U & 
                                              (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                               >> 0x1eU))) 
                                      & (~ (IData)(
                                                   (7U 
                                                    == 
                                                    (7U 
                                                     & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                        >> 0x1aU)))))) 
                                     & (~ (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                           >> 0x1dU))) 
                                    | (0x1bU == (0x3fU 
                                                 & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                    >> 0x1aU))))));
        tracep->fullBit(oldp+1028,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_lsu_store_o));
        tracep->fullBit(oldp+1029,((0x2dU == (0x3fU 
                                              & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                 >> 0x1aU)))));
        tracep->fullBit(oldp+1030,((6U == (0x3fU & 
                                           (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                            >> 0x1aU)))));
        tracep->fullBit(oldp+1031,(((8U == (0x3fU & 
                                            (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                             >> 0x1aU))) 
                                    & (4U == (7U & 
                                              (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                               >> 0x17U))))));
        tracep->fullBit(oldp+1032,((0x30U == (0x3fU 
                                              & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                 >> 0x1aU)))));
        tracep->fullBit(oldp+1033,(((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_mul_signed_o) 
                                    | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_mul_unsigned_o))));
        tracep->fullBit(oldp+1034,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_mul_signed_o));
        tracep->fullBit(oldp+1035,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_mul_unsigned_o));
        tracep->fullBit(oldp+1036,((9U == (0x3fU & 
                                           (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                            >> 0x1aU)))));
        tracep->fullBit(oldp+1037,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_setflag_o));
        tracep->fullBit(oldp+1038,((((0x38U == (0x3fU 
                                                & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                   >> 0x1aU))) 
                                     & (8U == (0xfU 
                                               & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode))) 
                                    | (0x2eU == (0x3fU 
                                                 & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                    >> 0x1aU))))));
        tracep->fullCData(oldp+1039,(((0x2aU == (0x3fU 
                                                 & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                    >> 0x1aU)))
                                       ? 4U : ((0x29U 
                                                == 
                                                (0x3fU 
                                                 & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                    >> 0x1aU)))
                                                ? 3U
                                                : (
                                                   (0x2bU 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                        >> 0x1aU)))
                                                    ? 5U
                                                    : 
                                                   (0xfU 
                                                    & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode))))),4);
        tracep->fullCData(oldp+1040,((0xfU & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_setflag_o)
                                               ? (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                  >> 0x15U)
                                               : (7U 
                                                  & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                     >> 6U))))),4);
        tracep->fullCData(oldp+1041,((0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                               >> 0x1aU))),6);
        tracep->fullBit(oldp+1042,(((((((1U == (0x3fU 
                                                & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                   >> 0x1aU))) 
                                        | (6U == (0x3fU 
                                                  & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                     >> 0x1aU)))) 
                                       | (0x12U == 
                                          (0x3fU & 
                                           (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                            >> 0x1aU)))) 
                                      | (0x1bU == (0x3fU 
                                                   & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                      >> 0x1aU)))) 
                                     | ((2U == (3U 
                                                & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                   >> 0x1eU))) 
                                        & (0x2fU != 
                                           (0x3fU & 
                                            (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                             >> 0x1aU))))) 
                                    | ((3U == (3U & 
                                               (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                >> 0x1eU))) 
                                       & (~ (((0x39U 
                                               == (0x3fU 
                                                   & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                      >> 0x1aU))) 
                                              | (0x30U 
                                                 == 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                     >> 0x1aU)))) 
                                             | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_lsu_store_o)))))));
        tracep->fullCData(oldp+1043,((0x1fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                               >> 0x10U))),5);
        tracep->fullCData(oldp+1044,((0x1fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                               >> 0xbU))),5);
        tracep->fullIData(oldp+1045,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_rfb_o),32);
        tracep->fullCData(oldp+1046,(((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_op_jal_o)
                                       ? 9U : (0x1fU 
                                               & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode 
                                                  >> 0x15U)))),5);
        tracep->fullBit(oldp+1047,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_lsu_load_o));
        tracep->fullBit(oldp+1048,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_lsu_store_o));
        tracep->fullBit(oldp+1049,((0U != (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_hit))));
        tracep->fullBit(oldp+1050,(((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__except_dbus) 
                                    | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__store_buffer_err_o))));
        tracep->fullBit(oldp+1051,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__predicted_flag_o));
        tracep->fullBit(oldp+1052,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__invalidate_ack));
        tracep->fullIData(oldp+1053,(((vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_dout[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_dout[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+1054,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__store_buffer_err_o));
        tracep->fullBit(oldp+1055,((1U & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr) 
                                          >> 4U))));
        tracep->fullBit(oldp+1056,((1U & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr) 
                                          >> 6U))));
        tracep->fullBit(oldp+1057,((1U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr))));
        tracep->fullBit(oldp+1058,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ctrl_branch_exception_edge));
        tracep->fullBit(oldp+1059,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__flush));
        tracep->fullBit(oldp+1060,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__imem_err));
        tracep->fullIData(oldp+1061,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ic_dat),32);
        tracep->fullIData(oldp+1062,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ic_addr_match),32);
        tracep->fullBit(oldp+1063,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ic_access));
        tracep->fullBit(oldp+1064,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__tlb_reload_req));
        tracep->fullIData(oldp+1065,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__tlb_reload_addr),32);
        tracep->fullBit(oldp+1066,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__mispredict_stall));
        tracep->fullBit(oldp+1067,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__refill_hit));
        tracep->fullBit(oldp+1068,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_lru_in));
        tracep->fullBit(oldp+1069,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__tag_we));
        tracep->fullIData(oldp+1070,((0x7ffffU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ic_addr_match 
                                                  >> 0xdU))),19);
        tracep->fullCData(oldp+1071,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_hit),2);
        tracep->fullCData(oldp+1072,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__lru),2);
        tracep->fullCData(oldp+1073,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__access),2);
        tracep->fullBit(oldp+1074,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__next_lru_history));
        tracep->fullBit(oldp+1075,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__check_way_match[0]));
        tracep->fullBit(oldp+1076,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__check_way_match[1]));
        tracep->fullCData(oldp+1077,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__gen_u_lru__DOT__u_lru__DOT__lru_post),2);
        tracep->fullCData(oldp+1078,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__gen_u_lru__DOT__u_lru__DOT__expand[0]),2);
        tracep->fullCData(oldp+1079,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__gen_u_lru__DOT__u_lru__DOT__expand[1]),2);
        tracep->fullIData(oldp+1080,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__gen_u_lru__DOT__u_lru__DOT__j),32);
        tracep->fullIData(oldp+1081,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__gen_u_lru__DOT__u_lru__DOT__offset),32);
        tracep->fullCData(oldp+1082,((0xfU & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__insn_fetch_to_decode)),4);
        tracep->fullIData(oldp+1083,(((0xffff0000U 
                                       & ((- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_imm16_o) 
                                                         >> 0xfU)))) 
                                          << 0x10U)) 
                                      | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_imm16_o))),32);
        tracep->fullBit(oldp+1084,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_decode__DOT__imm_sext_sel));
        tracep->fullIData(oldp+1085,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_imm16_o),32);
        tracep->fullBit(oldp+1086,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_decode__DOT__imm_zext_sel));
        tracep->fullIData(oldp+1087,(((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_imm16_o) 
                                      << 0x10U)),32);
        tracep->fullBit(oldp+1088,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_decode_execute_cappuccino__DOT__ctrl_to_decode_interlock));
        tracep->fullBit(oldp+1089,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_decode_execute_cappuccino__DOT__branch_to_imm));
        tracep->fullIData(oldp+1090,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_decode_execute_cappuccino__DOT__branch_to_imm_target),32);
        tracep->fullBit(oldp+1091,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__adder_carryout));
        tracep->fullBit(oldp+1092,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__adder_signed_overflow));
        tracep->fullBit(oldp+1093,((1U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__adder_result 
                                          >> 0x1fU))));
        tracep->fullBit(oldp+1094,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__carry_in));
        tracep->fullBit(oldp+1095,(((1U & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__adder_result 
                                           >> 0x1fU)) 
                                    != (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__adder_signed_overflow))));
        tracep->fullBit(oldp+1096,((1U & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__adder_carryout)))));
        tracep->fullBit(oldp+1097,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__flag_set));
        tracep->fullIData(oldp+1098,(((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_immediate_sel_o)
                                       ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_immediate_o
                                       : vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_rfb_o)),32);
        tracep->fullBit(oldp+1099,((1U & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr) 
                                          >> 3U))));
        tracep->fullBit(oldp+1100,((1U & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr) 
                                          >> 5U))));
        tracep->fullIData(oldp+1101,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat_aligned),32);
        tracep->fullBit(oldp+1102,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__access_done));
        tracep->fullBit(oldp+1103,((0U != (3U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_adr_o))));
        tracep->fullBit(oldp+1104,((1U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_lsu_adr_o)));
        tracep->fullBit(oldp+1105,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__except_align));
        tracep->fullBit(oldp+1106,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__except_dbus));
        tracep->fullBit(oldp+1107,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_ack));
        tracep->fullBit(oldp+1108,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_err));
        tracep->fullIData(oldp+1109,(((0xffffffe0U 
                                       & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_adr) 
                                      | (0x1fU & ((IData)(4U) 
                                                  + vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_adr)))),32);
        tracep->fullBit(oldp+1110,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_we));
        tracep->fullCData(oldp+1111,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_bsel),4);
        tracep->fullBit(oldp+1112,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_access));
        tracep->fullIData(oldp+1113,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__lsu_ldat),32);
        tracep->fullIData(oldp+1114,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_ldat),32);
        tracep->fullIData(oldp+1115,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_adr_match),32);
        tracep->fullBit(oldp+1116,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_access));
        tracep->fullBit(oldp+1117,((0U != (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_hit))));
        tracep->fullBit(oldp+1118,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_refill_allowed));
        tracep->fullBit(oldp+1119,((8U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state))));
        tracep->fullBit(oldp+1120,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__refill_done));
        tracep->fullBit(oldp+1121,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_enabled));
        tracep->fullBit(oldp+1122,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__ctrl_op_lsu));
        tracep->fullBit(oldp+1123,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__tlb_miss));
        tracep->fullBit(oldp+1124,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__pagefault));
        tracep->fullIData(oldp+1125,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_phys_addr),32);
        tracep->fullBit(oldp+1126,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__except_dtlb_miss));
        tracep->fullBit(oldp+1127,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__except_dpagefault));
        tracep->fullBit(oldp+1128,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_cache_inhibit));
        tracep->fullBit(oldp+1129,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__tlb_reload_ack));
        tracep->fullIData(oldp+1130,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__tlb_reload_data),32);
        tracep->fullBit(oldp+1131,((1U & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__ctrl_op_lsu)))));
        tracep->fullBit(oldp+1132,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__tlb_reload_done));
        tracep->fullBit(oldp+1133,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_empty));
        tracep->fullIData(oldp+1134,(((vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_dout[3U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_dout[2U] 
                                       >> 5U))),32);
        tracep->fullIData(oldp+1135,(((vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_dout[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_dout[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+1136,((0xfU & ((vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_dout[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_dout[1U] 
                                                 >> 1U)))),4);
        tracep->fullBit(oldp+1137,((1U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_dout[0U])));
        tracep->fullBit(oldp+1138,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_atomic));
        tracep->fullBit(oldp+1139,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__last_write));
        tracep->fullBit(oldp+1140,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__write_done));
        tracep->fullBit(oldp+1141,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__swa_success));
        tracep->fullCData(oldp+1142,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__state),3);
        tracep->fullWData(oldp+1143,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_dout),101);
        tracep->fullWData(oldp+1147,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_gen__DOT__or1k_store_buffer__DOT__fifo_din),101);
        tracep->fullCData(oldp+1151,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state),5);
        tracep->fullBit(oldp+1152,((2U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state))));
        tracep->fullBit(oldp+1153,((4U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state))));
        tracep->fullBit(oldp+1154,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__refill_hit));
        tracep->fullIData(oldp+1155,((0x3ffffU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_adr 
                                                  >> 0xdU))),18);
        tracep->fullIData(oldp+1156,((0x3ffffU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_adr_match 
                                                  >> 0xdU))),18);
        tracep->fullSData(oldp+1157,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_waddr[0]),11);
        tracep->fullSData(oldp+1158,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_waddr[1]),11);
        tracep->fullCData(oldp+1159,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_hit),2);
        tracep->fullBit(oldp+1160,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__check_way_match[0]));
        tracep->fullBit(oldp+1161,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__check_way_match[1]));
        tracep->fullBit(oldp+1162,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__write_pending));
        tracep->fullSData(oldp+1163,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_waddr
                                     [0U]),11);
        tracep->fullSData(oldp+1164,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_waddr
                                     [1U]),11);
        tracep->fullBit(oldp+1165,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__way_hit));
        tracep->fullBit(oldp+1166,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__way_huge_hit));
        tracep->fullBit(oldp+1167,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__ure));
        tracep->fullBit(oldp+1168,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__uwe));
        tracep->fullBit(oldp+1169,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__sre));
        tracep->fullBit(oldp+1170,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__swe));
        tracep->fullBit(oldp+1171,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_ticktimer));
        tracep->fullBit(oldp+1172,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_range));
        tracep->fullBit(oldp+1173,(((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__except_align) 
                                    & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o)))));
        tracep->fullBit(oldp+1174,(((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__except_dpagefault) 
                                    & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o)))));
        tracep->fullBit(oldp+1175,(((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__except_dtlb_miss) 
                                    & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o)))));
        tracep->fullBit(oldp+1176,((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o) 
                                     | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ctrl_branch_exception_edge)) 
                                    | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__flush))));
        tracep->fullBit(oldp+1177,((1U & ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr) 
                                            >> 6U) 
                                           & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o))) 
                                          & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__mispredict_stall))))));
        tracep->fullBit(oldp+1178,(((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_branch_o) 
                                    & (0U != (3U & vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_branch_target_o)))));
        tracep->fullBit(oldp+1179,(((((((2U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state)) 
                                        | (8U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state))) 
                                       & (0U != (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_hit))) 
                                      & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__write_pending))) 
                                     | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__refill_hit)) 
                                    & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__dc_req))));
        tracep->fullBit(oldp+1180,(((((((2U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state)) 
                                        & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__dc_req)) 
                                       & (~ (IData)(
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_hit))))) 
                                      & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__write_pending))) 
                                     & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_refill_allowed)) 
                                    | (8U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__state)))));
        tracep->fullBit(oldp+1181,((1U & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr) 
                                           >> 5U) & 
                                          (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o))))));
        tracep->fullIData(oldp+1182,(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_or1k_d_dat),32);
        tracep->fullBit(oldp+1183,(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_or1k_d_ack));
        tracep->fullIData(oldp+1184,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_out_reg),32);
        tracep->fullBit(oldp+1185,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_bp));
        tracep->fullBit(oldp+1186,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg_csff));
        tracep->fullBit(oldp+1187,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg_cpu));
        tracep->fullBit(oldp+1188,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync));
        tracep->fullCData(oldp+1189,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rdata),8);
        tracep->fullCData(oldp+1190,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__regA),4);
        tracep->fullBit(oldp+1191,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__strobe_toggle));
        tracep->fullCData(oldp+1192,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__regA),4);
        tracep->fullBit(oldp+1193,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__strobe_toggle));
        tracep->fullBit(oldp+1194,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_branch_o));
        tracep->fullBit(oldp+1195,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__lsu_valid_o));
        tracep->fullBit(oldp+1196,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o));
        tracep->fullBit(oldp+1197,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_stall));
        tracep->fullBit(oldp+1198,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__lsu_ack));
        tracep->fullBit(oldp+1199,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_write));
        tracep->fullBit(oldp+1200,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__store_buffer_read));
        tracep->fullBit(oldp+1201,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__dc_req));
        tracep->fullIData(oldp+1202,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_wr_dat),32);
        tracep->fullQData(oldp+1203,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_din),39);
        tracep->fullBit(oldp+1205,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_lru_in));
        tracep->fullIData(oldp+1206,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_way_in[0]),19);
        tracep->fullIData(oldp+1207,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_way_in[1]),19);
        tracep->fullBit(oldp+1208,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__tag_we));
        tracep->fullIData(oldp+1209,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_din[0]),32);
        tracep->fullIData(oldp+1210,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_din[1]),32);
        tracep->fullCData(oldp+1211,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_we),2);
        tracep->fullCData(oldp+1212,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__lru),2);
        tracep->fullCData(oldp+1213,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__access),2);
        tracep->fullBit(oldp+1214,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__next_lru_history));
        tracep->fullIData(oldp+1215,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__w2),32);
        tracep->fullBit(oldp+1216,((1U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_we))));
        tracep->fullIData(oldp+1217,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_din
                                     [0U]),32);
        tracep->fullBit(oldp+1218,((1U & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_we) 
                                          >> 1U))));
        tracep->fullIData(oldp+1219,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_din
                                     [1U]),32);
        tracep->fullCData(oldp+1220,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__gen_u_lru__DOT__u_lru__DOT__lru_post),2);
        tracep->fullCData(oldp+1221,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__gen_u_lru__DOT__u_lru__DOT__expand[0]),2);
        tracep->fullCData(oldp+1222,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__gen_u_lru__DOT__u_lru__DOT__expand[1]),2);
        tracep->fullIData(oldp+1223,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__gen_u_lru__DOT__u_lru__DOT__j),32);
        tracep->fullIData(oldp+1224,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__gen_u_lru__DOT__u_lru__DOT__offset),32);
        tracep->fullBit(oldp+1225,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__exception));
        tracep->fullBit(oldp+1226,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__exception_re));
        tracep->fullBit(oldp+1227,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__except_pic));
        tracep->fullCData(oldp+1228,(vlSymsp->TOP__or1k_pu.__PVT__wb_m2s_mem_cti),3);
        tracep->fullBit(oldp+1229,(vlSymsp->TOP__or1k_pu.__PVT__or1k_dbg_stb_i));
        tracep->fullBit(oldp+1230,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_o_en));
        tracep->fullBit(oldp+1231,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__rdy_sync_en));
        tracep->fullSData(oldp+1232,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr),16);
        tracep->fullIData(oldp+1233,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_write_dat),32);
        tracep->fullBit(oldp+1234,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__spr_bus_stb_o));
        tracep->fullBit(oldp+1235,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__spr_bus_we_o));
        tracep->fullIData(oldp+1236,(vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__next_adr),23);
        tracep->fullBit(oldp+1237,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_execute_o));
        tracep->fullBit(oldp+1238,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_ack));
        tracep->fullBit(oldp+1239,((1U & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_ctrl_cappuccino__DOT__ctrl_stall)))));
        tracep->fullBit(oldp+1240,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__decode_bubble_o));
        tracep->fullBit(oldp+1241,((1U & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_ctrl_cappuccino__DOT__execute_stall)))));
        tracep->fullBit(oldp+1242,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__fetch_rf_adr_valid_o));
        tracep->fullCData(oldp+1243,((0x1fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__imem_dat 
                                               >> 0x10U))),5);
        tracep->fullCData(oldp+1244,((0x1fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__imem_dat 
                                               >> 0xbU))),5);
        tracep->fullBit(oldp+1245,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_decode_o));
        tracep->fullBit(oldp+1246,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_fetch_o));
        tracep->fullBit(oldp+1247,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__bus_access_done));
        tracep->fullBit(oldp+1248,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__addr_valid));
        tracep->fullIData(oldp+1249,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__imem_dat),32);
        tracep->fullBit(oldp+1250,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ic_invalidate));
        tracep->fullBit(oldp+1251,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__pagefault));
        tracep->fullBit(oldp+1252,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__tlb_miss));
        tracep->fullBit(oldp+1253,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__except_itlb_miss));
        tracep->fullBit(oldp+1254,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__except_ipagefault));
        tracep->fullBit(oldp+1255,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_busy));
        tracep->fullBit(oldp+1256,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_access));
        tracep->fullBit(oldp+1257,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__ic_req));
        tracep->fullBit(oldp+1258,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__immu_spr_bus_stb));
        tracep->fullBit(oldp+1259,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_we));
        tracep->fullIData(oldp+1260,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_din),32);
        tracep->fullBit(oldp+1261,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_we));
        tracep->fullIData(oldp+1262,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_din),32);
        tracep->fullBit(oldp+1263,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_match_spr_cs));
        tracep->fullBit(oldp+1264,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__itlb_trans_spr_cs));
        tracep->fullCData(oldp+1265,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__spr_way_idx_full),2);
        tracep->fullBit(oldp+1266,((1U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_gen__DOT__or1k_immu__DOT__spr_way_idx_full))));
        tracep->fullIData(oldp+1267,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_adr),32);
        tracep->fullBit(oldp+1268,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_we));
        tracep->fullBit(oldp+1269,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__dmmu_spr_bus_stb));
        tracep->fullBit(oldp+1270,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__invalidate));
        tracep->fullCData(oldp+1271,((0xffU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_adr 
                                               >> 5U))),8);
        tracep->fullSData(oldp+1272,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_raddr[0]),11);
        tracep->fullSData(oldp+1273,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_raddr[1]),11);
        tracep->fullSData(oldp+1274,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_raddr
                                     [0U]),11);
        tracep->fullSData(oldp+1275,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__way_raddr
                                     [1U]),11);
        tracep->fullCData(oldp+1276,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_addr),6);
        tracep->fullBit(oldp+1277,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_we));
        tracep->fullIData(oldp+1278,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_din),32);
        tracep->fullCData(oldp+1279,((0x3fU & (vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_adr 
                                               >> 0x18U))),6);
        tracep->fullCData(oldp+1280,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_addr),6);
        tracep->fullBit(oldp+1281,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_we));
        tracep->fullIData(oldp+1282,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_din),32);
        tracep->fullBit(oldp+1283,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_match_spr_cs));
        tracep->fullBit(oldp+1284,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__dtlb_trans_spr_cs));
        tracep->fullCData(oldp+1285,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__spr_way_idx_full),2);
        tracep->fullBit(oldp+1286,((1U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__spr_way_idx_full))));
        tracep->fullCData(oldp+1287,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__rfa_rdad),6);
        tracep->fullCData(oldp+1288,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__rfb_rdad),6);
        tracep->fullBit(oldp+1289,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__rf_wren));
        tracep->fullCData(oldp+1290,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__rf_wradr),6);
        tracep->fullIData(oldp+1291,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__rf_wrdat),32);
        tracep->fullBit(oldp+1292,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__genblk1__DOT__spr_gpr_we));
        tracep->fullBit(oldp+1293,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_rf_cappuccino__DOT__genblk1__DOT__spr_gpr_re));
        tracep->fullCData(oldp+1294,((0x3fU & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr))),6);
        tracep->fullBit(oldp+1295,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_ctrl_cappuccino__DOT__ctrl_stall));
        tracep->fullBit(oldp+1296,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_ctrl_cappuccino__DOT__execute_stall));
        tracep->fullBit(oldp+1297,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__du_npc_write));
        tracep->fullBit(oldp+1298,((0U != (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access))));
        tracep->fullBit(oldp+1299,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_we));
        tracep->fullSData(oldp+1300,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access),12);
        tracep->fullSData(oldp+1301,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access_ack),12);
        tracep->fullIData(oldp+1302,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat[0]),32);
        tracep->fullIData(oldp+1303,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat[1]),32);
        tracep->fullIData(oldp+1304,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat[2]),32);
        tracep->fullIData(oldp+1305,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat[3]),32);
        tracep->fullIData(oldp+1306,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat[4]),32);
        tracep->fullIData(oldp+1307,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat[5]),32);
        tracep->fullIData(oldp+1308,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat[6]),32);
        tracep->fullIData(oldp+1309,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat[7]),32);
        tracep->fullIData(oldp+1310,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat[8]),32);
        tracep->fullIData(oldp+1311,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat[9]),32);
        tracep->fullIData(oldp+1312,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat[10]),32);
        tracep->fullIData(oldp+1313,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat[11]),32);
        tracep->fullBit(oldp+1314,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_write_access));
        tracep->fullBit(oldp+1315,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_bus_access));
        tracep->fullIData(oldp+1316,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sys_group_read),32);
        tracep->fullCData(oldp+1317,((0xfU & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr) 
                                              >> 0xbU))),4);
        tracep->fullIData(oldp+1318,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat
                                     [0U]),32);
        tracep->fullIData(oldp+1319,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat
                                     [1U]),32);
        tracep->fullIData(oldp+1320,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat
                                     [2U]),32);
        tracep->fullIData(oldp+1321,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat
                                     [3U]),32);
        tracep->fullIData(oldp+1322,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat
                                     [4U]),32);
        tracep->fullIData(oldp+1323,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat
                                     [5U]),32);
        tracep->fullIData(oldp+1324,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat
                                     [6U]),32);
        tracep->fullIData(oldp+1325,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat
                                     [7U]),32);
        tracep->fullIData(oldp+1326,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat
                                     [8U]),32);
        tracep->fullIData(oldp+1327,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_internal_read_dat
                                     [9U]),32);
        tracep->fullBit(oldp+1328,((1U & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access) 
                                          >> 9U))));
        tracep->fullBit(oldp+1329,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picmr_access));
        tracep->fullBit(oldp+1330,((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access) 
                                     >> 9U) & (2U == 
                                               (0x7ffU 
                                                & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr))))));
        tracep->fullBit(oldp+1331,((1U & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access) 
                                          >> 0xaU))));
        tracep->fullBit(oldp+1332,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__spr_ttmr_access));
        tracep->fullBit(oldp+1333,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__tt__DOT__or1k_ticktimer__DOT__spr_ttcr_access));
        tracep->fullBit(oldp+1334,(vlSymsp->TOP__or1k_pu.__PVT__wb_m2s_dbg_cyc));
        tracep->fullBit(oldp+1335,(vlSymsp->TOP__or1k_pu.__PVT__wb_m2s_dbg_stb));
        tracep->fullIData(oldp+1336,(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_dbg_dat),32);
        tracep->fullBit(oldp+1337,(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_dbg_err));
        tracep->fullCData(oldp+1338,(vlSymsp->TOP__or1k_pu.wb_interface0__DOT____Vcellinp__wb_arbiter_mem__wbm_cyc_i),3);
        tracep->fullBit(oldp+1339,(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__next));
        tracep->fullCData(oldp+1340,(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__arbiter0__DOT__order),3);
        tracep->fullBit(oldp+1341,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__data_o_en));
        tracep->fullBit(oldp+1342,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__rdy_sync_en));
        tracep->fullBit(oldp+1343,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__err_en));
        tracep->fullBit(oldp+1344,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__next_fsm_state));
        tracep->fullBit(oldp+1345,(vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__valid));
        tracep->fullCData(oldp+1346,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter),4);
        tracep->fullBit(oldp+1347,((0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter))));
        tracep->fullCData(oldp+1348,(((8U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter))
                                       ? ((4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter))
                                           ? 0U : (
                                                   (2U 
                                                    & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter))
                                                     ? 0U
                                                     : (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg7))))
                                       : ((4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter))
                                           ? ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter))
                                               ? ((1U 
                                                   & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter))
                                                   ? (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg6)
                                                   : (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg5))
                                               : ((1U 
                                                   & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter))
                                                   ? (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg4)
                                                   : (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg3)))
                                           : ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter))
                                               ? ((1U 
                                                   & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter))
                                                   ? (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg2)
                                                   : (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg1))
                                               : ((1U 
                                                   & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter))
                                                   ? (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg0)
                                                   : 0U))))),8);
        tracep->fullBit(oldp+1349,((0U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter))));
        tracep->fullBit(oldp+1350,((8U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter))));
        tracep->fullCData(oldp+1351,((0xfU & ((IData)(8U) 
                                              - (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter)))),4);
        tracep->fullCData(oldp+1352,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg0),8);
        tracep->fullCData(oldp+1353,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg1),8);
        tracep->fullCData(oldp+1354,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg2),8);
        tracep->fullCData(oldp+1355,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg3),8);
        tracep->fullCData(oldp+1356,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg4),8);
        tracep->fullCData(oldp+1357,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg5),8);
        tracep->fullCData(oldp+1358,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg6),8);
        tracep->fullCData(oldp+1359,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__reg7),8);
        tracep->fullCData(oldp+1360,((0xfU & ((IData)(8U) 
                                              - (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter)))),4);
        tracep->fullCData(oldp+1361,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter),4);
        tracep->fullBit(oldp+1362,((0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))));
        tracep->fullBit(oldp+1363,((8U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))));
        tracep->fullCData(oldp+1364,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__be_dec),4);
        tracep->fullCData(oldp+1365,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__internal_reg_status),2);
        tracep->fullBit(oldp+1366,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__stall_reg));
        tracep->fullBit(oldp+1367,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__addr_sel));
        tracep->fullBit(oldp+1368,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__addr_ct_en));
        tracep->fullBit(oldp+1369,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__op_reg_en));
        tracep->fullBit(oldp+1370,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__bit_ct_en));
        tracep->fullBit(oldp+1371,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__bit_ct_rst));
        tracep->fullBit(oldp+1372,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_ct_sel));
        tracep->fullBit(oldp+1373,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_ct_en));
        tracep->fullBit(oldp+1374,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__out_reg_ld_en));
        tracep->fullBit(oldp+1375,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__out_reg_data_sel));
        tracep->fullCData(oldp+1376,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__tdo_output_sel),2);
        tracep->fullBit(oldp+1377,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_strobe));
        tracep->fullBit(oldp+1378,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__crc_clr));
        tracep->fullBit(oldp+1379,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__crc_en));
        tracep->fullBit(oldp+1380,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__crc_in_sel));
        tracep->fullBit(oldp+1381,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__error_reg_en));
        tracep->fullBit(oldp+1382,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_clr_err));
        tracep->fullCData(oldp+1383,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__module_next_state),4);
        tracep->fullBit(oldp+1384,(vlSymsp->TOP__or1k_pu.__PVT__or1k_dbg_stall_i));
        tracep->fullBit(oldp+1385,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__ren_rst));
        tracep->fullBit(oldp+1386,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rdata_en));
        tracep->fullBit(oldp+1387,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rpp));
        tracep->fullBit(oldp+1388,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__r_fifo_en));
        tracep->fullBit(oldp+1389,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__r_wb_ack));
        tracep->fullBit(oldp+1390,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__du_restart_from_stall));
        tracep->fullBit(oldp+1391,(vlTOPp->wb_clk_i));
        tracep->fullBit(oldp+1392,(vlTOPp->wb_rst_i));
        tracep->fullBit(oldp+1393,(vlTOPp->tdo_pad_o));
        tracep->fullBit(oldp+1394,(vlTOPp->tms_pad_i));
        tracep->fullBit(oldp+1395,(vlTOPp->tck_pad_i));
        tracep->fullBit(oldp+1396,(vlTOPp->tdi_pad_i));
        tracep->fullBit(oldp+1397,(vlSymsp->TOP__or1k_pu.tdo_pad_o));
        tracep->fullCData(oldp+1398,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__sel_reg),4);
        tracep->fullBit(oldp+1399,(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_dbg_ack));
        tracep->fullCData(oldp+1400,(((0xbU >= (0xfU 
                                                & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                                   << 2U)))
                                       ? (0xfU & ((0xf00U 
                                                   | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_bsel_o) 
                                                       << 4U) 
                                                      | (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__sel_reg))) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                                      << 2U))))
                                       : 0U)),4);
        tracep->fullBit(oldp+1401,((((2U >= (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel)) 
                                     & ((IData)(vlSymsp->TOP__or1k_pu.wb_interface0__DOT____Vcellinp__wb_arbiter_mem__wbm_cyc_i) 
                                        >> (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel))) 
                                    & (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__active))));
        tracep->fullBit(oldp+1402,(((2U >= (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel)) 
                                    & ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_req) 
                                         << 2U) | (
                                                   ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_req_o) 
                                                    << 1U) 
                                                   | (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_m2s_dbg_stb))) 
                                       >> (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel)))));
        tracep->fullBit(oldp+1403,((1U & ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__module_id_reg))
                                           ? ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__module_id_reg) 
                                              & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__data_out_shift_reg))
                                           : ((1U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__module_id_reg))
                                               ? ((0U 
                                                   == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__tdo_output_sel))
                                                   ? (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__biu_ready)
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__tdo_output_sel))
                                                    ? vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__data_out_shift_reg
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__tdo_output_sel))
                                                     ? 
                                                    ((IData)(
                                                             (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                                              >> 0x15U)) 
                                                     == vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc)
                                                     : vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__crc)))
                                               : ((0U 
                                                   == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__tdo_output_sel))
                                                   ? (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_ready)
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__tdo_output_sel))
                                                    ? (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__data_out_shift_reg)
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__tdo_output_sel))
                                                     ? 
                                                    ((IData)(
                                                             (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                                              >> 0x15U)) 
                                                     == vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc)
                                                     : vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc))))))));
        tracep->fullIData(oldp+1404,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__du__DOT__du_read_dat),32);
        tracep->fullBit(oldp+1405,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__du_stall_o));
        tracep->fullBit(oldp+1406,(((0U == (0xfe000000U 
                                            & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__addr_reg)) 
                                    & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_m2s_dbg_cyc) 
                                       << (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_mux_dbg__DOT__slave_sel)))));
        tracep->fullIData(oldp+1407,(((8U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_bsel_o))
                                       ? ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_uart_dat) 
                                          << 0x18U)
                                       : ((4U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_bsel_o))
                                           ? ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_uart_dat) 
                                              << 0x10U)
                                           : ((2U & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_bsel_o))
                                               ? ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_uart_dat) 
                                                  << 8U)
                                               : (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_uart_dat))))),32);
        tracep->fullQData(oldp+1408,((((QData)((IData)(vlSymsp->TOP__or1k_pu__wb_bfm_memory0__ram0.__PVT__dout)) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((8U 
                                                                     & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_bsel_o))
                                                                     ? 
                                                                    ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_uart_dat) 
                                                                     << 0x18U)
                                                                     : 
                                                                    ((4U 
                                                                      & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_bsel_o))
                                                                      ? 
                                                                     ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_uart_dat) 
                                                                      << 0x10U)
                                                                      : 
                                                                     ((2U 
                                                                       & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_bsel_o))
                                                                       ? 
                                                                      ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_uart_dat) 
                                                                       << 8U)
                                                                       : (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_uart_dat)))))))),64);
        tracep->fullCData(oldp+1410,(((2U & (IData)(vlSymsp->TOP__or1k_pu.wb_interface0__DOT____Vcellout__wb_arbiter_mem__wbm_ack_o)) 
                                      | (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_uart_ack))),2);
        __Vtemp6[0U] = vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__data_in_reg;
        __Vtemp6[1U] = (IData)((QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat)));
        __Vtemp6[2U] = (IData)(((QData)((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dbus_dat)) 
                                >> 0x20U));
        tracep->fullWData(oldp+1411,(__Vtemp6),96);
        tracep->fullSData(oldp+1414,((0xf00U | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_bsel_o) 
                                                 << 4U) 
                                                | (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__sel_reg)))),12);
        tracep->fullCData(oldp+1415,((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_we_o) 
                                       << 1U) | (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__wr_reg))),3);
        tracep->fullCData(oldp+1416,((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_req) 
                                       << 2U) | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_req_o) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_m2s_dbg_stb)))),3);
        tracep->fullSData(oldp+1417,(((((((~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_access)) 
                                          & (4U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state))) 
                                         & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__refill_done)))
                                         ? 2U : 7U) 
                                       << 6U) | (((
                                                   (4U 
                                                    == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__state)) 
                                                   & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__refill_done)))
                                                   ? 2U
                                                   : 7U) 
                                                 << 3U))),9);
        tracep->fullIData(oldp+1418,(((4U & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_adr_i)
                                       ? (0xb000U | 
                                          (((8U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter)) 
                                            << 0x16U) 
                                           | (((8U 
                                                != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter)) 
                                               << 0x15U) 
                                              | ((0U 
                                                  != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter)) 
                                                 << 0x10U))))
                                       : (3U | ((((8U 
                                                   & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                                      ? 0U
                                                      : (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg7))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                                      ? (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg6)
                                                      : (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg5))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                                      ? (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg4)
                                                      : (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg3)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                                      ? (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg2)
                                                      : (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg1))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                                      ? (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg0)
                                                      : 0U)))) 
                                                 << 0x18U) 
                                                | (((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__reg_ier) 
                                                    << 0x10U) 
                                                   | ((((0U 
                                                         != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                                         ? 4U
                                                         : 
                                                        (((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__thr_int_arm) 
                                                          & (8U 
                                                             != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter)))
                                                          ? 2U
                                                          : 1U)) 
                                                       << 8U) 
                                                      | ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__reg_dlab_bit) 
                                                         << 7U))))))),32);
        tracep->fullBit(oldp+1419,((((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__r_wb_ack) 
                                     | (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__w_wb_ack)) 
                                    | ((((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_cyc_i) 
                                         & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_stb_i)) 
                                        & (0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_sel_i))) 
                                       & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__reg_dlab_bit) 
                                          | (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__fifo_access)))))));
        tracep->fullBit(oldp+1420,(((((8U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter)) 
                                      & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__thr_int_arm)) 
                                     & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__reg_ier) 
                                        >> 1U)) | (
                                                   (0U 
                                                    != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter)) 
                                                   & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__reg_ier)))));
        tracep->fullBit(oldp+1421,((1U & ((0U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__tdo_output_sel))
                                           ? (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_ready)
                                           : ((1U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__tdo_output_sel))
                                               ? (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__data_out_shift_reg)
                                               : ((2U 
                                                   == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__tdo_output_sel))
                                                   ? 
                                                  ((IData)(
                                                           (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                                            >> 0x15U)) 
                                                   == vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc)
                                                   : vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__crc))))));
        tracep->fullBit(oldp+1422,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__biu_ready));
        tracep->fullBit(oldp+1423,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__err_reg));
        tracep->fullIData(oldp+1424,(((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__addr_sel)
                                       ? (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__address_counter 
                                          + (IData)((QData)((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_size_bytes))))
                                       : (IData)((vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                                  >> 0x10U)))),32);
        tracep->fullSData(oldp+1425,((0xffffU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_ct_sel)
                                                  ? 
                                                 ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__word_count) 
                                                  - (IData)(1U))
                                                  : (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg)))),16);
        tracep->fullIData(oldp+1426,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__data_out_reg),32);
        tracep->fullQData(oldp+1427,(((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__out_reg_data_sel)
                                       ? vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__internal_reg_error
                                       : (QData)((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__data_out_reg)))),33);
        tracep->fullBit(oldp+1429,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__str_sync));
        tracep->fullIData(oldp+1430,(((8U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__be_dec))
                                       ? ((4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__be_dec))
                                           ? vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__data_to_biu
                                           : ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__be_dec))
                                               ? vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__data_to_biu
                                               : ((1U 
                                                   & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__be_dec))
                                                   ? vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__data_to_biu
                                                   : 
                                                  (0xff000000U 
                                                   & vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__data_to_biu))))
                                       : ((4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__be_dec))
                                           ? ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__be_dec))
                                               ? vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__data_to_biu
                                               : ((1U 
                                                   & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__be_dec))
                                                   ? vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__data_to_biu
                                                   : 
                                                  (0xff0000U 
                                                   & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__data_to_biu 
                                                      >> 8U))))
                                           : ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__be_dec))
                                               ? ((1U 
                                                   & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__be_dec))
                                                   ? 
                                                  (0xffffU 
                                                   & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__data_to_biu 
                                                      >> 0x10U))
                                                   : 
                                                  (0xff00U 
                                                   & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__data_to_biu 
                                                      >> 0x10U)))
                                               : ((1U 
                                                   & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__be_dec))
                                                   ? 
                                                  (0xffU 
                                                   & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__data_to_biu 
                                                      >> 0x18U))
                                                   : vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__data_to_biu))))),32);
        tracep->fullIData(oldp+1431,(((8U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__sel_reg))
                                       ? ((4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__sel_reg))
                                           ? ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__sel_reg))
                                               ? vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_dbg_dat
                                               : ((1U 
                                                   & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__sel_reg))
                                                   ? vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_dbg_dat
                                                   : 
                                                  (0xffffU 
                                                   & (vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_dbg_dat 
                                                      >> 0x10U))))
                                           : ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__sel_reg))
                                               ? vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_dbg_dat
                                               : ((1U 
                                                   & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__sel_reg))
                                                   ? vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_dbg_dat
                                                   : 
                                                  (0xffU 
                                                   & (vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_dbg_dat 
                                                      >> 0x18U)))))
                                       : ((4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__sel_reg))
                                           ? ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__sel_reg))
                                               ? vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_dbg_dat
                                               : ((1U 
                                                   & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__sel_reg))
                                                   ? vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_dbg_dat
                                                   : 
                                                  (0xffffU 
                                                   & (vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_dbg_dat 
                                                      >> 0x10U))))
                                           : ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__sel_reg))
                                               ? ((1U 
                                                   & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__sel_reg))
                                                   ? vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_dbg_dat
                                                   : 
                                                  (0xffU 
                                                   & (vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_dbg_dat 
                                                      >> 8U)))
                                               : vlSymsp->TOP__or1k_pu.__PVT__wb_s2m_dbg_dat)))),32);
        tracep->fullIData(oldp+1432,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_crc_i__DOT__new_crc),32);
        tracep->fullIData(oldp+1433,((((IData)(vlTOPp->tdi_pad_i) 
                                       << 0x1fU) | 
                                      (0x7fffffffU 
                                       & (IData)((vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                                  >> 0x16U))))),32);
        tracep->fullIData(oldp+1434,(((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__out_reg_data_sel)
                                       ? (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__internal_reg_status)
                                       : vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__data_out_reg)),32);
        tracep->fullIData(oldp+1435,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__internal_reg_status),32);
        tracep->fullIData(oldp+1436,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_crc_i__DOT__new_crc),32);
        tracep->fullCData(oldp+1437,((0xfU & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__user_word_ct_sel)
                                               ? ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__user_word_count) 
                                                  - (IData)(1U))
                                               : (((IData)(vlTOPp->tdi_pad_i) 
                                                   << 3U) 
                                                  | (7U 
                                                     & (IData)(
                                                               (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                                                >> 0x32U))))))),4);
        tracep->fullCData(oldp+1438,((((IData)(vlTOPp->tdi_pad_i) 
                                       << 3U) | (7U 
                                                 & (IData)(
                                                           (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                                            >> 0x32U))))),4);
        tracep->fullCData(oldp+1439,((((IData)(vlTOPp->tdi_pad_i) 
                                       << 7U) | (0x7fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__input_shift_reg 
                                                            >> 0x2eU))))),8);
        tracep->fullCData(oldp+1440,(((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__out_reg_data_sel)
                                       ? (((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__regB) 
                                           << 4U) | (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__regB))
                                       : (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rdata))),8);
        tracep->fullBit(oldp+1441,(((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__r_wb_ack) 
                                    | (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__w_wb_ack))));
        tracep->fullCData(oldp+1442,(((8U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                       ? ((4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                           ? 0U : (
                                                   (2U 
                                                    & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                                     ? 0U
                                                     : (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg7))))
                                       : ((4U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                           ? ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                               ? ((1U 
                                                   & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                                   ? (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg6)
                                                   : (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg5))
                                               : ((1U 
                                                   & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                                   ? (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg4)
                                                   : (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg3)))
                                           : ((2U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                               ? ((1U 
                                                   & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                                   ? (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg2)
                                                   : (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg1))
                                               : ((1U 
                                                   & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                                   ? (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg0)
                                                   : 0U))))),8);
        tracep->fullBit(oldp+1443,(((((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__ren_sff__DOT__srflop) 
                                      | (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__ren_sff__DOT__syncxor)) 
                                     | (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__jtag_tap0__DOT__debug_select))) 
                                    & (0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter)))));
        tracep->fullCData(oldp+1444,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__next_rd_fsm_state),2);
        tracep->fullIData(oldp+1445,((3U | ((((8U & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                               ? ((4U 
                                                   & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                                     ? 0U
                                                     : (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg7))))
                                               : ((4U 
                                                   & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                                     ? (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg6)
                                                     : (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg5))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                                     ? (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg4)
                                                     : (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg3)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                                     ? (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg2)
                                                     : (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg1))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                                     ? (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__reg0)
                                                     : 0U)))) 
                                             << 0x18U) 
                                            | (((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__reg_ier) 
                                                << 0x10U) 
                                               | ((((0U 
                                                     != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                                     ? 4U
                                                     : 
                                                    (((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__thr_int_arm) 
                                                      & (8U 
                                                         != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter)))
                                                      ? 2U
                                                      : 1U)) 
                                                   << 8U) 
                                                  | ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__reg_dlab_bit) 
                                                     << 7U)))))),32);
        tracep->fullIData(oldp+1446,((0xb000U | (((8U 
                                                   != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter)) 
                                                  << 0x16U) 
                                                 | (((8U 
                                                      != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter)) 
                                                     << 0x15U) 
                                                    | ((0U 
                                                        != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter)) 
                                                       << 0x10U))))),32);
        tracep->fullCData(oldp+1447,(((0U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))
                                       ? 4U : (((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__thr_int_arm) 
                                                & (8U 
                                                   != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter)))
                                                ? 2U
                                                : 1U))),3);
        tracep->fullBit(oldp+1448,((((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__r_fifo_en) 
                                     & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rpp))) 
                                    & (1U == (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter)))));
        tracep->fullCData(oldp+1449,((((8U != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter)) 
                                       << 6U) | (((8U 
                                                   != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter)) 
                                                  << 5U) 
                                                 | (0U 
                                                    != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))))),8);
        tracep->fullBit(oldp+1450,(((0xfU & ((IData)(8U) 
                                             - (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__wr_fifo__DOT__counter))) 
                                    != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__regA))));
        tracep->fullBit(oldp+1451,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__freespace_syncreg__DOT__A_enable));
        tracep->fullBit(oldp+1452,(((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__rd_fifo__DOT__counter) 
                                    != (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__regA))));
        tracep->fullBit(oldp+1453,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__genblk4__DOT__i_dbg_jsp__DOT__jsp_biu_i__DOT__bytesavail_syncreg__DOT__A_enable));
        tracep->fullCData(oldp+1454,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                     [vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
        tracep->fullBit(oldp+1455,((((IData)(vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__valid) 
                                     & (~ (IData)(vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__valid_r))) 
                                    | (IData)(vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__is_last_r))));
        tracep->fullIData(oldp+1456,(vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__adr),23);
        tracep->fullBit(oldp+1457,(((((2U >= (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel)) 
                                      & ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_we_o) 
                                           << 1U) | (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__wr_reg)) 
                                         >> (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel))) 
                                     & (IData)(vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__valid)) 
                                    & (IData)(vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__wb_ack_o))));
        tracep->fullIData(oldp+1458,(vlSymsp->TOP__or1k_pu__core__or1k_cpu.monitor_execute_insn),32);
        tracep->fullIData(oldp+1459,(vlSymsp->TOP__or1k_pu__core__or1k_cpu.monitor_execute_pc),32);
        tracep->fullCData(oldp+1460,((0xfU & ((- (IData)(
                                                         ((((2U 
                                                             >= (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel)) 
                                                            & ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_we_o) 
                                                                 << 1U) 
                                                                | (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__wr_reg)) 
                                                               >> (IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel))) 
                                                           & (IData)(vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__valid)) 
                                                          & (IData)(vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__wb_ack_o)))) 
                                              & ((0xbU 
                                                  >= 
                                                  (0xfU 
                                                   & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                                      << 2U)))
                                                  ? 
                                                 ((0xf00U 
                                                   | (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dbus_bsel_o) 
                                                       << 4U) 
                                                      | (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb__DOT__i_dbg_wb__DOT__wb_biu_i__DOT__sel_reg))) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__wb_interface0__DOT__wb_arbiter_mem__DOT__master_sel) 
                                                      << 2U)))
                                                  : 0U)))),4);
        tracep->fullIData(oldp+1461,((0x1fffffU & (vlSymsp->TOP__or1k_pu__wb_bfm_memory0.__PVT__adr 
                                                   >> 2U))),21);
        tracep->fullIData(oldp+1462,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__mfspr_dat_o),32);
        tracep->fullBit(oldp+1463,(((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_access)
                                     ? (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ibus_ack)
                                     : (((2U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state)) 
                                         & (0U != (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_hit))) 
                                        | ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__refill_hit) 
                                           & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__ic_access))))));
        tracep->fullBit(oldp+1464,(((((2U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state)) 
                                      & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__ic_req)) 
                                     & (~ (IData)((0U 
                                                   != (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__way_hit))))) 
                                    | (4U == (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__icache_gen__DOT__or1k_icache__DOT__state)))));
        tracep->fullBit(oldp+1465,((1U & ((((((~ (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__tlb_miss) 
                                                   | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__pagefault)) 
                                                  & ((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_sr) 
                                                     >> 6U))) 
                                              & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_branch_exception_o))) 
                                             & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__pipeline_flush_o))) 
                                            & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__mispredict_stall))) 
                                           | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__doing_rfe)) 
                                          & (~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_fetch_cappuccino__DOT__immu_busy))))));
        tracep->fullBit(oldp+1466,(((((((((((((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_ibus_err_o) 
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
                                    | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_except_dpagefault_o))));
        tracep->fullBit(oldp+1467,((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_mfspr_o) 
                                     | ((IData)(vlSymsp->TOP__or1k_pu.__PVT__or1k_dbg_stb_i) 
                                        & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__wr_reg)))) 
                                    & (0U != (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access)))));
        tracep->fullBit(oldp+1468,(((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__ctrl_op_mfspr_o) 
                                    | ((IData)(vlSymsp->TOP__or1k_pu.__PVT__or1k_dbg_stb_i) 
                                       & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_biu_i__DOT__wr_reg))))));
        tracep->fullBit(oldp+1469,(((~ (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dcache_hit_o)) 
                                    & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_lsu_load_o) 
                                        | (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__execute_op_lsu_store_o)) 
                                       & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__padv_execute_o)))));
        tracep->fullIData(oldp+1470,(((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access) 
                                        >> 9U) & (((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access) 
                                                   >> 9U) 
                                                  & (2U 
                                                     == 
                                                     (0x7ffU 
                                                      & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_addr)))))
                                       ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picsr
                                       : ((((IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__spr_access) 
                                            >> 9U) 
                                           & (IData)(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picmr_access))
                                           ? vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_ctrl_cappuccino__DOT__pic__DOT__or1k_pic__DOT__spr_picmr
                                           : 0U))),32);
        tracep->fullIData(oldp+1471,(0x20U),32);
        tracep->fullIData(oldp+1472,(0x2000000U),32);
        tracep->fullCData(oldp+1473,(2U),2);
        tracep->fullIData(oldp+1474,(0U),32);
        tracep->fullCData(oldp+1475,(0xfU),4);
        tracep->fullBit(oldp+1476,(0U));
        tracep->fullCData(oldp+1477,(0U),3);
        tracep->fullCData(oldp+1478,(0U),2);
        tracep->fullCData(oldp+1479,(vlSymsp->TOP__or1k_pu.__PVT__wb_m2s_uart_sel),4);
        tracep->fullBit(oldp+1480,(vlSymsp->TOP__or1k_pu.__PVT__or1k_dbg_ewt_i));
        tracep->fullCData(oldp+1481,(vlSymsp->TOP__or1k_pu.__PVT__or1k_dbg_lss_o),4);
        tracep->fullCData(oldp+1482,(vlSymsp->TOP__or1k_pu.__PVT__or1k_dbg_is_o),2);
        tracep->fullSData(oldp+1483,(vlSymsp->TOP__or1k_pu.__PVT__or1k_dbg_wp_o),11);
        tracep->fullIData(oldp+1484,(0U),32);
        tracep->fullCData(oldp+1485,(0xfU),4);
        tracep->fullIData(oldp+1486,(2U),32);
        tracep->fullQData(oldp+1487,(0x90000000ULL),64);
        tracep->fullQData(oldp+1489,(0xfe000000fffffff8ULL),64);
        tracep->fullCData(oldp+1491,(0xaU),4);
        tracep->fullIData(oldp+1492,(1U),32);
        tracep->fullIData(oldp+1493,(0xfe000000U),32);
        tracep->fullIData(oldp+1494,(3U),32);
        tracep->fullCData(oldp+1495,(0x28U),6);
        tracep->fullIData(oldp+1496,(6U),32);
        tracep->fullIData(oldp+1497,(8U),32);
        tracep->fullIData(oldp+1498,(0x149511c3U),32);
        tracep->fullIData(oldp+1499,(4U),32);
        tracep->fullCData(oldp+1500,(0U),4);
        tracep->fullCData(oldp+1501,(1U),4);
        tracep->fullCData(oldp+1502,(2U),4);
        tracep->fullCData(oldp+1503,(8U),4);
        tracep->fullCData(oldp+1504,(9U),4);
        tracep->fullQData(oldp+1505,(0x454e41424c4544ULL),56);
        tracep->fullIData(oldp+1507,(0x4e4f4e45U),32);
        tracep->fullBit(oldp+1508,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_rst_i));
        tracep->fullBit(oldp+1509,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu1_clk_i));
        tracep->fullIData(oldp+1510,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu1_addr_o),32);
        tracep->fullIData(oldp+1511,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu1_data_i),32);
        tracep->fullIData(oldp+1512,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu1_data_o),32);
        tracep->fullBit(oldp+1513,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu1_bp_i));
        tracep->fullBit(oldp+1514,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu1_stall_o));
        tracep->fullBit(oldp+1515,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu1_stb_o));
        tracep->fullBit(oldp+1516,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu1_we_o));
        tracep->fullBit(oldp+1517,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu1_ack_i));
        tracep->fullBit(oldp+1518,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu1_rst_o));
        tracep->fullIData(oldp+1519,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_adr_i),32);
        tracep->fullIData(oldp+1520,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_dat_i),32);
        tracep->fullBit(oldp+1521,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_cyc_i));
        tracep->fullBit(oldp+1522,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_stb_i));
        tracep->fullCData(oldp+1523,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_sel_i),4);
        tracep->fullBit(oldp+1524,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_we_i));
        tracep->fullBit(oldp+1525,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_cab_i));
        tracep->fullCData(oldp+1526,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_cti_i),3);
        tracep->fullCData(oldp+1527,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_bte_i),2);
        tracep->fullCData(oldp+1528,(0x1fU),6);
        tracep->fullCData(oldp+1529,(1U),3);
        tracep->fullCData(oldp+1530,(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__cpu0__DOT__i_dbg_cpu_or1k__DOT__or1k_statusreg_i__DOT__cpu_op_out),2);
        tracep->fullCData(oldp+1531,((0xffU & (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_dat_i 
                                               >> 0x18U))),8);
        tracep->fullBit(oldp+1532,((((((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_cyc_i) 
                                       & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_stb_i)) 
                                      & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_we_i)) 
                                     & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_sel_i)) 
                                    & (~ (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_adr_i 
                                          >> 2U)))));
        tracep->fullBit(oldp+1533,((((((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_cyc_i) 
                                       & (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_stb_i)) 
                                      & (~ (IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_we_i))) 
                                     & ((IData)(vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_sel_i) 
                                        >> 1U)) & (~ 
                                                   (vlSymsp->TOP__or1k_pu.__PVT__dbg_if0__DOT__wb_jsp_adr_i 
                                                    >> 2U)))));
        tracep->fullCData(oldp+1534,(0U),8);
        tracep->fullCData(oldp+1535,(0xb0U),8);
        tracep->fullIData(oldp+1536,(0U),32);
        tracep->fullIData(oldp+1537,(vlSymsp->TOP__or1k_pu.__PVT__uart16550__DOT__wb_dat32_o),32);
        tracep->fullBit(oldp+1538,(1U));
        tracep->fullCData(oldp+1539,(2U),3);
        tracep->fullCData(oldp+1540,(3U),3);
        tracep->fullCData(oldp+1541,(4U),3);
        tracep->fullCData(oldp+1542,(5U),3);
        tracep->fullIData(oldp+1543,(0x10U),32);
        tracep->fullIData(oldp+1544,(5U),32);
        tracep->fullBit(oldp+1545,(1U));
        tracep->fullCData(oldp+1546,(3U),4);
        tracep->fullCData(oldp+1547,(4U),4);
        tracep->fullCData(oldp+1548,(5U),4);
        tracep->fullCData(oldp+1549,(6U),4);
        tracep->fullCData(oldp+1550,(7U),4);
        tracep->fullIData(oldp+1551,(0xbU),32);
        __Vtemp7[0U] = 0x43494e4fU;
        __Vtemp7[1U] = 0x50505543U;
        __Vtemp7[2U] = 0x4341U;
        tracep->fullWData(oldp+1552,(__Vtemp7),80);
        tracep->fullIData(oldp+1555,(0x1fU),32);
        tracep->fullQData(oldp+1556,(0x4c4556454cULL),40);
        tracep->fullIData(oldp+1558,(0x100U),32);
        __Vtemp8[0U] = 0x54414745U;
        __Vtemp8[1U] = 0x52454553U;
        __Vtemp8[2U] = 0x5448U;
        tracep->fullWData(oldp+1559,(__Vtemp8),80);
        tracep->fullQData(oldp+1562,(0x53455249414cULL),48);
        tracep->fullIData(oldp+1564,(0x435050U),24);
        tracep->fullQData(oldp+1565,(0x42415252454cULL),48);
        tracep->fullQData(oldp+1567,(0x53494d504c45ULL),48);
        __Vtemp9[0U] = 0x4e453332U;
        __Vtemp9[1U] = 0x5348424fU;
        __Vtemp9[2U] = 0x5749U;
        tracep->fullWData(oldp+1569,(__Vtemp9),80);
        __Vtemp10[0U] = 0x4241434bU;
        __Vtemp10[1U] = 0x46454544U;
        __Vtemp10[2U] = 0x5245445fU;
        __Vtemp10[3U] = 0x49535445U;
        __Vtemp10[4U] = 0x5f524547U;
        __Vtemp10[5U] = 0x4233U;
        tracep->fullWData(oldp+1572,(__Vtemp10),176);
        tracep->fullBit(oldp+1578,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__traceport_exec_jb_o));
        tracep->fullBit(oldp+1579,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__traceport_exec_jal_o));
        tracep->fullBit(oldp+1580,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__traceport_exec_jr_o));
        tracep->fullIData(oldp+1581,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__traceport_exec_jbtarget_o),32);
        tracep->fullCData(oldp+1582,(0U),5);
        tracep->fullIData(oldp+1583,(vlSymsp->TOP__or1k_pu__core.__PVT__multicore_coreid_i),32);
        tracep->fullIData(oldp+1584,(vlSymsp->TOP__or1k_pu__core.__PVT__multicore_numcores_i),32);
        tracep->fullIData(oldp+1585,(vlSymsp->TOP__or1k_pu__core.__PVT__snoop_adr_i),32);
        tracep->fullBit(oldp+1586,(vlSymsp->TOP__or1k_pu__core.__PVT__snoop_en_i));
        tracep->fullIData(oldp+1587,(0x800000U),32);
        tracep->fullBit(oldp+1588,(0U));
        tracep->fullIData(oldp+1589,(0x17U),32);
        tracep->fullCData(oldp+1590,(7U),3);
        tracep->fullCData(oldp+1591,(1U),2);
        tracep->fullCData(oldp+1592,(3U),2);
        tracep->fullQData(oldp+1593,(0x44495341424c4544ULL),64);
        tracep->fullIData(oldp+1595,(vlSymsp->TOP__or1k_pu__core__or1k_cpu.__PVT__spr_bus_dat_dmmu_i),32);
        tracep->fullBit(oldp+1596,(vlSymsp->TOP__or1k_pu__core__or1k_cpu.__PVT__spr_bus_ack_dmmu_i));
        tracep->fullIData(oldp+1597,(vlSymsp->TOP__or1k_pu__core__or1k_cpu.__PVT__spr_bus_dat_immu_i),32);
        tracep->fullBit(oldp+1598,(vlSymsp->TOP__or1k_pu__core__or1k_cpu.__PVT__spr_bus_ack_immu_i));
        tracep->fullIData(oldp+1599,(vlSymsp->TOP__or1k_pu__core__or1k_cpu.__PVT__spr_bus_dat_mac_i),32);
        tracep->fullBit(oldp+1600,(vlSymsp->TOP__or1k_pu__core__or1k_cpu.__PVT__spr_bus_ack_mac_i));
        tracep->fullIData(oldp+1601,(vlSymsp->TOP__or1k_pu__core__or1k_cpu.__PVT__spr_bus_dat_pmu_i),32);
        tracep->fullBit(oldp+1602,(vlSymsp->TOP__or1k_pu__core__or1k_cpu.__PVT__spr_bus_ack_pmu_i));
        tracep->fullIData(oldp+1603,(vlSymsp->TOP__or1k_pu__core__or1k_cpu.__PVT__spr_bus_dat_pcu_i),32);
        tracep->fullBit(oldp+1604,(vlSymsp->TOP__or1k_pu__core__or1k_cpu.__PVT__spr_bus_ack_pcu_i));
        tracep->fullIData(oldp+1605,(vlSymsp->TOP__or1k_pu__core__or1k_cpu.__PVT__spr_bus_dat_fpu_i),32);
        tracep->fullBit(oldp+1606,(vlSymsp->TOP__or1k_pu__core__or1k_cpu.__PVT__spr_bus_ack_fpu_i));
        tracep->fullIData(oldp+1607,(0x200000U),32);
        tracep->fullIData(oldp+1608,(0x15U),32);
        tracep->fullBit(oldp+1609,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__dcache_hit_o));
        tracep->fullSData(oldp+1610,(0U),12);
        tracep->fullIData(oldp+1611,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__spr_bus_dat_dc_i),32);
        tracep->fullIData(oldp+1612,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__spr_bus_dat_ic_i),32);
        tracep->fullBit(oldp+1613,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__traceport_jal_execute_to_ctrl));
        tracep->fullBit(oldp+1614,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__traceport_jr_execute_to_ctrl));
        tracep->fullIData(oldp+1615,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__traceport_jbtarget_decode_to_execute),32);
        tracep->fullIData(oldp+1616,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__traceport_jbtarget_execute_to_ctrl),32);
        tracep->fullBit(oldp+1617,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__traceport_waitexec));
        tracep->fullIData(oldp+1618,(0xdU),32);
        tracep->fullIData(oldp+1619,(0x13U),32);
        tracep->fullIData(oldp+1620,(0x14U),32);
        tracep->fullIData(oldp+1621,(0x29U),32);
        tracep->fullIData(oldp+1622,(0x28U),32);
        tracep->fullIData(oldp+1623,(2U),32);
        tracep->fullIData(oldp+1624,(1U),32);
        tracep->fullBit(oldp+1625,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_decode__DOT__decode_except_ibus_align));
        __Vtemp11[0U] = 0x4d504c45U;
        __Vtemp11[1U] = 0x5349U;
        __Vtemp11[2U] = 0U;
        tracep->fullWData(oldp+1626,(__Vtemp11),96);
        tracep->fullQData(oldp+1629,(0x46414c5345ULL),40);
        tracep->fullIData(oldp+1631,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_execute_alu__DOT__ext_result),32);
        tracep->fullIData(oldp+1632,(0x20U),32);
        tracep->fullBit(oldp+1633,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_err));
        tracep->fullIData(oldp+1634,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dc_sdat),32);
        tracep->fullIData(oldp+1635,(0x65U),32);
        tracep->fullCData(oldp+1636,(1U),5);
        tracep->fullCData(oldp+1637,(2U),5);
        tracep->fullCData(oldp+1638,(4U),5);
        tracep->fullCData(oldp+1639,(8U),5);
        tracep->fullCData(oldp+1640,(0x10U),5);
        tracep->fullIData(oldp+1641,(0x12U),32);
        tracep->fullIData(oldp+1642,(0x27U),32);
        tracep->fullIData(oldp+1643,(0x26U),32);
        tracep->fullCData(oldp+1644,((0xffU & (vlSymsp->TOP__or1k_pu__core.__PVT__snoop_adr_i 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1645,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__snoop_tag),18);
        tracep->fullCData(oldp+1646,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__snoop_windex),8);
        tracep->fullQData(oldp+1647,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__snoop_dout),39);
        tracep->fullIData(oldp+1649,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__snoop_way_out[0]),19);
        tracep->fullIData(oldp+1650,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__snoop_way_out[1]),19);
        tracep->fullIData(oldp+1651,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__snoop_check_way_tag[0]),18);
        tracep->fullIData(oldp+1652,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__snoop_check_way_tag[1]),18);
        tracep->fullBit(oldp+1653,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__snoop_check_way_match[0]));
        tracep->fullBit(oldp+1654,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__snoop_check_way_match[1]));
        tracep->fullBit(oldp+1655,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__snoop_check_way_valid[0]));
        tracep->fullBit(oldp+1656,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__snoop_check_way_valid[1]));
        tracep->fullCData(oldp+1657,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dcache_gen__DOT__or1k_dcache__DOT__snoop_way_hit),2);
        tracep->fullBit(oldp+1658,(vlSymsp->TOP__or1k_pu__core__or1k_cpu__cappuccino__DOT__or1k_cpu.__PVT__or1k_lsu_cappuccino__DOT__dmmu_gen__DOT__or1k_dmmu__DOT__tlb_reload_huge));
        tracep->fullSData(oldp+1659,(0x8001U),16);
        tracep->fullCData(oldp+1660,(6U),3);
    }
}
