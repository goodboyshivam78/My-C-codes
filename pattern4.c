#include <stdio.h>

void main() {
    int i,j;
    for(i=1;i<=5;i++) {
        for(j=1;j<=9;j++) {
            if(i==1 && j==5) {
                printf("%d\t",i);
            } 
            else if(j==5) {
                printf(" \t");
            } else if(j>(5-i) && j<(5+i)) {
                printf("%d\t",i);
            }
            else {
                printf(" \t");
            }
        }
        printf("\n");
    }
}