#include <stdio.h>

int main() {
    int i,j,n = 4;
    for(i = 1; i <= 2*n-1; i++) {
        for(j = 1; j <= 2*n-1; j++) {
            if(i == 1 || i == 2*n-1 || j == 1 || j == 2*n -1 || i == j || i+j == 2*n){
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}
// * * * * * * * 
// * *       * * 
// *   *   *   * 
// *     *     * 
// *   *   *   * 
// * *       * * 
// * * * * * * * 