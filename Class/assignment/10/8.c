//8. Write a C program to trim both leading and trailing white space characters from given string.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int start, end, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Original string: '%s'\n", str);

    str[strlen(str) - 1] = '\0';

    for(start=0; isspace(str[start]); start++);

    for(end=strlen(str)-1; isspace(str[end]); end--);

    char trimmed[end-start+2]; 
    for(i=0; start <= end; i++, start++) {
        trimmed[i] = str[start];
    }
    trimmed[i] = '\0'; 

    printf("Trimmed string: '%s'\n", trimmed);

    return 0;
}

