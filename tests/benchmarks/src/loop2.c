#include "def.h"

int main() {

    int count = 0;
    int flag = 0;

    unsigned long start = read_csr(mcycle);
    
    for (int i = 0; i < 100000; i++) {
        if (flag == 1) count++;
        flag = !flag;
    }

    *RESULT_ADDR = count;

    unsigned long elapsed = read_csr(mcycle) - start;
    
    write_csrs(elapsed);

    return 0;

}