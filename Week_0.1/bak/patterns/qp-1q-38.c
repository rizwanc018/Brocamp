#include <stdio.h>

int main() {
    int i,j,n = 5;
    for ( i = 1; i <= n; i++) {
        int strs =  i % 2 == 0 ? 3 : 5 ;
        for( j = 1; j <= strs; j++) {
            printf("* ");
        }
        if(i != n) {
        printf("\n*\n*\n");
        }
    }
}