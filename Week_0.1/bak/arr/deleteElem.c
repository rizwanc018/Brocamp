#include <stdio.h>

int main() {
    int arr[] = {2,3,4,2,6,67,8};
    int pos = 3;
    int len = sizeof(arr)/sizeof(arr[0]);
    int i;
    for(i = pos -1; i < len; i++) {
        arr[i] = arr[i+1];
    }
    for (i = 0; i< len - 1; i++) {
        printf("%d, ", arr[i]);
    }
}