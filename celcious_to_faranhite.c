#include <stdio.h>

int main() {
    printf("Hare Krishna");
    float celcius,faranhite;
    printf("\nEnter the value of celcious: ");
    scanf("%f",&celcius);
    faranhite = 1.8*celcius + 32;
    printf("%f celcious in faranhite is: %f",celcius,faranhite);
    return 0;
}