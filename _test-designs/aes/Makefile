SRC_FILES = aes_main.v aes_key_expand_128.v lastround.v mixcolumn.v round.v sbox.v shiftrows.v subbytes.v
OBJ_DIR = obj_dir
TOP = Vaes_main

# If 'flag' is set, prefix with '-- ', otherwise empty
ifdef flag
    FLAGS := 
else
    FLAGS := --hierarchical
endif

xml:
	verilator -Wall -cc -xml-only -xml-output design.xml --top-module aes_main *.v --Wno-fatal

elaborate: clean
	@echo "Running elaboration $(if $(flag),with flags: $(flag),without extra flags)..."
	@verilator --cc $(SRC_FILES) --exe sim_main.cpp --Wno-fatal $(FLAGS) > verilate.log 2>&1

# -Wall shows all kind of warnings

build:
	@echo "Building $(if $(flag),with flags: $(flag),without extra flags)..."
	@make -C $(OBJ_DIR) -f $(TOP).mk $(TOP) $(flag)

simulate:
	@echo "Simulating..."
	@./$(OBJ_DIR)/$(TOP)

clean:
	@echo "Cleaning build files..."
	@rm -rf $(OBJ_DIR) $(TOP)
	@clear
