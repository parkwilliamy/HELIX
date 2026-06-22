#define RESULT_ADDR ((volatile int*)0x00006000)
#define CLK_CYCLE_ADDR ((volatile int*)0x00007900)
#define RETIRED_INSTRUCTIONS_ADDR ((volatile int*)0x00007904)
#define CORRECT_PREDICTIONS_ADDR ((volatile int*)0x00007908)
#define TOTAL_PREDICTIONS_ADDR ((volatile int*)0x0000790c)

#define read_csr(reg) ({ unsigned long __v; \
    asm volatile ("csrr %0, " #reg : "=r"(__v)); __v; })

static inline void write_csrs(unsigned long elapsed) {
    *CLK_CYCLE_ADDR = elapsed;
    *RETIRED_INSTRUCTIONS_ADDR = read_csr(minstret);
    *CORRECT_PREDICTIONS_ADDR = read_csr(mhpmcounter3);
    *TOTAL_PREDICTIONS_ADDR = read_csr(mhpmcounter4);
}