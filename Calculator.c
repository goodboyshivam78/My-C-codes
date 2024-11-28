#include <stdio.h>
#include <conio.h>

void main() {

    int num1,num2,evl;
    char sym;
    printf("----------------------Hare Krishna Calculator--------------------------\n");
    printf("\nEnter 1st number: ");
    scanf("%d",&num1);
    printf("Choose (+,-,*,/,%%): ");
    sym = getche();
    printf("\nEnter 2nd number: ");
    scanf("%d",&num2);

    if (sym=='+') {
        evl = num1 + num2;
    } else if(sym=='-') {
        evl = num1 - num2;
    } else if (sym == '*') {
        evl = num1*num2;
    } else if(sym =='/') {
        evl = num1/num2;
    } else if (sym=='%') {
        evl = num1%num2;
    } else {
        printf("\nYou have entered WRONG OPERATOR -_-!");
    }
    printf("------------------\n%d %c %d = %d\n------------------",num1,sym,num2,evl);


}