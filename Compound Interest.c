// To calculate the compound interest
#include <stdio.h>
#include <math.h>

int main() {
    printf("Vaibhav Satpute\n");
    printf("21070127057\n");
    double principle, rate, time, n, CI, A;
    printf("Enter the principal amount: ");
    scanf("%lf", &principle);
    printf("Enter the annual interest rate: ");
    scanf("%lf", &rate);
    rate = rate / 100;
    printf("Enter the time: ");
    scanf("%lf", &time);
    printf("Number of times that interest is compounded annually: ");
    scanf("%lf", &n);

    A = principle * pow((1 + rate / n), n * time);
    CI = A - principle;
    printf("The compound interest is: %.2lf\n", CI);

    return 0;
}