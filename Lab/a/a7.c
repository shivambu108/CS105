#include <stdio.h>

int main()
{
    // Declare a variable to store the year
    int year;

    // Prompt the user to enter a year
    printf("Enter a year: ");

    // Read the input from the user
    scanf("%d", &year);

    // Check if the year is a leap year using the following rules:
    // A leap year is divisible by 4, except if it is also divisible by 100, then it is not a leap year, unless it is also divisible by 400, then it is a leap year
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                // The year is divisible by 4, 100, and 400, so it is a leap year
                printf("The year %d is a leap year.\n", year);
            }
            else
            {
                // The year is divisible by 4 and 100, but not by 400, so it is not a leap year
                printf("The year %d is not a leap year.\n", year);
            }
        }
        else
        {
            // The year is divisible by 4, but not by 100, so it is a leap year
            printf("The year %d is a leap year.\n", year);
        }
    }
    else
    {
        // The year is not divisible by 4, so it is not a leap year
        printf("The year %d is not a leap year.\n", year);
    }

    return 0;
}