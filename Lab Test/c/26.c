//26. Write a C program for calculating the factorial of a given number N by creating a user defined function fact()
/*
#include<stdio.h>

// User defined function for factorial
long long fact(int N) {
    long long factorial = 1;
    for(int i = 1; i <= N; ++i) {
        factorial *= i;
    }
    return factorial;
}

int main() {
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);
    printf("Factorial of %d is %lld\n", N, fact(N));
    return 0;
}

*/
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
