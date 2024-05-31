//5. Write a C program to read strings and sort them alphabetically.
#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
    char str[MAX][MAX], temp[MAX];
    int n;

    printf("Enter the number of strings: ");
    scanf("%d", &n);

    printf("Enter the strings: \n");
    for(int i=0; i<n; i++) {
    scanf(" %[^\n]s", str[i]);  
    }

    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if(strcmp(str[i], str[j]) > 0) {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }

    printf("Strings in sorted order: \n");
    for(int i=0; i<n; i++) {
        printf("%s\n", str[i]);
    }

    return 0;
}
