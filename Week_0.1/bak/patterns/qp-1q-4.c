#include <stdio.h>

int main() {
    int i,j,k,n = 3;
    for( i = 1; i <= n; i++){
        for(j =1; j <= i; j++) {
            printf("*\n");
        }
        for(k = 1; k <= i*4; k++) {
            printf("* ");
        }
        printf("\n");
    }
}