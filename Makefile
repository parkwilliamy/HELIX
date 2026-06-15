ROOT := $(dir $(realpath $(lastword $(MAKEFILE_LIST))))
VERILATOR := verilator
LINT_FLAGS := --lint-only -Wall -Wno-fatal --top-module top
COMPLIANCE_FLAGS := --cc --exe --build -j 0 --Mdir compliance/obj_dir --top-module top_tb
FIRST_PKG := packages/top_constants.sv
PKGS := $(FIRST_PKG) $(filter-out $(FIRST_PKG),$(shell find packages -name '*.sv'))
RTL := rtl/mem/*.sv rtl/system/*.sv rtl/unit/*.sv
TB := $(shell find tb -name '*.sv')
TOP ?= top

ifeq ($(WAVE), 1)
SIM_ARGS ?= -nolog -gui -view $(ROOT)wave/$(TOP)_tb_sim.wcfg
else
SIM_ARGS ?= -runall -log $(TOP)_sim.log
endif

.PHONY: lint sim compliance synth fpga bit
lint:
	$(VERILATOR) $(LINT_FLAGS) -f $(SRCS)

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
	vivado -mode batch -source ./scripts/synth.tcl -nolog -nojournal -notrace -tclargs ./synth
	rm dfx_runtime.txt
fpga:
	vivado -mode batch -source ./scripts/place.tcl -nolog -nojournal -notrace -tclargs ./synth
	vivado -mode batch -source ./scripts/route.tcl -nolog -nojournal -notrace -tclargs ./synth
	vivado -mode batch -source ./scripts/bitgen.tcl -nolog -nojournal -notrace -tclargs ./synth
	rm dfx_runtime.txt
bit:
	vivado -mode batch -source scripts/upload.tcl -nolog -nojournal -notrace -tclargs "synth/bitstream/R500.bit"

