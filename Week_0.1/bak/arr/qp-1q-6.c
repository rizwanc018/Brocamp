// In arrayu replace all elements with "*" and remove even number

#include <stdio.h>
#include <stdbool.h>

bool isPrimeNumber(int num) {
    int j;
    if(num == 0 || num ==1) {
        return false;
    }
    for(j = 2; j < num; j++){
        if(num % j == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int i , j;
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int len = sizeof(arr)/sizeof(arr[0]);
    bool prime;
    int nI = 0;
    char newArr[20];

    for(i = 0; i < len; i++) {
        prime = isPrimeNumber(arr[i]);
        if(prime) {
            newArr[i] = '*';
        }

        if(arr[i] % 2 != 0) {
            // printf("%d, ", arr[i]);
            newArr[nI] = arr[i];
            nI++;
        }
    }

    len = sizeof(newArr)/sizeof(newArr[0]);
    for(i = 0; i < len ; i++) {
        printf("%i, ",newArr[i]);
    }

}

// int main() {
//     int i , j;
//     int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
//     int len = sizeof(arr)/sizeof(arr[0]);
//     bool prime;
//     int nI = 0;
//     int newArr[20];

//     for(i = 0; i < len; i++) {
//         prime = isPrimeNumber(arr[i]);
//         if(prime) {
//             arr[i] = '*';
//         }

//         if(arr[i] % 2 != 0) {
//             newArr[nI] = arr[i];
//             nI++;
//         }
//     }

//     len = sizeof(newArr)/sizeof(newArr[0]);
//     for(i = 0; i < len ; i++) {
//         printf("%d, ",newArr[i]);
//     }

// }