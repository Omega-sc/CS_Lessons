#include<stdio.h>
int main()
{
    int number ;
    printf("Enter a number: ") ;
    scanf("%d", number) ;
    

int sum = 0 ;
int i = 1 ;
while (i <= number)
{
    sum += i ;
    i ++ ;
}
return 0;
}
