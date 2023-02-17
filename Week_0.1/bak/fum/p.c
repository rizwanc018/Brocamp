#include <stdio.h>

int main()
{

    int i, j, k,m, n = 3, ctr = 1;

    for (i = 1; i <= n; i++)
    {
        for(j = 1 ; j <= i; j++) {
            for( k = 1; k <= 2; k++) {
                printf("%d",i);
            }
            printf("\n");
        }

        for(m = 1; m <= i +2; m++) {
            printf("%d",ctr);
            ctr++;
        }
        printf("\n");
    }
}