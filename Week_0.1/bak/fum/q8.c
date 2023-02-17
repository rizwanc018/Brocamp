// Delete count of even number and prime numbers in an array
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int i) {
    if(i <= 1) {
        return false;
    }

    for(int j = 2; j < i; j++) {
        if(i % 2 == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int a[] = {1,2,3,4,5,6,7,8};
    int n = 8;
    int i, ecount = 0, pcount = 0;

    for( i = 0; i < n; i++) {
        if(isPrime(a[i])) {
            pcount++;
        }

        if(a[i] %2 == 0) {
            ecount++;
        }
    }

    printf("ecount : %d\npcount : %d\n", ecount,pcount);
}