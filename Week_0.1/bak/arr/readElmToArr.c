#include <stdio.h>

int main() {
    int arr[10];
    int i;
    printf("Enter 10 numbers \n");

    for(i = 0; i < 10; i++) {
        printf("%d th element : ", i);
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 10; i++) {
        printf("%d, ", arr[i]);
    }
}