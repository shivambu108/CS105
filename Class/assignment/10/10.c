//10. Write a C program to reverse order of words in a given string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int i, j, k, wordStart, wordEnd;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';

    j = strlen(str) - 1;
    k = 0;

    for(i = strlen(str) - 1; i >= 0; i--) {
        if(str[i] == ' ' || i == 0) {
            wordStart = (i == 0) ? i : i + 1;
            wordEnd = j;
            while(wordStart <= wordEnd) {
                rev[k++] = str[wordStart++];
            }
            rev[k++] = ' ';
            j = i - 1;
        }
    }
    rev[k] = '\0';

    printf("Reversed String: %s\n", rev);
    return 0;
}
