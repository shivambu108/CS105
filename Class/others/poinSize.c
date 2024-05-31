#include <stdio.h>

int main() {
    int *ip;
    char *cp;
    float *fp;
    double *dp;

    printf("Size of int pointer: %lu bytes\n", sizeof(ip));
    printf("Size of char pointer: %lu bytes\n", sizeof(cp));
    printf("Size of float pointer: %lu bytes\n", sizeof(fp));
    printf("Size of double pointer: %lu bytes\n", sizeof(dp));

    return 0;
}
