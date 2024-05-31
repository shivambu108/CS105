#include<stdio.h>
void min_con(double a[], int n);
int main(){
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    double a[n];
    for (i=0;i<n;i++){
        scanf("%lf", &a[i]);
    }
    min_con(a, n);
    return 0;
}
void min_con(double a[], int n){
    int i, min_index = 0;
    for (i=0;i<n;i++){
        if(a[i]<a[min_index]){
            min_index = i;
        }
    }
    printf("The min element is = %lf", a[min_index]);
}