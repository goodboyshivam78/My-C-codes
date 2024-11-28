#include <stdio.h>

int main() {
    printf("Hare Krishna\n");
    int a,b,c,d;
    printf("Enter a: ");
    scanf("%d",&a);   
    printf("Enter b: ");
    scanf("%d",&b);   
    printf("Enter c: ");
    scanf("%d",&c);   
    printf("Enter d: ");
    scanf("%d",&d);   
    // if (a>=b) {
    //     if (a>=c) {
    //         if (a>=d) {
    //             printf("Greater number is: %d",a);
    //         } else {
    //             printf("Greater number is: %d",d);
    //         }
    //     } else if(c>=d) {
    //         printf("Greater number is: %d",c);
    //     } else {
    //         printf("Greater number is: %d",d);
    //     }
    // } else {
    //     if (b>=c) {
    //         if (b>=d) {
    //             printf("Greater number is: %d",b);
    //         } else {
    //             printf("Greater number is: %d",d);
    //         }
    //     } else if(c>=d) {
    //         printf("Greater number is: %d",c);
    //     } else {
    //         printf("Greater number is: %d",d);
    //     }
    // }
    if (a>=b && a>=c && a>=d)
        printf("Greater number is: %d",a);
    else if (b>=a && b>=c && b>=d)
        printf("Greater number is: %d",b);
    else if (c>=a && c>=b && c>=d)
        printf("Greater number is: %d",c);
    else 
        printf("Greater number is: %d",d);

    return 0;
}