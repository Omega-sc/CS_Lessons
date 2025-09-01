#include<stdio.h>
int main()
{
int number;
printf("Enter a number: ");
scanf("%d", &number);
int sum = ((number)*(number+1))/2;
printf("The sum is %d" , sum);



return 0;
}