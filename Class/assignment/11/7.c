//7. Write a C program with a function to add a string to the end of another string without using any library function.
#include <stdio.h>
#include <string.h>

void concatenate(char str1[], char str2[]) {
    int i = 0, j = 0;
    while(str1[i] != '\0') {
        i++;
    }
    while(str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
}

int main() {
    char str1[200], str2[100];
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str1[strlen(str1) - 1] = '\0';
    str2[strlen(str2) - 1] = '\0';
    concatenate(str1, str2);
    printf("Concatenated string: %s\n", str1);
    return 0;
}
//   
//   