#include<stdio.h>


int square(int num);


int main (){
    int num;
    printf("enter the number you want to square: ");
    scanf("%d", &num);
    printf("The square of the number is %d\n", square(num));


    return 0;

}



int square(int num){
    return num*num;

}