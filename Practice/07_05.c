#include<stdio.h>
int freq_con(char a[], char c, int n);
int main(){
    int n, i;
    printf("Enter the length of your string: ");
    scanf("%d", &n);
    char a[n+1];
    printf("Enter your string: ");
    scanf("%s", a);
    char c;
    printf("Enter the character to find frequency: ");
    scanf(" %c", &c); // note the space before %c to consume any newline character before reading c
    int result = freq_con(a, c, n);
    printf("The frequency of element %c is = %d", c, result);
    return 0;
}
int freq_con(char a[], char c, int n){
    int i, freq = 0;
    for(i=0; i<n; i++){
        if (c==a[i]){
            freq++;
        }
    }
    return freq;
}
