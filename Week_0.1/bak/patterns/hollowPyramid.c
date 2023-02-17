#include <stdio.h>

int main() {
    int i,j,k,n = 5;

    for(i = 1; i <= 2*n - 1; i++) {
        int space = i > n ? (2 *n -1) - i : n - i;
        for(j = 1; j <= space; j++) {
            printf(" ");
        }
        for(k =1; k <= i; k++) {
            if(k == 1 || k == i || i == n) {

            printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}