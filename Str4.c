//Write your own 'strcpy()' function.

#include <stdio.h>
#include <string.h>


void cpy(char* source, char* target) {
    target = source;

}

int main() {
    printf("-----------------------Hare Krishna-------------------------\n");
    char source[100],target[100];
    printf("\nEnter your Strnig: ");
    fgets(source,100,stdin);
    cpy(source,target);
    printf("%s",target);

    return 0;
}