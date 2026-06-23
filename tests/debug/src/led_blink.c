#include "def.h"

int main() {

    while (1) {

        *(volatile int*)0x7800 = 1;
        counter(1000000);
        *(volatile int*)0x7800 = 0;
        counter(1000000);
      
    }
   
    return 0;
}

