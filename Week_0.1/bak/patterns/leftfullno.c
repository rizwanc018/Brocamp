#include <stdio.h>

int main() {
    int i,j,c,n =4;

    for(i = 1; i <= 2*n-1; i++) {
        c = i <= n ? i : 2*n-i;
        for(j = 1; j<= 2*n-1;j++) {
            if(j <= 2*c -1) {
                printf("%d ", j);
            }
        }
        printf("\n");
    }
}