// Write a program to find the frequency of each element in the array#

#include <stdio.h>

int main()
{
    int a[] = {3, 3, 2, 1, 5, 6, 6, 6, 7,7};
    int len = sizeof(a) / sizeof(a[0]);
    int i, j, ctr;

    for (i = 0; i < len - 1; i++)
    {
        ctr = 1;
        if (a[i] != -1)
        {

            for (j = 1 + i; j < len; j++)
            {
                if (i != j && a[i] == a[j])
                {
                    ctr++;
                    a[j] = -1;
                }
            }
            printf("%d occured %d times\n", a[i], ctr);
        }
    }
}