//9. Write a C program with a functions to perform addition, subtraction,
// and multiplication on two matrices depending upon the user’s ch.

#include <stdio.h>
#define S 100

void multiply_matrices(int m1[S][S], int m2[S][S], int res[S][S], int r1, int c1, int c2) {
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            for(int k = 0; k < c1; k++) {
                res[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
}

void perform_op(int m1[S][S], int m2[S][S], int res[S][S], int r1, int c1, int r2, int c2, int ch) {
    if(ch == 3) {
        multiply_matrices(m1, m2, res, r1, c1, c2);
        return;
    }
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c1; j++) {
            res[i][j] = (ch == 1) ? m1[i][j] + m2[i][j] : m1[i][j] - m2[i][j];
        }
    }
}

void read_matrix(int matrix[S][S], int r, int c) {
    for(int i = 0; i < r; i++) for(int j = 0; j < c; j++) scanf("%d", &matrix[i][j]);
}

void print_matrix(int matrix[S][S], int r, int c) {
    for(int i = 0; i < r; i++) { for(int j = 0; j < c; j++) printf("%d ", matrix[i][j]); printf("\n"); }
}

int main() {
    int m1[S][S], m2[S][S], res[S][S] = {0}, r1, c1, r2, c2, ch;

    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d%d", &r1, &c1);
    if(r1 < 1 || c1 < 1) {
        printf("Invalid matrix S.\n");
        return 0;
    }

    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d%d", &r2, &c2);
    if(r2 < 1 || c2 < 1) {
        printf("Invalid matrix S.\n");
        return 0;
    }

    printf("Enter 1 for addition, 2 for subtraction, 3 for multiplication: ");
    scanf("%d", &ch);
    if(ch < 1 || ch > 3 || (ch != 3 && (r1 != r2 || c1 != c2)) || (ch == 3 && c1 != r2)) {
        printf("Invalid op or matrix dimensions.\n");
        return 0;
    }

    printf("Enter the elements of the first matrix:\n");
    read_matrix(m1, r1, c1);

    printf("Enter the elements of the second matrix:\n");
    read_matrix(m2, r2, c2);

    perform_op(m1, m2, res, r1, c1, r2, c2, ch);

    printf("Result:\n");
    print_matrix(res, r1, c1);

    return 0;
}
