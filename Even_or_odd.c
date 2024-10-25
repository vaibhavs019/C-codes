// To find the number is even or odd
#include <stdio.h>

int main() {

    printf("Vaibhav Satpute\n");
    printf("21070127057\n");
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);


    if(num % 2 == 0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);

    return 0;
}
