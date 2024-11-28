#include <stdio.h>

int main() {
    int length;
    int wedth;
    printf("Enter Length of a Rectangle: ");
    scanf("%d",&length);
    printf("Enter Width of a Rectangle: ");
    scanf("%d",&wedth);
    int area = length*wedth;
    printf("Area of Rectangle is: %d",area);
    return 0;
}