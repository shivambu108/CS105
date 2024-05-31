//27. Write a C program for calculating the nth fibonacci number using recursion
#include<stdio.h>

long long fib(int n) {
    if(n <= 1)
        return n;
    else
        return(fib(n-1) + fib(n-2));
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    if(n < 0) {
        printf("Error: Fibonacci not defined for negative numbers.\n");
        return 1; // return an error code
    }
    printf("Fib (%d) is: %lld\n", n, fib(n));
    return 0;
}

/*
#include<stdio.h>

long long fib(int n) {
    if(n <= 1)
        return n;
    else
        return(fib(n-1) + fib(n-2));
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    if(n < 0) {
        printf("Error: Fibonacci not defined for negative numbers.\n");
        return 1; // return an error code
    }
    printf("Fibonacci sequence up to %d terms: ", n);
    for(int i = 0; i < n; i++) {
        printf("%lld ", fib(i));
    }
    printf("\n");
    return 0;
}

*/

// #include<stdio.h>
// func()
// { auto int i=0;
//  register int j=0; 
//   static int k=0;
//  i++; j++; k++; printf("\n%d%d%d", i, j, k);



// }
// int main()
// {
// func();

// func();

// return 0;

// }

