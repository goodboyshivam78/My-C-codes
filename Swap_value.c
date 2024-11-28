#include <stdio.h>

int main() {
    printf("Hare Krishna\n");
    int a, b;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Value of a=%d and b=%d",a,b);
    printf("\nAfter Swaping");
    // a = a+b;
    // b = a-b;
    // a = a-b;
    a = a*b;
    b = a/b;
    a = a/b;
    printf("\nValue of a=%d and b=%d",a,b);

    return 0;
}