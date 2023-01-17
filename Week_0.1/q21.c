#include <stdio.h>

int main() {
    int arr[20], newArr[20];
    int i,n;
    
    printf("Enter array limit : ");
    scanf("%d", &n);

    printf("Enter the values of array \n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    for(i = 0; i< n-1; i++) {
        newArr[i] = arr[i] * arr[i+1];
    }

    for(i = 0; i < n-1; i++) {
        printf("%d ", newArr[i]);
    }
}