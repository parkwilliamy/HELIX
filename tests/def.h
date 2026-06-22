volatile int* CLK_CYCLE_ADDR = (volatile int*)0x00007900;
volatile int* RETIRED_INSTRUCTIONS_ADDR = (volatile int*)0x00007904;
volatile int* CORRECT_PREDICTIONS_ADDR = (volatile int*)0x00007908;
volatile int* TOTAL_PREDICTIONS_ADDR = (volatile int*)0x0000790C;

#define read_csr(reg) ({ unsigned long __v; \
    asm volatile ("csrr %0, " #reg : "=r"(__v)); __v; })