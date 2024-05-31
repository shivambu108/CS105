//30. Write a C program to check if given two matrices are identical
#include<stdio.h>

int main() {
    int m, n, i, j, flag = 1;

    printf("Enter the number of rows and columns\n");
    scanf("%d%d", &m, &n);

    int a[m][n], b[m][n];

    printf("Enter elements of first matrix\n");
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of second matrix\n");
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &b[i][j]);

    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            if(a[i][j] != b[i][j]) {
                flag = 0;
                break;
            }

    if(flag == 1)
        printf("The matrices are identical.\n");
    else
        printf("The matrices are not identical.\n");

    return 0;
}
