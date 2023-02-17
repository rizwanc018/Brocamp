#include <stdio.h>

int main() {
    int i,j,k,l,n=3;

    for( i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            for(k = 1; k <= i *3; k++) {
                printf("* ");
            }
            if(j <= i -1) {
            printf("\n");
            }
        }
        if(i < n) {
            for(l = 1; l <= n; l++) {
                printf("\n*");
            }
        }
        printf("\n");
    }
}
// * * * 
// *
// *
// *
// * * * * * * 
// * * * * * * 
// *
// *
// *
// * * * * * * * * * 
// * * * * * * * * * 
// * * * * * * * * * 