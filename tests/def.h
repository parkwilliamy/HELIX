#define RESULT_ADDR ((volatile int*)0x00006000)
#define MCYCLE_ADDR ((volatile int*)0x00007600)
#define MINSTRET_ADDR ((volatile int*)0x00007608)
#define CORRECT_PREDICTIONS_ADDR ((volatile int*)0x00007610)
#define TOTAL_PREDICTIONS_ADDR ((volatile int*)0x00007618)

#define read_csr(reg) ({ unsigned long __v; \
    asm volatile ("csrr %0, " #reg : "=r"(__v)); __v; })

static inline void write_csrs(unsigned long elapsed) {
    *MCYCLE_ADDR = read_csr(mcycle);
    *MINSTRET_ADDR = read_csr(minstret);
    *CORRECT_PREDICTIONS_ADDR = read_csr(mhpmcounter3);
    *TOTAL_PREDICTIONS_ADDR = read_csr(mhpmcounter4);
}

static inline void counter(unsigned int time) {
    while (time > 0) {time -= 1;}
    return;
}