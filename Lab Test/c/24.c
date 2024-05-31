//24. Write a C program to find the sum of the series : 2 + 4 + 8 + 16 + … up to N (two programs - using while, for).

#include<stdio.h>
#include<math.h>

int main() {
    int n, i;
    double sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum += pow(2, i);
    }

    printf("The sum of the series is: %.2lf\n", sum);

    return 0;
}


/*
#include<stdio.h>
#include<math.h>

int main() {
    int n, i = 1;
    double sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    while(i <= n) {
        sum += pow(2, i);
        i++;
    }

    printf("The sum of the series is: %.2lf\n", sum);

    return 0;
}


*/
