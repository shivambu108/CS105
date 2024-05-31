#include<stdio.h>

int main() {
    int a[10][10], b[10][10], result[10][10], r1, c1, r2, c2, i, j, k;
    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d",&r2, &c2);

    // If column of first matrix in not equal to row of second matrix,
    // ask the user to enter the size of matrix again.
    while (c1!=r2) {
        printf("Error! column of first matrix not equal to row of second.\n");
        printf("Enter rows and columns for first matrix: ");
        scanf("%d %d", &r1, &c1);
        printf("Enter rows and columns for second matrix: ");
        scanf("%d %d",&r2, &c2);
    }

    // Storing elements of first matrix.
    printf("\nEnter elements of matrix 1:\n");
    for(i=0; i<r1; ++i)
        for(j=0; j<c1; ++j) {
            printf("Enter element a%d%d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }

    // Displaying elements of first matrix.
    printf("\nMatrix 1:\n");
    for(i=0; i<r1; ++i)
        for(j=0; j<c1; ++j) {
            printf("%d  ",a[i][j]);
            if(j==c1-1)
                printf("\n\n");
        }

    // Storing elements of second matrix.
    printf("\nEnter elements of matrix 2:\n");
    for(i=0; i<r2; ++i)
        for(j=0; j<c2; ++j) {
            printf("Enter element b%d%d: ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }

    // Displaying elements of second matrix.
    printf("\nMatrix 2:\n");
    for(i=0; i<r2; ++i)
        for(j=0; j<c2; ++j) {
            printf("%d  ",b[i][j]);
            if(j==c2-1)
                printf("\n\n");
        }

    // Initializing all elements of result matrix to 0
    for(i=0; i<r1; ++i)
        for(j=0; j<c2; ++j) {
            result[i][j] = 0;
        }

    // Multiplying matrices a and b and
    // storing result in result matrix
    for(i=0; i<r1; ++i)
        for(j=0; j<c2; ++j)
            for(k=0; k<c1; ++k) {
                result[i][j]+=a[i][k]*b[k][j];
            }

    // Displaying the result
    printf("\nOutput Matrix:\n");
    for(i=0; i<r1; ++i)
        for(j=0; j<c2; ++j) {
            printf("%d  ",result[i][j]);
            if(j==c2-1)
                printf("\n\n");
        }
    
    return 0;
}