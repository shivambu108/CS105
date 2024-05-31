#include <stdio.h>

void print_binary(int n)
{
    if (n == 0)
        return;
    
    print_binary(n / 2);
    printf("%d", n % 2);
}

int main()
{
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    
    printf("The binary equivalent is: ");
    print_binary(n);
    printf("\n");
    
    return 0;
}
