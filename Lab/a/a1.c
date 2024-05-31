//1. Write a C program that accepts a distance in centimeters and prints 
//    the corresponding value in inches. (Note that 1 inch = 2.54 cm.)

#include <stdio.h>
int main()
{
    double cm;
    printf("Enter the distance in centimeters: ");
    scanf("%lf", &cm);

    double inch = cm / 2.54;
    printf("The distance in inches is %.2lf\n", inch);

    return 0;
}