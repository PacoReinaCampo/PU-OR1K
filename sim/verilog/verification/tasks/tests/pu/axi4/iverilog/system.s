###################################################################################
##                                            __ _      _     _                  ##
##                                           / _(_)    | |   | |                 ##
##                __ _ _   _  ___  ___ _ __ | |_ _  ___| | __| |                 ##
##               / _` | | | |/ _ \/ _ \ '_ \|  _| |/ _ \ |/ _` |                 ##
##              | (_| | |_| |  __/  __/ | | | | | |  __/ | (_| |                 ##
##               \__, |\__,_|\___|\___|_| |_|_| |_|\___|_|\__,_|                 ##
##                  | |                                                          ##
##                  |_|                                                          ##
##                                                                               ##
##                                                                               ##
##              Architecture                                                     ##
##              QueenField                                                       ##
##                                                                               ##
###################################################################################

###################################################################################
##                                                                               ##
## Copyright (c) 2019-2020 by the author(s)                                      ##
##                                                                               ##
## Permission is hereby granted, free of charge, to any person obtaining a copy  ##
## of this software and associated documentation files (the "Software"), to deal ##
## in the Software without restriction, including without limitation the rights  ##
## to use, copy, modify, merge, publish, distribute, sublicense, and/or sell     ##
## copies of the Software, and to permit persons to whom the Software is         ##
## furnished to do so, subject to the following conditions:                      ##
##                                                                               ##
## The above copyright notice and this permission notice shall be included in    ##
## all copies or substantial portions of the Software.                           ##
##                                                                               ##
## THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR    ##
## IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,      ##
## FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE   ##
## AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER        ##
## LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, ##
## OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN     ##
## THE SOFTWARE.                                                                 ##
##                                                                               ##
## ============================================================================= ##
## Author(s):                                                                    ##
##   Paco Reina Campo <pacoreinacampo@queenfield.tech>                           ##
##                                                                               ##
###################################################################################

+incdir+../../../../../../../../verification/tasks/library/verilog

+incdir+../../../../../../../../peripheral/dbg/rtl/pu/or1k/verilog/code/pkg/wb

+incdir+../../../../../../../../rtl/verilog/pkg

../../../../../../../../verification/tasks/library/verilog/pu_or1k_functions.sv
../../../../../../../../verification/tasks/library/verilog/pu_or1k_monitor.sv
../../../../../../../../verification/tasks/library/verilog/pu_or1k_tap_generator.sv
../../../../../../../../verification/tasks/library/verilog/pu_or1k_testbench_utils.sv
../../../../../../../../verification/tasks/library/verilog/pu_or1k_testbench_axi4.sv

../../../../../../../../peripheral/uart/rtl/verilog/code/pkg/core/peripheral_uart_pkg.sv

../../../../../../../../rtl/verilog/pkg/peripheral_axi4_pkg.sv

../../../../../../../../peripheral/dbg/bench/pu/or1k/verilog/code/tests/axi4/debug/jtag_tap/tap_top.sv
../../../../../../../../peripheral/dbg/bench/pu/or1k/verilog/code/tests/axi4/debug/jtag_vpi/jtag_vpi.sv
../../../../../../../../peripheral/dbg/rtl/pu/or1k/verilog/code/peripheral/axi4/peripheral_dbg_pu_or1k_axi4.sv
../../../../../../../../peripheral/dbg/rtl/pu/or1k/verilog/code/peripheral/axi4/peripheral_dbg_pu_or1k_axi4_axi4.sv
../../../../../../../../peripheral/dbg/rtl/pu/or1k/verilog/code/peripheral/axi4/peripheral_dbg_pu_or1k_bytefifo.sv
../../../../../../../../peripheral/dbg/rtl/pu/or1k/verilog/code/peripheral/axi4/peripheral_dbg_pu_or1k_crc32.sv
../../../../../../../../peripheral/dbg/rtl/pu/or1k/verilog/code/peripheral/axi4/peripheral_dbg_pu_or1k_jsp_axi4.sv
../../../../../../../../peripheral/dbg/rtl/pu/or1k/verilog/code/peripheral/axi4/peripheral_dbg_pu_or1k_jsp_module.sv
../../../../../../../../peripheral/dbg/rtl/pu/or1k/verilog/code/peripheral/axi4/peripheral_dbg_pu_or1k_module.sv
../../../../../../../../peripheral/dbg/rtl/pu/or1k/verilog/code/peripheral/axi4/peripheral_dbg_pu_or1k_module_axi4.sv
../../../../../../../../peripheral/dbg/rtl/pu/or1k/verilog/code/peripheral/axi4/peripheral_dbg_pu_or1k_status_reg.sv
../../../../../../../../peripheral/dbg/rtl/pu/or1k/verilog/code/peripheral/axi4/peripheral_dbg_pu_or1k_syncflop.sv
../../../../../../../../peripheral/dbg/rtl/pu/or1k/verilog/code/peripheral/axi4/peripheral_dbg_pu_or1k_syncreg.sv
../../../../../../../../peripheral/dbg/rtl/pu/or1k/verilog/code/peripheral/axi4/peripheral_dbg_pu_or1k_top.sv

../../../../../../../../peripheral/msi/rtl/verilog/code/peripheral/axi4/arbiter/peripheral_msi_arbiter.sv
../../../../../../../../peripheral/msi/rtl/verilog/code/peripheral/axi4/cdc/peripheral_msi_cc561_axi4.sv
../../../../../../../../peripheral/msi/rtl/verilog/code/peripheral/axi4/cdc/peripheral_msi_cdc_axi4.sv
../../../../../../../../peripheral/msi/rtl/verilog/code/peripheral/axi4/cdc/peripheral_msi_sync2_pgen_axi4.sv
../../../../../../../../peripheral/msi/rtl/verilog/code/peripheral/axi4/main/peripheral_msi_arbiter_axi4.sv
../../../../../../../../peripheral/msi/rtl/verilog/code/peripheral/axi4/main/peripheral_msi_data_resize_axi4.sv
../../../../../../../../peripheral/msi/rtl/verilog/code/peripheral/axi4/main/peripheral_msi_interface_axi4.sv
../../../../../../../../peripheral/msi/rtl/verilog/code/peripheral/axi4/main/peripheral_msi_mux_axi4.sv

../../../../../../../../peripheral/spram/rtl/verilog/code/peripheral/axi4/peripheral_spram_generic_axi4.sv
../../../../../../../../peripheral/spram/rtl/verilog/code/peripheral/axi4/peripheral_spram_axi4.sv

../../../../../../../../peripheral/uart/rtl/verilog/code/peripheral/axi4/peripheral_raminfr_axi4.sv
../../../../../../../../peripheral/uart/rtl/verilog/code/peripheral/axi4/peripheral_uart_bridge_axi4.sv
../../../../../../../../peripheral/uart/rtl/verilog/code/peripheral/axi4/peripheral_uart_receiver_axi4.sv
../../../../../../../../peripheral/uart/rtl/verilog/code/peripheral/axi4/peripheral_uart_regs_axi4.sv
../../../../../../../../peripheral/uart/rtl/verilog/code/peripheral/axi4/peripheral_uart_rfifo_axi4.sv
../../../../../../../../peripheral/uart/rtl/verilog/code/peripheral/axi4/peripheral_uart_sync_flops_axi4.sv
../../../../../../../../peripheral/uart/rtl/verilog/code/peripheral/axi4/peripheral_uart_tfifo_axi4.sv
../../../../../../../../peripheral/uart/rtl/verilog/code/peripheral/axi4/peripheral_uart_transmitter_axi4.sv
../../../../../../../../peripheral/uart/rtl/verilog/code/peripheral/axi4/peripheral_uart_axi4.sv

../../../../../../../../rtl/verilog/core/control/pu_or1k_cfgrs.sv
../../../../../../../../rtl/verilog/core/control/pu_or1k_ctrl_cappuccino.sv
../../../../../../../../rtl/verilog/core/control/pu_or1k_pcu.sv
../../../../../../../../rtl/verilog/core/control/pu_or1k_pic.sv
../../../../../../../../rtl/verilog/core/control/pu_or1k_ticktimer.sv
../../../../../../../../rtl/verilog/core/decode/pu_or1k_decode.sv
../../../../../../../../rtl/verilog/core/execute/pu_or1k_execute_alu.sv
../../../../../../../../rtl/verilog/core/execute/pu_or1k_execute_ctrl_cappuccino.sv
../../../../../../../../rtl/verilog/core/execute/pu_or1k_rf_cappuccino.sv
../../../../../../../../rtl/verilog/core/execute/pu_or1k_axi4_mux_cappuccino.sv
../../../../../../../../rtl/verilog/core/fetch/pu_or1k_cache_lru.sv
../../../../../../../../rtl/verilog/core/fetch/pu_or1k_fetch_cappuccino.sv
../../../../../../../../rtl/verilog/core/fetch/pu_or1k_icache.sv
../../../../../../../../rtl/verilog/core/fetch/pu_or1k_immu.sv
../../../../../../../../rtl/verilog/core/main/pu_or1k_branch_prediction.sv
../../../../../../../../rtl/verilog/core/main/pu_or1k_branch_predictor_gshare.sv
../../../../../../../../rtl/verilog/core/main/pu_or1k_branch_predictor_saturation_counter.sv
../../../../../../../../rtl/verilog/core/main/pu_or1k_branch_predictor_simple.sv
../../../../../../../../rtl/verilog/core/main/pu_or1k_bus_if_axi432.sv
../../../../../../../../rtl/verilog/core/main/pu_or1k_core.sv
../../../../../../../../rtl/verilog/core/main/pu_or1k_cpu_cappuccino.sv
../../../../../../../../rtl/verilog/core/main/pu_or1k_cpu.sv
../../../../../../../../rtl/verilog/core/main/pu_or1k_decode_execute_cappuccino.sv
../../../../../../../../rtl/verilog/core/memory/pu_or1k_dcache.sv
../../../../../../../../rtl/verilog/core/memory/pu_or1k_dmmu.sv
../../../../../../../../rtl/verilog/core/memory/pu_or1k_lsu_cappuccino.sv
../../../../../../../../rtl/verilog/core/memory/pu_or1k_store_buffer.sv
../../../../../../../../rtl/verilog/core/pfpu32/pu_or1k_pfpu32_addsub.sv
../../../../../../../../rtl/verilog/core/pfpu32/pu_or1k_pfpu32_cmp.sv
../../../../../../../../rtl/verilog/core/pfpu32/pu_or1k_pfpu32_f2i.sv
../../../../../../../../rtl/verilog/core/pfpu32/pu_or1k_pfpu32_i2f.sv
../../../../../../../../rtl/verilog/core/pfpu32/pu_or1k_pfpu32_muldiv.sv
../../../../../../../../rtl/verilog/core/pfpu32/pu_or1k_pfpu32_rnd.sv
../../../../../../../../rtl/verilog/core/pfpu32/pu_or1k_pfpu32_top.sv
../../../../../../../../rtl/verilog/memory/pu_or1k_simple_dpram_sclk.sv
../../../../../../../../rtl/verilog/memory/pu_or1k_true_dpram_sclk.sv
../../../../../../../../rtl/verilog/pu/pu_or1k_axi4.sv
