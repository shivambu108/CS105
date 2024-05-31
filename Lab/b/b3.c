#include <stdio.h>

int main() {
    int num, i;
    int binary[32];

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    if(num <= 0) {
        printf("Error! Enter a positive number.");
    } else {
        for(i = 0; num > 0; i++) {
            binary[i] = num % 2;
            num = num / 2;
        }
        printf("Binary of the given number= ");
        for(i = i - 1; i >= 0; i--) {
            printf("%d", binary[i]);
        }
    }

    return 0;
}
