#include "def.h"

int main() {

    int count = 0;

    unsigned long start = read_csr(mcycle);
    
    for (int i = 0; i < 100000; i++) {
        if ((i&3) != 3) count++;
    }

    *RESULT_ADDR = count;

    unsigned long elapsed = read_csr(mcycle) - start;
    
    write_csrs(elapsed);

    return 0;

}

