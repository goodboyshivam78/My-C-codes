#include <stdio.h>

int main() {
    printf("Hare Krishna\n");
    int n,sum = 0;
    printf("Enter a numeber: ");
    scanf("%d",&n);
    
    for(int i=1;i<=10;i++) {
        sum+=(n*i);
    }
    printf("The Sum of all numbers in the table of %d is: %d",n,sum);
    return 0;
}