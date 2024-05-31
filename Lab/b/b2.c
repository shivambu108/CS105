#include <stdio.h>

int main() {
    int a[100], n, key, i, flag=0 ;

    printf("Enter the number of elements : ");
    scanf("%d", &n);

    printf("Enter %d integer(s) : ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter key element\n");
    scanf("%d", &key);
    for (i = 0; i < n; i++) {
        if (a[i] == key) { 
            printf("key found at location : %d.\n", key, i+1);
            flag = 1;
        }
    }

    if (flag == 0)
        printf("Key not found\n" );

    return 0;
}
