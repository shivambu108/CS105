#include <stdio.h>
#define SIZE 10

int main()
{
    int arr[SIZE];
    int i, max, min, sum = 0;
    double avg;

    printf("Enter %d elements in the array: ", SIZE);
    for(i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]);
        if(i == 0) {
            max = min = arr[i]; // Initialize max and min with the first element
        }
        else {
            if(arr[i] > max) {
                max = arr[i];
            }
            if(arr[i] < min) {
                min = arr[i];
            }
        }
        sum += arr[i];
    }

    avg = (double)sum / SIZE;

    printf("The maximum value is %d\n", max);
    printf("The minimum value is %d\n", min);
    printf("The average value is %.2f\n", avg);

    return 0;
}
