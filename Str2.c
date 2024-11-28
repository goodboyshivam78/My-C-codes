//Write your own 'strlen' function as same as the function in string.h.

#include<stdio.h>
#include<string.h>

int len(char*);

int len(char* arr) {
    char c = *arr;
    int i = 0;
    while(c!='\0') {
        i++;
        c = *(arr+i);
    }
    return i;

}

int main() {
    printf("------------------------Hare Krishna------------------------\n");
    char arr[100];
    printf("\nTell me about yourself as short as you can: ");
    gets(arr);
    printf("Your letters count is: %d",len(arr));


    return 0;
}