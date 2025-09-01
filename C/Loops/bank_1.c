#include<stdio.h>


float deposit();
float withdraw();
void checkBalance(float balance);


int main(){
int choice =0;
float balance=0;
printf("Welcome To the BANK\n");


do {
    printf("Please select the option you want to continue with:\n");
    printf("Press 1 to check BALANCE\n");
    printf("Press 2 to WITHDRAW \n");
    printf("Press 3 to DEPOSIT \n");
    printf("Press 4 to EXIT : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        checkBalance(balance);
        break;

    case 2:
        {
        float amount = withdraw();
        if (balance < amount){
            printf("Not enough money to withdraw!!!\n");}
        else {

            balance -= amount;
            printf("Your account has been debited with %.2f$.\n", amount);
        }}
        break;
        
        
    case 3:
        balance = balance + deposit();
        break;
    case 4:
        printf("Thank you for banking with us!!!");
        break;

    default:
        printf("Enter a valid choice (1-4)");
    
    
    }
}
  

while (choice !=4);


return 0;

}
float deposit(){

    float deposit;
    printf("Enter the amount you want to deposit (in US$): ");
    scanf("%f", &deposit);
    printf("Your account has been credited with %.2f$.\n", deposit);
    return deposit;
}
float withdraw(){
    float withdraw;
    printf("Enter the amount you want to withdraw (in US$): ");
    scanf("%f", &withdraw);

    return withdraw;
}

void checkBalance(float balance){
printf("Your Balance is: %f$\n", balance);

}