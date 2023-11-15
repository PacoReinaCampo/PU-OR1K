////////////////////////////////////////////////////////////////////////////////
//                                            __ _      _     _               //
//                                           / _(_)    | |   | |              //
//                __ _ _   _  ___  ___ _ __ | |_ _  ___| | __| |              //
//               / _` | | | |/ _ \/ _ \ '_ \|  _| |/ _ \ |/ _` |              //
//              | (_| | |_| |  __/  __/ | | | | | |  __/ | (_| |              //
//               \__, |\__,_|\___|\___|_| |_|_| |_|\___|_|\__,_|              //
//                  | |                                                       //
//                  |_|                                                       //
//                                                                            //
//                                                                            //
//              MPSoC-OR1K CPU                                                //
//              Processing Unit                                               //
//              Wishbone Bus Interface                                        //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 2015-2016 by the author(s)
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
////////////////////////////////////////////////////////////////////////////////
// Author(s):
//   Paco Reina Campo <pacoreinacampo@queenfield.tech>

module pu_or1k_wb #(
  parameter AW = 32,
  parameter DW = 32,

  parameter MEM_SIZE = 32'h02000000
) (
  input  wb_clk_i,
  input  wb_rst_i,
  output tdo_pad_o,
  input  tms_pad_i,
  input  tck_pad_i,
  input  tdi_pad_i
);

  //////////////////////////////////////////////////////////////////////////////
  // Wishbone interconnect
  //////////////////////////////////////////////////////////////////////////////
  wire          wb_clk = wb_clk_i;
  wire          wb_rst = wb_rst_i;

  wire [AW-1:0] wb_m2s_or1k_d_adr;
  wire [DW-1:0] wb_m2s_or1k_d_dat;
  wire [   3:0] wb_m2s_or1k_d_sel;
  wire          wb_m2s_or1k_d_we;
  wire          wb_m2s_or1k_d_cyc;
  wire          wb_m2s_or1k_d_stb;
  wire [   2:0] wb_m2s_or1k_d_cti;
  wire [   1:0] wb_m2s_or1k_d_bte;
  wire [DW-1:0] wb_s2m_or1k_d_dat;
  wire          wb_s2m_or1k_d_ack;
  wire          wb_s2m_or1k_d_err;
  wire          wb_s2m_or1k_d_rty;

  wire [AW-1:0] wb_m2s_or1k_i_adr;
  wire [DW-1:0] wb_m2s_or1k_i_dat;
  wire [   3:0] wb_m2s_or1k_i_sel;
  wire          wb_m2s_or1k_i_we;
  wire          wb_m2s_or1k_i_cyc;
  wire          wb_m2s_or1k_i_stb;
  wire [   2:0] wb_m2s_or1k_i_cti;
  wire [   1:0] wb_m2s_or1k_i_bte;
  wire [DW-1:0] wb_s2m_or1k_i_dat;
  wire          wb_s2m_or1k_i_ack;
  wire          wb_s2m_or1k_i_err;
  wire          wb_s2m_or1k_i_rty;

  wire [AW-1:0] wb_m2s_dbg_adr;
  wire [DW-1:0] wb_m2s_dbg_dat;
  wire [   3:0] wb_m2s_dbg_sel;
  wire          wb_m2s_dbg_we;
  wire          wb_m2s_dbg_cyc;
  wire          wb_m2s_dbg_stb;
  wire [   2:0] wb_m2s_dbg_cti;
  wire [   1:0] wb_m2s_dbg_bte;
  wire [DW-1:0] wb_s2m_dbg_dat;
  wire          wb_s2m_dbg_ack;
  wire          wb_s2m_dbg_err;
  wire          wb_s2m_dbg_rty;

  wire [AW-1:0] wb_m2s_mem_adr;
  wire [DW-1:0] wb_m2s_mem_dat;
  wire [   3:0] wb_m2s_mem_sel;
  wire          wb_m2s_mem_we;
  wire          wb_m2s_mem_cyc;
  wire          wb_m2s_mem_stb;
  wire [   2:0] wb_m2s_mem_cti;
  wire [   1:0] wb_m2s_mem_bte;
  wire [DW-1:0] wb_s2m_mem_dat;
  wire          wb_s2m_mem_ack;
  wire          wb_s2m_mem_err;
  wire          wb_s2m_mem_rty;

  wire [AW-1:0] wb_m2s_uart_adr;
  wire [   7:0] wb_m2s_uart_dat;
  wire [   3:0] wb_m2s_uart_sel;
  wire          wb_m2s_uart_we;
  wire          wb_m2s_uart_cyc;
  wire          wb_m2s_uart_stb;
  wire [   2:0] wb_m2s_uart_cti;
  wire [   1:0] wb_m2s_uart_bte;
  wire [   7:0] wb_s2m_uart_dat;
  wire          wb_s2m_uart_ack;
  wire          wb_s2m_uart_err;
  wire          wb_s2m_uart_rty;

  peripheral_msi_interface_wb wb_interface_0 (
    .wb_clk_i(wb_clk),
    .wb_rst_i(wb_rst),

    .wb_or1k_d_adr_i(wb_m2s_or1k_d_adr),
    .wb_or1k_d_dat_i(wb_m2s_or1k_d_dat),
    .wb_or1k_d_sel_i(wb_m2s_or1k_d_sel),
    .wb_or1k_d_we_i (wb_m2s_or1k_d_we),
    .wb_or1k_d_cyc_i(wb_m2s_or1k_d_cyc),
    .wb_or1k_d_stb_i(wb_m2s_or1k_d_stb),
    .wb_or1k_d_cti_i(wb_m2s_or1k_d_cti),
    .wb_or1k_d_bte_i(wb_m2s_or1k_d_bte),
    .wb_or1k_d_dat_o(wb_s2m_or1k_d_dat),
    .wb_or1k_d_ack_o(wb_s2m_or1k_d_ack),
    .wb_or1k_d_err_o(wb_s2m_or1k_d_err),
    .wb_or1k_d_rty_o(wb_s2m_or1k_d_rty),

    .wb_or1k_i_adr_i(wb_m2s_or1k_i_adr),
    .wb_or1k_i_dat_i(wb_m2s_or1k_i_dat),
    .wb_or1k_i_sel_i(wb_m2s_or1k_i_sel),
    .wb_or1k_i_we_i (wb_m2s_or1k_i_we),
    .wb_or1k_i_cyc_i(wb_m2s_or1k_i_cyc),
    .wb_or1k_i_stb_i(wb_m2s_or1k_i_stb),
    .wb_or1k_i_cti_i(wb_m2s_or1k_i_cti),
    .wb_or1k_i_bte_i(wb_m2s_or1k_i_bte),
    .wb_or1k_i_dat_o(wb_s2m_or1k_i_dat),
    .wb_or1k_i_ack_o(wb_s2m_or1k_i_ack),
    .wb_or1k_i_err_o(wb_s2m_or1k_i_err),
    .wb_or1k_i_rty_o(wb_s2m_or1k_i_rty),

    .wb_dbg_adr_i(wb_m2s_dbg_adr),
    .wb_dbg_dat_i(wb_m2s_dbg_dat),
    .wb_dbg_sel_i(wb_m2s_dbg_sel),
    .wb_dbg_we_i (wb_m2s_dbg_we),
    .wb_dbg_cyc_i(wb_m2s_dbg_cyc),
    .wb_dbg_stb_i(wb_m2s_dbg_stb),
    .wb_dbg_cti_i(wb_m2s_dbg_cti),
    .wb_dbg_bte_i(wb_m2s_dbg_bte),
    .wb_dbg_dat_o(wb_s2m_dbg_dat),
    .wb_dbg_ack_o(wb_s2m_dbg_ack),
    .wb_dbg_err_o(wb_s2m_dbg_err),
    .wb_dbg_rty_o(wb_s2m_dbg_rty),

    .wb_mem_adr_o(wb_m2s_mem_adr),
    .wb_mem_dat_o(wb_m2s_mem_dat),
    .wb_mem_sel_o(wb_m2s_mem_sel),
    .wb_mem_we_o (wb_m2s_mem_we),
    .wb_mem_cyc_o(wb_m2s_mem_cyc),
    .wb_mem_stb_o(wb_m2s_mem_stb),
    .wb_mem_cti_o(wb_m2s_mem_cti),
    .wb_mem_bte_o(wb_m2s_mem_bte),
    .wb_mem_dat_i(wb_s2m_mem_dat),
    .wb_mem_ack_i(wb_s2m_mem_ack),
    .wb_mem_err_i(wb_s2m_mem_err),
    .wb_mem_rty_i(wb_s2m_mem_rty),

    .wb_uart_adr_o(wb_m2s_uart_adr),
    .wb_uart_dat_o(wb_m2s_uart_dat),
    .wb_uart_sel_o(wb_m2s_uart_sel),
    .wb_uart_we_o (wb_m2s_uart_we),
    .wb_uart_cyc_o(wb_m2s_uart_cyc),
    .wb_uart_stb_o(wb_m2s_uart_stb),
    .wb_uart_cti_o(wb_m2s_uart_cti),
    .wb_uart_bte_o(wb_m2s_uart_bte),
    .wb_uart_dat_i(wb_s2m_uart_dat),
    .wb_uart_ack_i(wb_s2m_uart_ack),
    .wb_uart_err_i(wb_s2m_uart_err),
    .wb_uart_rty_i(wb_s2m_uart_rty)
  );

  //////////////////////////////////////////////////////////////////////////////
  // GENERIC JTAG TAP
  //////////////////////////////////////////////////////////////////////////////
  wire dbg_if_select;
  wire dbg_if_tdo;
  wire jtag_tap_tdo;
  wire jtag_tap_shift_dr;
  wire jtag_tap_pause_dr;
  wire jtag_tap_update_dr;
  wire jtag_tap_capture_dr;

  tap_top jtag_tap_0 (
    .tdo_pad_o (tdo_pad_o),
    .tms_pad_i (tms_pad_i),
    .tck_pad_i (tck_pad_i),
    .trst_pad_i(wb_rst),
    .tdi_pad_i (tdi_pad_i),

    .tdo_padoe_o(),

    .tdo_o(jtag_tap_tdo),

    .shift_dr_o  (jtag_tap_shift_dr),
    .pause_dr_o  (jtag_tap_pause_dr),
    .update_dr_o (jtag_tap_update_dr),
    .capture_dr_o(jtag_tap_capture_dr),

    .extest_select_o        (),
    .sample_preload_select_o(),
    .mbist_select_o         (),
    .debug_select_o         (dbg_if_select),

    .bs_chain_tdi_i(1'b0),
    .mbist_tdi_i   (1'b0),
    .debug_tdi_i   (dbg_if_tdo)
  );

  //////////////////////////////////////////////////////////////////////////////
  // Debug Interface
  //////////////////////////////////////////////////////////////////////////////
  wire [AW-1:0] or1k_dbg_adr_i;
  wire [DW-1:0] or1k_dbg_dat_i;
  wire          or1k_dbg_we_i;
  wire          or1k_dbg_stb_i;
  wire [DW-1:0] or1k_dbg_dat_o;
  wire          or1k_dbg_ack_o;

  wire          or1k_dbg_stall_i;
  wire          or1k_dbg_ewt_i;
  wire [   3:0] or1k_dbg_lss_o;
  wire [   1:0] or1k_dbg_is_o;
  wire [  10:0] or1k_dbg_wp_o;
  wire          or1k_dbg_bp_o;
  wire          or1k_dbg_rst;

  peripheral_dbg_pu_or1k_top dbg_if_0 (
    // OR1K interface
    .cpu0_clk_i(wb_clk),
    .cpu0_rst_o(or1k_dbg_rst),

    .cpu0_addr_o (or1k_dbg_adr_i),
    .cpu0_data_o (or1k_dbg_dat_i),
    .cpu0_stb_o  (or1k_dbg_stb_i),
    .cpu0_we_o   (or1k_dbg_we_i),
    .cpu0_data_i (or1k_dbg_dat_o),
    .cpu0_ack_i  (or1k_dbg_ack_o),
    .cpu0_stall_o(or1k_dbg_stall_i),
    .cpu0_bp_i   (or1k_dbg_bp_o),

    // TAP interface
    .tck_i         (tck_pad_i),
    .tdi_i         (jtag_tap_tdo),
    .tdo_o         (dbg_if_tdo),
    .rst_i         (wb_rst),
    .capture_dr_i  (jtag_tap_capture_dr),
    .shift_dr_i    (jtag_tap_shift_dr),
    .pause_dr_i    (jtag_tap_pause_dr),
    .update_dr_i   (jtag_tap_update_dr),
    .debug_select_i(dbg_if_select),

    // Wishbone debug master
    .wb_clk_i(wb_clk),

    .wb_dat_i(wb_s2m_dbg_dat),
    .wb_ack_i(wb_s2m_dbg_ack),
    .wb_err_i(wb_s2m_dbg_err),

    .wb_adr_o(wb_m2s_dbg_adr),
    .wb_dat_o(wb_m2s_dbg_dat),
    .wb_cyc_o(wb_m2s_dbg_cyc),
    .wb_stb_o(wb_m2s_dbg_stb),
    .wb_sel_o(wb_m2s_dbg_sel),
    .wb_we_o (wb_m2s_dbg_we),
    .wb_cti_o(wb_m2s_dbg_cti),
    .wb_bte_o(wb_m2s_dbg_bte)
  );

  //////////////////////////////////////////////////////////////////////////////
  // or1k cpu
  //////////////////////////////////////////////////////////////////////////////
  wire [31:0] or1k_irq;
  wire        or1k_clk;
  wire        or1k_rst;

  assign or1k_clk = wb_clk;
  assign or1k_rst = wb_rst | or1k_dbg_rst;

  pu_or1k_core #(
    .FEATURE_DEBUGUNIT        ("ENABLED"),
    .FEATURE_CMOV             ("ENABLED"),
    .FEATURE_INSTRUCTIONCACHE ("ENABLED"),
    .OPTION_ICACHE_BLOCK_WIDTH(5),
    .OPTION_ICACHE_SET_WIDTH  (8),
    .OPTION_ICACHE_WAYS       (2),
    .OPTION_ICACHE_LIMIT_WIDTH(32),
    .FEATURE_IMMU             ("ENABLED"),
    .FEATURE_DATACACHE        ("ENABLED"),
    .OPTION_DCACHE_BLOCK_WIDTH(5),
    .OPTION_DCACHE_SET_WIDTH  (8),
    .OPTION_DCACHE_WAYS       (2),
    .OPTION_DCACHE_LIMIT_WIDTH(31),
    .FEATURE_DMMU             ("ENABLED"),
    .OPTION_RF_NUM_SHADOW_GPR (1),
    .IBUS_WB_TYPE             ("B3_REGISTERED_FEEDBACK"),
    .DBUS_WB_TYPE             ("B3_REGISTERED_FEEDBACK"),
    .OPTION_CPU0              ("CAPPUCCINO"),
    .OPTION_RESET_PC          (32'h00000100)
  ) core (
    .iwbm_adr_o(wb_m2s_or1k_i_adr),
    .iwbm_stb_o(wb_m2s_or1k_i_stb),
    .iwbm_cyc_o(wb_m2s_or1k_i_cyc),
    .iwbm_sel_o(wb_m2s_or1k_i_sel),
    .iwbm_we_o (wb_m2s_or1k_i_we),
    .iwbm_cti_o(wb_m2s_or1k_i_cti),
    .iwbm_bte_o(wb_m2s_or1k_i_bte),
    .iwbm_dat_o(wb_m2s_or1k_i_dat),

    .dwbm_adr_o(wb_m2s_or1k_d_adr),
    .dwbm_stb_o(wb_m2s_or1k_d_stb),
    .dwbm_cyc_o(wb_m2s_or1k_d_cyc),
    .dwbm_sel_o(wb_m2s_or1k_d_sel),
    .dwbm_we_o (wb_m2s_or1k_d_we),
    .dwbm_cti_o(wb_m2s_or1k_d_cti),
    .dwbm_bte_o(wb_m2s_or1k_d_bte),
    .dwbm_dat_o(wb_m2s_or1k_d_dat),

    .clk(or1k_clk),
    .rst(or1k_rst),

    .iwbm_err_i(wb_s2m_or1k_i_err),
    .iwbm_ack_i(wb_s2m_or1k_i_ack),
    .iwbm_dat_i(wb_s2m_or1k_i_dat),
    .iwbm_rty_i(wb_s2m_or1k_i_rty),

    .dwbm_err_i(wb_s2m_or1k_d_err),
    .dwbm_ack_i(wb_s2m_or1k_d_ack),
    .dwbm_dat_i(wb_s2m_or1k_d_dat),
    .dwbm_rty_i(wb_s2m_or1k_d_rty),

    .irq_i(or1k_irq),

    .du_addr_i (or1k_dbg_adr_i[15:0]),
    .du_stb_i  (or1k_dbg_stb_i),
    .du_dat_i  (or1k_dbg_dat_i),
    .du_we_i   (or1k_dbg_we_i),
    .du_dat_o  (or1k_dbg_dat_o),
    .du_ack_o  (or1k_dbg_ack_o),
    .du_stall_i(or1k_dbg_stall_i),
    .du_stall_o(or1k_dbg_bp_o)
  );

  //////////////////////////////////////////////////////////////////////////////
  // Generic main RAM
  //////////////////////////////////////////////////////////////////////////////
  peripheral_spram_wb #(
    .DEPTH(MEM_SIZE / 4)
  ) wb_bfm_memory0 (
    // Wishbone Master interface
    .wb_clk_i(wb_clk_i),
    .wb_rst_i(wb_rst_i),

    .wb_adr_i(wb_m2s_mem_adr[$clog2(MEM_SIZE)-3:0]),
    .wb_dat_i(wb_m2s_mem_dat),
    .wb_sel_i(wb_m2s_mem_sel),
    .wb_we_i (wb_m2s_mem_we),
    .wb_cyc_i(wb_m2s_mem_cyc),
    .wb_stb_i(wb_m2s_mem_stb),
    .wb_cti_i(wb_m2s_mem_cti),
    .wb_bte_i(wb_m2s_mem_bte),
    .wb_dat_o(wb_s2m_mem_dat),
    .wb_ack_o(wb_s2m_mem_ack),
    .wb_err_o(wb_s2m_mem_err)
  );

  assign wb_s2m_mem_rty = 1'b0;

  wire uart_irq;

  peripheral_uart_wb #(
    .DEBUG(0),
    .SIM  (1)
  ) uart16550 (
    // Wishbone Master interface
    .wb_clk_i(wb_clk_i),
    .wb_rst_i(wb_rst_i),

    .wb_adr_i(wb_m2s_uart_adr[2:0]),
    .wb_dat_i(wb_m2s_uart_dat),
    .wb_sel_i(4'h0),
    .wb_we_i (wb_m2s_uart_we),
    .wb_cyc_i(wb_m2s_uart_cyc),
    .wb_stb_i(wb_m2s_uart_stb),
    .wb_dat_o(wb_s2m_uart_dat),
    .wb_ack_o(wb_s2m_uart_ack),

    .int_o(uart_irq),

    .srx_pad_i(1'b0),
    .stx_pad_o(),
    .rts_pad_o(),
    .cts_pad_i(1'b0),
    .dtr_pad_o(),
    .dsr_pad_i(1'b0),
    .ri_pad_i (1'b0),
    .dcd_pad_i(1'b0)
  );

  assign wb_s2m_uart_err = 1'b0;
  assign wb_s2m_uart_rty = 1'b0;

  //////////////////////////////////////////////////////////////////////////////
  // CPU Interrupt assignments
  //////////////////////////////////////////////////////////////////////////////
  assign or1k_irq[0]     = 0;
  assign or1k_irq[1]     = 0;
  assign or1k_irq[2]     = uart_irq;
  assign or1k_irq[3]     = 0;
  assign or1k_irq[4]     = 0;
  assign or1k_irq[5]     = 0;
  assign or1k_irq[6]     = 0;
  assign or1k_irq[7]     = 0;
  assign or1k_irq[8]     = 0;
  assign or1k_irq[9]     = 0;
  assign or1k_irq[10]    = 0;
  assign or1k_irq[11]    = 0;
  assign or1k_irq[12]    = 0;
  assign or1k_irq[13]    = 0;
  assign or1k_irq[14]    = 0;
  assign or1k_irq[15]    = 0;
  assign or1k_irq[16]    = 0;
  assign or1k_irq[17]    = 0;
  assign or1k_irq[18]    = 0;
  assign or1k_irq[19]    = 0;
  assign or1k_irq[20]    = 0;
  assign or1k_irq[21]    = 0;
  assign or1k_irq[22]    = 0;
  assign or1k_irq[23]    = 0;
  assign or1k_irq[24]    = 0;
  assign or1k_irq[25]    = 0;
  assign or1k_irq[26]    = 0;
  assign or1k_irq[27]    = 0;
  assign or1k_irq[28]    = 0;
  assign or1k_irq[29]    = 0;
  assign or1k_irq[30]    = 0;
endmodule
