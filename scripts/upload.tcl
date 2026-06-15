# ============================================================
# program_flash_basys3.tcl
# Programs a .bit into the Basys 3 SPI flash (S25FL032P, 4 MB).
#
# Usage:
#   vivado -mode batch -source upload.tcl -tclargs <path/to/design.bit>
#
# Make sure the Basys 3 mode jumper (JP1) is set to QSPI so the
# FPGA boots from flash on power-up.
# ============================================================

# --- Argument handling ---
if {$argc < 1 || $argc > 2} {
    puts stderr "Usage: vivado -mode batch -source upload.tcl -tclargs <path/to/design.bit> \[flash_part\]"
    exit 1
}
set bit_file [lindex $argv 0]
set mem_part [expr {$argc >= 2 ? [lindex $argv 1] : "mx25l3273f-spi-x1_x2_x4"}]
# Look at flash memory part on FPGA and write down name here, if it doesn't work 
# you may need to type it into Vivado's hardware manager and see if it has any aliases

if {![file exists $bit_file]} {
    puts stderr "ERROR: bitstream file not found: $bit_file"
    exit 1
}

puts "==================== Programming device... ===================="

# Derive the .mcs path from the .bit (same dir, same base name)
set mcs_file "[file rootname $bit_file].mcs"

# --- Step 1: Generate the .mcs from the .bit ---
write_cfgmem -format mcs -interface SPIx4 -size 4 \
    -loadbit "up 0x0 $bit_file" \
    -file $mcs_file -force

# --- Step 2: Connect to hardware ---
open_hw_manager
connect_hw_server
open_hw_target
current_hw_device [lindex [get_hw_devices xc7a35t_0] 0]
refresh_hw_device [current_hw_device]

# --- Step 3: Associate the flash (cfgmem) part ---
create_hw_cfgmem -hw_device [current_hw_device] \
    [lindex [get_cfgmem_parts $mem_part] 0]

set cfgmem [ get_property PROGRAM.HW_CFGMEM [lindex [get_hw_devices xc7a35t_0] 0]]

# --- Step 4: Programming options ---
set_property PROGRAM.FILES         $mcs_file    $cfgmem
set_property PROGRAM.ADDRESS_RANGE {use_file}   $cfgmem
set_property PROGRAM.BLANK_CHECK   0            $cfgmem
set_property PROGRAM.ERASE         1            $cfgmem
set_property PROGRAM.CFG_PROGRAM   1            $cfgmem
set_property PROGRAM.VERIFY        1            $cfgmem
set_property PROGRAM.CHECKSUM      0            $cfgmem

# --- Step 5: Program flash ---
create_hw_bitstream -hw_device [current_hw_device] [get_property PROGRAM.HW_CFGMEM_BITFILE [current_hw_device]]
program_hw_devices [current_hw_device]
program_hw_cfgmem -hw_cfgmem $cfgmem
refresh_hw_device [current_hw_device]

# --- Step 6: Boot from flash now ---
boot_hw_device [current_hw_device]

# --- Cleanup ---
close_hw_target
disconnect_hw_server
close_hw_manager

puts "Done. Flash programmed from $bit_file"