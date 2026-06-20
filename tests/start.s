# start.S — R500 bare-metal reset entry point
#
# Boot sequence:
#   1. Set up the stack pointer
#   2. Copy .data initial image from IMEM (LMA) -> DMEM (VMA)
#   3. Zero .bss in DMEM
#   4. Call main
#   5. Spin forever if main returns
#
# Symbols come from linker.ld:
#   _stack_top         top of DMEM (full-descending stack)
#   __data_load_start  source of .data init image (in IMEM, = LOADADDR)
#   __data_start/end   destination of .data (in DMEM)
#   __bss_start/end    region to zero (in DMEM)

	.section .text.startup
	.globl _start
_start:
	# ---- 1. stack pointer ----
	la   sp, _stack_top

	# ---- 2. copy .data: IMEM (load addr) -> DMEM (run addr) ----
	la   t0, __data_load_start    # src cursor (IMEM)
	la   t1, __data_start         # dst cursor (DMEM)
	la   t2, __data_end           # dst end
.Lcopy:
	bgeu t1, t2, .Lcopy_done      # while (dst < end)
	lw   t3, 0(t0)
	sw   t3, 0(t1)
	addi t0, t0, 4
	addi t1, t1, 4
	j    .Lcopy
.Lcopy_done:

	# ---- 3. zero .bss ----
	la   t0, __bss_start
	la   t1, __bss_end
.Lbss:
	bgeu t0, t1, .Lbss_done       # while (cursor < end)
	sw   zero, 0(t0)
	addi t0, t0, 4
	j    .Lbss
.Lbss_done:

	# ---- 4. into C ----
	call main

	# ---- 5. trap return ----
.Lhang:
	j    .Lhang
	