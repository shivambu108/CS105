//40. Write a C program with a function that will read a string and convert all characters to capital letters.
#include <stdio.h>
#include <ctype.h>

// Function to convert a string to uppercase
void to_uppercase(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        str[i] = toupper(str[i]);
        i++;
    }
}

int main() {
    char string[100];

    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);

    to_uppercase(string);

    printf("The string in uppercase is: %s", string);

    return 0;
}
/*
#include <stdio.h>

// Function to convert a string to uppercase
void to_uppercase(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 'a' + 'A';
        }
        i++;
    }
}

int main() {
    char string[100];

    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);

    to_uppercase(string);

    printf("The string in uppercase is: %s", string);

    return 0;
}

*/