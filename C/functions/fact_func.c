#include<stdio.h>


int factorial(int num);

int main(){
    int num =0;
    printf("Enter the number you want to find factorial for!: ");
    scanf("%d", &num);
    printf("The factorial of %d is %d", num , factorial(num) );

return 0;
}

int factorial(int num){
    int result = 1;
    for(int i=2 ; i<=num; i++){
        result*=i;
    }
return result;

}