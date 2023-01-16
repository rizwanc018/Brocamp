#include <stdio.h>

int main() {
    int i,n;
    int arr1[100], arr2[100];

    printf("Enter size of arrays : ");
    scanf("%d", &n);

    printf("Enter the values of Array 1 : ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the values of Array 2 : ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    for(i = 0; i < n; i++) {
        arr1[i] = arr1[i] + arr2[i];
        arr2[i] = arr1[i] - arr2[i];
        arr1[i] = arr1[i] - arr2[i];
    }

    printf("Array 1 : ");

    for(i = 0; i < n ; i++) {
        printf("%d, ", arr1[i]);
    }

    printf("\nArray 1 : ");
    for(i = 0; i < n ; i++) {
        printf("%d, ", arr2[i]);
    }
}