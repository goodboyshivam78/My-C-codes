#include <stdio.h>

int main() {
    printf("Hare Krishna\n");
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    printf("The value of the char '%c' is %d",ch,ch);
    if (ch>=65 && ch<=90) {
        printf("\nUPPERCASE.");
    } else {
        printf("\nNOT uppercase !");
    }
    return 0;
}