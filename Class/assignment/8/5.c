//5. Write a C program to read a text and count all the occurrences of a particular character given by the user.

#include <stdio.h>
int main() {
    char str[100];
    char character;
    int count = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    printf("Enter a character to count: ");
    scanf(" %c", &character);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == character) {
            count++;
        }
    }
    printf("The input string is: %s\n", str);
    printf("The number of occurrences of '%c' is: %d\n", character, count);

    return 0;
}

