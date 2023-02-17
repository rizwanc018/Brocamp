#include <stdio.h>

int main() {
    int i,j,k,c,n=7;
    for( i = 0; i < n; i++) {
        for( j = 1; j <= n - i; j++) {
            printf("  ");
        } for ( j = 0; j <= i; j++) {
            if( j == 0 || i == 0) {
                c = 1;
            } else {
                c = c * (i-j+1) / j;
            }
            printf("%4d",c);
        }
        printf("\n");
    }
}