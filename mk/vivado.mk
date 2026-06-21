# Vivado: xsim simulation + synthesis / implementation / bitstream.

PLUS_ARGS ?=

ifeq ($(WAVE), 1)
SIM_ARGS ?= -nolog -gui -view $(ROOT)wave/$(TOP)_tb_sim.wcfg $(PLUS_ARGS)
else
SIM_ARGS ?= -runall -log $(TOP)_sim.log $(PLUS_ARGS)
endif

.PHONY: build sim synth fpga bit

build:
	rm -rf ./out/*
	xvlog -sv $(PKGS) $(RTL) $(TB) -nolog
	xelab $(TOP)_tb -s $(TOP)_tb_sim -debug typical -nolog
	mv xelab* xvlog* xsim* ./out/

sim:
	cd ./out/ && xsim $(TOP)_tb_sim $(SIM_ARGS)
synth:
	vivado -mode batch -source ./scripts/tcl/synth.tcl -nolog -nojournal -notrace -tclargs ./synth
	rm dfx_runtime.txt
fpga:
	vivado -mode batch -source ./scripts/tcl/place.tcl -nolog -nojournal -notrace -tclargs ./synth
	vivado -mode batch -source ./scripts/tcl/route.tcl -nolog -nojournal -notrace -tclargs ./synth
	vivado -mode batch -source ./scripts/tcl/bitgen.tcl -nolog -nojournal -notrace -tclargs ./synth
bit:
	vivado -mode batch -source scripts/tcl/upload.tcl -nolog -nojournal -notrace -tclargs "synth/bitstream/R500.bit"
