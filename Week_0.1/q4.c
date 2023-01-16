#include <stdio.h>

int main() {
    float mark;

    printf("Enter Your mark : ");
    scanf("%f", &mark);

    if (mark >= 50) {
        printf("Passed\n");
    } else {
        printf("Failed\n");
    }
}