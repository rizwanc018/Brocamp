#include <stdio.h>

int main() {
    // https://www.youtube.com/watch?v=vE08hH_c4oY&list=PLdo5W4Nhv31Yu1igxTE2x0aeShbKtVcCy&index=10
    int i,j,k,n = 5;

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for(k = 1; k <= 2 * i -1; k++){
            printf("*");
        }
        printf("\n");
    }
    int m = n-1;
    for( i = m; i >= 1; i--) {
        for( j = 0; j <= m-i; j++) {
            printf(" ");
        }
        for( k = 1; k <= 2*i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }

}
//     *
//    ***
//   *****
//  *******
// *********
//  *******
//   *****
//    ***
//     *