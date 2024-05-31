//6. Write a C program with a function that will read a string and convert all characters to capital letters.
#include <stdio.h>
#include <ctype.h>

void cap(char str[]) {
    int i = 0;
    while(str[i]) {
        str[i] = toupper(str[i]);
        i++;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Original string: %s", str);

    cap(str);
    printf("Uppercase string: %s\n", str);
    return 0;
}
