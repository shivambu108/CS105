//35. Write a C program to copy one string into another without using builtin function.
#include <stdio.h>
int main() {
    char str1[100], str2[100];
    int i;

    printf("Enter a string: ");
    scanf("%[^\n]s", str1);

    for (i = 0; str1[i] != '\0'; i++) {
        str2[i] = str1[i];
    }
    str2[i] = '\0';

    printf("The original string is: %s\n", str1);
    printf("The copied string is: %s\n", str2);

    return 0;
}
