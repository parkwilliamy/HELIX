#include <stdint.h>
#include "def.h"

static inline uint32_t xorshift32(uint32_t* s) {
    uint32_t x = *s;
    x ^= x << 13; x ^= x >> 17; x ^= x << 5;
    *s = x;
    return x;
}

int main() {

    uint32_t seed = 0x12345678;
    uint32_t iters = 100000;
    uint32_t a_taken = 0, b_taken = 0;

    unsigned long start = read_csr(mcycle);

    for (uint32_t i = 0; i < iters; i++) {
        uint32_t a = xorshift32(&seed) & 1;

        //if (a) a_taken++;        // Branch A (random)
        if (a) b_taken++;        // Branch B (perfectly correlated)
    }

    *RESULT_ADDR = b_taken;

    unsigned long elapsed = read_csr(mcycle) - start;
    
    write_csrs(elapsed);

    return 0;
    
}
