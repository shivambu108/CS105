//2. Write a C program to find length of a given string without using builtin function.

#include <stdio.h>
int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    
    while (str[length] != '\0') {
        length++;
    }
    printf("The input string is: %s\n", str);
    printf("The length of the string is: %d\n", length);

    return 0;
}
