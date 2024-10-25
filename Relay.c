#include<reg51.h>

void delay(int time)
{
    int i,j;
    for(i=0;i<time;i++)
        for(j=0;j<1275;j++);
}

sbit pin_1 = P3^7;
sbit relay=P3^6;
void main()
{
    unsigned int i;
    while(1)
    {
        pin_1 = 0; // on
        delay(100);
        pin_1 = 1; // off
        delay(100);
        relay=1;                //Realy ON
        for(i=0;i<=5000;i++);
        relay=0;                //Relay OFF
        for(i=0;i<=5000;i++);
    }
}