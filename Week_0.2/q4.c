// Program to Remove Duplicate Element in an array

#include <stdio.h>

int main() {
    int arr[] = {1,1,2,2,3,4,7,4,5,6,7,8,9,8,7};
    int len = sizeof(arr)/sizeof(arr[0]);

    int i,j,k;
    for ( i = 0; i < len; i++) {
        for(j = i +1; j < len; j++) {
            if(arr[i] == arr[j]) {
                for( k = j; k < len-1; k++) {
                    arr[k] = arr[k+1];
                }
                len--;
                j--;
            }
        }
    }

    for(i = 0; i < len; i++) {
        printf("%d, ", arr[i]);
    }

}