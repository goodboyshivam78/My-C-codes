#include <stdio.h>

float c_to_f(float);

float c_to_f(float celc) {
    float fran = 1.8*celc +32;
    return fran;
}

int main() {
    printf("-----------------------Hare Krishna-------------------------\n");
    float celc;
    printf("\nEnter the temperature in celcious: ");
    scanf("%f",&celc);
    printf("The Faranhite is: %f",c_to_f(celc));
    return 0;
}