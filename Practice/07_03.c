#include<stdio.h>
void max_con(double a[], int n);
int main(){
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    double a[n];
    for (i=0;i<n;i++){
        scanf("%lf", &a[i]);
    }
    max_con(a, n);
    return 0;
}
void max_con(double a[], int n){
    int i, max_index = 0;
    for (i=0;i<n;i++){
        if(a[i]>a[max_index]){
            max_index = i;
        }
    }
    printf("The max element is = %lf", a[max_index]);
}
















