//boiler plate code.
#include <stdio.h>

int main() {
    int a;//Decleration of variable
    a = 3;//Initialising value to the variable
    // %d for integer, %f for float, %c for char.
    
    printf("%d\n",a);// printf() function is used to print value in the terminal.
    printf("Hare Krishna\n");
    printf("Size of int: %zu byte\n",sizeof(int));
    printf("Size of char: %zu byte\n",sizeof(char));
    printf("Size of float: %zu byte\n", sizeof(float));
    return 0;
}