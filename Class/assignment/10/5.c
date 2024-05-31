//5. Write a C program to remove all occurrences of a character from string.
#include <stdio.h>
#define SIZE 100 

int main(){
    char str[SIZE], ch;
    int i, j;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    printf("Enter a character to remove: ");
    scanf(" %c", &ch);
    printf("Original String : %s",str);

    for(i=0; str[i]!='\0'; ++i)
    {
        while(str[i] == ch)
        {
            for(j=i; str[j]!='\0'; ++j)
            {
                str[j] = str[j+1];
            }
        }
    }
    printf("\nString after removing '%c': %s", ch, str);

    return 0;
}
