#include <stdio.h>

// int main() {
//     int arr[] = {2,4,5,6,7,12};
//     int l = sizeof(arr)/sizeof(arr[0]);
//     int i,j,k;
//     for(i = 0; i < l; i++) {
//         if(arr[i] %5 == 0) {
//             i++;
//             for(j = i; j < l -2; j++) {
//                 arr[j] = arr[j+2];
//             }
//             l-=2;
//             i--;
//         }
//     }

//     for(i = 0; i < l; i++) {
//         printf("%d, ", arr[i]);
//     }
// }

int main()
{
    int arr[] = {5, 6, 7, 8, 10, 1, 12,15};
    int l = sizeof(arr) / sizeof(arr[0]);
    int i, j, k;

    for (i = 0; i < l; i++) {
        if (arr[i] % 5 == 0) {
            i++;
            if (i > l - 3) {
                l = i;
            } else {
                for (j = i; j < l - 2; j++) {
                    arr[j] = arr[j + 2];
                }
                l -= 2;
                i--;
            }
        }
    }
    for (i = 0; i < l; i++) {
        printf("%d, ", arr[i]);
    }
}