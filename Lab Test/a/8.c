//8. Write a C program to implement linear search


#include <stdio.h>

int main() {
    int n, i, x,flag=0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &x);
    for (i = 0; i < n; i++) {
        if (arr[i] == x){printf("Element is present at index %d\n", i+1);
        flag=1 ;}
        if(flag==0) {printf("Element is not present in array\n");}    
    }               
    return 0;
}




// #include <stdio.h>

// int linearSearch(int arr[], int n, int x) {
//     int i;
//     for (i = 0; i < n; i++) {
//         if (arr[i] == x)
//             return i;
//     }
//     return -1;
// }

// int main() {
//     int n, i, x;
//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter the elements of the array: ");
//     for(i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     printf("Enter the element to search: ");
//     scanf("%d", &x);
//     int result = linearSearch(arr, n, x);
//     (result == -1) ? printf("Element is not present in array\n")
//                    : printf("Element is present at index %d\n", result);
//     return 0;
// }
