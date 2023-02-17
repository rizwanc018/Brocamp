#include <stdio.h>

int main() {
    int i,j,k,l,m,n = 3;

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            for(k = 1; k <= 2; k++) {
                printf("X");
            }
            printf("\n");
        }
        for(l = 1; l <= i; l++) {
            printf("_");
        }
        for(m = 1; m <= 2 * i; m++) {
            printf("X");
        }
        printf("\n");
    }
}