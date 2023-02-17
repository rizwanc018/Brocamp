#include <stdio.h>

int main() {
    int i,j,k,n = 5;

    for(i = 1; i <= 2*n-1; i++) {
        int space = i <= n ? i : 2*n - i;
        for( j = 1; j <= space; j++) {
            printf(" ");
        }
        int str = i <= n ? (n-i)+1 : (i-n)+1;
        for(j = 1; j <= str; j++) {
            if(j == 1 || j == str) 
                printf("* ");
            else 
                printf("  ");                
        }
        printf("\n");
    }
}