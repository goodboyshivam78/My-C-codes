//Write a function which reverse the array pass to it.

#include <stdio.h>


void printarr(int*,int);
void revs(int* , int);


void printarr(int* ptr,int n) {
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("\t%d",*(ptr+i));
    }
}

void revs(int*shi,int n) {
    for(int i=0;i<(n/2);i++) {
        *(shi+i) = *(shi+i) + *(shi+(n-(i+1)));
        *(shi+(n-(i+1))) = *(shi+i) - *(shi+(n-(i+1)));
        *(shi+i) = *(shi+i) - *(shi+(n-(i+1)));
    }
}


int main() {
    printf("-----------------------Hare Krishna-------------------------\n");
    int Arr[4] = {6,7,8,9};
    printarr(Arr,4);
    revs(Arr,4);
    printarr(Arr,4);
    return 0;
}