// #include <stdio.h>
// #include<string.h>
// int q=0;
// int deter(int arr[q][q],int a);
// int main(){
//     printf("How many rows or column you want : ");
//     scanf("%d",&q);
//     int arr[q][q];
//     for(int i=0;i<q;i++){
//         for(int j=0;j<q;j++){
//             printf("Tell element (%d,%d) : ",i,j);
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     printf("The matrix is given by : \n");
//     for(int i=0;i<q;i++){
//         for(int j=0;j<q;j++){
//             printf(" %d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     int d=deter(arr,q);
//     printf("The determinant is given by : %d",d);
//     return 0;
// }
// int deter(int arr[q][q],int a){
//     int m,n,s=1,det,b[q][q];
//     if(a==1){
//         return (arr[0][0]);
//     }else{
//         det=0;
//         for(int c=0;c<a;c++){
//             m=0,n=0;
//             for(int i=0;i<=a-1;i++){
//                 for(int j=0;j<a;j++){
//                     b[i][j]=0;
//                     if(i!=0&&j!=c){
//                         b[m][n]=arr[i][j];
//                         if(n<(a-2)){
//                             n++;
//                         }else{
//                             n=0;
//                             m++;
//                         }
//                     }
//                 }
//             }
//             det=det+s*(arr[0][c]*deter(b,a-1));
//             s=(-1)*s;
//         }
//     }
//     return(det);
// }

// What is the output?
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

// #include<stdlib.h>
// #include <stdio.h>
// int main()
// {   int *ptr;
//     int n;
//     printf("enter the number of the array = ");
//     scanf("%d",&n);
//     ptr=(int*)malloc(n*sizeof(int));
//     for(int i=0;i<n;i++){
//         scanf("%d",(ptr+i));
//         }
//         int *ptr1;
//         printf("enter the updated size of array = ");
//         scanf("%d",&n);
//         ptr1=(int*)realloc(ptr,n*sizeof(int));

//         for(int i=0;i<n;i++){
//         printf("%d",*(ptr+i));
//         }
//         printf("ptr adress= %p ptr1 adress=%p",ptr,ptr1);

//         free(ptr1);
        
    
// return 0;
// }
#include <stdio.h>

void rotate(int arr[], int n, int d, char dir) {
    if (dir == 'L') {
        for (int i = 0; i < d; i++) {
            int temp = arr[0];
            int j;
            for (j = 0; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            arr[j] = temp;
        }
    } else if (dir == 'R') {
        for (int i = 0; i < d; i++) {
            int temp = arr[n - 1];
            int j;
            for (j = n - 1; j > 0; j--) {
                arr[j] = arr[j - 1];
            }
            arr[0] = temp;
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    printArray(arr, n);

    int d;
    char dir;
    printf("Enter the number of positions to rotate the array: ");
    scanf("%d", &d);
    printf("Enter the direction of rotation (L for left, R for right): ");
    scanf(" %c", &dir);

    rotate(arr, n, d, dir);

    printf("Rotated array:\n");
    printArray(arr, n);

    return 0;
}
