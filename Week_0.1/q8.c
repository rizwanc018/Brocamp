#include <stdio.h>

int main() {
    int limit, sum = 0;
    printf("Enter a limit : ");
    scanf("%d", &limit);

    for(int i = 1; i <= limit; i += 2) {
        sum += i;
    }

    printf("Sum of odd numbers = %d\n", sum);
}