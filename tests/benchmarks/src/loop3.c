#include "def.h"

static inline int mod(int a, int b) {

    while (a >= b) a-=b;
    return a;

}

int main() {

    int count = 0;
    unsigned long start = read_csr(mcycle);
    
    for (int i = 0; i < 1000; i++) {
        if (mod(i,2) == 0 || mod(i,3) == 0 || mod(i,5) == 0) count++;
    }

    *RESULT_ADDR = count;

    unsigned long elapsed = read_csr(mcycle) - start;
    
    write_csrs(elapsed);

    return 0;

}

