#include <stdio.h>

int main()
{
    // int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23};
    int arr[] = {1,2,3,4,5,4,6,7,8};
    int len = sizeof(arr) / sizeof(arr[0]);

    int i,j,k,sum = 0;

    for( i = 0; i < len; i++) {
        sum += arr[i];
    }

    if(sum > 100) {
        for(i = 0; i < len; i++) {
            if(arr[i] % 2 == 0) {
                for(k = i; k < len; k++) {
                    arr[k] = arr[k+1];
                }
                len--;
                i--;
            }
        }
    } else if (sum < 100) {
                for(i = 0; i < len; i++) {
            if(arr[i] % 2 != 0) {
                for(k = i; k < len; k++) {
                    arr[k] = arr[k+1];
                }
                len--;
                i--;
            }
        }
    }

    for( i = 0; i < len; i++) {
        printf("%d, ", arr[i]);
    }
}