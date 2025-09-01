// to check if a number is even or odd
#include <stdio.h>
int main()
{
int number ;
printf("\nPlease enter the number you want to check:");
scanf("%d",  &number);
if (number % 2  == 0)
{
printf("Your number is even!!\n");    
}
else 
{
printf("Your number is odd!!\n");
}

    
return 0;
}
