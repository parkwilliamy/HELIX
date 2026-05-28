# This script is used to synthesize a verified RTL design onto the Basys-3 FPGA

# STEP#1: define the output directory area.

set outputDir ../synth/

# STEP#2: setup design sources and constraints

read_verilog -sv [ glob ../rtl/mem/*.v ] 
read_verilog -sv [ glob ../rtl/pipe/*.v ]
read_verilog -sv [ glob ../rtl/unit/*.v ]
read_xdc ../synth/Basys-3-Master.xdc

# STEP#3: run synthesis, write design checkpoint, netlist optimzation
# Note: assign DONT_TOUCH property to RTL you don't want optimized away

synth_design -top top -part xc7a35tcpg236-1 -lut_cascade 
write_checkpoint -force $outputDir/checkpoint/post_synth.dcp
opt_design -remap -aggresive_remap -resynth_remap -verbose

# STEP#4: placement and physical optimzation

place_design

# Optionally run optimization if there are timing violations after placement
if {[get_property SLACK [get_timing_paths -max_paths 1 -nworst 1 -setup]] < 0} {
    puts "Found setup timing violations => running physical optimization"
    phys_opt_design
}
write_checkpoint -force $outputDir/checkpoint/post_place.dcp
report_utilization -file $outputDir/reports/post_place_util.rpt

# STEP#5: run the router, write the post-route design checkpoint, report the routing
# status, report timing, power, and DRC, and finally save the Verilog netlist.

route_design
write_checkpoint -force $outputDir/checkpoints/post_route.dcp
report_timing_summary -file $outputDir/report/post_route_timing_summary.rpt
report_drc -file $outputDir/report/post_imp_drc.rpt

if {[get_property SLACK [get_timing_paths -max_paths 1 -nworst 1 -setup]] < 0} {
    error "Found setup timing violations => halting synthesis"
}

# STEP#6: generate a bitstream

write_bitstream -force $outputDir/bitstream/R500.bit