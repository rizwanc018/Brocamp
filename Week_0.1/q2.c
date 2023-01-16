// Accept two inputs from the user and output its sum.
#include <stdio.h>

int main(){
    int n1;
    float n2, sum;

    printf("Give 2 numbers to do addition\n");

    printf("Enter an integer - ");
    scanf("%d", &n1);

    printf("Enter a float - ");
    scanf("%f", &n2);
    
    sum = (float) n1+n2;
    printf("Result is %f\n", sum);
}