// find largest number and its factorial

#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int len = sizeof(arr) / sizeof(arr[0]);

    int max = arr[0];

    int i;

    for (i = 0; i < len; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    int fact = 1;

    for( i = 1; i <= max; i++) {
        fact *= i;
    }

    printf("%d\n", fact);
 }