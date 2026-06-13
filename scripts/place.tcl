# STEP#1: placement and physical optimzation

set outputDir ./synth
open_checkpoint $outputDir/checkpoint/post_synth.dcp
opt_design -aggressive_remap -resynth_remap -verbose
place_design

# Optionally run optimization if there are timing violations after placement
if {[get_property SLACK [get_timing_paths -max_paths 1 -nworst 1 -setup]] < 0} {
    puts "Found setup timing violations => running physical optimization"
    phys_opt_design
}
write_checkpoint -force $outputDir/checkpoint/post_place.dcp
