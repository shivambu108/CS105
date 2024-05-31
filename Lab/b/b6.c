#include <stdio.h>

int main() {
    int arr[100], i, j, n, count = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter elements of array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count = 1;
                break;
            }
        }
        if(count == 1) {
            break;
        }
    }

    if(count == 1) {
        printf("Duplicate elements found in the array.");
    } else {
        printf("No duplicate elements found in the array.");
    }

    return 0;
}
