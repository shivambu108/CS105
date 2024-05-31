//5. Write a C Program to find multiplication of two matrices
#include<stdio.h>

#define SIZE 10

void read_matrix(int matrix[SIZE][SIZE], int row, int col) {
    for(int i=0; i<row; i++)
        for(int j=0; j<col; j++)
            scanf("%d", &matrix[i][j]);
}

void multiply_matrices(int a[SIZE][SIZE], int b[SIZE][SIZE], int result[SIZE][SIZE], int r1, int c1, int c2) {
    // Initialize the elements of result matrix to 0
    for(int i=0; i<r1; i++)
        for(int j=0; j<c2; j++)
            result[i][j] = 0;

    for(int i=0; i<r1; i++)
        for(int j=0; j<c2; j++)
            for(int k=0; k<c1; k++)
                result[i][j] += a[i][k] * b[k][j];
}

void display_matrix(int matrix[SIZE][SIZE], int row, int col) {
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++)
            printf("%d  ", matrix[i][j]);
        printf("\n");
    }
}

int main() {
    int a[SIZE][SIZE], b[SIZE][SIZE], result[SIZE][SIZE], r1, c1, r2, c2;

    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d",&r2, &c2);

    if (c1 != r2) {
        printf("Error! column of first matrix not equal to row of second.\n");
        return 0;
    }

    printf("\nEnter elements of matrix 1:\n");
    read_matrix(a, r1, c1);

    printf("\nEnter elements of matrix 2:\n");
    read_matrix(b, r2, c2);

    multiply_matrices(a, b, result, r1, c1, c2);

    printf("\nOutput Matrix:\n");
    display_matrix(result, r1, c2);

    return 0;
}
