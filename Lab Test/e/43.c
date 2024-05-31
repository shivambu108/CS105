//43. Write a C program with a functions to perform addition, and subtraction, on two matrices depending upon the
//user’s choice

#include <stdio.h>

#define S 10

// Function to add two matrices
void addMatrices(int mat1[S][S], int mat2[S][S], int result[S][S], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

// Function to subtract two matrices
void subtractMatrices(int mat1[S][S], int mat2[S][S], int result[S][S], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[S][S], int rows, int cols) {
    printf("Resultant Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat1[S][S], mat2[S][S], result[S][S];
    int rows, cols, choice;

    printf("Enter the number of rows and columns of the matrices (max 10x10): ");
    scanf("%d %d", &rows, &cols);

    printf("Enter the elements of first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter the elements of second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    printf("Choose an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            addMatrices(mat1, mat2, result, rows, cols);
            displayMatrix(result, rows, cols);
            break;
        case 2:
            subtractMatrices(mat1, mat2, result, rows, cols);
            displayMatrix(result, rows, cols);
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
