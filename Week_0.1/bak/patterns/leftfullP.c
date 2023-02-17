#include <stdio.h>

// int main() {
//     int i,j,k,n = 5;
//     for(i = 0; i < n; i++) {
//         for(j = 0; j <= i; j++) {
//             printf("*");
//         }
//         printf("\n");
//     }
//     int m = n -1;
//     for(i = m; i > 0; i--) {
//         for(j = 0; j < i; j++) {
//             printf("*");
//         }
//         printf("\n");
//     }
// }

// https://youtu.be/lsOOs5J8ycw?t=1920
// int main() {
//     int i,j, n = 5;

//     for(i = 1; i < 2*n; i++) {
//         int stars = i > n ? 2 * n -i: i;
//         for(j = 1; j <= stars; j++) {
//             printf("* ");
//         }
//         printf("\n");
//     }
// }

int main() {
    int i,j,n = 5;
    for(i = 1; i < 2*n-1; i++) {
        int strs = i > n ? 2 * n - i : i;
        for(j = 1; j < strs; j++) {
            printf("* ");
        }
        printf("\n");
    }
}