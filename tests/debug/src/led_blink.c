#include "def.h"

int main() {

    //unsigned long start = read_csr(mcycle);
   
    while(50000000);
    *(volatile int*)0x7800 = 1;
    while(50000000);
    *(volatile int*)0x7800 = 0;
    while(50000000);
    
    //unsigned long elapsed = read_csr(mcycle) - start;

    //write_csrs(elapsed);

    return 0;
}

