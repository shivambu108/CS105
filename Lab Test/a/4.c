//4. Write a C program to check whether a year given by the user is a leap year or not.

#include <stdio.h>

int main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("The year %d is a leap year.\n", year);
    }
    else
    {
        printf("The year %d is not a leap year.\n", year);
    }

    return 0;
}
