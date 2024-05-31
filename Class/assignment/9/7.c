//7. Write a C program to copy one string into another using builtin function.

#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100];

    printf("Enter a string: ");
    scanf("%s", str1);

    strcpy(str2, str1);

    printf("The original string is: %s\n", str1);
    printf("The copied string is: %s\n", str2);

    return 0;
}
