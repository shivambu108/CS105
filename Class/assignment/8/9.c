//9. Write a program to convert each character of a string into the next alphabet and print the string.

#include <stdio.h>
int main() {
    char str[1000];
    int i;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'y') {
            str[i] = str[i] + 1;
        } else if (str[i] == 'z') {
            str[i] = 'a';
        } else if (str[i] >= 'A' && str[i] <= 'Y') {
            str[i] = str[i] + 1;
        } else if (str[i] == 'Z') {
            str[i] = 'A';
        }
    }
    printf("The input string with each character converted to the next alphabet is: %s", str);

    return 0;
}
