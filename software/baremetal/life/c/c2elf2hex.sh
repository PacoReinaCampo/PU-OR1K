rm -rf life_c.run
rm -rf life_c.elf
rm -rf life_c.hex

export PATH=/opt/or1k-elf-gcc/bin:${PATH}

# x86-64 ISA
gcc life_c.c -o life_c.run

# OpenRISC ISA
or1k-elf-gcc life_c.c -o life_c.elf
or1k-elf-objcopy -O ihex life_c.elf life_c.hex
