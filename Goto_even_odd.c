#include <stdio.h>
#include <stdlib.h>

// void main() {
//     int x;
//     printf("Enter a number: ");
//     scanf("%d",&x);
//     if (x%2==0) {
//         goto even;
//     } else {
//         goto odd;
//     }

//     even:
//     printf("\nEven");
//     exit(0);

//     odd :
//     printf("Odd");
// }

void main() {
    int x,m;
    printf("Enter a number: ");
    scanf("%d",&x);
    m = x%2;
    if (m==1) {
        goto m ;
    }
    printf("Even");
    exit(0);
    m :
    printf("Odd");

} 