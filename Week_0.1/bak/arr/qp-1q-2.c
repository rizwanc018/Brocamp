// write progrm to remove prime number and even number and replace by 1 in an array

#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23};
    int len = sizeof(arr) / sizeof(arr[0]);
    int i, j, n;

    for(i = 0; i< len; i++) {
        n = arr[i];
        int prime = 1;

        for (j = 2; j < n; j++) {
            if(n % j == 0) {
                prime = 0;
                break;
            }

        }

        if (prime == 1 || n % 2 == 0) {
            arr[i] = 1;
        }
    }

    for(i = 0; i< len; i++) {
        printf("%d, ", arr[i]);    
    }
}