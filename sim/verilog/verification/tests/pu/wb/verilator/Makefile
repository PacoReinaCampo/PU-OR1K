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

all: hardware software

hardware:
	verilator -f system.vc --trace -Wno-fatal -Wno-lint -Wno-UNOPTFLAT -Wno-COMBDLY -CFLAGS "-std=c++11" -LDFLAGS "-pthread"
	make -f Vpu_or1k_wb.mk

software: clear
	./Vpu_or1k_wb --elf-load=../../../../../../../software/tests/elf/or1k-alignillegalinsn
	./Vpu_or1k_wb --elf-load=../../../../../../../software/tests/elf/or1k-backtoback_jmp
	./Vpu_or1k_wb --elf-load=../../../../../../../software/tests/elf/or1k-basic
	./Vpu_or1k_wb --elf-load=../../../../../../../software/tests/elf/or1k-cmov
	./Vpu_or1k_wb --elf-load=../../../../../../../software/tests/elf/or1k-cy
	./Vpu_or1k_wb --elf-load=../../../../../../../software/tests/elf/or1k-dsx
	./Vpu_or1k_wb --elf-load=../../../../../../../software/tests/elf/or1k-dsxinsn
	./Vpu_or1k_wb --elf-load=../../../../../../../software/tests/elf/or1k-ext
	./Vpu_or1k_wb --elf-load=../../../../../../../software/tests/elf/or1k-ffl1
	./Vpu_or1k_wb --elf-load=../../../../../../../software/tests/elf/or1k-icache
	./Vpu_or1k_wb --elf-load=../../../../../../../software/tests/elf/or1k-illegalinsn
	./Vpu_or1k_wb --elf-load=../../../../../../../software/tests/elf/or1k-illegalinsndelayslot
	./Vpu_or1k_wb --elf-load=../../../../../../../software/tests/elf/or1k-insnfetchalign
	./Vpu_or1k_wb --elf-load=../../../../../../../software/tests/elf/or1k-insnfetcherror
	#./Vpu_or1k_wb --elf-load=../../../../../../../software/tests/elf/or1k-intloop
	#./Vpu_or1k_wb --elf-load=../../../../../../../software/tests/elf/or1k-intmulticycle
	#./Vpu_or1k_wb --elf-load=../../../../../../../software/tests/elf/or1k-intsyscall
	#./Vpu_or1k_wb --elf-load=../../../../../../../software/tests/elf/or1k-inttickloop
	./Vpu_or1k_wb --elf-load=../../../../../../../software/tests/elf/or1k-jmp
	./Vpu_or1k_wb --elf-load=../../../../../../../software/tests/elf/or1k-jr
	./Vpu_or1k_wb --elf-load=../../../../../../../software/tests/elf/or1k-lsu
	./Vpu_or1k_wb --elf-load=../../../../../../../software/tests/elf/or1k-lsualign
	./Vpu_or1k_wb --elf-load=../../../../../../../software/tests/elf/or1k-lsualigndelayslot
	./Vpu_or1k_wb --elf-load=../../../../../../../software/tests/elf/or1k-lsuerror
	./Vpu_or1k_wb --elf-load=../../../../../../../software/tests/elf/or1k-lsuerrordelayslot
	./Vpu_or1k_wb --elf-load=../../../../../../../software/tests/elf/or1k-lwjr
	./Vpu_or1k_wb --elf-load=../../../../../../../software/tests/elf/or1k-msync
	./Vpu_or1k_wb --elf-load=../../../../../../../software/tests/elf/or1k-mul-basic
	./Vpu_or1k_wb --elf-load=../../../../../../../software/tests/elf/or1k-ov
	./Vpu_or1k_wb --elf-load=../../../../../../../software/tests/elf/or1k-regjmp
	./Vpu_or1k_wb --elf-load=../../../../../../../software/tests/elf/or1k-rfe
	./Vpu_or1k_wb --elf-load=../../../../../../../software/tests/elf/or1k-sf
	./Vpu_or1k_wb --elf-load=../../../../../../../software/tests/elf/or1k-sfbf
	./Vpu_or1k_wb --elf-load=../../../../../../../software/tests/elf/or1k-shiftopts
	./Vpu_or1k_wb --elf-load=../../../../../../../software/tests/elf/or1k-shortbranch
	./Vpu_or1k_wb --elf-load=../../../../../../../software/tests/elf/or1k-shortjump
	./Vpu_or1k_wb --elf-load=../../../../../../../software/tests/elf/or1k-systemcall
	./Vpu_or1k_wb --elf-load=../../../../../../../software/tests/elf/or1k-tickloop
	./Vpu_or1k_wb --elf-load=../../../../../../../software/tests/elf/or1k-tickrfforward
	./Vpu_or1k_wb --elf-load=../../../../../../../software/tests/elf/or1k-ticksyscall
	./Vpu_or1k_wb --elf-load=../../../../../../../software/tests/elf/or1k-timer
	./Vpu_or1k_wb --elf-load=../../../../../../../software/tests/elf/or1k-trap
	./Vpu_or1k_wb --elf-load=../../../../../../../software/tests/elf/or1k-trapdelayslot

clear:
	rm -rf *.a *.cpp *.d *.dat *.h *.o *.mk

clean:
	rm -rf *.a *.cpp *.d *.dat *.h *.o *.mk Vpu_or1k_*
