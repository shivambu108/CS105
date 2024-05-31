//6. Write a C program to check whether a character entered by the user is a vowel or not. (use if-else, switch)
/*
#include <stdio.h>
#include <ctype.h>

int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if (isalpha(c)) {
        c = tolower(c); // convert to lowercase

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            printf("%c is a vowel.\n", c);
        } else {
            printf("%c is not a vowel.\n", c);
        }
    } else {
        printf("%c is not a letter.\n", c);
    }

    return 0;
}

*/
//Using switch:

#include <stdio.h>
#include <ctype.h>

int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if (isalpha(c)) {
        c = tolower(c); // convert to lowercase

        switch (c) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':printf("%c is a vowel.\n", c);
                break;
            default:printf("%c is not a vowel.\n", c);
                break;
        }
    } else {
        printf("%c is not a letter.\n", c);
    }

    return 0;
}

//