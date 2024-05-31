//28. Write a C program for calculating the nth fibonacci number by creating a user defined function fib()
#include <stdio.h>

// Function to calculate nth Fibonacci number
long long fib(int n) {
    long long a = 0, b = 1, c;
    if (n == 0)
        return a;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Fibonacci number F(%d) = %lld\n", n, fib(n));
    return 0;
}
