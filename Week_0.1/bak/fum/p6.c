#include <stdio.h>

int main() {
    int i,j,k,n = 4;
    // n = 2 *n -1;

    // for(i = 1; i <= 2*n-1; i++) {
    //     int space = (2*n-1) - 2*i-1;
    //     for( j = 1; j <= space;  j++) {
    //         printf("  ");
    //     }
    //     for(k = 1; k <= 2*i-1; k++) {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= (2*n-1)- (2*i-1); j++) {
            printf("  ");
        }
        for(k = 1; k <= 2*i-1; k++) {
            printf("* ");
        }
        printf("\n");    
    }
    for(i = 1; i <= n-1; i++) {
        for(j = 1; j <= i *2; j++) {
            printf("  ");
        }
        for(k = 1; k <= (2*n-1) - (i*2); k++) {
            printf("* ");
        }
        printf("\n");
    }
}