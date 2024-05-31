// 1. Write a C Program to read a matrix and  
//    find sum of all elements
//    print diagonal elements
//    find Row sum
//    find column sum

#include<stdio.h>

void main() {
    int size, i, j, sum = 0, rowSum = 0, colSum = 0;

    printf("Enter the size of the matrix: ");
    scanf("%d", &size);

    int matrix[size][size];

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }

    printf("Sum of all elements: %d\n", sum);

    printf("Diagonal elements: ");
    for(i = 0; i < size; i++) {
        printf("%d ", matrix[i][i]);
        
    }
    printf("\n");

    for(i = 0; i < size; i++) {
        rowSum = 0;
        for(j = 0; j < size; j++) {
            rowSum += matrix[i][j];
        }
        printf("Sum of elements of Row %d: %d\n", i+1, rowSum);
    }

    for(i = 0; i < size; i++) {
        colSum = 0;
        for(j = 0; j < size; j++) {
            colSum += matrix[j][i];
        }
        printf("Sum of elements of Column %d: %d\n", i+1, colSum);
    }
}
