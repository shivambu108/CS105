// #include <stdio.h>

// int main() {
//     int num1, num2, num3, largest;

//     printf("Enter three numbers: ");
//     scanf("%d %d %d", &num1, &num2, &num3);

//     if(num1 >= num2 && num1 >= num3)
//         largest = num1;
//     else if(num2 >= num1 && num2 >= num3)
//         largest = num2;
//     else
//         largest = num3;

//     printf("Largest number among %d, %d and %d is %d\n", num1, num2, num3, largest);

//     return 0;
// }


// #include <stdio.h>
// int main() {
//     int a[5],i;
//     for(i=0;i<5;++i)
//         printf("%d",a[i]);
//         return 0;
// }


// #include<stdio.h>
// #define big(a,b) a > b ? a : b
// #define swap(a,b) temp=a; a=b; b=temp;
// int main() {
//   int a=3,b=5,temp;
//   printf("%d %d %d",a,b,temp);

//   if((3+big(a,b)) > b){
//     swap(a,b);
//     }
//   printf("\n%d %d",a,b);
//   return 0;
// }

// #include<stdio.h>
// #define big(a,b) a > b ? a : b
// #define swap(a,b) temp=a; a=b; b=temp;
// int main() {
//   int a=3,b=5,temp;
//   if((3+big(a,b)) > b)
//      swap(a,b);
//   printf("%d %d",a,b);
//   return 0;
// }

// #include <stdio.h>

// void findCommon(int arr1[], int arr2[], int n1, int n2) {
//     for (int i = 0; i < n1; i++) {
//         for (int j = 0; j < n2; j++) {
//             if (arr1[i] == arr2[j]) {
//                 printf(" %d ", arr2[j]);
//                 break;
//             }
//         }
//     }
// }

// int main() {
//   int n1,n2 ,i;
//   printf("Enter the number of elements in the array1: ");
//   scanf("%d", &n1);
//   int arr1[n1];
//   printf("Enter the elements of the array: ");
//   for(i = 0; i < n1; i++) {
//         scanf("%d", &arr1[i]);
//   }
//   printf("Enter the number of elements in the array2 ");
//   scanf("%d", &n2);
//   int arr2[n2];
//   printf("Enter the elements of the array: ");
//   for(i = 0; i < n2; i++) {
//         scanf("%d", &arr2[i]);
//   }
  
//   findCommon(arr1, arr2, n1, n2);


//   return 0;


// }


// C Program to demonstrate scrunity of 
// 2 Common Array Elements Using Brute force
#include <stdio.h>

int main() {
    int n1, n2, i, j, flag, x, k = 0, result[100];
    printf("Enter the number of elements in the array1: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter the elements of the array: ");
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the number of elements in the array2: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter the elements of the array: ");
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("Common elements are: ");

    // To traverse in array1.
    for (i = 0; i < n1; i++) {
        // To traverse in array2.
        for (j = 0; j < n2; j++) {
            // To match elements of array1 with elements of array2.
            if (arr1[i] == arr2[j]) {
                flag = 0;
                // To traverse in result array.
                for (x = 0; x < k; x++) {
                    // Check whether found element is already present in result array or not.
                    if (result[x] == arr1[i]) {
                        flag++;
                    }
                }
                // If we found a new element which is common in both arrays then store it in result array and print it.
                if (flag == 0) {
                    result[k] = arr1[i];
                    printf("%d ", result[k]);
                    k++;
                }
            }
        }
    }
    return 0;
}
