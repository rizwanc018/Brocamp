#include <stdio.h>

int main() {
    int arr[] = {2,2,3,4,5,6,6,7,6,2};
    int l = sizeof(arr)/sizeof(arr[0]);
    int i,j,ctr = 1, elms = 0;

    for(i = 0; i < l; i++) {
        ctr = 1;
        for(j = 0; j < l; j++) {
            if(arr[i] == arr[j] && i != j ){
                ctr++;
            }
        }
        if( ctr == 1) {
            elms++;
        }
    }
    printf("total count : %d\n", elms);
}