#include <stdio.h>

int main() {
    int i,j,k, n = 4;

    for(i = 1; i <= n; i++) {
        printf("*\n");
        for( j = 1; j <= i; j++ ) {
            for(k = 1; k <= 3; k++) {
                printf("* ");
            }
            printf("\n");
        }
    }
}