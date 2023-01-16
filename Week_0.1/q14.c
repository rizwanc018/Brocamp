#include <stdio.h>

int main() {
    int i, j, n;
    int a1[50][50], a2[50][50];
    
    printf("Enter size of arrays : ");
    scanf("%d", &n);

    printf("Enter the values of array 1 :");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d",&a1[i][j]);
        }
    }

    printf("Enter the values of array 2 : ");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d",&a2[i][j]);
        }
    }

    printf("Sum of 2 arrays is: \n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", a1[i][j] + a2[i][j]);
        }
        printf("\n");
    }
    
}