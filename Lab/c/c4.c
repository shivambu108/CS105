//4. Write a C Program to transpose a matrix
#include<stdio.h>

int main() {
    int a[10][10], r, c, i, j;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("\nEnter elements of matrix:\n");
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j) {
            printf("Enter element a%d%d: ",i,j);
            scanf("%d", &a[i][j]);
        }
    printf("\nOriginal Matrix:\n");
    for(i=0; i<r; ++i) {
        for(j=0; j<c; ++j) {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
    printf("\nTranspose of Matrix:\n");
    for(i=0; i<c; ++i) {
        for(j=0; j<r; ++j) {
            printf("%d  ", a[j][i]);
        }
        printf("\n");
    }

    return 0;
}
