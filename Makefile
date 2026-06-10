ROOT := $(dir $(realpath $(lastword $(MAKEFILE_LIST))))
VERILATOR := verilator
LINT_FLAGS := --lint-only -Wall -Wno-fatal --top-module top
FIRST_PKG := packages/top_constants.sv
PKGS := $(FIRST_PKG) $(filter-out $(FIRST_PKG),$(shell find packages -name '*.sv'))
RTL := $(shell find rtl -name '*.sv')
TB := $(shell find tb -name '*.sv')
TOP ?= top

ifeq ($(WAVE), 1)
SIM_ARGS ?= -nolog -gui
else
SIM_ARGS ?= -runall -log ./out/$(TOP)_sim.log
endif

.PHONY: lint sim
lint:
	$(VERILATOR) $(LINT_FLAGS) -f $(SRCS)

build:
	rm -rf ./out/*
	xvlog -sv $(PKGS) $(RTL) $(TB) -nolog
	xelab $(TOP)_tb -s $(TOP)_tb_sim -debug typical -nolog
	mv xelab* xvlog* ./out/
	
sim:
	cd ./out/
	xsim $(TOP)_tb_sim $(SIM_ARGS)
	