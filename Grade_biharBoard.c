#include <stdio.h>

int main() {
    int english,hind,maths,physics,chemistry;
    printf("Maths Marks: ");
    scanf("%d",&maths);
    printf("Physics Marks: ");
    scanf("%d",&physics);
    printf("Chemistry Marks: ");
    scanf("%d",&chemistry);
    printf("Hindi Marks: ");
    scanf("%d",&hind);
    printf("English Marks: ");
    scanf("%d",&english);
    int total_marks = hind+english+maths+physics+chemistry;
    float Marks_percent = total_marks/5.0;
    printf("\nTotal marks of student is: %d",total_marks);
    printf("\nTotal percentage of student is: %f%%",Marks_percent);
    if (maths>30 && physics>30 && english>30 && chemistry>30 && hind>30) {
        if (Marks_percent>=60) {
            printf("\nGrade is: 1st Div");
        }
        else if(Marks_percent>=45) {
            printf("\nGrade is: 2nd Div");
        }
        else if(Marks_percent>=33) {
            printf("\nGrade is: 3rd Div");
        }
        else {
            printf("\nGrade is: Fail");
        }
    }
    else {
        printf("\nGrade is: Fail");
    }

    return 0;
}