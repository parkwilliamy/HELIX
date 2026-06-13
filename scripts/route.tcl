set outputDir ./synth

open_checkpoint $outputDir/checkpoint/post_place.dcp
report_utilization -file $outputDir/reports/post_place_util.rpt
route_design
write_checkpoint -force $outputDir/checkpoint/post_route.dcp
