
    .section .text
    .globl main
main:
    la x5, my_data # load tohost address in x5; tohost written to at end of program to halt
    li x1, 14
    li x3, 25
    csrrw x0, minstret, x1 # x0 holds 0, minstret holds 14
    sw x0, 4(x5)
    addi x31, x0, 0
    addi x31, x0, 0
    csrrw x0, minstret, x0 # x0 holds 0, minstret holds 0
    sw x0, 8(x5)
    addi x31, x0, 0
    addi x31, x0, 0
    csrrw x2, minstret, x3 # xN holds minstret, minstret holds xN
    sw x2, 12(x5)
    addi x31, x0, 0
    addi x31, x0, 0
    csrrw x6, minstret, x0 # xN holds minstret, minstret holds 0
    sw x6, 16(x5)
    addi x31, x0, 0
    addi x31, x0, 0
    csrrwi x0, minstret, 1 # x0 holds 0, minstret holds 1
    sw x0, 20(x5)
    addi x31, x0, 0
    addi x31, x0, 0
    csrrwi x0, minstret, 0 # x0 holds 0, minstret holds 0
    sw x0, 24(x5)
    addi x31, x0, 0
    addi x31, x0, 0
    csrrwi x2, minstret, 3 # xN holds minstret, minstret holds 3
    sw x2, 28(x5)
    addi x31, x0, 0
    addi x31, x0, 0
    csrrwi x6, minstret, 0 # xN holds minstret, minstret holds 0
    sw x6, 32(x5)
    j halt
    
    .section .data
my_data:
    .word 0,0,0,0,0,0,0,0,0                 # reserve bytes for tohost address and CSR data
    .section .text
halt:
    li  x4, 1               # x4 = 1
    sw  x4, 0(x5)           # store x4 -> my_data
    j halt




