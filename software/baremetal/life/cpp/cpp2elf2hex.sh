rm -rf life_cpp.run
rm -rf life_cpp.elf
rm -rf life_cpp.hex

export PATH=/opt/or1k-elf-gcc/bin:${PATH}

# x86-64 ISA
gcc life_cpp.cpp -o life_cpp.run

# OpenRISC ISA
or1k-elf-g++ life_cpp.cpp -o life_cpp.elf
or1k-elf-objcopy -O ihex life_cpp.elf life_cpp.hex
