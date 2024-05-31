//2. Write a C program to check a given matrix is an identity matrix or not
#include<stdio.h>

void main() {
    int n, i, j, flag = 1;
    printf("Enter the order of the matrix: ");
    scanf("%d", &n);
    int mat[n][n];
    printf("Enter elements of the matrix: \n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(i == j && mat[i][j] != 1) {
                flag = 0;
                break;
            }
            if(i != j && mat[i][j] != 0) {
                flag = 0;
                break;
            }
        }
    }
    if(flag == 1)
        printf("The given matrix is an identity matrix.\n");
    else
        printf("The given matrix is not an identity matrix.\n");
}
