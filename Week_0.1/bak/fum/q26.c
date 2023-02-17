#include <stdio.h>

int main() {
    int i,j,k, n = 5;

    for( i = 1; i <= 2*n-1; i++) {
        int space = i <= n ? n - i : i -n; 
        for(j = 1; j <= space; j++) {
            printf(" ");
        }
        int strs = i <= n -i ? i : 2*n - i;
        for(j = 1; j <= strs; j++) {
            if(j ==1 || j ==strs) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}