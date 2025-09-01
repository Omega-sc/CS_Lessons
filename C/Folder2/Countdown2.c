#include<stdio.h>
int main()
{
    int number , number_ = 1 ;
    printf("Please enter a number:");
    scanf("%d", &number );
    while (number_ <= number)
    {
        printf("Countdown %d\n", number_);
        number_ ++;
    }
    return 0;

}