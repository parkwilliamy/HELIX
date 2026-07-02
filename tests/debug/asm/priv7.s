
    .section .text
    .globl main
main:
    la t0, trap_handler
    csrw mtvec, t0

    li s0, 0x1808
    csrw mstatus, s0
    la t3, my_data # load tohost address in x5; tohost written to at end of program to halt
    ecall
    beq x0, x0, halt
    
    j halt
    
    .section .data
my_data:
    .word 0,0,0             # reserve bytes for tohost address and CSR data
    .section .text
halt:
    li  x4, 1               # x4 = 1
    sw  x4, 0(t3)           # store x4 -> my_data
    j halt

test_label:
    addi x0, x0, 0
    addi x0, x0, 0
    addi x0, x0, 0

  # ============================================================
  #  Trap handler
  #  - Saves caller context on the stack
  #  - Dispatches on mcause (interrupt vs exception)
  #  - Restores and returns with mret
  # ============================================================
      .section .text
      .align  2                    # mtvec BASE must be 4-byte aligned
  trap_handler:
      # --- 1. Make room and save the integer registers you clobber ---
      #     (saving all of them is simplest/safest to start; trim later)
      addi sp, sp, -16
      sw t2, 0(sp)
      sw t3, 4(sp)
      sw t4, 8(sp)
      sw t5, 12(sp)
     
      # --- 2. Read the cause ---
      csrr    t0, mcause           # t0 = cause
      csrr    t1, mepc             # t1 = faulting/interrupted PC
      # csrr  t2, mtval            # bad addr / faulting instr, if you need it

      # mcause[31] = 1 -> interrupt, 0 -> synchronous exception
      bltz    t0, handle_interrupt # sign bit set => negative => interrupt

    # ------------------------------------------------------------
    #  Synchronous exception path
    #  low bits of mcause = exception code
    # ------------------------------------------------------------
    handle_exception:
        andi    t0, t0, 0x1f         # exception code (0..31)

        #   0  instruction address misaligned
        #   1  instruction access fault
        #   2  illegal instruction
        #   3  breakpoint (ebreak)
        #   4  load address misaligned
        #   5  load access fault
        #   6  store address misaligned
        #   7  store/AMO access fault
        #  11  ecall from M-mode
        # dispatch however you like; e.g. a jump table or compares:
        li t2, 0 
        beq t0, t2, handle1
        li t2, 1
        beq t0, t2, handle1
        li t2, 2
        beq t0, t2, handle1
        li t2, 3
        beq t0, t2, handle1
        li t2, 4
        beq t0, t2, handle1
        li t2, 5
        beq t0, t2, handle1
        li t2, 6
        beq t0, t2, handle1
        li t2, 7
        beq t0, t2, handle1
        li t2, 11
        beq t0, t2, handle1

    handle1:
        csrr t3, mepc
        addi t3, t3, 4
        csrw mepc, t3
        j       trap_exit



    # ------------------------------------------------------------
    #  Interrupt path
    #  mepc already points at the instruction to resume — do NOT +4
    # ------------------------------------------------------------
    handle_interrupt:
        andi    t0, t0, 0x1f         # interrupt code
        #   7  machine timer interrupt   (MTIP)
        #   13 counter overflow interrupt
        li      t2, 7
        beq     t0, t2, handle_timer
        li      t2, 13
        beq     t0, t2, handle_counter
        j       trap_exit

    handle_timer:
        la t2, my_data 
        la t3, 0x7758
        li t4, 0xFFFFFFFF
        sw t4, 0(t3)
        sw t4, 4(t3)
        sw t4, 4(t2)
        j trap_exit

    handle_counter:
        la t2, my_data # load tohost address in x5; tohost written to at end of program to halt
        li t3, 69
        sw t3, 4(t2)
        j trap_exit


    # ------------------------------------------------------------
    #  Common restore + return
    # ------------------------------------------------------------
    trap_exit:
        lw t2, 0(sp)
        lw t3, 4(sp)
        lw t4, 8(sp)
        lw t5, 12(sp)
        addi    sp, sp, 16
        mret                         # restores PC from mepc, MIE from MPIE, mode from MPP
    
    





