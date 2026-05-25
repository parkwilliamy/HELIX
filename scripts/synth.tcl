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

synth_design -top top -part xc7a35t-1cpg236c -lut_cascade 
write_checkpoint -force $outputDir/post_synth.dcp
opt_design -remap -aggresive_remap -resynth_remap -verbose

# STEP#4: placement and physical optimzation

place_design

# Optionally run optimization if there are timing violations after placement
if {[get_property SLACK [get_timing_paths -max_paths 1 -nworst 1 -setup]] < 0} {
    puts "Found setup timing violations => running physical optimization"
    phys_opt_design
}
write_checkpoint -force $outputDir/post_place.dcp
report_utilization -file $outputDir/post_place_util.rpt
report_timing_summary -file $outputDir/post_place_timing_summary.rpt

# STEP#5: run the router, write the post-route design checkpoint, report the routing
# status, report timing, power, and DRC, and finally save the Verilog netlist.

route_design
write_checkpoint -force $outputDir/post_route.dcp
report_route_status -file $outputDir/post_route_status.rpt
report_timing_summary -file $outputDir/post_route_timing_summary.rpt
report_power -file $outputDir/post_route_power.rpt
report_drc -file $outputDir/post_imp_drc.rpt
write_verilog -force $outputDir/cpu_impl_netlist.v -mode timesim -sdf_anno true

# STEP#6: generate a bitstream

write_bitstream -force $outputDir/cpu.bit