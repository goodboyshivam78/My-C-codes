#include <stdio.h>

int main() {
    printf("Hare Krishna\n");
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int sum = 0,i=1;
    while(i<=n) {
        sum +=i;
        i++;
    }
    printf("The sum of %d natural numbers is: %d",n,sum);
    return 0;
}