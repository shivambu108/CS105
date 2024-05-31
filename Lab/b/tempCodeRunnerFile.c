#include <stdio.h>

void print_binary(int n)
{
    // Base case: if n is zero, return
    if (n == 0)
        return;
    
    // Recursive case: divide n by 2 and print the remainder
    print_binary(n / 2);
    printf("%d", n % 2);
}

int main()
{
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    
    // Call the recursive function to print the binary equivalent
    printf("The binary equivalent is: ");
    print_binary(n);
    printf("\n");
    
    return 0;
}
