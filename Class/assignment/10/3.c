//3. Write a C program to count occurrences of a character in given string.
#include <stdio.h>
#define SIZE 100 

int main()
{
    char str[SIZE];
    char ch;
    int i, freq = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    printf("Enter a character to find its freq: ");
    scanf(" %c", &ch);

    for(i=0; str[i]!='\0'; ++i)
    {
        if(ch == str[i])
            ++freq;
    }

    printf("freq of %c = %d", ch, freq);

    return 0;
}
