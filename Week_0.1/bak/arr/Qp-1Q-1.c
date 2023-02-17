// read n values and delete 2 values after multiple of 5

#include <stdio.h>

int main() {
    int arr[] = {11,12,13,15,16,17,21};
    int len = sizeof(arr) / sizeof(arr[0]);
    int i;
    for( i = 0 ; i < len; i++) {
        if(arr[i]%5 == 0) {
        printf("%d, ", arr[i]),
            i += 2;
        } else {

        printf("%d, ", arr[i]);
        }
    }
}

