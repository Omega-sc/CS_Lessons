/*#include <stdio.h> → Imports standard I/O functions like printf.

int main() → The entry point of every C program.

printf("...") → Prints stuff to the screen.

return 0; → Tells the system the program ended successfully.

*/
#include <stdio.h>
int main()
{
    printf("Hello World!!!\n");
   


    int age = 18;
    int year = 2006;
    int product = 3;
    double e = 2.7182818284590;



    printf("You are %d years old\n" , age ); 
    printf(" You were born in %d " , year);
    printf("\nYou have bought %d items\n" , product);
    printf("The value of Euler's number is %.15lf", e);

    return 0;

}