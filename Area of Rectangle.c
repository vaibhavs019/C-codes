#include <stdio.h>
int main(){
//    to find area of rectangle
    int height;
    printf("The height of rectangle is: ");
    scanf("%d", &height);
    int breadth;
    printf("The height of breadth is: ");
    scanf("%d", &breadth);
    int area = (int)(height* breadth);
    printf("The area of rectangle is %i", area);
    return 0;
}