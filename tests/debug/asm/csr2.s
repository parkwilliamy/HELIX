
    .section .text
    .globl main
main:
    la x5, my_data # load tohost address in x5; tohost written to at end of program to halt
    li x1, 14
    li x3, 25
    li x6, 15
    csrrsi x1, minstret, 0 # xN holds minstret, minstret retains value
    sw x1, 4(x5)
    addi x30, x0, 0
    addi x30, x0, 0
    csrrsi x2, minstret, 25 # xN holds minstret, minstret sets bits according to xI
    sw x2, 8(x5)
    addi x30, x0, 0
    addi x30, x0, 0
    csrrsi x0, minstret, 0 # x0 holds 0, minstret retains value
    sw x0, 12(x5)
    addi x30, x0, 0
    addi x30, x0, 0
    csrrsi x0, minstret, 15 # x0 holds 0, minstret sets bits according to xN
    sw x0, 16(x5)
    addi x30, x0, 0
    addi x30, x0, 0
    csrrci x7, minstret, 0 # xN holds minstret, minstret retains value
    sw x7, 20(x5)
    addi x30, x0, 0
    addi x30, x0, 0
    csrrci x2, minstret, 15 # xN holds minstret, minstret clears bits according to xI
    sw x2, 24(x5)
    addi x30, x0, 0
    addi x30, x0, 0
    csrrci x0, minstret, 0 # x0 holds 0, minstret retains value
    sw x0, 28(x5)
    addi x30, x0, 0
    addi x30, x0, 0
    csrrci x0, minstret, 25 # x0 holds 0, minstret clears bits according to xN
    sw x0, 32(x5)
    j halt
    
    .section .data
my_data:
    .word 0,0,0,0,0,0,0,0,0                 # reserve bytes for tohost address and CSR data
    .section .text
halt:
    li  x4, 1               # x4 = 1
    sw  x4, 0(x5)           # store x4 -> my_data
    j halt




