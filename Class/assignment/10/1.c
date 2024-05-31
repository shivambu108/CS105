//1. Write a C program to count total number of vowels and consonants in a string.
#include <stdio.h>
#include <ctype.h>
#define SIZE 100
int main(){   
    char str[SIZE];
    int i, vowels, consonants;

    printf("Enter any string: ");
    scanf("%[^\n]s", str);

    i = vowels = consonants = 0;

    while(str[i] != '\0')
    {   str[i] =  tolower(str[i]);
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' )
        {
            vowels++;
        }
        else if((str[i]>='a'&& str[i]<='z'))
        {
            consonants++;
        }

        i++;
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
