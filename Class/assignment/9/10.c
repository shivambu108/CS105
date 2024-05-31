//10. Write a C program that reads a line of text and counts all occurrences of a particular word.
#include <stdio.h>
int main() {
    char str[1000], word[100];
    int i, j, count = 0;

    printf("Enter a line of text: ");
    fgets(str, 1000, stdin);
    printf("Enter the word to count: ");
    scanf("%s", word);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == word[0]) {
            for (j = 1; word[j] != '\0'; j++) {
                if (str[i + j] != word[j]) {
                    break;
                }
            }
            if (word[j] == '\0') {
                count++;
            }
        }
    }
    printf("Input text: '%s'.\n",str);

    printf("The word '%s' occurs %d times in the given line of text.\n", word, count);

    return 0;
}
