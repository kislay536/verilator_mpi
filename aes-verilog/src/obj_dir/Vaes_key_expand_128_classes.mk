# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vaes_key_expand_128.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace-fst/--trace-saif/--trace-vcd)
VM_TRACE = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0
# Tracing output mode in SAIF format?  0/1 (from --trace-saif)
VM_TRACE_SAIF = 0
# Tracing output mode in VCD format?  0/1 (from --trace-vcd)
VM_TRACE_VCD = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vaes_key_expand_128 \
	Vaes_key_expand_128___024root__DepSet_h09315ae3__0 \
	Vaes_key_expand_128___024root__DepSet_h09315ae3__1 \
	Vaes_key_expand_128___024root__DepSet_h0610b165__0 \
	Vaes_key_expand_128_sbox__DepSet_h8787e91b__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vaes_key_expand_128__ConstPool_0 \
	Vaes_key_expand_128___024root__Slow \
	Vaes_key_expand_128___024root__DepSet_h09315ae3__0__Slow \
	Vaes_key_expand_128___024root__DepSet_h0610b165__0__Slow \
	Vaes_key_expand_128_sbox__Slow \
	Vaes_key_expand_128_sbox__DepSet_h8787e91b__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vaes_key_expand_128__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
