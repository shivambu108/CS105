 // 3. Check whether a number given by the user is odd or even.
 #include <stdio.h>

int main()
{   int num4;
    printf("Enter a number: ");
    scanf("%d", &num4);
    if (num4 % 2 == 0)
    {
        printf("The number is even.\n");
    }
    else
    {
        printf("The number is odd.\n");
    }
        return 0;
}