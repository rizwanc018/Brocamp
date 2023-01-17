#include <stdio.h>

int main()
{
    printf("Enter the annual income ");
    float income;
    scanf("%f", &income);
    float tax;

    if (income <= 250000)
    {
        printf("Not tax \n");
    }
    else if (income > 250000 && income <= 500000)
    {
        tax = (income * 5) / 100;
        printf("Income tax amount = %0.2f\n", tax);
    }
    else if (income > 500000 && income <= 1000000)
    {
        tax = (income * 20) / 100;
        printf("Income tax amount = %0.2f\n", tax);
    }
    else if (income > 1000000 && income <= 5000000)
    {
        tax = (income * 30) / 100;
        printf("Income tax amount = %0.2f\n", tax);
    }
}