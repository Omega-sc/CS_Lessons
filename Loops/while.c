#include<stdio.h>
#include<string.h>

int main(){

    char name[50] = "";

    printf("Enter your name: ");
    fgets(name , sizeof(name) , stdin);
    name[strlen(name)-1] = '\0';


    while(strlen(name)==0){
    printf("You havent entered your name\n");
    printf("Please enter your name: ");
    fgets(name , sizeof(name) , stdin);
    name[strlen(name)-1] = '\0';



    }
    return 0;


}