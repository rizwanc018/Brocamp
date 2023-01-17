#include <stdio.h>

int main() {
    printf("Enter marks scored by student\n");
    printf("Written test = ");
    float w;
    scanf("%f", &w);

    float l;
    printf("Lab exams = ");
    scanf("%f", &l);

    float a;
    printf("Assignments = ");
    scanf("%f", &a);

    float result = (w*70)/100 + ((l*20)/100) + (a*10)/100;
    printf("Grade of student is %0.1f\n", result);
}