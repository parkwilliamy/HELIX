#include "def.h"

int main() {

    unsigned short tick = 0;

    while (1) {

        *(volatile int*)0x7800 = tick;
        counter(10000);
        tick++;
      
    }
   
    return 0;
}

