//3. Write a C program to find length of a given string using builtin function.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    length = strlen(str);

    printf("The input string is: %s\n", str);
    printf("The length of the string is: %d\n", length);

    return 0;
}
