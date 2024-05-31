#include <stdio.h>
#include <ctype.h> // for isalpha and tolower functions

int main()
{
    char ch;
    /* Input alphabet from user */
    printf("Enter any character: ");
    scanf("%c", &ch);

    /* Check if the character is a letter */
    if (isalpha(ch))
    {
        /* Convert the character to lowercase */
        ch = tolower(ch);

        /* Switch ch value */
        switch (ch)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf("Vowel\n");
                break;
            default:
                printf("Consonant\n");
        }
    }
    else
    {
        printf("Invalid\n");
    }

    return 0;
}