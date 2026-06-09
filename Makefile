ROOT := $(dir $(realpath $(lastword $(MAKEFILE_LIST))))
VERILATOR := verilator
LINT_FLAGS := --lint-only -Wall -Wno-fatal --top-module top
FIRST_PKG := packages/top_constants.sv
PKGS := $(FIRST_PKG) $(filter-out $(FIRST_PKG),$(shell find packages -name '*.sv'))
RTL := $(shell find rtl -name '*.sv')
TB := $(shell find tb -name '*.sv')
TOP ?= top

.PHONY: lint sim
lint:
	$(VERILATOR) $(LINT_FLAGS) -f $(SRCS)

sim:
	rm -rf ./out/*
	xvlog -sv $(PKGS) $(RTL) $(TB)
	xelab $(TOP)_tb -s $(TOP)_tb_sim
	xsim $(TOP)_tb_sim -runall -log ./out/$(TOP)_sim.log
	mv xelab* xsim* xvlog* ./out/

