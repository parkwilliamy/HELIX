#include "def.h"

int main() {

    volatile int* A = (volatile int*)0x7000;
    int idx = 0;

    unsigned long start = read_csr(mcycle);

    for (int i=0; i < 256; i++) A[i] = i;

    for (int i=0; i < 512; i++) {
        idx = i & 255;
        RESULT_ADDR[idx] = A[idx] + i;
    }

    unsigned long elapsed = read_csr(mcycle) - start;
    
    write_csrs(elapsed);

    return 0;

}