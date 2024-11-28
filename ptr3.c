//Write a program to change the value of a variable about tem times its actual value inside a function.
//Also try this problem by call by value function.

#include <stdio.h>

void change(int*);

void change(int* n) {
    *n = *n *10;
}

int main() {
    printf("-----------------------Hare Krishna-------------------------\n");
    int n = 10;
    printf("\nThe value of 'n' is: %d",n);
    change(&n);
    printf("\nThe value of 'n' after changing inside function: %d",n);
    return 0;
}

//--------------------------------------------------------------------------------------------

// void change(int);

// void change(int n) {
//     n = n *10;
// }

// int main() {
//     printf("-----------------------Hare Krishna-------------------------\n");
//     int n = 10;
//     printf("\nThe value of 'n' is: %d",n);
//     change(n);
//     printf("\nThe value of 'n' after changing inside function: %d",n);
//     return 0;
// }