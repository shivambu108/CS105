//3. Write a C program to print the upper triangular matrix
#include<stdio.h>

void main() {
    int n, i, j;
    printf("Enter the order of the matrix: ");
    scanf("%d", &n);
    int mat[n][n];
    printf("Enter elements of the matrix: \n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("Upper triangular matrix: \n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(i > j)
                printf("  ");
            else
                printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
