#include <stdio.h>

int main() {
    int p, m, c, pe;
    float per;
    printf("Vaibhav Satpute\n");
    printf("21070127057\n");

    /* Input marks of four subjects from the user */
    printf("Marks of Physics: ");
    scanf("%d", &p);
    printf("Marks of Mathematics: ");
    scanf("%d", &m);
    printf("Marks of Chemistry: ");
    scanf("%d", &c);
    printf("Marks of Physical Education: ");
    scanf("%d", &pe);

    // Calculate the percentage
    per = (p + m + c + pe) / 4.0;

    printf("Percentage = %.2f\n", per);

    if (per >= 50) {
        printf("Student is passed\n");

        if (per >= 100) {
            printf("Student got O grade\n");
        } else if (per >= 90) {
            printf("Student got A+ grade\n");
        } else if (per >= 85) {
            printf("Student got A grade\n");
        } else if (per >= 80) {
            printf("Student got B+ grade\n");
        } else if (per >= 75) {
            printf("Student got B grade\n");
        } else if (per >= 65) {
            printf("Student got C grade\n");
        } else if (per >= 50){
            printf("Student got D grade\n");
        } else if(per >= 400) {
            printf("Student got E grade\n");
        }

    } else {
        printf("Student got F grade\n");
    }

    return 0;
}
