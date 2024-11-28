#include <stdio.h>

int main() {
    printf("Hare Krishna\n");
    int incom;
    float tax;
    printf("Enter your monthly Incom: ");
    scanf("%d",&incom);
    if (incom>1000000) {
        tax = incom*0.3;
    } else if(incom>=500000) {
        tax = incom*20/100.0;
    } else if(incom>=250000) {
        tax = incom*5/100.0;
    } else {
        tax = 0;
    }
    printf("Your incom is %d and your tax is %f",incom,tax);
    printf("\nFinal salary is: %f",incom-tax);

    return 0;
}