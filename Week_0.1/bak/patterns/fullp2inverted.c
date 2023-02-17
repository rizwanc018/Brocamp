#include <stdio.h>

int main() {
    //  https://www.youtube.com/watch?v=F9VTF73SObM&list=PLdo5W4Nhv31Yu1igxTE2x0aeShbKtVcCy&index=9
    int i,j,k,n =5;

    for(i = n; i > 0; i--) {
        for (j = 0; j< n -i; j++) {
            printf("  ");
        }
        for (k = 0; k < 2 * i -1; k++) {
            printf("* ");
        }
        printf("\n");
    }
}

// * * * * * * * * * 
//   * * * * * * * 
//     * * * * * 
//       * * * 
//         * 