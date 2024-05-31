//1. Write a C program to find total number of alphabets, digits or special character in a string.
#include <stdio.h>

int main() {
    char str[100];
    int alphabets = 0, digits = 0, special_chars = 0, i = 0;

    printf("Enter a string: ");
    scanf( "%[^\n]s", str);
    fflush(stdin);
    
    while (str[i] != '\0') {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            alphabets++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else {
            special_chars++;
        }
        i++;
    }

    printf("Number of Alphabets in the string is : %d\n", alphabets);
    printf("Number of Digits in the string is : %d\n", digits);
    printf("Number of Special characters in the string is : %d\n", special_chars);

    return 0;
}
