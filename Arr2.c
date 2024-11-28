//Write a function which reverse the array pass to it.

#include <stdio.h>

void printArr(int arr[],int n) {
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("\t%d",arr[i]);
    }
    
    
}

void rev(int ptr[],int n) {
    int temp;
    for(int i = 0 ; i<(n/2);i++) {
        temp = ptr[i];
        ptr[i] = ptr[n-(i+1)];
        ptr[n-(i+1)]  = temp;


    }
}

int main() {
    printf("-----------------------Hare Krishna-------------------------\n");
    int arr[5] = {1,2,3,4,5};
    // printf("%d",sizeof(arr));
    printArr(arr,5);
    rev(arr,5);
    printArr(arr,5);


    
    return 0;
}