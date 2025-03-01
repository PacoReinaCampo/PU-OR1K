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
##              OR1K CPU                                                         ##
##              Regression Test Makefile                                         ##
##                                                                               ##
###################################################################################

###################################################################################
##                                                                               ##
## Copyright (c) 2015-2016 by the author(s)                                      ##
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

TARGET               := pu_or1k_wb
VPI_MODULES          := elf-loader.vpi jtag_vpi.vpi
TOPLEVEL             := pu_or1k_testbench_wb
IVERILOG_OPTIONS     := -DSIM -g2012
LINUX                ?= +elf_load=../../../../../../../../software/os/linux/vmlinux

all:
	$(VPI_MODULES) $(TARGET)

$(TARGET):
	iverilog -s$(TOPLEVEL) -c system.s -o $@ $(IVERILOG_OPTIONS)

run-linux: $(VPI_MODULES) $(TARGET)
	vvp -n -M. -l log/or1k-linux.log $(patsubst %.vpi,-m%,$(VPI_MODULES)) $(TARGET) $(LINUX)

elf-loader_LIBS := -lelf
elf-loader_INCS := -I../../../../../../../software/elf-loader/
elf-loader_SRCS := ../../../../../../../software/elf-loader/elf-loader.c \
                   ../../../../../../../software/elf-loader/vpi_wrapper.c

elf-loader.vpi: $(elf-loader_SRCS)
	iverilog-vpi --name=elf-loader $(elf-loader_LIBS) $(elf-loader_INCS) $?

jtag_vpi_LIBS := 
jtag_vpi_INCS := -I../../../../../../../peripheral/dbg/software/or1k/debug/
jtag_vpi_SRCS := ../../../../../../../peripheral/dbg/software/or1k/debug/jtag_common.c \
                 ../../../../../../../peripheral/dbg/software/or1k/debug/jtag_vpi.c \
                 ../../../../../../../peripheral/dbg/bench/pu/or1k/verilog/code/tests/wb/debug/jtag_vpi/jtag_vpi.sv

jtag_vpi.vpi: $(jtag_vpi_SRCS)
	iverilog-vpi --name=jtag_vpi $(jtag_vpi_LIBS) $(jtag_vpi_INCS) $?

clean:
	$(RM) $(VPI_MODULES) $(TARGET)
	$(RM) elf-loader.vpi
	$(RM) jtag_vpi.vpi

clean-all:
	$(RM) $(VPI_MODULES) $(TARGET)
	$(RM) -rf log
	$(RM) *.log *.o *.vpi
