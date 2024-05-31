//10. Write a program that accepts a word from the user and prints right half pyramid.

#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, j;

    printf("Enter a word: ");
    scanf("%s", str);

    for (i = 0; i < strlen(str); i++) {
        for (j = 0; j <= i; j++) {
            printf("%c ", str[j]);
        }
        printf("\n");
    }

    return 0;
}
