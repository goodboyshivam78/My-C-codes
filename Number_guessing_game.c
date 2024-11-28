#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    printf("-----------------------Hare Krishna-------------------------\n");
    srand(time(0));
    int n,cnt=1,num = rand()%100+1;
    do {
        printf("\nGuess a number between 1 to 100: ");
        scanf("%d",&n);
        if (n>num) {
            printf("You have Guess High >*_*<");
        } else if(n<num) {
            printf("You have Guess LOW <*_*>");
        } else {
            printf("Woww *o* You WIN..!");
            printf("\nYour guessing turns %d",cnt);
        }
        cnt=cnt+1;
        //9676999584
    } while(n!=num);
    return 0;
}