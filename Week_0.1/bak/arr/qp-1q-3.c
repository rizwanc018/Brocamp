// remove odd number and find sum of existing values in array

#include <stdio.h>

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18};
    int len = sizeof(arr) / sizeof(arr[0]);
    int i, sum = 0;

    for(i = 0; i < len; i++) {
        if(arr[i] % 2 == 0) {
            sum += arr[i];
        }   
    }
    
    printf("Sum : %d", sum);
}