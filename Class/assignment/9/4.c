//4. Write a C program to compare given two strings without using builtin function.
#include <stdio.h>
int main() {
    char str1[100], str2[100];
    int i, flag = 1;

    printf("Enter first string: ");
    fgets(str1, 100, stdin);

    printf("Enter second string: ");
    fgets(str2, 100, stdin);

    for (i = 0; str1[i] != '\0' && str2[i] != '\0'; i++) {
        if (str1[i] != str2[i]) {
            flag = 0;
            break;
        }
    }
    if (flag == 1 && str1[i] == '\0' && str2[i] == '\0') {
        printf("The two strings are equal.\n");
    } else {
        printf("The two strings are not equal.\n");
    }

    return 0;
}


