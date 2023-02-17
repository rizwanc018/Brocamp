#include <stdio.h>

int main() {
    int i,j,k,l, n = 3;

    // printf("*\n");
    for(i = 1; i<= n; i++) {
        for(j = 1; j <= i; j++) {
            for(k = 1; k <= i; k++) {
                printf("* ");
            }
            printf("\n");
        } 
        for(l = 0; l < i * 3; l++) {
            printf("* ");
        }
        printf("\n");
    }
}