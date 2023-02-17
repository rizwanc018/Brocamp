// Find sum of unique prime numbers in arr

#include <stdio.h> 

int main() {
    int arr[] = {1,2,2,3,4,5,5};
    int rep[7];
    int len = sizeof(arr) / sizeof(arr[0]);
    int i,j, ctr;
    int prime;



    for(i = 0; i< len; i++) {
        prime = 1;
        ctr = 0;
        for(j = 2; j < arr[i]; j++) {
            if(arr[i] %j == 0){
                prime = 0;
                break;
            }
        }

        if(prime == 1) {
            for(j = 0; j < len; j++) {
                if( i != j) {
                if(arr[i] == arr[j]) {
                    ctr++;
                }
                }
            }
        }
    }

}