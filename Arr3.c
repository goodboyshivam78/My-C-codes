//Write a program which counts the number of positive integer in an array.

#include <stdio.h>

int positive_int(int*,int);

int positive_int(int* ptr,int m) {
    int count =0;
    for (int i = 0; i < m; i++)
    {
        if (*(ptr+i)>0) {
            count++;
        }
    }
    return count;
    
}

int main() {
    printf("-----------------------Hare Krishna-------------------------\n");

    int arr[7] = {1,3,6,-7,-35,78,9};
    int pInt = positive_int(arr,7);
    printf("\nThe number of positive integer in the arr is: %d",pInt);

    return 0;
}