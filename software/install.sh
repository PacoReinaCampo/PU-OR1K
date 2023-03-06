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

git clone git://sourceware.org/git/binutils-gdb.git binutils
git clone https://github.com/openrisc/or1k-gcc.git gcc
git clone git://sourceware.org/git/newlib-cygwin.git newlib
git clone git://sourceware.org/git/binutils-gdb.git gdb

export PATH=/opt/or1k-elf-gcc/bin:${PATH}

mkdir build-binutils; cd build-binutils
../binutils/configure --target=or1k-elf --prefix=/opt/or1k-elf-gcc \
--disable-itcl --disable-tk --disable-tcl --disable-winsup --disable-gdbtk \
--disable-libgui --disable-rda --disable-sid --disable-sim --disable-gdb \
--with-sysroot --disable-newlib --disable-libgloss --with-system-zlib
make
sudo make install
cd ..

mkdir build-gcc-stage1; cd build-gcc-stage1
../gcc/configure --target=or1k-elf --prefix=/opt/or1k-elf-gcc \
--enable-languages=c --disable-shared --disable-libssp
make
sudo make install
cd ..

mkdir build-newlib; cd build-newlib
../newlib/configure --target=or1k-elf --prefix=/opt/or1k-elf-gcc
make
sudo make install
cd ..

mkdir build-gcc-stage2; cd build-gcc-stage2
../gcc/configure --target=or1k-elf --prefix=/opt/or1k-elf-gcc \
--enable-languages=c,c++ --disable-shared --disable-libssp --with-newlib
make
sudo make install
cd ..

mkdir build-gdb; cd build-gdb
../gdb/configure --target=or1k-elf --prefix=/opt/or1k-elf-gcc --disable-itcl \
--disable-tk --disable-tcl --disable-winsup --disable-gdbtk --disable-libgui \
--disable-rda --disable-sid --with-sysroot --disable-newlib --disable-libgloss \
--disable-gas --disable-ld --disable-binutils --disable-gprof --with-system-zlib
make
sudo make install
cd ..
