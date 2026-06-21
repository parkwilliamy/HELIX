int fib(int n) {

    if (n == 0 || n == 1) return n;
    else return fib(n-1) + fib(n-2);

}

static inline unsigned long read_mcycle(void) {
    unsigned long v;
    asm volatile ("csrr %0, mcycle" : "=r"(v));
    return v;
}

static inline unsigned long read_minstret(void) {
    unsigned long v;
    asm volatile ("csrr %0, minstret" : "=r"(v));
    return v;
}

static inline unsigned long read_correct_predictions(void) {
    unsigned long v;
    asm volatile ("csrr %0, mhpmcounter3" : "=r"(v));
    return v;
}

static inline unsigned long read_total_predictions(void) {
    unsigned long v;
    asm volatile ("csrr %0, mhpmcounter4" : "=r"(v));
    return v;
}

int main() {

    volatile int* CLK_CYCLE_ADDR = (volatile int*)0x00005000;
    volatile int* RETIRED_INSTRUCTIONS_ADDR = (volatile int*)0x00005004;
    volatile int* CORRECT_PREDICTIONS_ADDR = (volatile int*)0x00005008;
    volatile int* TOTAL_PREDICTIONS_ADDR = (volatile int*)0x0000500C;

    unsigned long start = read_mcycle();
    int x = fib(15);
    *(volatile int*)0x6000 = x;
    unsigned long elapsed = read_mcycle() - start;

    *CLK_CYCLE_ADDR = elapsed;
    *RETIRED_INSTRUCTIONS_ADDR =read_minstret();
    *CORRECT_PREDICTIONS_ADDR = read_correct_predictions();
    *TOTAL_PREDICTIONS_ADDR = read_total_predictions();

    return 0;
}

