all: hardware software

hardware:
	verilator -f system.vc --trace -Wno-fatal -Wno-lint -Wno-UNOPTFLAT -Wno-COMBDLY -CFLAGS "-std=c++11" -LDFLAGS "-pthread"
	make -f Vor1k_pu.mk

software:
	./Vor1k_pu --elf-load=../../../../software/tests/elf/or1k-alignillegalinsn
	./Vor1k_pu --elf-load=../../../../software/tests/elf/or1k-backtoback_jmp
	./Vor1k_pu --elf-load=../../../../software/tests/elf/or1k-basic
	./Vor1k_pu --elf-load=../../../../software/tests/elf/or1k-cmov
	./Vor1k_pu --elf-load=../../../../software/tests/elf/or1k-cy
	./Vor1k_pu --elf-load=../../../../software/tests/elf/or1k-dsx
	./Vor1k_pu --elf-load=../../../../software/tests/elf/or1k-dsxinsn
	./Vor1k_pu --elf-load=../../../../software/tests/elf/or1k-ext
	./Vor1k_pu --elf-load=../../../../software/tests/elf/or1k-ffl1
	./Vor1k_pu --elf-load=../../../../software/tests/elf/or1k-icache
	./Vor1k_pu --elf-load=../../../../software/tests/elf/or1k-illegalinsn
	./Vor1k_pu --elf-load=../../../../software/tests/elf/or1k-illegalinsndelayslot
	./Vor1k_pu --elf-load=../../../../software/tests/elf/or1k-insnfetchalign
	./Vor1k_pu --elf-load=../../../../software/tests/elf/or1k-insnfetcherror
	#./Vor1k_pu --elf-load=../../../../software/tests/elf/or1k-intloop
	#./Vor1k_pu --elf-load=../../../../software/tests/elf/or1k-intmulticycle
	#./Vor1k_pu --elf-load=../../../../software/tests/elf/or1k-intsyscall
	#./Vor1k_pu --elf-load=../../../../software/tests/elf/or1k-inttickloop
	./Vor1k_pu --elf-load=../../../../software/tests/elf/or1k-jmp
	./Vor1k_pu --elf-load=../../../../software/tests/elf/or1k-jr
	./Vor1k_pu --elf-load=../../../../software/tests/elf/or1k-lsu
	./Vor1k_pu --elf-load=../../../../software/tests/elf/or1k-lsualign
	./Vor1k_pu --elf-load=../../../../software/tests/elf/or1k-lsualigndelayslot
	./Vor1k_pu --elf-load=../../../../software/tests/elf/or1k-lsuerror
	./Vor1k_pu --elf-load=../../../../software/tests/elf/or1k-lsuerrordelayslot
	./Vor1k_pu --elf-load=../../../../software/tests/elf/or1k-lwjr
	./Vor1k_pu --elf-load=../../../../software/tests/elf/or1k-msync
	./Vor1k_pu --elf-load=../../../../software/tests/elf/or1k-mul-basic
	./Vor1k_pu --elf-load=../../../../software/tests/elf/or1k-ov
	./Vor1k_pu --elf-load=../../../../software/tests/elf/or1k-regjmp
	./Vor1k_pu --elf-load=../../../../software/tests/elf/or1k-rfe
	./Vor1k_pu --elf-load=../../../../software/tests/elf/or1k-sf
	./Vor1k_pu --elf-load=../../../../software/tests/elf/or1k-sfbf
	./Vor1k_pu --elf-load=../../../../software/tests/elf/or1k-shiftopts
	./Vor1k_pu --elf-load=../../../../software/tests/elf/or1k-shortbranch
	./Vor1k_pu --elf-load=../../../../software/tests/elf/or1k-shortjump
	./Vor1k_pu --elf-load=../../../../software/tests/elf/or1k-systemcall
	./Vor1k_pu --elf-load=../../../../software/tests/elf/or1k-tickloop
	./Vor1k_pu --elf-load=../../../../software/tests/elf/or1k-tickrfforward
	./Vor1k_pu --elf-load=../../../../software/tests/elf/or1k-ticksyscall
	./Vor1k_pu --elf-load=../../../../software/tests/elf/or1k-timer
	./Vor1k_pu --elf-load=../../../../software/tests/elf/or1k-trap
	./Vor1k_pu --elf-load=../../../../software/tests/elf/or1k-trapdelayslot

clean:
	rm -rf *.a *.cpp *.d *.dat *.h *.o *.mk Vor1k_* stdout.*
