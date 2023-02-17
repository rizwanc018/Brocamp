#include <stdio.h>

int main()
{
    int arr[] = {22, 22, 33, 45, 45, 66, 45, 66, 77};
    int len = sizeof(arr) / sizeof(arr[0]);
    int i;

    int max = arr[0];
    int min = arr[0];

    for (i = 1; i < len; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("max : %d\n min : %d\n", max, min);
}