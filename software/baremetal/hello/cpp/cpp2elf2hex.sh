rm -rf hello_cpp.run
rm -rf hello_cpp.elf
rm -rf hello_cpp.hex

export PATH=/opt/or1k-elf-gcc/bin:${PATH}

# x86-64 ISA
g++ hello_cpp.cpp -o hello_cpp.run

# OpenRISC ISA
or1k-elf-g++ hello_cpp.cpp -o hello_cpp.elf
or1k-elf-objcopy -O ihex hello_cpp.elf hello_cpp.hex
