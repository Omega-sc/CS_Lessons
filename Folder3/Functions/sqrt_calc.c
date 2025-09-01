#include<stdio.h>
#include<math.h>
double sqrt_calc(int num)
{
    double result = sqrt(num);
    return result;
}

int main()
{
char running = 'y';
while (running == 'y' || running == 'Y');

{
    double num1 = 0;
    printf("Please enter the number whose square root you want to calculate: ");
    scanf("%lf", &num1);
    double result = sqrt_calc(num1);
    printf("The square root of %.2lf is %.2lf\n", num1, result);
printf("\nDo you want to calculate another square root? (y/n): ");
scanf(" %c", &running);
    }
}