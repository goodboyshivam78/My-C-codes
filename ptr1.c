//Write a program to print the address of a variable and also the the value of that adress.

#include <stdio.h>

int main() {
    printf("-----------------------Hare Krishna-------------------------\n");
    int i = 78;
    int* j = &i;
    printf("\nThe address of i variable is: %u",j);
    printf("\nThe value of i variable using the address is: %d",*j);
    return 0;
}