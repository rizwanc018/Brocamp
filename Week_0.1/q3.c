// Write a program to find the simple interest.

#include <stdio.h>

int main() {
   int P;
   float R,n,SI;
   
   printf("To calculate Simple interest enter your principle Amount :  ");
   scanf("%d", &P);
   
   printf("Enter Interst Rate : ");
   scanf("%f", &R);

   printf("Enter number of years : ");
   scanf("%f", &n);

   SI = (float) (P*R*n)/100;
   printf("Simple Interst rate is : %f\n", SI); 
}