// Delete unique elements in an array

#include <stdio.h>

int main() {
    int arr[] = {1,1,2,3,3,4,5,4};
    int l = sizeof(arr)/sizeof(arr[0]);
    int i,j,k,ctr = 1;

    for(i = 0; i < l; i++) {
        ctr = 1;
        for(j = 0; j < l; j++) {
            if(i != j && arr[i] == arr[j]) {
                ctr++;
            }
        }

        if(ctr == 1) {
            for(k = i; k < l-1; k++) {
                arr[k] = arr[k+1];
            }
            l--;
            i--;
        }
    }

    for(i = 0; i < l; i++) {
        printf("%d, ", arr[i]);
    }


}