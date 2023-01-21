// Write a program to find Second Largest Number in an Array

#include <stdio.h>
int main() {
    int arr[] = {80, 22,47,56,74,89,45,10};
    int l = sizeof(arr)/sizeof(arr[0]);

    int max = arr[0];
    int smax = -2;

    for(int i = 0; i < l; i++) {
        if(arr[i] > max) {
            smax = max;
            max = arr[i];
        }else if(arr[i] > smax) {
            smax = arr[i];
        } 
    }

    printf("Second largest = %d\n", smax);
}