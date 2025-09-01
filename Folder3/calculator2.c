#include <stdio.h>
#include <math.h>

int main() {
    double num1 = 0;
    double num2 = 0;
    char buffer[100];
    char operator = '\0';
    double result = 0;
    char running = 'y';

    while (running == 'y' || running == 'Y') {
        printf("\nEnter the first number: ");
        scanf("%lf", &num1);

        printf("Enter the operation you want to perform ( + , - , * , / ): ");
        scanf(" %c", &operator);

        printf("Enter the second number: ");
        scanf("%lf", &num2);

        printf("\n");

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
    }

    printf("\nThanks for using the calculator!\n");
    
    return 0;
}
