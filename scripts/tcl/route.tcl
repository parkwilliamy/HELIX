# --- Argument handling ---
if {$argc != 1} {
    puts stderr "Usage: vivado -mode batch -source route.tcl -tclargs ./synth"
    exit 1
}
set outputDir [lindex $argv 0]
set_param general.maxThreads 8

open_checkpoint $outputDir/checkpoint/post_place.dcp
report_utilization -file $outputDir/reports/post_place_util.rpt
route_design
write_checkpoint -force $outputDir/checkpoint/post_route.dcp
