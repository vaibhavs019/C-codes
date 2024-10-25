#include<reg51.h>

void delay(int time)
{
    int i, j;
    for(i = 0; i < time; i++)
        for(j = 0; j < 1275; j++);
}

sbit buzzer = P3^7; // Define the buzzer pin (adjust the port and pin as needed)

void main()
{
    unsigned int i;
    while(1)
    {
        buzzer = 1; // Buzzer ON
        delay(100); // Adjust the delay for the desired buzzer sound duration
        buzzer = 0; // Buzzer OFF
        delay(100); // Adjust the delay for the desired pause between buzzer sounds
    }
}
