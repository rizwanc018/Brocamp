#include <stdio.h>

int main() {
    int i,j,k, n = 5;
    for( i = 1; i <= n; i++) {
        for(j = 1; j <= (n+1-i)*2; j++) {
            printf("* ");
        }
        for(k = 1; k <= i; k++) {
            printf("\n*");
        }
        printf("\n");
    }
}