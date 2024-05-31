// 2. Check whether a number given by the user is zero, positive, or negative.
   #include <stdio.h>

int main()
{
    int num3;
    printf("Enter a number: ");
    scanf("%d", &num3);
    if (num3 == 0)
    {
        printf("The number is zero.\n");
    }
    else if (num3 > 0)
    {
        printf("The number is positive.\n");
    }
    else
    {
        printf("The number is negative.\n");
    }
    return 0;
}