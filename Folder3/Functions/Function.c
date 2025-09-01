#include<stdio.h>
#include<string.h>
void randomFunction (char name[], int age)     //-- parameters
{
printf("\nThis is %s's first time using functions" , name);
printf("\nHe's never used them before and is learning");
printf("\nHe is only %d years old", age);
}


// functions can be called anywhere in the code. to call a function just write the name and pass an argument
// first block of code defined the function. told c what that function has and what it can do. when called, you tell c to actually implement the function within the code.
// now to modify variables in the function you first need to send them over to the function by using the same argument that was used to impement it in the first place.
/* so now youve put the variables you ant to send. but the function does not still know what you are sending so you need to tell the function "okay this is the variable we
" are receiving and this is its address*/


int main()
{

char name [20]=  "";
int age = 0;

printf("Enter your name: ");
fgets(name, sizeof(name), stdin);
name[strlen(name)-1] = '\0';
printf("Enter your age: ");
scanf("%d", &age);

randomFunction(name, age);     //-- arguents

}