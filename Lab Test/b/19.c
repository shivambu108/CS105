//19. Write a C program to count total number of words in a string.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int i, words = 0, in_word = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; ++i) {
        if (isspace(str[i]) || str[i] == '\n') {
            in_word = 0;
        } else if (!in_word && isalnum(str[i])) {
            in_word = 1;
            ++words;
        }
    }

    printf("The string contains %d words.", words);

    return 0;
}
