# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vor1k_pu.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0
# Tracing threaded output mode?  0/1/N threads (from --trace-thread)
VM_TRACE_THREADS = 0
# Separate FST writer thread? 0/1 (from --trace-fst with --trace-thread > 0)
VM_TRACE_FST_WRITER_THREAD = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vor1k_pu \
	Vor1k_pu_or1k_pu \
	Vor1k_pu_or1k_core__pi1 \
	Vor1k_pu_mpsoc_wb_spram__D800000 \
	Vor1k_pu_or1k_cpu__pi3 \
	Vor1k_pu_mpsoc_wb_ram_generic__pi4 \
	Vor1k_pu_or1k_cpu_cappuccino__pi5 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vor1k_pu__Slow \
	Vor1k_pu_or1k_pu__Slow \
	Vor1k_pu_or1k_core__pi1__Slow \
	Vor1k_pu_mpsoc_wb_spram__D800000__Slow \
	Vor1k_pu_or1k_cpu__pi3__Slow \
	Vor1k_pu_mpsoc_wb_ram_generic__pi4__Slow \
	Vor1k_pu_or1k_cpu_cappuccino__pi5__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vor1k_pu__Dpi \
	Vor1k_pu__Trace \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vor1k_pu__Syms \
	Vor1k_pu__Trace__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vcd_c \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
