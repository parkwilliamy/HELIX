
    .section .text
    .globl main
main:
    la x5, my_data # load tohost address in x5; tohost written to at end of program to halt
    csrrwi x2, minstret, 19
    csrrwi x1, minstret, 3
    csrrwi x4, minstret, 8
    addi x4, x4, 2
    sw x4, 4(x5)
    j halt
    
    .section .data
my_data:
    .word 0,0,0,0               # reserve bytes for tohost address and CSR data
    .section .text
halt:
    li  x4, 1               # x4 = 1
    sw  x4, 0(x5)           # store x4 -> my_data
    j halt




