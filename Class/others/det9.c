#include <stdio.h>
int main () {
    int n, i, j;
    printf("Enter the size of the matrix: ");
    scanf("%d", &n);
    int Matrix [n][n];
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; ++i) {
        for (j = 0; j < n; ++j) {
            scanf("%d", &Matrix[i][j]);
        }
    }
    printf("Matrix:\n");
    for (i = 0; i < n; ++i) {
        for (j = 0; j < n; ++j) {
            printf("%d ", Matrix[i][j]);
        }
        printf("\n");
    }
    printf("\nLower triangular matrix is: \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i >= j)
                printf("%d ", Matrix[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}
