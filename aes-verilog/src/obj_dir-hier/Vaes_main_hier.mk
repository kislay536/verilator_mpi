# Hierarchical Verilation -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for hierarchical Verilation
#
# The main makefile Vaes_main.mk calls this makefile

ifndef VM_HIER_VERILATION_INCLUDED
VM_HIER_VERILATION_INCLUDED = 1

.SUFFIXES:
.PHONY: hier_build hier_verilation hier_launch_verilator
# Libraries of hierarchical blocks
VM_HIER_LIBS := \
	Vround/libround.a \

hier_build: $(VM_HIER_LIBS) Vaes_main.mk
	$(MAKE) -f Vaes_main.mk
hier_verilation: Vaes_main.mk
# Verilation of hierarchical blocks are executed in this directory
VM_HIER_RUN_DIR := /home/kislay/verilator_mpi/aes-verilog/src
# Common options for hierarchical blocks
VM_HIER_VERILATOR := /usr/local/bin/verilator
VM_HIER_INPUT_FILES := \
	/home/kislay/verilator_mpi/aes-verilog/src/aes_main.v \
	/home/kislay/verilator_mpi/aes-verilog/src/aes_key_expand_128.v \
	/home/kislay/verilator_mpi/aes-verilog/src/lastround.v \
	/home/kislay/verilator_mpi/aes-verilog/src/mixcolumn.v \
	/home/kislay/verilator_mpi/aes-verilog/src/round.v \
	/home/kislay/verilator_mpi/aes-verilog/src/sbox.v \
	/home/kislay/verilator_mpi/aes-verilog/src/shiftrows.v \
	/home/kislay/verilator_mpi/aes-verilog/src/subbytes.v \

VM_HIER_VERILOG_LIBS := \

# VM_HIER_LAUNCH_VERILATOR_ARGSFILE must be passed as a command argument
hier_launch_verilator:
	$(VM_HIER_VERILATOR) -f $(VM_HIER_LAUNCH_VERILATOR_ARGSFILE)

# Verilate the top module
Vaes_main.mk: $(VM_HIER_INPUT_FILES) $(VM_HIER_VERILOG_LIBS) Vaes_main__hierMkArgs.f Vround/round.sv 
	@$(MAKE) -C $(VM_HIER_RUN_DIR) -f obj_dir/Vaes_main_hier.mk hier_launch_verilator \
		VM_HIER_LAUNCH_VERILATOR_ARGSFILE="obj_dir/Vaes_main__hierMkArgs.f"

# Verilate hierarchical blocks
Vround/round.sv Vround/Vround.mk: $(VM_HIER_INPUT_FILES) $(VM_HIER_VERILOG_LIBS) Vround__hierMkArgs.f 
	@$(MAKE) -C $(VM_HIER_RUN_DIR) -f obj_dir/Vaes_main_hier.mk hier_launch_verilator \
		VM_HIER_LAUNCH_VERILATOR_ARGSFILE="obj_dir/Vround__hierMkArgs.f"
Vround/libround.a: Vround/Vround.mk 
	$(MAKE) -f Vround.mk -C Vround VM_PREFIX=Vround

endif  # Guard
