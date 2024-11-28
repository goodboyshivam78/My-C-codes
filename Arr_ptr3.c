//Create a 3d array and print the addres of its element in increasing order.

#include <stdio.h>

int main() {
    printf("-----------------------Hare Krishna-------------------------\n");
    int ThreeD[2][2][2] ={{{1,2},{3,4}},{{5,6},{7,8}}};
    int count =0;
    for(int i=0;i<2;i++) {
        for(int j=0;j<2;j++) {
            for(int k=0;k<2;k++) {
                printf("\nAddres of [%d][%d][%d] element is: %u",i,j,k,*(ThreeD+count));
                printf("\nSize of [%d][%d][%d] element is: %zu\n",i,j,k,sizeof(ThreeD[i][j][k]));
                count++;
            }
        }
    }
    return 0;
}