#include <stdio.h>

int main()
{
    int n, i, j;
    float matrix[10][10], determinant = 1;

    printf("Enter the size of the matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%f", &matrix[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i > j)
            {
                determinant *= matrix[j][i];
            }
            else if (i < j)
            {
                determinant *= matrix[i][j];
            }
        }
    }

    printf("The determinant of the matrix is: %f", determinant);

    return 0;
}

