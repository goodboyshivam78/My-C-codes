//Write a program to create an array of 10 integers and store table of any number in it.
#include <stdio.h>

int main() {
    printf("-----------------------Hare Krishna-------------------------\n");
    int n;
    printf("\nEnter a number: ");
    scanf("%d",&n);
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = n*(i+1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("\n%d",arr[i]);
    }
    
    
    return 0;
}