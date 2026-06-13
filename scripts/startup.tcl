# scripts/prepare_ip.tcl
puts "==================== Initializing project ===================="
create_project -in_memory -part xc7a35tcpg236-1
set_param general.maxThreads 8
set_property board_part digilentinc.com:basys3:part0:1.2 [current_project]
set_property target_language Verilog [current_project]

foreach ip [glob -nocomplain ./.srcs/sources_1/ip/*/*.xci] {
    read_ip $ip
}

puts "==================== Startup finished ========================"
