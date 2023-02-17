// Insert elem at position
#include <stdio.h>

int main() {
    int i;
    int pos = 5; 
    int el = 99;
    int arr[20] = {1,2,3,4,5,6,7,8};
    // int l = sizeof(arr)/sizeof(arr[0]);
    int l = 8;

    l++;

    for(i = l; i >= pos; i--) {
        arr[i] = arr[i-1];
    }

    arr[pos] = el;

    for(i = 0; i < l; i++) {
        printf("%d, ", arr[i]);
    }
}