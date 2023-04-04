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
##   Francisco Javier Reina Campo <frareicam@gmail.com>                          ##
##                                                                               ##
###################################################################################

TARGET               := pu_or1k_wb
VPI_MODULES          := elf-loader.vpi jtag_vpi.vpi
TOPLEVEL             := pu_or1k_testbench_wb
IVERILOG_OPTIONS     := -DSIM -g2012
ALIGNILLEGALINSN     ?= +elf_load=../../../../../../../software/tests/elf/or1k-alignillegalinsn
BACKTOBACK_JMP       ?= +elf_load=../../../../../../../software/tests/elf/or1k-backtoback_jmp
BASIC                ?= +elf_load=../../../../../../../software/tests/elf/or1k-basic
CMOV                 ?= +elf_load=../../../../../../../software/tests/elf/or1k-cmov
CY                   ?= +elf_load=../../../../../../../software/tests/elf/or1k-cy
DSX                  ?= +elf_load=../../../../../../../software/tests/elf/or1k-dsx
DSXINSN              ?= +elf_load=../../../../../../../software/tests/elf/or1k-dsxinsn
EXT                  ?= +elf_load=../../../../../../../software/tests/elf/or1k-ext
FFL1                 ?= +elf_load=../../../../../../../software/tests/elf/or1k-ffl1
ICACHE               ?= +elf_load=../../../../../../../software/tests/elf/or1k-icache
ILLEGALINSN          ?= +elf_load=../../../../../../../software/tests/elf/or1k-illegalinsn
ILLEGALINSNDELAYSLOT ?= +elf_load=../../../../../../../software/tests/elf/or1k-illegalinsndelayslot
INSNFETCHALIGN       ?= +elf_load=../../../../../../../software/tests/elf/or1k-insnfetchalign
INSNFETCHERROR       ?= +elf_load=../../../../../../../software/tests/elf/or1k-insnfetcherror
INTLOOP              ?= +elf_load=../../../../../../../software/tests/elf/or1k-intloop
INTMULTICYCLE        ?= +elf_load=../../../../../../../software/tests/elf/or1k-intmulticycle
INTSYSCALL           ?= +elf_load=../../../../../../../software/tests/elf/or1k-intsyscall
INTTICKLOOP          ?= +elf_load=../../../../../../../software/tests/elf/or1k-inttickloop
JMP                  ?= +elf_load=../../../../../../../software/tests/elf/or1k-jmp
JR                   ?= +elf_load=../../../../../../../software/tests/elf/or1k-jr
LSU                  ?= +elf_load=../../../../../../../software/tests/elf/or1k-lsu
LSUALIGN             ?= +elf_load=../../../../../../../software/tests/elf/or1k-lsualign
LSUALIGNDELAYSLOT    ?= +elf_load=../../../../../../../software/tests/elf/or1k-lsualigndelayslot
LSUERROR             ?= +elf_load=../../../../../../../software/tests/elf/or1k-lsuerror
LSUERRORDELAYSLOT    ?= +elf_load=../../../../../../../software/tests/elf/or1k-lsuerrordelayslot
LWJR                 ?= +elf_load=../../../../../../../software/tests/elf/or1k-lwjr
MSYNC                ?= +elf_load=../../../../../../../software/tests/elf/or1k-msync
MUL-BASIC            ?= +elf_load=../../../../../../../software/tests/elf/or1k-mul-basic
OV                   ?= +elf_load=../../../../../../../software/tests/elf/or1k-ov
REGJMP               ?= +elf_load=../../../../../../../software/tests/elf/or1k-regjmp
RFE                  ?= +elf_load=../../../../../../../software/tests/elf/or1k-rfe
SF                   ?= +elf_load=../../../../../../../software/tests/elf/or1k-sf
SFBF                 ?= +elf_load=../../../../../../../software/tests/elf/or1k-sfbf
SHIFTOPTS            ?= +elf_load=../../../../../../../software/tests/elf/or1k-shiftopts
SHORTBRANCH          ?= +elf_load=../../../../../../../software/tests/elf/or1k-shortbranch
SHORTJUMP            ?= +elf_load=../../../../../../../software/tests/elf/or1k-shortjump
SYSTEMCALL           ?= +elf_load=../../../../../../../software/tests/elf/or1k-systemcall
TICKLOOP             ?= +elf_load=../../../../../../../software/tests/elf/or1k-tickloop
TICKRFFORWARD        ?= +elf_load=../../../../../../../software/tests/elf/or1k-tickrfforward
TICKSYSCALL          ?= +elf_load=../../../../../../../software/tests/elf/or1k-ticksyscall
TIMER                ?= +elf_load=../../../../../../../software/tests/elf/or1k-timer
TRAP                 ?= +elf_load=../../../../../../../software/tests/elf/or1k-trap
TRAPDELAYSLOT        ?= +elf_load=../../../../../../../software/tests/elf/or1k-trapdelayslot

all:
	$(VPI_MODULES) $(TARGET)

$(TARGET):
	iverilog -s$(TOPLEVEL) -c system.vc -o $@ $(IVERILOG_OPTIONS)

run-alignillegalinsn: $(VPI_MODULES) $(TARGET)
	vvp -n -M. -l log/or1k-alignillegalinsn.log $(patsubst %.vpi,-m%,$(VPI_MODULES)) $(TARGET) $(ALIGNILLEGALINSN)

run-backtoback_jmp: $(VPI_MODULES) $(TARGET)
	vvp -n -M. -l log/or1k-backtoback_jmp.log $(patsubst %.vpi,-m%,$(VPI_MODULES)) $(TARGET) $(BACKTOBACK_JMP)

run-basic: $(VPI_MODULES) $(TARGET)
	vvp -n -M. -l log/or1k-basic.log $(patsubst %.vpi,-m%,$(VPI_MODULES)) $(TARGET) $(BASIC)

run-cmov: $(VPI_MODULES) $(TARGET)
	vvp -n -M. -l log/or1k-cmov.log $(patsubst %.vpi,-m%,$(VPI_MODULES)) $(TARGET) $(CMOV)

run-cy: $(VPI_MODULES) $(TARGET)
	vvp -n -M. -l log/or1k-cy.log $(patsubst %.vpi,-m%,$(VPI_MODULES)) $(TARGET) $(CY)

run-dsx: $(VPI_MODULES) $(TARGET)
	vvp -n -M. -l log/or1k-dsx.log $(patsubst %.vpi,-m%,$(VPI_MODULES)) $(TARGET) $(DSX)

run-dsxinsn: $(VPI_MODULES) $(TARGET)
	vvp -n -M. -l log/or1k-dsxinsn.log $(patsubst %.vpi,-m%,$(VPI_MODULES)) $(TARGET) $(DSXINSN)

run-ext: $(VPI_MODULES) $(TARGET)
	vvp -n -M. -l log/or1k-ext.log $(patsubst %.vpi,-m%,$(VPI_MODULES)) $(TARGET) $(EXT)

run-ffl1: $(VPI_MODULES) $(TARGET)
	vvp -n -M. -l log/or1k-ffl1.log $(patsubst %.vpi,-m%,$(VPI_MODULES)) $(TARGET) $(FFL1)

run-icache: $(VPI_MODULES) $(TARGET)
	vvp -n -M. -l log/or1k-icache.log $(patsubst %.vpi,-m%,$(VPI_MODULES)) $(TARGET) $(ICACHE)

run-illegalinsn: $(VPI_MODULES) $(TARGET)
	vvp -n -M. -l log/or1k-illegalinsn.log $(patsubst %.vpi,-m%,$(VPI_MODULES)) $(TARGET) $(ILLEGALINSN)

run-illegalinsndelayslot: $(VPI_MODULES) $(TARGET)
	vvp -n -M. -l log/or1k-illegalinsndelayslot.log $(patsubst %.vpi,-m%,$(VPI_MODULES)) $(TARGET) $(ILLEGALINSNDELAYSLOT)

run-insnfetchalign: $(VPI_MODULES) $(TARGET)
	vvp -n -M. -l log/or1k-insnfetchalign.log $(patsubst %.vpi,-m%,$(VPI_MODULES)) $(TARGET) $(INSNFETCHALIGN)

run-insnfetcherror: $(VPI_MODULES) $(TARGET)
	vvp -n -M. -l log/or1k-insnfetcherror.log $(patsubst %.vpi,-m%,$(VPI_MODULES)) $(TARGET) $(INSNFETCHERROR)

run-intloop: $(VPI_MODULES) $(TARGET)
	vvp -n -M. -l log/or1k-intloop.log $(patsubst %.vpi,-m%,$(VPI_MODULES)) $(TARGET) $(INTLOOP)

run-intmulticycle: $(VPI_MODULES) $(TARGET)
	vvp -n -M. -l log/or1k-intmulticycle.log $(patsubst %.vpi,-m%,$(VPI_MODULES)) $(TARGET) $(INTMULTICYCLE)

run-intsyscall: $(VPI_MODULES) $(TARGET)
	vvp -n -M. -l log/or1k-intsyscall.log $(patsubst %.vpi,-m%,$(VPI_MODULES)) $(TARGET) $(INTSYSCALL)

run-inttickloop: $(VPI_MODULES) $(TARGET)
	vvp -n -M. -l log/or1k-inttickloop.log $(patsubst %.vpi,-m%,$(VPI_MODULES)) $(TARGET) $(INTTICKLOOP)

run-jmp: $(VPI_MODULES) $(TARGET)
	vvp -n -M. -l log/or1k-jmp.log $(patsubst %.vpi,-m%,$(VPI_MODULES)) $(TARGET) $(JMP)

run-jr: $(VPI_MODULES) $(TARGET)
	vvp -n -M. -l log/or1k-jr.log $(patsubst %.vpi,-m%,$(VPI_MODULES)) $(TARGET) $(JR)

run-lsu: $(VPI_MODULES) $(TARGET)
	vvp -n -M. -l log/or1k-lsu.log $(patsubst %.vpi,-m%,$(VPI_MODULES)) $(TARGET) $(LSU)

run-lsualign: $(VPI_MODULES) $(TARGET)
	vvp -n -M. -l log/or1k-lsualign.log $(patsubst %.vpi,-m%,$(VPI_MODULES)) $(TARGET) $(LSUALIGN)

run-lsualigndelayslot: $(VPI_MODULES) $(TARGET)
	vvp -n -M. -l log/or1k-lsualigndelayslot.log $(patsubst %.vpi,-m%,$(VPI_MODULES)) $(TARGET) $(LSUALIGNDELAYSLOT)

run-lsuerror: $(VPI_MODULES) $(TARGET)
	vvp -n -M. -l log/or1k-lsuerror.log $(patsubst %.vpi,-m%,$(VPI_MODULES)) $(TARGET) $(LSUERROR)

run-lsuerrordelayslot: $(VPI_MODULES) $(TARGET)
	vvp -n -M. -l log/or1k-lsuerrordelayslot.log $(patsubst %.vpi,-m%,$(VPI_MODULES)) $(TARGET) $(LSUERRORDELAYSLOT)

run-lwjr: $(VPI_MODULES) $(TARGET)
	vvp -n -M. -l log/or1k-lwjr.log $(patsubst %.vpi,-m%,$(VPI_MODULES)) $(TARGET) $(LWJR)

run-msync: $(VPI_MODULES) $(TARGET)
	vvp -n -M. -l log/or1k-msync.log $(patsubst %.vpi,-m%,$(VPI_MODULES)) $(TARGET) $(MSYNC)

run-mul-basic: $(VPI_MODULES) $(TARGET)
	vvp -n -M. -l log/or1k-mul-basic.log $(patsubst %.vpi,-m%,$(VPI_MODULES)) $(TARGET) $(MUL-BASIC)

run-ov: $(VPI_MODULES) $(TARGET)
	vvp -n -M. -l log/or1k-ov.log $(patsubst %.vpi,-m%,$(VPI_MODULES)) $(TARGET) $(OV)

run-regjmp: $(VPI_MODULES) $(TARGET)
	vvp -n -M. -l log/or1k-regjmp.log $(patsubst %.vpi,-m%,$(VPI_MODULES)) $(TARGET) $(REGJMP)

run-rfe: $(VPI_MODULES) $(TARGET)
	vvp -n -M. -l log/or1k-rfe.log $(patsubst %.vpi,-m%,$(VPI_MODULES)) $(TARGET) $(RFE)

run-sf: $(VPI_MODULES) $(TARGET)
	vvp -n -M. -l log/or1k-sf.log $(patsubst %.vpi,-m%,$(VPI_MODULES)) $(TARGET) $(SF)

run-sfbf: $(VPI_MODULES) $(TARGET)
	vvp -n -M. -l log/or1k-sfbf.log $(patsubst %.vpi,-m%,$(VPI_MODULES)) $(TARGET) $(SFBF)

run-shiftopts: $(VPI_MODULES) $(TARGET)
	vvp -n -M. -l log/or1k-shiftopts.log $(patsubst %.vpi,-m%,$(VPI_MODULES)) $(TARGET) $(SHIFTOPTS)

run-shortbranch: $(VPI_MODULES) $(TARGET)
	vvp -n -M. -l log/or1k-shortbranch.log $(patsubst %.vpi,-m%,$(VPI_MODULES)) $(TARGET) $(SHORTBRANCH)

run-shortjump: $(VPI_MODULES) $(TARGET)
	vvp -n -M. -l log/or1k-shortjump.log $(patsubst %.vpi,-m%,$(VPI_MODULES)) $(TARGET) $(SHORTJUMP)

run-systemcall: $(VPI_MODULES) $(TARGET)
	vvp -n -M. -l log/or1k-systemcall.log $(patsubst %.vpi,-m%,$(VPI_MODULES)) $(TARGET) $(SYSTEMCALL)

run-tickloop: $(VPI_MODULES) $(TARGET)
	vvp -n -M. -l log/or1k-tickloop.log $(patsubst %.vpi,-m%,$(VPI_MODULES)) $(TARGET) $(TICKLOOP)

run-tickrfforward: $(VPI_MODULES) $(TARGET)
	vvp -n -M. -l log/or1k-tickrfforward.log $(patsubst %.vpi,-m%,$(VPI_MODULES)) $(TARGET) $(TICKRFFORWARD)

run-ticksyscall: $(VPI_MODULES) $(TARGET)
	vvp -n -M. -l log/or1k-ticksyscall.log $(patsubst %.vpi,-m%,$(VPI_MODULES)) $(TARGET) $(TICKSYSCALL)

run-timer: $(VPI_MODULES) $(TARGET)
	vvp -n -M. -l log/or1k-timer.log $(patsubst %.vpi,-m%,$(VPI_MODULES)) $(TARGET) $(TIMER)

run-trap: $(VPI_MODULES) $(TARGET)
	vvp -n -M. -l log/or1k-trap.log $(patsubst %.vpi,-m%,$(VPI_MODULES)) $(TARGET) $(TRAP)

run-trapdelayslot: $(VPI_MODULES) $(TARGET)
	vvp -n -M. -l log/or1k-trapdelayslot.log $(patsubst %.vpi,-m%,$(VPI_MODULES)) $(TARGET) $(TRAPDELAYSLOT)

elf-loader_LIBS := -lelf
elf-loader_INCS := -I../../../../../../../software/elf-loader/
elf-loader_SRCS := ../../../../../../../software/elf-loader/elf-loader.c \
                   ../../../../../../../software/elf-loader/vpi_wrapper.c

elf-loader.vpi: $(elf-loader_SRCS)
	iverilog-vpi --name=elf-loader $(elf-loader_LIBS) $(elf-loader_INCS) $?

jtag_vpi_LIBS := 
jtag_vpi_INCS := -I../../../../../../../dbg/software/or1k/debug/
jtag_vpi_SRCS := ../../../../../../../dbg/software/or1k/debug/jtag_common.c \
                 ../../../../../../../dbg/software/or1k/debug/jtag_vpi.c \
                 ../../../../../../../dbg/bench/pu/or1k/verilog/code/tests/wb/debug/jtag_vpi/jtag_vpi.sv

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
