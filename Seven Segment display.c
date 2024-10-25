#include <REG51.h>
#define SEGPORT P2
sbit SS1 = P3^6;
sbit SS2 = P3^7;

const unsigned char LookUpTable[] = {0xC0,0xF9,0xA4, 0xB0,0x99,0x92,0x82,0xF8,0x80,0x98};

void delay(unsigned long x){
    unsigned int i, j;
    for(i=0;i<x;i++)
        for(j=0;j<1000;j++);
}

void main(){
    int i = 0;
    unsigned char x = 1;
    SEGPORT = 0x00;
    SS1 = 1;
    SS2 = 1;

    while(1){

        for(i=0;i<10;i++){
            SEGPORT = ~LookUpTable[i];
            delay(1000)
        }
    }
}