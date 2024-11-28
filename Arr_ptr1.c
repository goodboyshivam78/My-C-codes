//Create an array of 10 numbers. Varify using pointer arithematic that (ptr+2) point to the third element where ptr point to the first element of the array.
 #include <stdio.h>
 
 int main() {
    printf("-----------------------Hare Krishna-------------------------\n");
    int arr[5] = {34,45,56,67,78};
    int* ptr = arr;
    printf("\nThe 1st value in the array is: %d",*ptr);
    printf("\nThe 3rd value in the array is: %d",*(arr+2));
    printf("\nThe 3rd value in the array is: %d",*(ptr+2));
    ptr+=2;
    printf("\nThe 3rd value in the array is: %d",*ptr);
    return 0;
 }