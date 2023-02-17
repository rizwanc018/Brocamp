#include <stdio.h>

int main()
{
    int arr[] = {99, 4, 5, 8};
    int i, l = 4;
    int pos;

    int min = arr[0];

    for (i = 0; i < l; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            // printf("%d, ", arr[i]);
            pos = i;
        }
    }

    printf("%d, %d\n", min, pos);

    // int tmpL = l;
    l--;
    for (i = pos; i < l; i++)
    {
        arr[i] = arr[i + 1];
    }

    for(i = 0; i < l; i++){
        printf("%d, ", arr[i]);
    }
}