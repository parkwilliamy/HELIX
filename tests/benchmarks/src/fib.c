#include "def.h"

int fib(int n) {

    if (n == 0 || n == 1) return n;
    else return fib(n-1) + fib(n-2);

}

int main() {

    unsigned long start = read_csr(mcycle);
    int x = fib(15);
    *(volatile int*)0x6000 = x;
    unsigned long elapsed = read_csr(mcycle) - start;

    write_csrs(elapsed);

    return 0;
}

