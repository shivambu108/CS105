//25. Write a C program for calculating the factorial of a given number N using recursion
#include<stdio.h>

long long factorial(int N) {
    if(N == 0)
        return 1;
    else
        return(N * factorial(N-1));
}

int main() {
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);
    printf("Factorial of %d is %lld\n", N, factorial(N));
    return 0;
}
