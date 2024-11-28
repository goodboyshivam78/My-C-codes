#include <stdio.h>

int main() {
    printf("Hare Krishna\n");
    int num;
    printf("Enter a Three Digit number: ");
    scanf("%d",&num);
    int answer = (int)(num/100);
    printf("The First Digit of %d is %d",num,answer);
    return 0;
}