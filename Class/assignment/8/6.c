//6. Write a C program that will capitalize all the letters of a string.

#include <stdio.h>
int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        i++;
    }
    printf("The input string is: %s\n", str);

    return 0;
}
/*
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[i]) {
        putchar(toupper(str[i]));
        i++;
    }

    return 0;
}
*/