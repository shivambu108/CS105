/*
#include <stdio.h>

int main(){
    double num1, num2, result;
    char op;

    printf("Enter the two numbers and the operation (+, -, *, /): ");
    scanf("%lf %lf %c", &num1, &num2, &op);

    if (op == '+')
    {
        result = num1 + num2;
        printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
    }
    else if (op == '-')
    {
        result = num1 - num2;
        printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
    }
    else if (op == '*')
    {
        result = num1 * num2;
        printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
    }
    else if (op == '/')
    {
        if (num2 == 0)
        {
            printf("Invalid input. Cannot divide by zero.\n");
        }
        else
        {
            result = num1 / num2;
            printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
        }
    }
    else
    {
        printf("Invalid input. The operation must be one of (+, -, *, /).\n");
    }

    return 0;
}
*/
//Using switch:

#include <stdio.h>

int main(){
    double num1, num2, result;
    char op;

    printf("Enter the two numbers and the operation (+, -, *, /): ");
    scanf("%lf %lf %c", &num1, &num2, &op);

    switch (op)
    {
        case '+': 
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '-': 
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '*': 
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '/': 
            if (num2 == 0)
            {
                printf("Invalid input. Cannot divide by zero.\n");
            }
            else
            {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            }
            break;
        default: 
            printf("Invalid input. The operation must be one of (+, -, *, /).\n");
    }

    return 0;
}
//