#include <stdio.h>

int min(int n1, int n2) {
    return n1 <= n2? n1 : n2;
}

int main() {
    int i ,j , n = 4, num, og;
    og = n;
    n = 2 * n  ;
    for(i = 0; i <= n; i++){
        for(j = 0; j <= n; j++){
            int num = og - min(min(i,j), min(n - i, n -j)) + 1;
            printf("%d ", num);
        }
        printf("\n");
    }
    
}
// 5 5 5 5 5 5 5 5 5 
// 5 4 4 4 4 4 4 4 5 
// 5 4 3 3 3 3 3 4 5 
// 5 4 3 2 2 2 3 4 5 
// 5 4 3 2 1 2 3 4 5 
// 5 4 3 2 2 2 3 4 5 
// 5 4 3 3 3 3 3 4 5 
// 5 4 4 4 4 4 4 4 5 
// 5 5 5 5 5 5 5 5 5 
