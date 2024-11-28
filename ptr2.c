//Write a program to print the address of a variable then pass the variavle to a function and print the address again is the both address will same or not? Give Resion.
#include <stdio.h>

void print_address(int);

void print_address(int a) {
    int* ptr1 = &a;
    printf("\nThe address of 'a' inside function: %u",ptr1);
}

int main() {
    printf("-----------------------Hare Krishna-------------------------\n");
    int a = 10;
    int* ptr = &a;
    printf("\nThe address of 'a' outside function: %u",ptr);
    print_address(a);
    return 0;
}

//Answer:- No the address inside the function and address outside the function are not same because the copy of the value is pass as argument in the function and this copy value stored in another memory address.
