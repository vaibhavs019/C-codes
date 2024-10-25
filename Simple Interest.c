// To calculate Simple interest
#include "stdio.h"

 int main()
 {
     printf("Vaibhav Satpute\n");
     printf("21070127057\n");

     int P, T, R, SI;
     printf("Marks of Principal Amount: ");
     scanf("%d", &P);
     printf("Time period: ");
     scanf("%d", &T);
     printf("Rate of interest: ");
     scanf("%d", &R);

     SI = (P * T * R)/100;

     printf("Simple Interest = %d", SI);

     return 0;
 }
