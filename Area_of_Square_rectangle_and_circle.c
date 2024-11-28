#include <stdio.h>

int main() {
    // area of Square
    int side = 45;
    int squareArea = side*side;
    printf("Area of Square is: %d\n",squareArea);

    //area of Rectangle
    int length = 56;
    int wedth = 23;
    int rectangleArea = length*wedth;
    printf("Area of Rectangle is: %d\n",rectangleArea);

    // area of Circle 
    int radius  = 7;
    float circleArea = 3.14*radius*radius;
    printf("Area of Circle is: %f",circleArea);

    return 0;
}
