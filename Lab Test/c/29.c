//29. Write a C program to print the lower triangular matrix
#include<stdio.h>

void lower_triangular_matrix(int mat[3][3], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (j > i)
                printf("0 ");
            else
                printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat[3][3];
    int i, j;

    printf("Enter the elements of the 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Lower triangular matrix is:\n");
    lower_triangular_matrix(mat, 3);
    return 0;
}
