#include<stdio.h>
#include<string.h>  
int main(){


int age =0;

printf("Enter your age: ");
scanf("%d", &age);


const char *category = (age < 18) ? "Minor" : (age < 60) ? "Adult" : "Senior";
printf("You are classified as: %s\n", category);
return 0;
}

