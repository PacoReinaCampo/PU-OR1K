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
##              MPSoC-SPRAM CPU                                                  ##
##              Synthesis Test Makefile                                          ##
##                                                                               ##
###################################################################################

###################################################################################
##                                                                               ##
## Copyright (c) 2018-2019 by the author(s)                                      ##
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
##   Francisco Javier Reina Campo <pacoreinacampo@queenfield.tech>               ##
##                                                                               ##
###################################################################################

read_verilog -sv ../../../../peripheral/dbg/bench/pu/or1k/verilog/tests/apb4/debug/jtag_tap/tap_top.sv
read_verilog -sv ../../../../peripheral/dbg/rtl/pu/or1k/verilog/apb4/pkg/adbg_or1k_defines.sv
read_verilog -sv ../../../../peripheral/dbg/rtl/pu/or1k/verilog/apb4/core/adbg_bytefifo.sv
read_verilog -sv ../../../../peripheral/dbg/rtl/pu/or1k/verilog/apb4/core/adbg_crc32.sv
read_verilog -sv ../../../../peripheral/dbg/rtl/pu/or1k/verilog/apb4/core/adbg_jsp_apb4.sv
read_verilog -sv ../../../../peripheral/dbg/rtl/pu/or1k/verilog/apb4/core/adbg_jsp_module.sv
read_verilog -sv ../../../../peripheral/dbg/rtl/pu/or1k/verilog/apb4/core/adbg_or1k_apb4.sv
read_verilog -sv ../../../../peripheral/dbg/rtl/pu/or1k/verilog/apb4/core/adbg_or1k_module.sv
read_verilog -sv ../../../../peripheral/dbg/rtl/pu/or1k/verilog/apb4/core/adbg_or1k_status_reg.sv
read_verilog -sv ../../../../peripheral/dbg/rtl/pu/or1k/verilog/apb4/core/adbg_syncflop.sv
read_verilog -sv ../../../../peripheral/dbg/rtl/pu/or1k/verilog/apb4/core/adbg_syncreg.sv
read_verilog -sv ../../../../peripheral/dbg/rtl/pu/or1k/verilog/apb4/core/adbg_top.sv
read_verilog -sv ../../../../peripheral/dbg/rtl/pu/or1k/verilog/apb4/core/adbg_apb4_apb4.sv
read_verilog -sv ../../../../peripheral/dbg/rtl/pu/or1k/verilog/apb4/core/adbg_apb4_module.sv
read_verilog -sv ../../../../peripheral/msi/rtl/verilog/apb4/arbiter/mpsoc_msi_arbiter.sv
read_verilog -sv ../../../../peripheral/msi/rtl/verilog/apb4/cdc/mpsoc_msi_apb4_cc561.sv
read_verilog -sv ../../../../peripheral/msi/rtl/verilog/apb4/cdc/mpsoc_msi_apb4_cdc.sv
read_verilog -sv ../../../../peripheral/msi/rtl/verilog/apb4/cdc/mpsoc_msi_apb4_sync2_pgen.sv
read_verilog -sv ../../../../peripheral/msi/rtl/verilog/apb4/core/mpsoc_msi_apb4_arbiter.sv
read_verilog -sv ../../../../peripheral/msi/rtl/verilog/apb4/core/mpsoc_msi_apb4_data_resize.sv
read_verilog -sv ../../../../peripheral/msi/rtl/verilog/apb4/core/mpsoc_msi_apb4_interface.sv
read_verilog -sv ../../../../peripheral/msi/rtl/verilog/apb4/core/mpsoc_msi_apb4_mux.sv
read_verilog -sv ../../../../rtl/verilog/core/control/or1k_cfgrs.sv
read_verilog -sv ../../../../rtl/verilog/core/control/or1k_ctrl_cappuccino.sv
read_verilog -sv ../../../../rtl/verilog/core/control/or1k_pcu.sv
read_verilog -sv ../../../../rtl/verilog/core/control/or1k_pic.sv
read_verilog -sv ../../../../rtl/verilog/core/control/or1k_ticktimer.sv
read_verilog -sv ../../../../rtl/verilog/core/decode/or1k_decode.sv
read_verilog -sv ../../../../rtl/verilog/core/execute/or1k_execute_alu.sv
read_verilog -sv ../../../../rtl/verilog/core/execute/or1k_execute_ctrl_cappuccino.sv
read_verilog -sv ../../../../rtl/verilog/core/execute/or1k_rf_cappuccino.sv
read_verilog -sv ../../../../rtl/verilog/core/execute/or1k_apb4_mux_cappuccino.sv
read_verilog -sv ../../../../rtl/verilog/core/execute/pfpu32/pfpu32_addsub.sv
read_verilog -sv ../../../../rtl/verilog/core/execute/pfpu32/pfpu32_cmp.sv
read_verilog -sv ../../../../rtl/verilog/core/execute/pfpu32/pfpu32_f2i.sv
read_verilog -sv ../../../../rtl/verilog/core/execute/pfpu32/pfpu32_i2f.sv
read_verilog -sv ../../../../rtl/verilog/core/execute/pfpu32/pfpu32_muldiv.sv
read_verilog -sv ../../../../rtl/verilog/core/execute/pfpu32/pfpu32_rnd.sv
read_verilog -sv ../../../../rtl/verilog/core/execute/pfpu32/pfpu32_top.sv
read_verilog -sv ../../../../rtl/verilog/core/fetch/or1k_cache_lru.sv
read_verilog -sv ../../../../rtl/verilog/core/fetch/or1k_fetch_cappuccino.sv
read_verilog -sv ../../../../rtl/verilog/core/fetch/or1k_icache.sv
read_verilog -sv ../../../../rtl/verilog/core/fetch/or1k_immu.sv
read_verilog -sv ../../../../rtl/verilog/core/memory/or1k_dcache.sv
read_verilog -sv ../../../../rtl/verilog/core/memory/or1k_dmmu.sv
read_verilog -sv ../../../../rtl/verilog/core/memory/or1k_lsu_cappuccino.sv
read_verilog -sv ../../../../rtl/verilog/core/memory/or1k_store_buffer.sv
read_verilog -sv ../../../../rtl/verilog/core/or1k_branch_prediction.sv
read_verilog -sv ../../../../rtl/verilog/core/or1k_branch_predictor_gshare.sv
read_verilog -sv ../../../../rtl/verilog/core/or1k_branch_predictor_saturation_counter.sv
read_verilog -sv ../../../../rtl/verilog/core/or1k_branch_predictor_simple.sv
read_verilog -sv ../../../../rtl/verilog/core/or1k_bus_if_apb432.sv
read_verilog -sv ../../../../rtl/verilog/core/or1k_core.sv
read_verilog -sv ../../../../rtl/verilog/core/or1k_cpu_cappuccino.sv
read_verilog -sv ../../../../rtl/verilog/core/or1k_cpu.sv
read_verilog -sv ../../../../rtl/verilog/core/or1k_decode_execute_cappuccino.sv
read_verilog -sv ../../../../rtl/verilog/memory/or1k_simple_dpram_sclk.sv
read_verilog -sv ../../../../rtl/verilog/memory/or1k_true_dpram_sclk.sv
read_verilog -sv ../../../../peripheral/uart/rtl/verilog/apb4/core/mpsoc_apb4_raminfr.sv
read_verilog -sv ../../../../peripheral/uart/rtl/verilog/apb4/core/mpsoc_apb4_uart_peripheral_bridge.sv
read_verilog -sv ../../../../peripheral/uart/rtl/verilog/apb4/core/mpsoc_apb4_uart_receiver.sv
read_verilog -sv ../../../../peripheral/uart/rtl/verilog/apb4/core/mpsoc_apb4_uart_regs.sv
read_verilog -sv ../../../../peripheral/uart/rtl/verilog/apb4/core/mpsoc_apb4_uart_rfifo.sv
read_verilog -sv ../../../../peripheral/uart/rtl/verilog/apb4/core/mpsoc_apb4_uart_sync_flops.sv
read_verilog -sv ../../../../peripheral/uart/rtl/verilog/apb4/core/mpsoc_apb4_uart_tfifo.sv
read_verilog -sv ../../../../peripheral/uart/rtl/verilog/apb4/core/mpsoc_apb4_uart_transmitter.sv
read_verilog -sv ../../../../peripheral/uart/rtl/verilog/apb4/core/mpsoc_apb4_uart.sv

read_verilog -sv spram/core/peripheral_ram_generic_apb4.sv
read_verilog -sv spram/core/peripheral_spram_apb4.sv

read_verilog -sv or1k_synthesis.sv

read_xdc system.xdc

synth_design -part xc7z020-clg484-1 -top or1k_synthesis \
-include_dirs ../../../../bench/verilog \
-include_dirs ../../../../peripheral/dbg/bench/pu/or1k/verilog/tests/apb4/debug/jtag_vpi \
-include_dirs ../../../../peripheral/dbg/rtl/pu/or1k/verilog/apb4/pkg \
-include_dirs ../../../../peripheral/msi/rtl/verilog/apb4/core \
-include_dirs ../../../../peripheral/msi/rtl/verilog/apb4/pkg \
-include_dirs ../../../../rtl/verilog/pkg \
-include_dirs ../../../../peripheral/uart/rtl/verilog/apb4/pkg

opt_design
place_design
route_design

report_utilization
report_timing

write_edif -force system.edif
write_bitstream -force system.bit
