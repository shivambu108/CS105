#include<stdio.h>
struct student{
    int rollno;
    float marks;
};
int main(){
    int n, i ;
    struct student s[150];
    printf("Enter the number of students: ");
    scanf("%d", &n);
    for (i=0;i<n;i++){
        printf("student %d: roll number: ",i+1);
        scanf("%d", &s[i].rollno);
        printf("student %d: marks: ",i+1);
        scanf("%f", &s[i].marks);
    }
    printf("\nStudent details:\nRollno\tMarks");
    for (i=0;i<n;i++){
        printf("\n%d\t%.2f ",s[i].rollno, s[i].marks);
        
    }
    return 0;
}