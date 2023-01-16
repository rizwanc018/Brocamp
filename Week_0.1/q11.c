#include <stdio.h>

int main() {
    int i,n, ctr = 0;
    int arr[100];

    printf("Enter the size of array : ");
    scanf("%d", &n);

    printf("Enter the values of array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            ctr++;
        }
    }

    printf("Number of even numbers in the given array is %d\n", ctr);
}