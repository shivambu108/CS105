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
    printf("\nTranspose of the matrix is: \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", Matrix[j][i]);
        }
        printf("\n");
    }
    return 0;
}
