//In array remopve all prime > 50 and non prime < 50
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num == 1) {
        return false;
    }
    for ( int j = 2; j <= num/2; j++ ) {
        if(num % j == 0) {
            return false;
        }
    }
    return true;
}


int main() {
    int arr[] = {1,2,3,4,5};
    int len = sizeof(arr)/sizeof(arr[0]);
    int i;

    for(i = 0; i < len; i++) {
        if(arr[i] < 50) {
            if(!isPrime(arr[i])) {
                i++;
            }
        } else if(arr[i] > 50) {
            if(isPrime) {
                i++;
            }
        }
        printf("%d, ", arr[i]);
    }
}