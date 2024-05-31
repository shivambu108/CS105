//9. Write a C program to search all occurrences of a word in given string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char word[10];
    int i, j, found;
    int strLen, wordLen;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter a word to search: ");
    fgets(word, sizeof(word), stdin);

    word[strlen(word) - 1] = '\0';
    strLen = strlen(str);
    wordLen = strlen(word);

    for(i=0; i<=strLen-wordLen; i++){
        found = 1;
        for(j=0; j<wordLen; j++){
            if(str[i + j] != word[j]){
                found = 0;
                break;
            }
        }
        if(found && (str[i + j] == ' ' || str[i + j] == '\0' || str[i + j] == '\n')){
            printf("Word found at index: %d\n", i);
        }
    }if (!found) {printf("Word not found in the string.\n");}

    return 0;
}
