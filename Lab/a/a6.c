/*
#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num % 2 == 0) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }

    return 0;
}
*/
#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    switch(num % 2) {
        case 0:
            printf("The number is even.\n");
            break;
        case 1:
            printf("The number is odd.\n");
            break;
    }

    return 0;
}
