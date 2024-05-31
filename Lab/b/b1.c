#include <stdio.h>

void bubbleSort(int array[], int size) {
  for (int step = 0; step < size - 1; ++step) {
    for (int i = 0; i< size - step - 1; ++i) {
      if (array[i] > array[i + 1]) {
        int temp = array[i];
        array[i] = array[i+1];
        array[i+1] = temp;
      }
    }
  }
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

int main() {
  int n;
  
  printf("Enter the number of elements: ");
  scanf("%d", &n);
  
  int arr[n];
  printf("Enter %d integers: ", n);
  for(int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  
  printf("Original array: \n");
  printArray(arr, n);
  
  bubbleSort(arr, n);
  
  // Print the sorted array
  printf("Sorted array: \n");
  printArray(arr, n);
  
  return 0;
}
