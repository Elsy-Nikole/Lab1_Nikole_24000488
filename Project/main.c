#include "RTE_Components.h"
#include CMSIS_device_header
#include <stdio.h>
#include "utilities.h"




void bitSet(uint32_t *ptr, uint8_t bit){
    *ptr |= (1<<bit);
}

void bitClear(uint32_t *ptr, uint8_t bit) {
    *ptr &= ~(1<<bit);
}

void bitToggle(uint32_t *ptr, uint8_t bit){
    *ptr ^= (1<<bit);
    
}

uint8_t stringLength(uint8_t *str){
    uint8_t cont=0;

    while(str[cont] != '\0'){
        cont++;
    }
    return cont;
}


int main() {
    //for (;;) {
    //}

    uint32_t a= 0x4; //0100
    uint32_t* ptr=&a;
    uint8_t b[] = "sol";
    uint8_t* ptrB =&b[0];

    printf("BitSet: %d\r\n", a);
    bitSet(ptr, 3);
    printf("Set bit 3: %d\r\n", a);

    printf("BitClear: %d\r\n", a);
    bitClear(ptr, 3);
    printf("Clear bit 3: %d\r\n", a);

    printf("BitToggle: %d\r\n", a);
    bitToggle(ptr, 2);
    printf("Toggle bit 2: %d\r\n", a);

    printf("String Length: %s\r\n", b);
    uint8_t str= stringLength(ptrB);
    printf("String Length: %d\r\n", str);

}



