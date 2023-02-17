// Delete element in an array which is multiple of 5

#include <stdio.h>

int main() {
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int i,j,n=10;

    for(i = 0; i < n; i++) {
        if(a[i] % 5 == 0){
            for(j = i; j < n-1; j++) {
                a[j] = a[j+1];
            }
            n--;
            i--;
        }
    }

    for(i = 0; i < n; i++) {
        printf("%d, ", a[i]);
    }

}