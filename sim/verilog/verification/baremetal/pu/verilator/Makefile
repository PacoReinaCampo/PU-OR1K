all: hardware software

hardware:
	verilator -f system.vc --trace -Wno-fatal -Wno-lint -Wno-UNOPTFLAT -Wno-COMBDLY -CFLAGS "-std=c++11" -LDFLAGS "-pthread"
	make -f Vor1k_pu.mk

software:
	./Vor1k_pu --elf-load=../../../../software/baremetal/hello/c/hello_c.elf
	./Vor1k_pu --elf-load=../../../../software/baremetal/hello/cpp/hello_cpp.elf

clean:
	rm -rf *.a *.cpp *.d *.dat *.h *.o *.mk Vor1k_* stdout.*
