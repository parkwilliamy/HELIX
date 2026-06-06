ROOT := $(dir $(realpath $(lastword $(MAKEFILE_LIST))))
VERILATOR := verilator
LINT_FLAGS := --lint-only -Wall -Wno-fatal --top-module r500_top
SRC_F := $(ROOT)scripts/rtl.f

.PHONY: lint
lint:
	$(VERILATOR) $(LINT_FLAGS) -f $(SRC_F)

