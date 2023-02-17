#include <stdio.h>

int main() {
    int arr[] = {3,2,1,4,1};
    int len = sizeof(arr)/sizeof(arr[0]);
    int count = 0;

    for(int i = 0; i < len; i++) {
        for(int j = i+1 ; j < len; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
    }
    printf("Total number of duplicate elemnts : %d", count );
}