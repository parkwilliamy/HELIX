
    .section .text
    .globl main
main:
    la x5, my_data # load tohost address in x5; tohost written to at end of program to halt
    li x2, 1
    li x3, 0x7700
    sw x2, 0(x3)
    j halt
    
    .section .data
my_data:
    .word 0,0,0,0               # reserve bytes for tohost address and CSR data
    
    .section 
    .section .text
halt:
    li  x4, 1               # x4 = 1
    sw  x4, 0(x5)           # store x4 -> my_data
    j halt




