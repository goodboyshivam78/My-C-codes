#include <stdio.h>

int main() {
    printf("Hare Krishna\n");
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int n = num%10;
    int answer = num - n;
    printf("\nThe number is %d and answer is %d",num, answer);
    return 0;
}