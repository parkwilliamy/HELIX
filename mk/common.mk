# Shared definitions used by more than one toolchain.
# Included by the root Makefile; not meant to be run on its own.

TOP ?= top

# RTL source lists -- single source of truth for every tool below.
FIRST_PKG := packages/top_constants.sv
PKGS := $(FIRST_PKG) $(filter-out $(FIRST_PKG),$(shell find packages -name '*.sv'))
RTL  := rtl/mem/*.sv rtl/system/*.sv rtl/unit/*.sv
TB   := $(shell find tb -name '*.sv')
SRCS := packages/*.sv rtl/mem/*.sv rtl/unit/*.sv rtl/system/*.sv
