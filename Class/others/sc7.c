#include<stdio.h>
int main(){ 
    int x, y, choice, result;
    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);
    
    printf("Enter your choice of operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    scanf("%d", &choice);
    
    switch (choice){
        case 1:
            result = x + y;
            printf("The sum of %d and %d is %d\n", x, y, result);
            break;
        case 2:
            result = x - y;
            printf("The difference of %d and %d is %d\n", x, y, result);
            break;
        case 3:
            result = x * y;
            printf("The product of %d and %d is %d\n", x, y, result);
            break;
        case 4:
            if (y == 0)
            {
                printf("Division by zero is not possible\n");
            }
            else
            {
                result = x / y;
                printf("The quotient of %d and %d is %d\n", x, y, result);
            }
            break;
        default:
            printf("Invalid choice\n");
            break;
    }
    return 0;
}