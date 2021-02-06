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
