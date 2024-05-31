//38. Write a C program with a function to find the sum of digits of a given number.
#include <stdio.h>

// Function to calculate sum of digits
int sum_of_digits(int num) {
    int sum = 0;
    while (num != 0) {
        sum = sum + num % 10;
        num = num / 10;
    }
    return sum;
}

int main() {
    int number, result;

    printf("Enter a number: ");
    scanf("%d", &number);

    result = sum_of_digits(number);

    printf("Sum of digits of %d is %d\n", number, result);

    return 0;
}
