// find prime number and delete it

#include <stdio.h>

int main()
{
    int a[] = {3, 4, 6, 8, 9};
    int i, j, k, len = sizeof(a) / sizeof(a[0]);

    for (i = 0; i < len; i++)
    {
        int prime = 1;

        if (a[i] <= 1)
        {
            prime = 0;
        }
        else
        {
            for (j = 2; j < a[i]; j++)
            {
                if (a[i] % j == 0)
                {
                    prime = 0;
                    break;
                }
            }
        }

        if (prime == 1)
        {

            for (k = i; k < len; k++)
            {
                a[k] = a[k + 1];
            }
            len--;
            i--;
        }
    }

    for (i = 0; i < len; i++)
    {
        printf("%d, ", a[i]);
    }
}