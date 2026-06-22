#include "def.h"

int main() {

    //unsigned long start = read_csr(mcycle);
    int counter = 0;
    while (1) {
        counter = 50000000;
        *(volatile int*)0x7800 = 1;
        while (counter != 0) {counter -= 1;}
        *(volatile int*)0x7800 = 0;
        counter = 50000000;
        while (counter != 0) {counter -= 1;}
    }
    //unsigned long elapsed = read_csr(mcycle) - start;

    //write_csrs(elapsed);

    return 0;
}

