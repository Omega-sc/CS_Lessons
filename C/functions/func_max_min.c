#include<stdio.h>


int max(int x, int y);


int main(){

    int x;
    int y;
    printf("This is a function that returns greater of the two numbers entered by the user!!\n");

    printf("Enter first number: ");
    scanf("%d", &x);

    printf("\nEnter second number: ");
    scanf("%d", &y);


    max(x,y);
return 0;

}


int max(int x, int y){

    if (x>y){
        printf("%d is greater than %d (duhh)", x, y);
    }
    else {
        printf("%d is greater than %d (duhh)", y ,x);
    }
    return 0;
}
    