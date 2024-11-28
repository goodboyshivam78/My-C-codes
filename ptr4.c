//Write a program using a function which calculate the sum and average of two numbers. Use pointer and print the value of sum and average in the main().

#include <stdio.h>

void sum_avg(int*,int*,float*,float*);

void sum_avg(int* a,int*b,float*sum,float*avg) {
    *sum = *a+*b;
    *avg = (*a+*b)/2;
}

int main() {
    printf("-----------------------Hare Krishna-------------------------\n");
    int a=40,b=60;
    float sum,avg;
    sum_avg(&a,&b,&sum,&avg);
    printf("\nThe Sum of %d and %d is: %f",a,b,sum);
    printf("\nThe Average of %d and %d is: %f",a,b,avg);
    


    return 0;
}