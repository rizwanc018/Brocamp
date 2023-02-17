#include <stdio.h>

int main() {
    int i,j,nn,n=6;
    nn = 2 *n -1;

    for(i = 0; i < nn; i++) {
        int str = i >= n ? (i -n)+2 : n - i;
        for(j = 0; j < str; j++) {
            printf("* ");
        }
        printf("\n");
    }
}