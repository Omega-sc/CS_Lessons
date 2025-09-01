#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{

char name [20] = "" ; 
printf("Enter your first name:");
fgets(name , sizeof(name), stdin );
name[strlen(name) - 1 ] = '\0';
if (strnlen(name) == 0)
{
    printf("You did not enter your name:");
}
else
{
    printf("Hello %s! Hope youre doing good!");
}
return 0;
}