//14. Write programs to print the sum of the following series (with pow() library function): S = 1 + x + x^2 + x^3 + x^4 + ...n terms
#include <stdio.h>
#include <math.h>

double calculate_series_sum(int x, int n) {
    double sum = 0.0;
    for (int i = 0; i <= n; i++) {
        sum += pow(x, i);
    }
    return sum;
}

void display_equation(int x, int n) {
    printf("The series is: ");
    for (int i = 0; i <= n; i++) {
        if (i == 0) {
            printf("1");
        } else if (i == 1) {
            printf(" + %d", x);
        } else {
            printf(" + %d^%d", x, i);
        }
    }
    printf("\n");
}

int main() {
    int x, n;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);
    display_equation(x, n);
    printf("The sum of the series is: %.2f\n", calculate_series_sum(x, n));
    return 0;
}
