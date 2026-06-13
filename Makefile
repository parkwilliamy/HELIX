ROOT := $(dir $(realpath $(lastword $(MAKEFILE_LIST))))
VERILATOR := verilator
LINT_FLAGS := --lint-only -Wall -Wno-fatal --top-module top
FIRST_PKG := packages/top_constants.sv
PKGS := $(FIRST_PKG) $(filter-out $(FIRST_PKG),$(shell find packages -name '*.sv'))
RTL := $(shell find rtl -name '*.sv')
TB := $(shell find tb -name '*.sv')
TOP ?= top

ifeq ($(WAVE), 1)
SIM_ARGS ?= -nolog -gui -view $(ROOT)wave/$(TOP)_tb_sim.wcfg
else
SIM_ARGS ?= -runall -log $(TOP)_sim.log
endif

.PHONY: lint sim synth fpga
lint:
	$(VERILATOR) $(LINT_FLAGS) -f $(SRCS)

build:
	rm -rf ./out/*
	xvlog -sv $(PKGS) $(RTL) $(TB) -nolog
	xelab $(TOP)_tb -s $(TOP)_tb_sim -debug typical -nolog
	mv xelab* xvlog* xsim* ./out/
	
sim:
	cd ./out/ && xsim $(TOP)_tb_sim $(SIM_ARGS)
synth:
	vivado -mode batch -source ./scripts/synth.tcl -nolog -nojournal -notrace -tclargs ./synth
fpga:
	vivado -mode batch -source ./scripts/place.tcl -nolog -nojournal -notrace -tclargs ./synth
	vivado -mode batch -source ./scripts/route.tcl -nolog -nojournal -notrace -tclargs ./synth
	vivado -mode batch -source ./scripts/bitgen.tcl -nolog -nojournal -notrace -tclargs ./synth