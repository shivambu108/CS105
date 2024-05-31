//8.C program to check if a given sub-string is present in a string.
#include <stdio.h>

int main() {
    char string[100], substring[50];
    int i, j, flag;

    printf("Enter a string: ");
    scanf("%[^\n]s", string);
    getchar();

    printf("Enter a substring to search: ");
    scanf("%[^\n]s", substring);

    for(i = 0; string[i] != '\0'; i++) {
        if(string[i] == substring[0]) {
            flag = 1;
            for(j = 0; substring[j] != '\0'; j++) {
                if(string[i + j] != substring[j]) {
                    flag = 0;
                    break;
                }
            }
            if(flag == 1) {
                break;
            }
        }
    }

    if(flag) {
        printf("The substring '%s' is present in the string '%s'.\n", substring, string);
    } else {
        printf("The substring '%s' is not present in the string '%s'.\n", substring, string);
    }

    return 0;
}
