#include <stdio.h>

int main() {
        // elements of first Array
    int a[] = { 1, 2, 3, 4, 5 };
    // elements of Second Array
    int b[] = { 6, 7, 8, 9, 10 };

    int l = sizeof(a)/sizeof(a[0]);
    int i,j;

    int c[2*l];

    for(i = 0; i < l; i++){
        c[i] = a[i];
    }

    for(j = 0; j < l; j++, i++){
        c[i] = b[j];
    }

    for(i = 0; i < 2 * l - 1; i++){
        for( j = i + 1; j < 2 *l; j++) {
            if (c[i] < c[j]) {
                int tmp = c[i];
                c[i] = c[j];
                c[j] = tmp;
            }
        }
    }

    for(int i = 0; i < 2*l; i++){
        printf("%d, ", c[i]);
    }

}