//    to find the smallest and largest number in the three number
#include <stdio.h>

int main() {

    printf("Vaibhav Satpute\n");
    printf("21070127057\n");
    int large, small;
    int one;
    printf("The first number is: ");
    scanf("%d", &one);
    int two;
    printf("The second number is: ");
    scanf("%d", &two);
    int three;
    printf("The third number is: ");
    scanf("%d", &three);
    int four;
    printf("The fourth number is: ");
    scanf("%d", &four);
    if (one < two && one < three && one < four) {
        small = one;
    }
    if (two < one && two < three && two < four) {
        small = two;
    }
    if (three < one && three < two && three < four) {
        small = three;
    }
    if (four < one && four < two && four < three){
        small = four;
    }
    if( one > two && one > three && one > four){
        large = one;
    }
    if(two > one && two > three && two > four){
        large = two;
    }
    if(three > one && three > two && three > four){
        large = three;
    }
    if (four > one && four > two && four > three){
        large = four;
    }

    printf("%d is largest number\n",large);
    printf("%d is Smallest Number ",small);
    return 0;
}


