//2. Write a C program to check a given matrix is an identity matrix or not
#include<stdio.h>
#include<stdio.h>

int main() {
    int n, i, j;
    printf("Enter the order of the matrix: ");
    scanf("%d", &n);

    if(n <= 0) {
        printf("Order of the matrix should be greater than 0.\n");
        return 0;
    }

    int mat[n][n];
    printf("Enter elements of the matrix: \n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if((i == j && mat[i][j] != 1) || (i != j && mat[i][j] != 0)) {
                printf("The given matrix is not an identity matrix.\n");
                return 0;
            }
        }
    }

    printf("The given matrix is an identity matrix.\n");
    return 0;
}
