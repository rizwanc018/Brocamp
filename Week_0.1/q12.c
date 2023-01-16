#include <stdio.h>

int main() {
    int i,j,n,a;
    int arr[100];

    printf("Enter the size of an array : ");
    scanf("%d", &n);

    printf("Enter the values of array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] < arr[j]) {
                a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }

    printf("Sorted array : ");

    for(i = 0; i < n ; i++) {
        printf("%d, ", arr[i]);
    }
    printf("\n");

}