set outputDir ./synth

open_checkpoint $outputDir/checkpoint/post_route.dcp

report_timing_summary -file $outputDir/reports/post_route_timing_summary.rpt
report_drc -file $outputDir/reports/post_imp_drc.rpt

if {[get_property SLACK [get_timing_paths -max_paths 1 -nworst 1 -setup]] < 0} {
    error "Found setup timing violations => halting synthesis"
}

write_bitstream -force $outputDir/bitstream/R500.bit