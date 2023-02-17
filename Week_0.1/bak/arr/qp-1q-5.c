// find sum of unique multiple of 3 in array
#include <stdio.h> 
int main() {
    int i, j, ctr, k, sum = 0;

    int arr[] ={3,5,6,6,8,9, 27, 27 ,33, 30};
    int len = sizeof(arr)/sizeof(arr[0]);

    for(i = 0; i < len; i++) {
        ctr = 0;
        if(arr[i] % 3 == 0) {
            for(j = 0; j < len; j++) {
                if( i != j && arr[i] == arr[j]) {
                    ctr++;
                }
            }
            if(ctr == 0) {
                sum += arr[i];
            }
        }
    }

    printf("Sum is : %d\n", sum);
}