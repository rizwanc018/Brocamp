//https://youtu.be/lsOOs5J8ycw?t=2095

#include <stdio.h>

int main() {
    int i, j, k, n = 5;
    int space, strs;
    for ( i = 1; i<= 2 * n; i++) {
        // space = i <= n ? n - i : i + 1 - 6;
        strs = i > n ? 2 * n - i : i;
        space = n -strs;
        for(j = 1; j <= space; j++) {
            printf(" ");
        }
        for(k = 1; k <= strs; k++) {
            printf("* ");
        }
        printf("\n");
    }
}

//     * 
//    * * 
//   * * * 
//  * * * * 
// * * * * * 
//  * * * * 
//   * * * 
//    * * 
//     * 