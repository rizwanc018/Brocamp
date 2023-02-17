// find sum of unique multiples of 3 in an array
#include <stdio.h>

int main() {
    int arr[] = {1,2,3,3,6,7,9,27};
    int len = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    int i,j, ctr;

    for(i = 0; i < len; i++){
        if(arr[i] % 3 == 0){
            ctr = 0;
            for( j = 0; j < len; j++) {
                if(arr[i] == arr[j] && i != j) {
                    ctr++;
                } 
            }

            if(ctr == 0) {
                printf("%d\n", arr[i]);
                sum += arr[i];
            }
        }
    }
    printf("%d\n", sum);
}