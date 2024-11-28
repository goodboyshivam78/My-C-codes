//Write a program to take string as an input from the user using %c and %s conform that the string are equal.

#include <stdio.h>
#include <string.h>


int main() {
    printf("-----------------------Hare Krishna-------------------------\n");
    char Strn[8];
    for(int i=0;i<7;i++) {
        scanf("%c",&Strn[i]);
        fflush(stdin);
    }
    Strn[8] = '\0';
    printf("%s",Strn);
    char Strn1[150];
    printf("\n");
    scanf("%s",Strn1);
    printf("%s",Strn1);
    int a = strcmp(Strn,Strn1);
    printf("\n%d",a);

    return 0;
}