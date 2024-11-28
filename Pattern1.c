#include <stdio.h>

int main() {
    printf("-----------------------Hare Krishna-------------------------\n\n");
    int n;
    printf("Enter the lines of Pattern: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=i;j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}