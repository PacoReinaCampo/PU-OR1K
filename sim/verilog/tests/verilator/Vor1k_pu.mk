# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f Vor1k_pu.mk

default: Vor1k_pu

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /usr/local/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

### Switches...
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = Vor1k_pu
# Module prefix (from --prefix)
VM_MODPREFIX = Vor1k_pu
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	-I../../../../software/elf-loader \
	-I../../../../bench/cpp \
	-I../../../../dbg/rtl/pu/or1k/verilog/wb/pkg \
	-I../../../../msi/rtl/verilog/wb/core \
	-I../../../../msi/rtl/verilog/wb/pkg \
	-I../../../../rtl/verilog/pkg \
	-I../../../../uart/rtl/verilog/wb/pkg \
	-std=c++11 \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	-lelf \
	-pthread \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	jtagServer \
	or1k_testbench \
	verilator_tb_utils \
	elf-loader \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	../../../../bench/cpp \
	../../../../software/elf-loader \


### Default rules...
# Include list of all generated classes
include Vor1k_pu_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

jtagServer.o: ../../../../bench/cpp/jtagServer.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
or1k_testbench.o: ../../../../bench/cpp/or1k_testbench.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
verilator_tb_utils.o: ../../../../bench/cpp/verilator_tb_utils.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
elf-loader.o: ../../../../software/elf-loader/elf-loader.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
Vor1k_pu: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@


# Verilated -*- Makefile -*-
