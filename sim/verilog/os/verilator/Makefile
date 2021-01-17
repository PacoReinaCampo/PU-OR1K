all: hardware software

hardware:
	verilator -f system.vc --trace -Wno-fatal -Wno-lint -Wno-UNOPTFLAT -Wno-COMBDLY -CFLAGS "-std=c++11" -LDFLAGS "-pthread"
	make -f Vor1k_pu.mk

software:
	./Vor1k_pu --elf-load=../../../../software/os/linux/vmlinux

clean:
	rm -rf *.a *.cpp *.d *.dat *.h *.o *.mk Vor1k_* stdout.*
