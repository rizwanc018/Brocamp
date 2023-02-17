#include <stdio.h>

int main()
{
    int i, j, c, n = 5, count = 1;

    // c = 64;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {   
            c = count % 2 == 0 ? 64 : 96;
            c += count;
        //   c=+;
            printf("%c  ", c);
            count++;
        }
    printf("\n");
    }
}