#include <stdio.h>

void main() {
    int c=1,i,j,pr;
    for(i=2;i<=100;i++) {
        pr=0;
        for(j=2;j<i;j++) {
            if(i%j==0) {
                pr++;
            }
        }
        if(pr==0) {
            c++;
        }
    }
    printf("Number of prime numbers in 1 to 100 is: %d",c);
}