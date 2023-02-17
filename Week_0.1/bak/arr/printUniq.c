#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 2, 3, 5, 5, 6, 8, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    int ctr;

    for (int i = 0; i < len; i++)
    {
        ctr = 0;
        for (int j = 0; j < len; j++)
        {
            if (i != j)
            {
                if (arr[i] == arr[j])
                {
                    ctr++;
                }
            }
        }
        if (ctr == 0)
        {
            printf("%d ", arr[i]);
        }
    }
}