#include <stdio.h>

int main() {
    printf("Hare Krishna\n");
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=10;i++) { // int i=10; i ;i-- the condition to reverse the table.
        printf("%d x %d = %d\n",n,i,i*n);
    }
    return 0;
}