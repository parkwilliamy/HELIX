
    .section .text
    .globl main
main:
    la t0, trap_handler
    csrw mtvec, t0
    la t0, trap_save
    csrw mscratch, t0
    la t1, trap_results
    sw t1, 8(t0)

    la t2, my_data # load tohost address in x5; tohost written to at end of program to halt
    lw t2, 3(t2)
    j halt
    
    .section .data
my_data:
    .word 0             # reserve bytes for tohost address and CSR data
    .section .text
halt:
    li  x4, 1               # x4 = 1
    sw  x4, 0(x5)           # store x4 -> my_data
    j halt

    .align 2
trap_handler:
    csrrw t0, mscratch, t0     # t0 = &trap_save ; mscratch = caller's t0
    sw    t1, 0(t0)            # spill the only regs we use
    sw    t2, 4(t0)

    lw    t1, 8(t0)            # t1 = results pointer (persists across traps)
    csrr  t2, mcause ;  sw t2, 0(t1)
    csrr  t2, mepc   ;  sw t2, 4(t1)
    csrr  t2, mtval  ;  sw t2, 8(t1)
    addi  t1, t1, 12
    sw    t1, 8(t0)            # advance + persist the pointer

    csrr  t1, mepc            # resume *after* the faulting instruction
    addi  t1, t1, 4
    csrw  mepc, t1

    lw    t2, 4(t0)           # restore
    lw    t1, 0(t0)
    csrrw t0, mscratch, t0    # t0 = caller's t0 ; mscratch = &trap_save again
    mret

    .section .data
    .align 2
trap_save:    .zero 12        # [0]=saved t1, [4]=saved t2, [8]=results ptr
trap_results: .zero 256       # cause/mepc/mtval triples land here
    
    





