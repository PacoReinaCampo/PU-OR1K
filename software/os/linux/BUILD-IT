rm -rf vmlinux

export PATH=/opt/or1k-elf-gcc/bin:${PATH}

git clone --recursive https://github.com/torvalds/linux

cd linux
make ARCH=openrisc CROSS_COMPILE=or1k-elf- defconfig
make ARCH=openrisc CROSS_COMPILE=or1k-elf-

cp vmlinux ..
cd ..
rm -rf linux
