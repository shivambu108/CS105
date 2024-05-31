
#include <stdio.h>

void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) {
    if (n == 1) {
        printf("\n Move disk 1 from rod %c to rod %c", from_rod, to_rod);
        return;
    }
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    printf("\n Move disk %d from rod %c to rod %c", n, from_rod, to_rod);
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}

int main() {
    int n ;
    printf("enter the number of disks: ");
    scanf("%d",&n);
    towerOfHanoi(n, 'A', 'C', 'B');  // A, B and C are names of rods
    return 0;
}

/*
#include <stdio.h>

int addNumbers(int n) {
    if(n != 0)
        return n + addNumbers(n-1);
    else
        return n;
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Sum = %d", addNumbers(num));
    return 0;
}

*/

/*
#include <stdio.h>

int findsum(int n) {
    //
    //for loop
    //
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Sum = %d", findsum(num));
    return 0;
*/

/*

#include <stdio.h>

int addNumbers(int n) {
    if(n > 0)
        return n + addNumbers(n-1);
    else if (n==0)
        return n;
    else {
        printf("Error! Enter a positive number.\n");
        return -1; // Return an error code
    }
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    int sum = addNumbers(num);
    if(sum != -1) // If no error
        printf("Sum = %d", sum);
    return 0;
}

*/
/*
#include <stdio.h>

int addArrayElements(int arr[], int n) {
    if(n <= 0)
        return 0;
    else
        return (addArrayElements(arr, n-1) + arr[n-1]);
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Sum = %d", addArrayElements(arr, n));
    return 0;
}

*/