
    .section .text
    .globl main
main:
    la x5, my_data # load tohost address in x5; tohost written to at end of program to halt
    li x3, 30
    li x3, 23
    csrrw x1, minstret, x3
    sw x1, 4(x5)
    j halt
    
    .section .data
my_data:
    .word 0,0,0,0               # reserve bytes for tohost address and CSR data
    .section .text
halt:
    li  x4, 1               # x4 = 1
    sw  x4, 0(x5)           # store x4 -> my_data
    j halt




