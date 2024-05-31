//42. Write a C program with a function to sort an array of integers in ascending order.

#include <stdio.h>

void bubbleSortAdaptive(int arr[], int n) {
    int i, j, temp;
    int swapped;

    for (i = 0; i < n-1; i++) {
        swapped = 0;
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = 1;
            }
        }

        // If no two elements were swapped by inner loop, then break
        if (swapped == 0)
            break;
    }
}

void printArray(int arr[], int size) {
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    bubbleSortAdaptive(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}
