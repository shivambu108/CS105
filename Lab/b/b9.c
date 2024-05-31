#include<stdio.h>
#include<math.h>

int main() {
    int n, i;
    float x, sum = 0;

    printf("Enter the value of x: ");
    scanf("%f", &x);

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("S = ");
    for(i = 1; i <= n; i++) {
        if(i % 2 == 0) {
            printf(" + %.2f^%d", x, i);
            sum += pow(x, i);
        } else {
            printf(" - %.2f^%d", x, i);
            sum -= pow(x, i);
        }
    }

    printf("\nSum of the series S = %.2f\n", sum);

    return 0;
}
