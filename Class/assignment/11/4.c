//4. Write a C program with a function to find the sum of digits of a given number.
#include <stdio.h>

int sum_of_digits(int num) {
    int sum = 0;
    while(num != 0) {
        sum = sum + num % 10;
        num = num / 10;
    }
    return sum;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Sum of digits: %d\n", sum_of_digits(num));
    return 0;
}
