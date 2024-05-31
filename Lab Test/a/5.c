/* 8. Write a C program to check to read the marks of a student and classify them
into different grades. If the marks secured are greater than or equal to 90, the student is 
awarded Grade A; if they are greater than or equal to 80 but less than 90, Grade B is 
awarded; if they are greater than or equal to 65 but less than 80, Grade C is 
awarded; otherwise Grade D is awarded.*/

#include <stdio.h>
int main()
{     
    int marks;
    printf("Enter the marks of the student: ");
    scanf("%d", &marks);

    if (marks >= 90 && marks <= 100)
    {
        printf("The student is awarded Grade A.\n");
    }
    else if (marks >= 80)
    {
        printf("The student is awarded Grade B.\n");
    }
    else if (marks >= 65)
    {
        printf("The student is awarded Grade C.\n");
    }
    else if (marks >= 0)
    {
        printf("The student is awarded Grade D.\n");
    }
    else
    {
        printf("Invalid input. The marks must be between 0 and 100.\n");
    }

    return 0;
}
