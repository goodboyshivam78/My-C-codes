// Write a program to print the value of variable i using 'pointer to pointer' type variable.

#include <stdio.h>

int main() {
    printf("-----------------------Hare Krishna-------------------------\n");
    int i = 78;
    int* ptr1 = &i;
    int** ptr2 = &ptr1;

    printf("\nThe value of 'i' is: %d",**ptr2);
    printf("\nThe value of 'i' is: %d",*ptr1);
    printf("\nThe value of 'i' is: %d",**(&ptr1));

    return 0;
}