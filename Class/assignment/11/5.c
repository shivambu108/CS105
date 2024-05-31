//5. Write a C program with a function to search a number within an array.
#include <stdio.h>

int lnr_srch(int arr[], int size, int num) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == num) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[100], size, num;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array: ");
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to search: ");
    scanf("%d", &num);
    int result = lnr_srch(arr, size, num);
    if(result != -1) {
        printf("Number found at index: %d\n", result+1);
    } else {
        printf("Number not found in the array.\n");
    }
    return 0;
}
