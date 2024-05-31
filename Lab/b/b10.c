/*This program checks if the input number is non-negative and if the base is within 
the valid range. If either of these conditions is not met, it will print an error message 
and terminate. Otherwise, it will proceed with the conversion as before. Please note that 
this program uses recursion for the conversion process. For bases greater than 10, it uses 
characters from ‘a’ to ‘z’ to represent digits from 10 to 35, and characters from ‘A’ to ‘Z’
 to represent digits from 36 to 61. This allows for conversion into bases up to 62.*/
#include <stdio.h>

void convert_to_base(int num, int base) {
    int remainder;
    if(num == 0) {
        return;
    }
    else {
        convert_to_base(num / base, base);
        remainder = num % base;
        if(remainder < 10)
            printf("%d", remainder);
        else if(remainder < 36)
            printf("%c", remainder + 87); // 'a' to 'z' in ASCII
        else
            printf("%c", remainder + 29); // 'A' to 'Z' in ASCII
    }
}

int main() {
    int num, base;
    printf("Enter a non-negative decimal number: ");
    scanf("%d", &num);
    if(num < 0) {
        printf("The number must be non-negative.\n");
        return 0;
    }
    printf("Enter the base (between 2 and 62): ");
    scanf("%d", &base);
    if(base < 2 || base > 62) {
        printf("Enter a valid base between 2 and 62.\n");
        return 0;
    }
    printf("The number in base %d is: ", base);
    convert_to_base(num, base);
    return 0;
}
