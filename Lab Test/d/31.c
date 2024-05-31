//31. Write a C Program to find length of a string without using library function/s.

#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    
    while (str[length] != '\0') {
        length++;
    }
 int l= strlen(str);
    printf("The input string is: %s\n", str);
    printf("The length of the string is: %d\n %d\n", length ,l);

    return 0;
}
//use fflush(stdin) to flush the input stream

