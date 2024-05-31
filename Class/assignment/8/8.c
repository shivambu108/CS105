//8. Write a C program to remove the white spaces (blank spaces) from a string.

#include <stdio.h>
int main() {
    char str[1000];
    int i, j;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    for (i = 0; str[i] != '\0'; i++) {
        while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            for (j = i; str[j] != '\0'; j++) {
                str[j] = str[j + 1];
            }
            str[j] = '\0';
        }
    }
    printf("The input string without white spaces is: %s", str);

    return 0;
}
