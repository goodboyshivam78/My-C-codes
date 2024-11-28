//Create an array of size 3x10 which contains the table of 2,7 and 9.

#include <stdio.h>

int main() {
    printf("-----------------------Hare Krishna-------------------------\n");
    int Table_arr[3][10];
    int a,b,c;
    printf("\nEnter the Three numbers which you want to store table: ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    for(int i=0;i<10;i++) {
        Table_arr[0][i] = a*(i+1);
        Table_arr[1][i] = b*(i+1);
        Table_arr[2][i] = c*(i+1);
    }

    for(int i=0;i<3;i++) {
        printf("\n");
        for(int j=0;j<10;j++) {
            printf("%d\t",Table_arr[i][j]);
        }
    }
    return 0;
}