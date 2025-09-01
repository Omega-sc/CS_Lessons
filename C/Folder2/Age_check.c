//to check the age of a user
#include <stdio.h>
int main()
{
    int age;
    printf("Please enter your age: ");
    scanf("%d", &age);
    if (age <= 18)
    {
    printf("I'm gonna tell your parents what youre tryna do");
    }
    else 
    {
    printf("Right this way good sir");
    }
    return 0;
    
}