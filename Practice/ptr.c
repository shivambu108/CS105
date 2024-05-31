// #include <stdio.h>
// int *fun( int p , int *q){
//     p=4;
//     *q=2;
//     return (q);
// }
// int main(){

//     int x=6, y=9, z=3;
//     z = *fun(x, &y);
//     printf("%d %d %d\n",x,y,z);
//     return 0;
// }

/*
#include<stdio.h>

int isPerfect(int num) {
    int sum = 0;
    for(int i = 1; i <= num/2; i++) {
        if(num % i == 0) {
            sum += i;
        }
    }
    if(sum == num) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int lower, upper;
    printf("Enter the lower limit of the range: ");
    scanf("%d", &lower);
    printf("Enter the upper limit of the range: ");
    scanf("%d", &upper);

    printf("Perfect numbers in the given range are: ");
    for(int i = lower; i <= upper; i++) {
        if(isPerfect(i)) {
            printf("%d ", i);
        }
    }
    return 0;
}

*/

/*
#include<stdio.h>

void reverseArray(int arr[], int start, int end) {
    while(start < end) {
        arr[start] = arr[start] + arr[end];
        arr[end] = arr[start] - arr[end];
        arr[start] = arr[start] - arr[end];
        start++;
        end--;
    }
}

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, n);

    reverseArray(arr, 0, n-1);

    printf("Reversed array: ");
    printArray(arr, n);

    return 0;
}

*/

/*
#include<stdio.h>

int main() {
    int num1, num2, gcd, remainder, a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    a = (num1 > num2) ? num1 : num2; // Determine the larger number
    b = (num1 > num2) ? num2 : num1; // Determine the smaller number

    remainder = a % b;

    while(remainder != 0) {
        a = b;
        b = remainder;
        remainder = a % b;
    }

    gcd = b;

    printf("The GCD of %d and %d is %d\n", num1, num2, gcd);

    return 0;
}

*/

// #include <stdio.h>
// int main() {
//     int a[] = {10,12,6,7,2}; // Initialize an array 'a' with five elements
//     int i,*p; // Declare an integer 'i' and a pointer '*p'
//     p=a+4; // Point 'p' to the address of the last element in the array 'a'
//     for(i=4; i>=0; i--) // Iterate from the end of the array to the beginning
//         printf("%d ", p[-i]); // Print each element in reverse order
//     return 0; // Indicate successful execution
// }

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[] = "Hello, World!";
//     printf("sizeof(str) = %lu\n", sizeof(str));
//     printf("strlen(str) = %lu\n", strlen(str));
//     return 0;
// }
#include <stdio.h>

int sum(int x, int y) {
    x = 5;
    return x + y;
}

int main() {
    int x = 2, y = 4, val;
    val = sum(x, y);
    printf("Sum = %d", val);
    return 0;
}
