#include <stdio.h>
int main()
{
    char initial = 'a' ;
    // use '' instead of "" for taking char values

    int age ;
    printf("Please enter you age:");
    scanf( "%d", &age );
    int a = 4;
    int b = 5 ;
    int sum = a + b ; 
    printf("My initial is: %c\n ", initial);
    printf("You are %d years old!!\n" , age);
    printf("Sum is %d\n", sum);

return 0; 


}