// Sort array and replace element in even position with zero

#include <stdio.h>

int main() {
    int i,j;
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int l = 9;
    for(i = 0; i < l; i++) {
        for(j = i+1; j < l; j++) {
            if(arr[i] < arr[j]) {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }

    for(i = 0; i < l; i++) {
        if(i%2 == 0) {
            arr[i] = 0;
        }
        printf("%d, ", arr[i]);
    }
}