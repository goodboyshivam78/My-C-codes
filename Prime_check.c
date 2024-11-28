#include <stdio.h>

int main() {
    printf("Hare Krishna\n");
   
    int n,check=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=2;i<n;i++) {
        check =1;
        if(n%i==0) {
            check=0;
            break;
        }
    }
    if (n==2) {
        printf("2 is a Prime Number");
    } else if(check==0) {
        printf("%d is not a Prime Number",n);
    } else {
        printf("%d is a Prime Number",n);
    }
    return 0;
}