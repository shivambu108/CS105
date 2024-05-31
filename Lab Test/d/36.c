//36. Write a C program to find highest frequency character in a string.
#include <stdio.h>
#define SIZE 255 

int main(){
    char str[100];
    int freq[SIZE] = {0};
    int i = 0, max_freq = 0;
    int ascii;

    printf("Enter any string: ");
    scanf("%[^\n]s", str);

    while(str[i] != '\0'){
        ascii = (int)str[i];
        freq[ascii] += 1;
        if(freq[ascii] > max_freq)
            max_freq = freq[ascii];
        i++;
    }

    printf("Highest frequency character(s): ");
    for(i=0; i<SIZE; i++){
        if(freq[i] == max_freq)
            printf("'%c' = %d times, ", i, freq[i]);
    }
    printf("\b\b \n");

    return 0;
}
