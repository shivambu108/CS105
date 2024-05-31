// struct usage
#include<stdio.h>
#include<string.h>
struct stud{
    int rollno;
    char name[10];
    float marks;

};

int main(){
    struct stud s1, s2 ;
    s1.rollno = 12;
    s1.marks = 4.5;
    strcpy(s1.name, "ram");

    printf("student 1 details: name = %s, rollno =%d , marks =%.1f ", s1.name, s1.rollno, s1.marks);



    return 0;
}