#include <stdio.h>

int fibonachi(int);

int fibonachi(int n) {
    if (n==0) {
        return 0;
    } else if(n==1) {
        return 1;
    } else {
        return (fibonachi(n-2) + fibonachi(n-1));
    }
}

int main() {
    printf("-----------------------Hare Krishna-------------------------\n");
    int n;
    printf("From which term you want the series: ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++) {
        printf("\t%d",fibonachi(i));
    }
    return 0;
}