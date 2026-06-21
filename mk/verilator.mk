# Verilator: lint + compliance simulation (no Vivado/license needed).

VERILATOR := verilator
LINT_FLAGS := --lint-only -Wall -Wno-fatal --top-module top

ifeq ($(WAVE), 1)
COMPLIANCE_FLAGS ?= --cc --exe --build --trace -j 0 --Mdir compliance/obj_dir_wave --top-module top_tb
WRAP ?= compliance/top_tb_wave.cpp
else
COMPLIANCE_FLAGS ?= --cc --exe --build -j 0 --Mdir compliance/obj_dir --top-module top_tb
WRAP ?= compliance/top_tb.cpp
endif

.PHONY: lint compliance

lint:
	$(VERILATOR) $(LINT_FLAGS) -y packages -y rtl/mem -y rtl/unit -y rtl/system -sv $(SRCS)
compliance:
	verilator $(COMPLIANCE_FLAGS) -I./packages -I./rtl/mem/ $(PKGS) $(RTL) ./rtl/sim/*.sv ../tb/system/top_tb.sv $(WRAP) -o top_tb_sim
