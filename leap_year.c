#include <stdio.h>

int main() {
    printf("Hare Krishna\n");
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    if ((year%4==0 && year%100!=0) || year%400==0) {
        printf("Year %d is a LEAP YEAR !", year);
    } else {
        printf("Year %d is NOT an LEAP YEAR !", year);
    }
    return 0;
}