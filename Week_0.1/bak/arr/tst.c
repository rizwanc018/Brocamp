#include <stdio.h>

int main() {
    int n; 
    printf("Enter limit: ");
    scanf("%d", &n);
    int arr[n];
    int arr2[n];

    int len = sizeof(arr)/sizeof(arr[0]);
    printf("New arr length : %d\n", len);
}