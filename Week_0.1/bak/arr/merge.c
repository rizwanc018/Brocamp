#include <stdio.h>

int main() {
    int a[] = {9,7,5,4,3}, b[] = {8,6,3,2,1};
    int l = 5;
    int m, i = 0, j = 0;
    int newArr[10];

    for(m = 0; m < 2*l; m++) {
        if(a[i] > b[j]) {
            newArr[m] = a[i];
            i++; 
        } else {
            newArr[m] = b[j];
            j++;
        }
    }

    for(i = 0; i < 2 *l; i++) {
        printf("%d, ", newArr[i]);
    }

}