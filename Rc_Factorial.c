#include <stdio.h>

int factorial(int);

int factorial(int a) {
    if (a==1 || a==0) {
        return 1;
    } 
    else {
        return (factorial(a -1)*a);
    }
}

int main() {
    printf("-----------------------Hare Krishna-------------------------\n");
    int n;
    printf("\nEnter a number: ");
    scanf("%d",&n);
    int fact = factorial(n);
    printf("Factorial of %d is %d",n,fact);

    return 0;
}