#include<stdio.h>

/*void square(int num)
{
    int result = num*num;
    printf("The square of %d is %d\n", num , result);

}
int main()
{
    int num1 = 0;
    printf("Enter the number you want to square: ");
    scanf("%d", &num1);
    square(num1);

    
}
*/

// This is one way to provide output out of a function. or you could use the return statement.
int square(int num)
{
  int result = num * num;
  return result;

}
int main()
{
    int num1 = 0;
    printf("Enter the number you want to square: ");
    scanf("%d", &num1);
    square(num1);
    printf("The square of %d is %d\n", num1, square(num1));
    
}



//niiiiice