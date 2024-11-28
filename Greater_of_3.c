#include<stdio.h>
#include<conio.h>

int main() {

    int a,b,c;
    printf("----------------------Hare Krishna-----------------------\n");
    printf("\nEnter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    printf("Enter c: ");
    scanf("%d",&c);
    printf("-------------------------------------------\nThe geratest number among 3 numbers is: ");
    (a>b)?(a>c)?printf("%d",a) : printf("%d",c) : (b>c)? printf("%d",b) : printf("%d",c);
    printf("\n-------------------------------------------");


    return 0;
}