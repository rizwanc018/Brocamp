//print positive and negetive numbers in seperarate array
#include <stdio.h>

int main() {
    int arr[] = {-1,2,-3,4,-5,-6,6,7,8,-9,10};
    int len = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    float avg;

    int par[len], nar[len];
    int i, pi = 0, ni = 0;
    for(i = 0; i < len; i++) {
        if(arr[i] > 0) {
            sum += arr[i];
            pi++;
        } else if(arr[i] < 0) {
            nar[ni]= arr[i];
            ni++;
        }
    }
    avg = (float)sum/pi;
    printf("%0.2f ", avg);
    // for(i = 0; i < pi; i++) {
    //     printf(" %d ", par[i]);
    // }
}