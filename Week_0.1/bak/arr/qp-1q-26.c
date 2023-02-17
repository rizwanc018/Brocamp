// find average of all unique elemnts in array

#include <stdio.h>

int main() {
    int arr[] = {1,2,2,3,4,4,5,6,6,7,7,8};
    int len = sizeof(arr)/sizeof(arr[0]);
    int i,j,ctr,cnt = 0;
    int sum = 0;

    for(i = 0; i < len; i++) {
        if(arr[i] != -1) {
            ctr = 0;
            for(j = i + 1; j < len; j++) {
                if(arr[i] == arr[j]) {
                    ctr++;
                    arr[j] = -1;
                }
            } 
            if(ctr == 0) {
                sum += arr[i];
                cnt++;
            }
        }


    }
        float avg = (float) sum/cnt;
        printf("Average : %0.2f\n", avg);
}