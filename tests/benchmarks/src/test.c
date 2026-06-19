int main() {

    volatile int a;

    a = 5-3;
    
    volatile int* RESULT_ADDR = (volatile int*)0x6000;

    RESULT_ADDR[0] = a;
    
    while(1);

}