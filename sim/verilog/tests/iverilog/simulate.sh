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

rm -rf log
mkdir log

make clean; make run-alignillegalinsn; echo -e "\nalignillegalinsn test finished\n\n"
make clean; make run-backtoback_jmp; echo -e "\nbacktoback_jmp test finished\n\n"
make clean; make run-basic; echo -e "\nbasic test finished\n\n"
make clean; make run-cmov; echo -e "\ncmov test finished\n\n"
make clean; make run-cy; echo -e "\ncy test finished\n\n"
make clean; make run-dsx; echo -e "\ndsx test finished\n\n"
make clean; make run-dsxinsn; echo -e "\ndsxinsn test finished\n\n"
make clean; make run-ext; echo -e "\next test finished\n\n"
make clean; make run-ffl1; echo -e "\nffl1 test finished\n\n"
make clean; make run-icache; echo -e "\nicache test finished\n\n"
make clean; make run-illegalinsn; echo -e "\nillegalinsn test finished\n\n"
make clean; make run-illegalinsndelayslot; echo -e "\nillegalinsndelayslot test finished\n\n"
make clean; make run-insnfetchalign; echo -e "\ninsnfetchalign test finished\n\n"
make clean; make run-insnfetcherror; echo -e "\ninsnfetcherror test finished\n\n"
#make clean; make run-intloop; echo -e "\nintloop test finished\n\n"
#make clean; make run-intmulticycle; echo -e "\nintmulticycle test finished\n\n"
#make clean; make run-intsyscall; echo -e "\nintsyscall test finished\n\n"
#make clean; make run-inttickloop; echo -e "\ninttickloop test finished\n\n"
make clean; make run-jmp; echo -e "\njmp test finished\n\n"
make clean; make run-jr; echo -e "\njr test finished\n\n"
make clean; make run-lsu; echo -e "\nlsu test finished\n\n"
make clean; make run-lsualign; echo -e "\nlsualign test finished\n\n"
make clean; make run-lsualigndelayslot; echo -e "\nlsualigndelayslot test finished\n\n"
make clean; make run-lsuerror; echo -e "\nlsuerror test finished\n\n"
make clean; make run-lsuerrordelayslot; echo -e "\nlsuerrordelayslot test finished\n\n"
make clean; make run-lwjr; echo -e "\nlwjr test finished\n\n"
make clean; make run-msync; echo -e "\nmsync test finished\n\n"
make clean; make run-mul-basic; echo -e "\nmul-basic test finished\n\n"
make clean; make run-ov; echo -e "\nov test finished\n\n"
make clean; make run-regjmp; echo -e "\nregjmp test finished\n\n"
make clean; make run-rfe; echo -e "\nrfe test finished\n\n"
make clean; make run-sf; echo -e "\nsf test finished\n\n"
make clean; make run-sfbf; echo -e "\nsfbf test finished\n\n"
make clean; make run-shiftopts; echo -e "\nshiftopts test finished\n\n"
make clean; make run-shortbranch; echo -e "\nshortbranch test finished\n\n"
make clean; make run-shortjump; echo -e "\nshortjump test finished\n\n"
make clean; make run-systemcall; echo -e "\nsystemcall test finished\n\n"
make clean; make run-tickloop; echo -e "\ntickloop test finished\n\n"
make clean; make run-tickrfforward; echo -e "\ntickrfforward test finished\n\n"
make clean; make run-ticksyscall; echo -e "\nticksyscall test finished\n\n"
make clean; make run-timer; echo -e "\ntimer test finished\n\n"
make clean; make run-trap; echo -e "\ntrap test finished\n\n"
make clean; make run-trapdelayslot; echo -e "\ntrapdelayslot test finished\n\n"
