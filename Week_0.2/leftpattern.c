#include <stdio.h>

// int main()
// {
//     int i, j, n = 4;
//     int flag = 1;
//     for (i = 1; i <= 2 * n - 1; i++)
//     {
//         int strs = i > n ? 2 * n - i : i;
//         for (j = 1; j <= strs; j++)
//         {
//             printf("%d", strs + 2);
//         }
//         printf("\n");
//         if (i == n)
//         {
//             for (j = 1; j <= strs; j++)
//             {
//                 printf("%d", strs + 2);
//             }
//             printf("\n");
//         }
//     }
// }

// 3
// 44
// 555
// 6666
// 6666
// 555
// 44
// 3

// int main() {
//     int i, j, n=4;
//     for( i = 1; i <= 2*n-1; i++) {
//         int num = i > n ? 2*n-i : i;
//         for(j = 1; j <= num; j++){
//             printf("%d", i);
//             if(j < num) {printf("*");}
//         }
//         printf("\n");
//         if(i == n) {
//             for(j = 1; j <= num; j++){
//                 printf("%d", i);
//                 if(j < num) {printf("*");}

//             }
//             printf("\n");
//         }
//     }
// }

// 1
// 2*2
// 3*3*3
// 4*4*4*4
// 4*4*4*4
// 5*5*5
// 6*6
// 7

int main()
{
    int i, j, n = 4, cnt = 1, dec = 1;

    for (i = 1; i <= 2 * n - 1; i++)
    {
        int num = i > n ? 2 * n - i : i;
        // if (i == n)
        // {
        //     int tmp = cnt;
        //     for (j = 1; j <= num; j++)
        //     {
        //         printf("%d", tmp);
        //         tmp++;
        //         if (j < num)
        //         {
        //             printf("*");
        //         }
        //     }
        //     printf("\n");
        // }
        if(i > n) {
        cnt = i - (cnt- (n - dec));
        dec++;
        }
        for (j = 1; j <= num; j++)
        {
            printf("%d", cnt);
            cnt++;
            if (j < num)
            {
                printf("*");
            }
        }
        printf("\n");
        if (i == n)
        {
            cnt = cnt -n;
            for (j = 1; j <= num; j++)
            {
                printf("%d", cnt);
                cnt++;
                if (j < num)
                {
                    printf("*");
                }
            }
            printf("\n");
        }
    }
}