#include <reg51.h>

sbit LED = P2^0;    // Bling the single LED connected to P2.0

void DELAY_ms(unsigned int ms_Count)
{
    unsigned int i,j;
    for(i=0;i<ms_Count;i++)
    {
        for(j=0;j<100;j++);
    }
}

int main()
{
    while(1)
    {
        LED = 1; /* Turn ON the LED connected to P2.0 */
        DELAY_ms(500);

        LED = 0; /* Turn OFF the LED connected to P2.0 */
        DELAY_ms(500);
    }
    return (0);
}