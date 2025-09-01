#include <stdio.h>
#include <math.h>

int main() {
    double num1 = 0;
    double num2 = 0;
    char buffer1[100];
    char buffer2[100];

    char operator = '\0';
    double result = 0;
    char running = 'y';

    while (running == 'y' || running == 'Y') {
        while (1)
        {
            printf("Enter a number:");
            fgets(buffer1 , sizeof(buffer1), stdin);
            if(sscanf(buffer1 , "%lf" , &num1)==1)
            break;
        }
        while (1)
        {
            printf("Enter second number:");
            fgets(buffer2 , sizeof(buffer2), stdin);
            if(sscanf(buffer2 , "%lf" , &num2)==1)
            break;
        }
   
        }
        printf("Enter the operation you want to perform ( + , - , * , / ): ");
        scanf(" %c", &operator);

        

        

        switch (operator) {
            case '+':
                result = num1 + num2;
                printf("Result = %.2lf\n", result);
                break;
            case '-':
                result = num1 - num2;
                printf("Result = %.2lf\n", result);
                break;
            case '*':
                result = num1 * num2;
                printf("Result = %.2lf\n", result);
                break;
            case '/':
                if (num2 == 0) {
                    printf("Error: Cannot divide by zero!\n");
                } else {
                    result = num1 / num2;
                    printf("Result = %.2lf\n", result);
                }
                break;
            default:
                printf("Error: Invalid operator '%c'. Please use +, -, *, or /.\n", operator);
        }

        printf("\nDo you want to continue (y/n): ");
        scanf(" %c", &running);
    

    printf("Thanks for using the calculator!\n");
    
    return 0;

}
