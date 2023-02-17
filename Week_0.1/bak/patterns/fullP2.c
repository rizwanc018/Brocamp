#include <stdio.h>

int main() {
    // https://www.youtube.com/watch?v=PYBzYPdtLM8&list=PLdo5W4Nhv31Yu1igxTE2x0aeShbKtVcCy&index=8

    // int i,j,k,n= 5;
    // for( i = 1; i <= n; i++) {
    //     for(j = 1; j <= 2 * n - 1; j++) {
    //         if (j >= n - (i -1) && j <= n + (i -1)) {
    //             printf("* ");
    //         } else {
    //             printf("  ");
    //         }
    //     }
    //     printf("\n");
    // }
    
    
    int i,j,k,n=5;

    for (i = 1; i <= n; i++) {
        for(j = 1; j <= n-i; j++) {
            printf("  ");
        }
        for(k = 1; k <= 2*i -1; k++) {
            printf("* ");
        }
        printf("\n");
    }

}

//         * 
//       * * * 
//     * * * * * 
//   * * * * * * * 
// * * * * * * * * * 