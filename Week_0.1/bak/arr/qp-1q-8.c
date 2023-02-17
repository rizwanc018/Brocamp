// Sort array in ascending oreder and remove next two array6 element after occurence of prime number

#include <stdio.h>
#include <stdbool.h>

int main()
{
    // int arr[] = {1, 4, 3, 17, 21, 13, 27, 77, 23};
    int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int len = sizeof(arr) / sizeof(arr[0]);

    int i, j;
    for (i = 0; i < len; i++)
    {
        for (j = i + 1; j < len; j++)
        {
            if (arr[i] > arr[j])
            {
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }
    }

    bool isPrime;
    for (i = 0; i < len; i++)
    {
        isPrime = true;
        if (arr[i] <= 1)
        {
            isPrime = false;
        }
        else
        {

            for (j = 2; j <= arr[i]/2; j++)
            {
                if (arr[i] % j == 0)
                {
                    isPrime = false;
                    break;
                }
            }
        }
        if (isPrime)
        {
            printf("%d, ", arr[i]);
            i += 2;
        }
        else
        {
            printf("%d, ", arr[i]);
        }
    }

    // for (i = 0; i < len; i++)
    // {
    //     printf("%d, ", arr[i]);
    // }
}