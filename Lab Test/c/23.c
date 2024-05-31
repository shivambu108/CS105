//23. Write a C program to check whether a string is palindrome or not.
//3. Write a C program to check whether a string is palindrome or not.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], revStr[100];
    int len, i, j;

    printf("Enter a string: ");
    scanf( "%[^\n]s", str);
    fflush(stdin);

    j = 0;
    len = strlen(str);
    for (i = len - 1; i >= 0; i--) {
        revStr[j++] = str[i];
    }
    revStr[j] = '\0';

    if (strcmp(str, revStr) == 0) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}
