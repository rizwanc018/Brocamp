#include <stdio.h>

int main() {
    int i, j, k, n = 3;

    for(i = 1; i <= n; i++) {
        for(j = 1; j  <= i+2; j++) {
            for( k = 1; k <= j; k++ ) {
                printf("X");
            }
            printf("\n");
        }
    }
}