// Reverse array and remove multiple of 3 from it
#include <stdio.h>

int main()
{
    int i;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    int len = sizeof(arr) / sizeof(arr[0]);
    int newArr[len];
    int nI = 0;
    // int tmp;
    // int newLen = sizeof(newArr) / sizeof(newArr[0]);
    // for (i = 0; i < len / 2; i++)
    // {
    //     if(arr[i] % 3 == 0) {
    //         i++;
    //     }
    //     arr[i] = arr[i] + arr[len - i - 1];
    //     arr[len - i - 1] = arr[i] - arr[len - i - 1];
    //     arr[i] = arr[i] - arr[len - i - 1];
    // }
    for(i = 0; i < len; i++) {
        // if(arr[i] % 3 == 0) {
        //     // continue;
        //     // printf("%d", arr[i]);
        // }
        newArr[len - nI - 1] = arr[i];
        nI++;
    }

    for (i = 0; i < len; i++)
    {
        printf("%d, ", newArr[i]);
    }
}