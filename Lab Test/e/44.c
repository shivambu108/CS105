//44. Write a C program to find the sum of n numbers using recursion
#include <stdio.h>

// Function to calculate sum using recursion
int sum(int n) {
    if(n != 0)
        return n + sum(n-1); // recursive call
    else
        return n;
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Sum = %d", sum(num));
    return 0;
}
