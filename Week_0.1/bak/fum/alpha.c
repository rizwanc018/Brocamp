#include <stdio.h>

// int main() {
//     int i,j,c, n= 7;

//     for(i = 0; i < n; i ++) {
//         c = 0;
//         for(j=0; j < 2*n- 1; j++) {
//             if(j < n) {
//                 c++;
//             } else {
//                 c--;
//             }
//             if(j < n -i || j >= n +i-1) {
//                 printf("%c", 64+ c);
//             } else {
//                 printf(" ");
//             }
//         }        
//         printf("\n");
//     }
// }

// ABCDEFGFEDCBA
// ABCDEF FEDCBA
// ABCDE   EDCBA
// ABCD     DCBA
// ABC       CBA
// AB         BA
// A           A

// int main() {
//     int i,j,n = 5;

//     for(i = 1; i <= n; i++) {
//         int cntr = 1;
//         for(j = 1; j <= n; j++) {
//             if(j <= n -i) {
//                 printf(" ");
//             } else { 
//                 printf("%d ", cntr);
//                 cntr++;
//             }
//         }
//         printf("\n");
//     }
// }

//     1 
//    1 2 
//   1 2 3 
//  1 2 3 4 
// 1 2 3 4 5 