#include <stdio.h>

int main() {
    float percent;

    printf("Enter Your Percentage : ");
    scanf("%f", &percent);

    if(percent >= 90) {
        printf("Your Grade : A\n");
    } else if(percent >= 80) {
        printf("Your Grade : B\n");
    } else if(percent >= 70) {
        printf("Your Grade : C\n");
    } else if( percent >= 60) {
        printf("Your Grade : D\n");
    } else if(percent >= 50) {
        printf("Your Grade : E\n");
    } else {
        printf("You are Failed\n");
    }
}