#include <stdio.h>

int N_sum(int);

int N_sum(int n) {
    if(n==1) {
        return 1;
    } else {
        return (N_sum(n-1) +n);
    }
}

int main() {
    printf("-----------------------Hare Krishna-------------------------\n");
    int n;
    printf("\nEnter the number: ");
    scanf("%d",&n);
    printf("The sun of %d narural numbers is: %d",n,N_sum(n));
    return 0;
}