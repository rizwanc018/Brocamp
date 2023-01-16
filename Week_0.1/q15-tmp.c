#include <stdio.h>

void getArray(int n, int arr[]) {
    // int n, arr[50]; 
    printf("Enter array size : ");
    scanf("%d", &n);

    printf("Enter  values of array : ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

}

void displayArray(int n, int arr[]) {
    for(int i = 0; i < n; i++) {
        printf("%d, ", arr[i]);
    }
        printf("\n");
}

int main() {
    // int n = 5 , arr[50];
    // int n, arr[50];
    int n, arr[50];

    // int arr[50] = getArray();
    displayArray(n, arr);

}