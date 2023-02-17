// rverse array, find sum of array if sum is larger than 100 remove largest element
#include <stdio.h>

int main()
{

    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int len = sizeof(arr) / sizeof(arr[0]);
    int tmp, i;
    int sum = 0;
    int max = arr[0];

    for (i = 0; i < len; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        sum += arr[i];
    }

    if (sum > 100)
    {
        for (i = len - 1; i >= 0; i--)
        {
            if (arr[i] == max)
            {
                i--;
            }
            printf("%d, ", arr[i]);
        }
    }
    else
    {
        for (i = len - 1; i >= 0; i--)
        {
            printf("%d, ", arr[i]);
        }
    }

}
