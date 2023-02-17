#include <stdio.h>

int main() {
    int i, j, n = 6, ocnt = 1, ecnt = 1;
    for(i = 1; i <= n; i++) {
        if(i == 4) {
            continue;
        }
        for(j = 1; j <= i; j++) {
            if(j % 2 != 0) {
                printf("%d ", ocnt*3);
                ocnt++;
            } else {
                printf("%d ", ecnt*5);
                ecnt++;
            }
        }
            printf("\n");
    }
}