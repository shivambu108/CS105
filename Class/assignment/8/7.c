//7. Write a C program that counts the total numbers of vowels and their frequency.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int length, i, vowels[5] = {0}, total_vowels = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    printf("The input string is: %s\n", str);

    length = strlen(str);

    for (i = 0; i < length; i++) {
        str[i] = tolower(str[i]);

        switch (str[i]) {
            case 'a':vowels[0]++;
                    total_vowels++;
            break;        
            case 'e':vowels[1]++;
                    total_vowels++;
            break;        
            case 'i':vowels[2]++;
                    total_vowels++;
            break;        
            case 'o':vowels[3]++;
                    total_vowels++;
            break;      
            case 'u':vowels[4]++;
                    total_vowels++;
            break;        
        }
    }
    printf("The number of occurrences of 'a' is: %d\n", vowels[0]);
    printf("The number of occurrences of 'e' is: %d\n", vowels[1]);
    printf("The number of occurrences of 'i' is: %d\n", vowels[2]);
    printf("The number of occurrences of 'o' is: %d\n", vowels[3]);
    printf("The number of occurrences of 'u' is: %d\n", vowels[4]);
    printf("The total number of vowels is: %d\n", total_vowels);

    return 0;
}
