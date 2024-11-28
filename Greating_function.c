#include <stdio.h>

void greet_morning();
void greet_afternoon();
void greet_night();

void greet_morning() {
    printf("\nGood Morning ^_^");
    printf("\nBolo RADHE RADHE..</\\>");
}

void greet_afternoon() {
    printf("\nGood Afternoon *_*");
    printf("\nBolo RADHE RADHE </\\>");
}

void greet_night() {
    printf("\nGood Night");
    printf("\nBolo RADHE RADHE </\\>");
}

int main() {
    printf("-----------------------Hare Krishna-------------------------\n");

    greet_morning();
    greet_afternoon();
    greet_night();

    return 0;
}