//3. Write a C program to compute the roots of the equation ax2 + bx + c = 0. 


#include <stdio.h>
#include <math.h>

int main(){
    double a, b, c, x1, x2, discriminant;

   
    printf("Enter the coefficients of the equation ax^2 + bx + c = 0: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Invalid input. Please enter three numbers.\n");
        return 1;
    }

    if (a == 0){
        printf("Invalid input. The coefficient of x^2 cannot be zero.\n");
        return 1;
    }

        discriminant = b*b - 4*a*c ; 

        if (discriminant > 0){
            x1 = (-b + sqrt(discriminant)) / (2*a);
            x2 = (-b - sqrt(discriminant)) / (2*a);
            printf("Roots are real and different.\n");
            printf("Root 1 = %.2lf\n", x1);
            printf("Root 2 = %.2lf\n", x2);
        }
        else if (discriminant == 0){
            x1 = x2 = -b / (2*a);
            printf("Roots are real and the same.\n");
            printf("Root 1 = Root 2 = %.2lf\n", x1);
            }
        else{
            double realPart = -b / (2*a);
            double imaginaryPart = sqrt(-discriminant) / (2*a);
            printf("Roots are complex and different.\n");
            printf("Root 1 = %.2lf + %.2lfi\n", realPart, imaginaryPart);
            printf("Root 2 = %.2lf - %.2lfi\n", realPart, imaginaryPart);
            }
       
    


    return 0;
}