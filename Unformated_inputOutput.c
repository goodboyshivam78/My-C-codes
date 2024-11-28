#include <stdio.h>
#include <conio.h>

void main() {

    char a,b,c,d[30];
    printf("Enter your name for 'gets()' : ");
    gets(d);
    printf("Enter a character for 'getchar()' : ");
    a = getchar();
    printf("Enter a character for 'getch()' : ");
    b = getch();
    printf("\nEnter a character for 'getche()' : ");
    c = getche();
    printf("\n--------------------------------------");
    printf("\nThe value of 'd' by 'puts()' : ");
    puts(d);
    printf("Value of 'a' by 'putchar()' : ");
    putchar(a);
    printf("\nValue of 'b' by 'putch()' : ");
    putch(b);
    printf("\nValue of 'c' by 'putch()' : ");
    putch(c);
    

}