//9. Write a C program to reverse a given string and print.
#include <stdio.h>
int main() {
    char str[100], rev[100];
    int i, j, length = 0;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    while (str[length] != '\0') {
        length++;
    }

    for (i = length - 1, j = 0; i >= 0; i--, j++) {
        rev[j] = str[i];
    }
    rev[j] = '\0';
    printf("The original string is: %s\n", str);
    printf("The reversed string is: %s\n", rev);

    return 0;
}
