// #include <stdio.h>

// int main() {
//     int i, j, n = 5;
//     int on = n;
//     n = 2 * n -1;
//         for(i = 1; i <= n; i++) {
//         for( j = 1; j<= n; j++) {
//             int strs = i <= on ? i : 2*on - i;
//             if( j <= strs || j > n - strs) {
//                 printf("* ");
//             } else {
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
// }

#include <stdio.h>

int main() {
    int i, j, n =4;
    int ogN = n;
    n = n*2 -1;

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n; j++) {
            int strs = i <= ogN ? i : 2*ogN - i;
            if(j <= strs || j > n - strs) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}