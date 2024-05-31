// 7. Write a C program store the list of integer numbers in an array. 
// Arrange the numbers stored in an array in such a way that the array will 
// have the odd numbers followed by the even numbers. 



#include <stdio.h>

void arrangeArray(int arr[], int size) {
    int Index = 0;
    
    // Create a temporary array to store the arranged numbers
    int tempArr[size];
    
    // Copy odd numbers to tempArr
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            tempArr[Index] = arr[i];
            Index++;
        }
    }
    
    // Copy even numbers to tempArr
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            tempArr[Index] = arr[i];
            Index++;
        }
    }
    
    // Copy elements from tempArr back to the original array
    for (int i = 0; i < size; i++) {
        arr[i] = tempArr[i];
    }
}

int main() {
    int size;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Arrange the array
    arrangeArray(arr, size);
    
    printf("The arranged array with odd numbers followed by even numbers is:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}



// #include <stdio.h>
// int main() {
//     int arr[100], n, i, j, temp;

//     printf("Enter the number of elements to be stored in the array: ");
//     scanf("%d", &n);

//     printf("Enter elements in array: ");
//     for(i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     for(i = 0; i < n; i++) {
//         for(j = i + 1; j < n; j++) {
//             if((arr[j] % 2 != 0) && (arr[i] % 2 == 0)) {
//                 temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }

//     printf("Array elements after rearranging: ");
//     for(i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }
