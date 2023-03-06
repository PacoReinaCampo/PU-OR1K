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

or1k-elf-objcopy -O ihex or1k-alignillegalinsn or1k-alignillegalinsn.hex
or1k-elf-objcopy -O ihex or1k-backtoback_jmp or1k-backtoback_jmp.hex
or1k-elf-objcopy -O ihex or1k-basic or1k-basic.hex
or1k-elf-objcopy -O ihex or1k-cmov or1k-cmov.hex
or1k-elf-objcopy -O ihex or1k-cy or1k-cy.hex
or1k-elf-objcopy -O ihex or1k-dsx or1k-dsx.hex
or1k-elf-objcopy -O ihex or1k-dsxinsn or1k-dsxinsn.hex
or1k-elf-objcopy -O ihex or1k-ext or1k-ext.hex
or1k-elf-objcopy -O ihex or1k-ffl1 or1k-ffl1.hex
or1k-elf-objcopy -O ihex or1k-icache or1k-icache.hex
or1k-elf-objcopy -O ihex or1k-illegalinsn or1k-illegalinsn.hex
or1k-elf-objcopy -O ihex or1k-illegalinsndelayslot or1k-illegalinsndelayslot.hex
or1k-elf-objcopy -O ihex or1k-insnfetchalign or1k-insnfetchalign.hex
or1k-elf-objcopy -O ihex or1k-insnfetcherror or1k-insnfetcherror.hex
or1k-elf-objcopy -O ihex or1k-intloop or1k-intloop.hex
or1k-elf-objcopy -O ihex or1k-intmulticycle or1k-intmulticycle.hex
or1k-elf-objcopy -O ihex or1k-intsyscall or1k-intsyscall.hex
or1k-elf-objcopy -O ihex or1k-inttickloop or1k-inttickloop.hex
or1k-elf-objcopy -O ihex or1k-jmp or1k-jmp.hex
or1k-elf-objcopy -O ihex or1k-jr or1k-jr.hex
or1k-elf-objcopy -O ihex or1k-lsu or1k-lsu.hex
or1k-elf-objcopy -O ihex or1k-lsualign or1k-lsualign.hex
or1k-elf-objcopy -O ihex or1k-lsualigndelayslot or1k-lsualigndelayslot.hex
or1k-elf-objcopy -O ihex or1k-lsuerror or1k-lsuerror.hex
or1k-elf-objcopy -O ihex or1k-lsuerrordelayslot or1k-lsuerrordelayslot.hex
or1k-elf-objcopy -O ihex or1k-lwjr or1k-lwjr.hex
or1k-elf-objcopy -O ihex or1k-msync or1k-msync.hex
or1k-elf-objcopy -O ihex or1k-mul-basic or1k-mul-basic.hex
or1k-elf-objcopy -O ihex or1k-ov or1k-ov.hex
or1k-elf-objcopy -O ihex or1k-regjmp or1k-regjmp.hex
or1k-elf-objcopy -O ihex or1k-rfe or1k-rfe.hex
or1k-elf-objcopy -O ihex or1k-sf or1k-sf.hex
or1k-elf-objcopy -O ihex or1k-sfbf or1k-sfbf.hex
or1k-elf-objcopy -O ihex or1k-shiftopts or1k-shiftopts.hex
or1k-elf-objcopy -O ihex or1k-shortbranch or1k-shortbranch.hex
or1k-elf-objcopy -O ihex or1k-shortjump or1k-shortjump.hex
or1k-elf-objcopy -O ihex or1k-systemcall or1k-systemcall.hex
or1k-elf-objcopy -O ihex or1k-tickloop or1k-tickloop.hex
or1k-elf-objcopy -O ihex or1k-tickrfforward or1k-tickrfforward.hex
or1k-elf-objcopy -O ihex or1k-ticksyscall or1k-ticksyscall.hex
or1k-elf-objcopy -O ihex or1k-timer or1k-timer.hex
or1k-elf-objcopy -O ihex or1k-trap or1k-trap.hex
or1k-elf-objcopy -O ihex or1k-trapdelayslot or1k-trapdelayslot.hex
