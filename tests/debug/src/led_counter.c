#include "def.h"

int main() {

    unsigned short tick = 0;

    while (tick < 32000) {

        *(volatile int*)0x7800 = tick;
        counter(5000);
        tick++;
      
    }

    *(volatile int*)0x5050 = *((volatile int*)7800);
   
    return 0;
}

