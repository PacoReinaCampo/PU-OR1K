TARGET           := pu-or1k
VPI_MODULES      := elf-loader.vpi jtag_vpi.vpi
TOPLEVEL         := orpsoc_tb
IVERILOG_OPTIONS := -DSIM
EXTRA_OPTIONS    ?= +elf_load=../software/hello/hello.elf

all: $(VPI_MODULES) $(TARGET)

$(TARGET):
	iverilog -s$(TOPLEVEL) -c $(TARGET).scr -o $@ $(IVERILOG_OPTIONS)

run: $(VPI_MODULES) $(TARGET)
	vvp -n -M. -l icarus.log -lxt2 $(patsubst %.vpi,-m%,$(VPI_MODULES)) $(TARGET) $(EXTRA_OPTIONS)

clean:
	$(RM) $(VPI_MODULES) $(TARGET)

elf-loader_LIBS := -lelf
elf-loader_INCS := -I../software/elf-loader/
elf-loader_SRCS := ../software/elf-loader/elf-loader.c ../software/elf-loader/vpi_wrapper.c

elf-loader.vpi: $(elf-loader_SRCS)
	iverilog-vpi --name=elf-loader $(elf-loader_LIBS) $(elf-loader_INCS) $?

clean_elf-loader:
	$(RM) elf-loader.vpi

jtag_vpi_LIBS := 
jtag_vpi_INCS := -I../rtl/verilog/jtag_vpi/
jtag_vpi_SRCS := ../rtl/verilog/jtag_vpi/jtag_common.c ../rtl/verilog/jtag_vpi/jtag_vpi.c ../rtl/verilog/jtag_vpi/jtag_vpi.v

jtag_vpi.vpi: $(jtag_vpi_SRCS)
	iverilog-vpi --name=jtag_vpi $(jtag_vpi_LIBS) $(jtag_vpi_INCS) $?

clean_jtag_vpi:
	$(RM) jtag_vpi.vpi
