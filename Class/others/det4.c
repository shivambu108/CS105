#include <stdio.h>
#define MAX_SIZE 10

float determinant(float mat[MAX_SIZE][MAX_SIZE], int n){
    float det = 0;
    if (n == 1){
        return mat[0][0];
    }
    else if (n == 2){
        return mat[0][0] * mat[1][1] - mat[0][1] * mat[1][0];
    }
    else{
        for (int i = 0; i < n; i++){
            float submat[MAX_SIZE][MAX_SIZE];
            int subi = 0;
            for (int j = 1; j < n; j++){
                int subj = 0;
                for (int k = 0; k < n; k++){
                    if (k == i){
                        continue;
                    }
                    submat[subi][subj] = mat[j][k];
                    subj++;
                }
                subi++;
            }
            det += (i % 2 == 1 ? -1 : 1) * mat[0][i] * determinant(submat, n - 1);
        }
        return det;
    }
}

int main(){
    int n;
    printf("Enter the size of the matrix: ");
    scanf("%d", &n);
    float mat[MAX_SIZE][MAX_SIZE];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%f", &mat[i][j]);
        }
    }
    float det = determinant(mat, n);
    printf("The determinant of the matrix is: %f\n", det);
    return 0;
}