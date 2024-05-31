// 9. Write a C program to implement binary search


#include <stdio.h>

int binarySearch(int arr[], int l, int r, int x) {
    while (l <= r) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            r = mid - 1;

        else
            l = mid + 1;
    }

    return -1;
}

int main() {
    int n, i, x;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array in ascending order: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &x);
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1) ? printf("Element is not present in array\n")
                   : printf("Element is present at index %d\n", result);
    return 0;
}


// #include <stdio.h>

// int binarySearch(int arr[], int l, int r, int x) {
//     if (r >= l) {
//         int mid = l + (r - l) / 2;

//         // If the element is present at the middle itself
//         if (arr[mid] == x)
//             return mid;

//         // If element is smaller than mid, then it can only be present in left subarray
//         if (arr[mid] > x)
//             return binarySearch(arr, l, mid - 1, x);

//         // Else the element can only be present in right subarray
//         return binarySearch(arr, mid + 1, r, x);
//     }

//     // We reach here when element is not present in array
//     return -1;
// }

// int main() {
//     int n, i, x;
//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter the elements of the array in ascending order: ");
//     for(i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     printf("Enter the element to search: ");
//     scanf("%d", &x);
//     int result = binarySearch(arr, 0, n - 1, x);
//     (result == -1) ? printf("Element is not present in array\n")
//                    : printf("Element is present at index %d\n", result);
//     return 0;
// }
