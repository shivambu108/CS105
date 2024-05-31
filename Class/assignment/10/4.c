//4. Write a C program to replace first occurrence of a character with another in a string.
#include <stdio.h>
#define SIZE 100 

int main()
{
    char str[SIZE], ch, new_ch;
    int i, flag = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    printf("Enter a character to replace: ");
    scanf(" %c", &ch);
    printf("Enter a character to replace with: ");
    scanf(" %c", &new_ch);

    printf("Original string: %s", str);

    for(i=0; str[i]!='\0'; ++i)
    {
        if(!flag && str[i] == ch) 
        {
            str[i] = new_ch;
            flag = 1; 
        }
    }
    printf("\nUpdated string: %s", str);

    return 0;
}
