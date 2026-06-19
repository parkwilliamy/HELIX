# This script is used to synthesize a verified RTL design onto the Basys-3 FPGA

# STEP#1: define the output directory area.

# --- Argument handling ---
if {$argc != 1} {
    puts stderr "Usage: vivado -mode batch -source synth.tcl -tclargs ./synth"
    exit 1
}
set outputDir [lindex $argv 0]

# STEP#2: setup design sources and constraints

set_param general.maxThreads 8
source scripts/tcl/startup.tcl -notrace
read_verilog -sv [ glob ./packages/*.sv ] 
read_verilog -sv [ glob ./rtl/mem/*.sv ] 
read_verilog -sv [ glob ./rtl/system/*.sv ]
read_verilog -sv [ glob ./rtl/unit/*.sv ]
read_xdc $outputDir/Basys-3-Master.xdc

# STEP#3: run synthesis, write design checkpoint, netlist optimzation
# Note: assign DONT_TOUCH property to RTL you don't want optimized away

synth_design -top top -part xc7a35tcpg236-1 -lut_cascade 
write_checkpoint -force $outputDir/checkpoint/post_synth.dcp
