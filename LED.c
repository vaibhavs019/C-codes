#include<reg51.h>

void delay(int time)
{
    int i,j;
    for(i=0;i<time;i++)
        for(j=0;j<1275;j++);
}
sbit led = P3^0;

void main()
{
    unsigned int i;
    while(1)
    {
        led = 0; // on
        delay(1000);
        led = 1; // off
        delay(1000);
    }
}