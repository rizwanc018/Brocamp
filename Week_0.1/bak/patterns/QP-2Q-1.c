#include <stdio.h>

// int main()
// {
//     int i, j, n = 5, k, flag;
//     for (i = 1; i <= n; i++) {
//         k = i-1;
//         // z = 1;
//         for (j = 1; j <= 2*n-1; j++) {
//             if (j >= n - (i -1) && j <= n+(i -1) ) {
//                 if(flag >= 2*i - 1) {
//                     k--;
//                     printf("%d ", k);
//                 } else {
//                     k++;
//                     flag = k;
//                     printf("%d ", k);
//                 }
//             } else {
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
// }
//         1         
//       2 3 2       
//     3 4 5 4 3     
//   4 5 6 7 6 5 4   
// 5 6 7 8 9 8 7 6 5 

int main() {

    int i,j,k,l,n = 5;

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n-i; j++) {
            printf("  ");
        }
        for(k = i; k <= 2*i-1; k++) {\
            printf("%d ",k);
        }
        for(l = 2*i -2; l >= i; l--) {
            printf("%d ", l);
        }
        printf("\n");
    }
}
//         1 
//       2 3 2 
//     3 4 5 4 3 
//   4 5 6 7 6 5 4 
// 5 6 7 8 9 8 7 6 5 

// int main() {
//     int i,j,k,n = 5;

//     for(i = 1; i <= n; i++) {
//         for( j = 1; j <= n -i; j++) {
//             printf("  ");
//         }
//         for( k = 1; k <= i; k++) {
//             printf("%d ",k);
//         }
//         for( j = i -1; j >= 1; j--) {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
// }

//         1 
//       1 2 1 
//     1 2 3 2 1 
//   1 2 3 4 3 2 1 
// 1 2 3 4 5 4 3 2 1 


// https://youtu.be/lsOOs5J8ycw?t=2294

// int main() {
//     int i,j,k, n = 5;

//     for(i = 1; i <= n; i++) {
//         for(j = 1; j <= n - i; j++) {
//             printf("  ");
//         }
//         for(k = i; k >= 1; k--) {
//             printf("%d ",k);
//         }
//         for(k = 2; k <= i; k++){
//             printf("%d ", k);
//         }
//         printf("\n");
//     }
// }
//         1 
//       2 1 2 
//     3 2 1 2 3 
//   4 3 2 1 2 3 4 
// 5 4 3 2 1 2 3 4 5 

// int main() {
//     int i,j,k, n = 5;

//     for(i = 1; i <= 2 *n -1; i++) {

//         int space = i >= n ?  i -n: n -i;
//         for(j = 1; j <= space; j++) {
//             printf("  ");
//         }
//         int num = i <= n ? i : 2 * n - i; 
//         for(k = num; k >= 1; k--) {
//             printf("%d ",k);
//         }
//         for(k = 2; k <= num; k++){
//             printf("%d ", k);
//         }
//         printf("\n");
//     }
// }

//         1 
//       2 1 2 
//     3 2 1 2 3 
//   4 3 2 1 2 3 4 
// 5 4 3 2 1 2 3 4 5 
//   4 3 2 1 2 3 4 
//     3 2 1 2 3 
//       2 1 2 
//         1 

int main() {
    int i, j,k, n = 5; 
    int og = n;
    n = 2*n -1;

    printf("*\n");
    for(i = 1; i <= n; i++) {
        int count = i <= og ? i : 2 * og -i;
        for( j = 1; j <= count; j++) {
            if(j == 1) {
                printf("*");
            }
            printf("%d", j);

        }
        for(k = j - 2; k >= 1; k--) {
            printf("%d", k);
        }

        printf("*\n");
    }
    printf("*\n");
}