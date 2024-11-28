#include <stdio.h>

int main() {
    printf("Hare Krishna");
    // Area of a Square.
    int side;
    printf("\nEnter the side of a Square: ");
    scanf("%d", &side);
    printf("Area of Square is: %d",side*side);

    // Area of Rectangle.
    int length, wedth;
    printf("\nEnter length of Rectangle: ");
    scanf("%d",&length);
    printf("Enter Wedth of Rectangle: ");
    scanf("%d",&wedth);
    printf("The length of the Rectangle is : %d",length*wedth);

    //Area of Circle;
    int radius;
    printf("\nEnter the Radius of Circle: ");
    scanf("%d",&radius);
    printf("The Area of Circle is: %f",3.14*radius*radius);
    return 0;
}