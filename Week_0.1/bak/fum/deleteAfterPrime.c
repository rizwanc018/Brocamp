#include <stdio.h> 
int main() {
    int arr[] = {4,5,6,9,10,12};
    int l = 6;
    int i,j,k;
    int prime = 1;

    for(i = 0; i < l; i++) {
        prime = 1;
        if(arr[i] <= 1) {
            prime = 0;
        } else {
            for( j = 2; j < arr[i]; j++) {
                if(arr[i] % j == 0) {
                    prime = 0;
                    break;
                }
            }
        }

        if(prime == 1) {
            i++;
            for(k = i; k < l-2; k++) {
                arr[k] = arr[k+2];
            }
            l-=2;
            i--;
        }
    }
    
    for(i = 0; i < l; i++) {
        printf("%d, ", arr[i]);
    }
}