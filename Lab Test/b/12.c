//12. Write a C program to check element uniqueness (if any duplicate element is present in the list).

#include <stdio.h>

void findDuplicates(int arr[], int len) {
    int i, max = arr[0], flag = 0;
    for(i = 1; i < len; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    int freq[max + 1];
    for(i = 0; i <= max; i++) {
        freq[i] = 0;
    }

    for(i = 0; i < len; i++) {
        freq[arr[i]]++;
    }

    printf("Duplicate elements are:\n");
    for(i = 0; i <= max; i++) {
        if(freq[i] > 1) {
            printf("%d appears %d times\n", i, freq[i]);
            flag = 1;
        }
    }

    if(flag == 0) {
        printf("No duplicate elements found.\n");
    }
}

int main() {
    int len, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &len);

    int arr[len];

    printf("Enter the elements of the array: ");
    for(i = 0; i < len; i++) {
        scanf("%d", &arr[i]);
    }

    findDuplicates(arr, len);

    return 0;
}


// #include <stdio.h>

// int main() {
//     int arr[100], i, j, n, count = 0;

//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &n);

//     printf("Enter elements of array: ");
//     for(i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     for(i = 0; i < n; i++) {
//         for(j = i + 1; j < n; j++) {
//             if(arr[i] == arr[j]) {
//                 count = 1;
//                 break;
//             }
//         }
//         if(count == 1) {
//             break;
//         }
//     }

//     if(count == 1) {
//         printf("Duplicate elements found in the array.");
//     } else {
//         printf("No duplicate elements found in the array.");
//     }

//     return 0;
// }
