#include <stdio.h>

int fibonacchi(int);

int fibonacchi(int n) {
    if(n==0) {
        return 0;
    } else if(n==1) {
        return 1;
    } else {
        return (fibonacchi(n-1) + fibonacchi(n-2));
    }
}

int main() {
    printf("-----------------------Hare Krishna-------------------------\n");
    int n;
    printf("\nEnter the number of term of fibonacchi series: ");
    scanf("%d",&n);
    int fibo = fibonacchi(n);
    printf("The %d term of Fibonacchi series is: %d",n,fibo);
    return 0;
}