# scripts/prepare_ip.tcl
create_project -in_memory -part xc7a35tcpg236-1
set_property board_part digilentinc.com:basys3:part0:1.2 [current_project]
set_property target_language Verilog [current_project]

read_ip ./.srcs/sources_1/ip/blk_mem_gen_0/blk_mem_gen_0.xci

# Generates sim models + synthesis sources on disk
generate_target {synthesis simulation} [get_ips blk_mem_gen_0]

# Pre-synthesizes the IP (caches a .dcp) - skipped on later builds
synth_ip [get_ips blk_mem_gen_0]

# To create a new IP:
# create_ip -name blk_mem_gen -vendor xilinx.com -library ip -module_name blk_mem_gen_0
# To reset output products:
# reset_target {synthesis simulation} [get_ips blk_mem_gen_0]