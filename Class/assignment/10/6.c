//6. Write a C program to count no of lines, blank lines and comments in a given program.
   
#include <stdio.h>
#define SIZE 1000 

int main(){
    char str[SIZE];
    int i = 0, totalLines = 0, blankLines = 0, comments = 0;

    printf("Enter a string: ");
    fgets(str, SIZE, stdin);

    while(str[i] != '\0'){
        if(str[i] == '\n'){
            totalLines++;
            if(str[i+1] == '\n')
                blankLines++;
        }
        if(str[i] == '/' && str[i+1] == '/'){
            comments++;
            while(str[i] != '\n')
                i++;
        }
        if(str[i] == '/' && str[i+1] == '*'){
            comments++;
            while(!(str[i] == '*' && str[i+1] == '/'))
                i++;
        }
        i++;
    }
    printf("Total number of lines: %d\n", totalLines);
    printf("Total number of blank lines: %d\n", blankLines);
    printf("Total number of comment lines: %d\n", comments);

    return 0;
}
