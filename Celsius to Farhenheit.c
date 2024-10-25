#include <stdio.h>

float celsius, fahrenheit;

int main() {

    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = celsius * 9.0 / 5.0 + 32.0;

    printf("The temperature in Fahrenheit is %f degrees.\n", fahrenheit);

    return 0;
}
