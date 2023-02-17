#include <stdio.h>

int main() {
    int i,j,k,n = 3;

    printf("*\n");
    for( i = 1; i <= n; i++) {

        int strs = i == n ? i*4 -2 : i*4;

        for(j = 1; j <=  strs; j++) {
            printf("* ");
        }

        int lines = i%2 == 0? 1 : 2;
        for(k = 1; k <= lines; k++) {
            printf("\n*");
        }
        printf("\n");
    }
}
// *
// * * * * 
// *
// *
// * * * * * * * * 
// *
// * * * * * * * * * * 
// *
// *