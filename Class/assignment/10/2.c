//2. Write a C program to find highest frequency character in a string.
#include <stdio.h>
#define SIZE 255 
int main(){
    char str[100];
    int freq[SIZE];
    int i = 0, max;
    int ascii;

    printf("Enter any string: ");
    scanf("%[^\n]s", str);

    for(i=0; i<SIZE; i++){
        freq[i] = 0;
    }

    i=0;
    while(str[i] != '\0'){
        ascii = (int)str[i];
        freq[ascii] += 1;

        i++;
    }
    max = 0;
    for(i=0; i<SIZE; i++){
        if(freq[i] > freq[max])
            max = i;
    }
    for(i=0; i<SIZE; i++){
        if(freq[i] == freq[max])
         printf("Highest frequency character is '%c' = %d times.\n", i, freq[i]);
    }

    return 0;
}
