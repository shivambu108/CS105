// struct usage user input
#include<stdio.h>
#include<string.h>

struct stud{
    int rollno;
    char name[10];
    float marks;

};

//global scope of struct
// struct stud{
//     int rollno;
//     char name[10];
//     float marks;

// }s1 ;

// we cannot create variables in the main 
// struct {
//     int rollno;
//     char name[10];
//     float marks;

// }s1, s2;
int main(){
    struct stud s1, s2 ;
    printf("enter student 1 details: ");
    printf("\nname: ");
    scanf("%s",s1.name);
    printf("roll no: ");
    scanf("%d",&s1.rollno);
    printf("marks: ");
    scanf("%f",&s1.marks);

    printf("student 1 details: name = %s, rollno =%d , marks =%.1f ", s1.name, s1.rollno, s1.marks);
    return 0;
}
//if we declare after main it throws an error
// we must declare and define at the same time in the global scope before main
// size of the stuct must be known to the compiler for allocating memory for the varibales
//cannot use == operator
//cannot perform arithmetic ops on variables , but can be done on members
//struct within struct
// dynamic memory allocation, nodes , ds
/* why is this right when we use pointer?
// struct node{
//     int data ;
//     struct node *next;
// };
*/

