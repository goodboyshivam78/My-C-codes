#include<stdio.h>

int main() {
    int a,b,c,d;
    printf("--------------------------Hare Krishna------------------------\n");
    printf("\nEnter Four numbers with spaces: ");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    printf("--------------------------------------------\nThe Greatest number among 4 numbers is: ");
    (a>b)?(a>c)?(a>d)? printf("%d",a) : printf("%d",d) : (c>d)? printf("%d",c) : printf("%d",d) : (b>c)?(b>d)? printf("%d",b) : printf("%d",d) : (c>d)? printf("%d",c) : printf("%d",d);
    printf("\n--------------------------------------------");
    return 0;
}