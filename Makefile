ROOT := $(dir $(realpath $(lastword $(MAKEFILE_LIST))))
COMPILER_FLAGS := -march=rv32i_zicsr -mabi=ilp32 -mstrict-align -ffreestanding -fno-builtin -nostdlib -nostartfiles -T ./scripts/link.ld ./tests/start.s -O0
PROG := 
PROG_DIR := tests/debug
VERILATOR := verilator
LINT_FLAGS := --lint-only -Wall -Wno-fatal --top-module top
SRCS := packages/*.sv rtl/mem/*.sv rtl/unit/*.sv rtl/system/*.sv 
COMPLIANCE_FLAGS := --cc --exe --build -j 0 --Mdir compliance/obj_dir --top-module top_tb
FIRST_PKG := packages/top_constants.sv
PKGS := $(FIRST_PKG) $(filter-out $(FIRST_PKG),$(shell find packages -name '*.sv'))
RTL := rtl/mem/*.sv rtl/system/*.sv rtl/unit/*.sv
TB := $(shell find tb -name '*.sv')
TOP ?= top
PLUS_ARGS ?= 

ifeq ($(WAVE), 1)
SIM_ARGS ?= -nolog -gui -view $(ROOT)wave/$(TOP)_tb_sim.wcfg $(PLUS_ARGS)
else
SIM_ARGS ?= -runall -log $(TOP)_sim.log $(PLUS_ARGS)
endif

.PHONY: lint build sim compliance synth fpga bit
default:
	riscv32-unknown-elf-gcc $(COMPILER_FLAGS) $(PROG_DIR)/src/$(PROG).c -o $(PROG_DIR)/out/$(PROG).elf
	riscv32-unknown-elf-objcopy -O binary $(PROG_DIR)/out/$(PROG).elf $(PROG_DIR)/out/$(PROG).bin
	hexdump -v -e '1/4 "%08X\n"' $(PROG_DIR)/out/$(PROG).bin > $(PROG_DIR)/hex/$(PROG).hex
lint:
	$(VERILATOR) $(LINT_FLAGS) -y packages -y rtl/mem -y rtl/unit -y rtl/system -sv $(SRCS)

build:
	rm -rf ./out/*
	xvlog -sv $(PKGS) $(RTL) $(TB) -nolog
	xelab $(TOP)_tb -s $(TOP)_tb_sim -debug typical -nolog
	mv xelab* xvlog* xsim* ./out/
	
sim:
	cd ./out/ && xsim $(TOP)_tb_sim $(SIM_ARGS)
compliance:
	verilator $(COMPLIANCE_FLAGS) -I./packages -I./rtl/mem/ $(PKGS) $(RTL) ./rtl/sim/*.sv ../tb/system/top_tb.sv compliance/top_tb.cpp -o top_tb_sim
synth:
	vivado -mode batch -source ./scripts/tcl/synth.tcl -nolog -nojournal -notrace -tclargs ./synth
	rm dfx_runtime.txt
fpga:
	vivado -mode batch -source ./scripts/tcl/place.tcl -nolog -nojournal -notrace -tclargs ./synth
	vivado -mode batch -source ./scripts/tcl/route.tcl -nolog -nojournal -notrace -tclargs ./synth
	vivado -mode batch -source ./scripts/tcl/bitgen.tcl -nolog -nojournal -notrace -tclargs ./synth
	rm dfx_runtime.txt
bit:
	vivado -mode batch -source scripts/tcl/upload.tcl -nolog -nojournal -notrace -tclargs "synth/bitstream/R500.bit"

