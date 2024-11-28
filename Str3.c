//Write a function 'slice()' to slice a string. It should change the original string such that it is now a slice string take 'm' and 'n' as the start and end position of the slice.

#include <stdio.h>
#include<string.h>

char* slice(char*, int ,int);

char* slice(char* arr,int n,int m) {
    char* ptr = &arr[n];
    arr = ptr;
    arr[m] = '\0';
    return arr;
}

int main() {
    printf("-----------------------Hare Krishna-------------------------\n");
    char* strn;
    printf("\nEnter your string: ");
    fgets(strn,100,stdin);
    int n,m;
    printf("Enter the starting and ending index of the string for slice: ");
    scanf("%d",&n);
    scanf("%d",&m);

    printf("After Slicing: %s",slice(strn,n,m));
    return 0;
}