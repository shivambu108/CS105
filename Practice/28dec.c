// C Program to Store Information of Students Using Structure
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
	char name[50];
	int roll_number;
	int age;
	double total_marks;
};

int main()
{
	int i = 0,n;
    printf("Enter the number of students: ");
    scanf("%d",&n);
   

	
	struct Student s[n];

    	//scanning students information
	printf("Student Records:\n\n");
	for (i = 0; i < n; i++) 
	{   printf("\ns[%d]\n ", i+1);
		printf("\tName = "); scanf("%s", &s[i].name);
		printf("\tRoll Number = "); scanf("%d", &s[i].roll_number);
		printf("\tAge = "); scanf("%d", &s[i].age);
		printf("\tTotal Marks = "); scanf("%lf", &s[i].total_marks);  
	}   
 
	// Printing Students information
	printf("Student Records:\n\n");
	for (i = 0; i < n; i++) 
	{   printf("\ns[%d]\n ", i+1);
		printf("\tName = %s\n", s[i].name);
		printf("\tRoll Number = %d\n", s[i].roll_number);
		printf("\tAge = %d\n", s[i].age);
		printf("\tTotal Marks = %0.2lf\n\n", s[i].total_marks);
	}

	return 0;
}
