// //
// #include <stdio.h>
// int main() {
//     char str[100];
//     int i,count = 0;

//     printf("Enter a string: ");
//     scanf("%[^\n]s", str);
    
//     for(i=0;str[i]!='\0';i++) {
//         if(str[i] >= 'a' && str[i] <= 'z') {
//         count++;
//     }
//     }

//     printf("The input string is: %s\n", str);
//     printf("The count of smallcase letters in the string is: %d\n", count);

//     return 0;
// }

// //
#include <stdio.h>
int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        i++;
    }
    printf("The input string is: %s\n", str);

    return 0;
}
//
//c , c++ are platform dependent 
//