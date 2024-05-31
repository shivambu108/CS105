//4. Write a C program reads a name and prints the name in an abbreviated fashion, e.g., Ram Dutt as R.D.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100], initials[50];
    int i, j = 0;

    printf("Enter your name: ");
    scanf( "%[^\n]s", name);
    fflush(stdin);
    initials[j++] = name[0];
    initials[j++] = '.';
    int len =strlen(name);
    for(i = 0; i < len -1 ; i++) {
        if(isspace(name[i]) && name[i+1] != '\0') {
            initials[j++] = name[i+1];
            initials[j++] = '.';
        }
    }
    initials[j] = '\0';

    printf("Abbreviated name: %s\n", initials);

    return 0;
}
