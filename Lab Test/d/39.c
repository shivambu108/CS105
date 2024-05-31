//39. Write a C program with a function to search a number within an array.
#include <stdio.h>

// Function to search for a number in an array
int search_in_array(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;  // return the index of the found element
        }
    }
    return -1;  // return -1 if the element is not found
}

int main() {
    int array[100], size, target, result;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &target);

    result = search_in_array(array, size, target);

    if (result != -1) {
        printf("Number %d is found at place %d\n", target, result+1);
    } else {
        printf("Number %d is not found in the array\n", target);
    }

    return 0;
}
