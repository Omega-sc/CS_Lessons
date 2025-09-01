// to perform operations on a couple of integers!


#include <stdio.h>
int main()
{
    int a;
    int b; 
    printf("Enter First integer: ");
    scanf("%d", &a);

    printf("Enter Second integer: ");
    scanf("%d", &b);

    printf("Sum: %d\n", a + b);
    printf("Difference: %d\n", a - b);
    printf("Product: %d\n", a * b);
    if (b != 0)
    {
        printf("Quotient: %d\n", a/b);
        printf("Remainder: %d\n", a % b);
    }
    else 
    {
        printf("Wanna create a balck hole bro?");
    }
    return 0;
}