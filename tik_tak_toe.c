#include <stdio.h>
#include <conio.h>

void start(int);
void game();

int main() {
    int n;
    printf("-------------------------------Hare Krihna Hare Rama--------------------------------\n");
    printf("\n 0 | 1 | 2 ");
    printf("\n---|---|---");
    printf("\n 3 | 4 | 5 ");
    printf("\n---|---|---");
    printf("\n 6 | 7 | 8 ");

    printf("\nIsh Game ko khlne ke liye 1 dabaye: ");
    scanf("%d", &n);
    start(n);
    return 0;
}

void start(int n) {
    if (n==1) {
        game();
    } else {
        return;
    }
}

void game() {
    printf("\nI am game +_=");
}