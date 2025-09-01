#include<stdio.h>
int main(){
   /* int numbers[] = {10, 20, 30 ,40 ,50};
    numbers[2]= 100;
    printf("%d", numbers[2] );    ------ change array variable value*/

char grades[]= {'A','B','C','D',};
for (int i=0; i<3 ; i++){
printf(" %c \n", grades[i]);
}
int size = sizeof(grades);
int size_char= sizeof(grades[0]);
printf("%d\n", size_char);
printf("%d\n", size);
// use for to cycle through an array


/*this validates input using the switch operators



*/
return 0;

}