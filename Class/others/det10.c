#include<stdio.h>

int main() {
    int matrix1[10][10], matrix2[10][10];
    int row1, col1, row2, col2;
    int row, col, flag = 1;

    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d%d", &row1, &col1);

    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d%d", &row2, &col2);

    if(row1 != row2 || col1 != col2) {
        printf("The given matrices do not have the same dimensions!!.\n");
        return 0;
    }

    printf("Enter elements in the first matrix: \n");
    for(row = 0; row < row1; row++) {
        for(col = 0; col < col1; col++) {
            scanf("%d", &matrix1[row][col]);
        }
    }

    printf("Enter elements in the second matrix: \n");
    for(row = 0; row < row2; row++) {
        for(col = 0; col < col2; col++) {
            scanf("%d", &matrix2[row][col]);
        }
    }

    // Comparing both matrices
    for(row = 0; row < row1; row++) {
        for(col = 0; col < col1; col++) {
            if(matrix1[row][col] != matrix2[row][col]) {
                flag = 0;
                break;
            }
        }
        if(flag == 0) {
            break;
        }
    }

    if(flag == 1)
        printf("The given matrices are identical.\n");
    else
        printf("The given matrices are not identical.\n");

    return 0;
}
