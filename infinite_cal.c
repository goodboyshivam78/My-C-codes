
#include <stdio.h>
#include <stdlib.h>

void main() {

    int a,b,ch;
    printf("\n==========MENU==========");
    printf("\n\t1. ADDITION\n\t2. SUBTRACTION\n\t3. MULTIPLICATION\n\t4. DIVISION\n\t6. MODULUE DIV\n");
    printf("---------------------------");
    here :
    printf("\nEnter number a: ");
    scanf("%d",&a);
    printf("Enter number b: ");
    scanf("%d",&b);
    printf("Enter a Choice: ");
    scanf("%d",&ch);
    switch(ch) {
        case 1: printf("%d + %d = %d",a,b,a+b);
        goto here;
        case 2: printf("%d - %d = %d",a,b,a-b);
        goto here;
        case 3: printf("%d X %d = %d",a,b,a*b);
        goto here;
        case 4 : printf("%d / %d = %f",a,b,a/b);
        goto here;
        case 5 : printf("%d %% %d = %d",a,b,a%b);
        goto here;
        default : printf("\nYou have entered INVALID CHOICE");
    }
    printf("\nExit !");
}