#include <stdio.h>

int main() {
    int i, arr[] = {1,2,3,4,5,6,7,8,9};
    int len = sizeof(arr)/sizeof(arr[0]);

    for( i = len -1; i >= 0; i--) {
        if(arr[i] % 2 == 0 ) {
            printf("%d, ",arr[i]);
        } else {
            printf("$, ");
        }
    }
}