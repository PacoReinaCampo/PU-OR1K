rm -rf hello_c.run
rm -rf hello_c.elf
rm -rf hello_c.hex

export PATH=/opt/or1k-elf-gcc/bin:${PATH}

# x86-64 ISA
gcc hello_c.c -o hello_c.run

# OpenRISC ISA
or1k-elf-gcc hello_c.c -o hello_c.elf
or1k-elf-objcopy -O ihex hello_c.elf hello_c.hex
