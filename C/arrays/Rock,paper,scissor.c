#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int getComputerChoice() {
    return rand() % 3 + 1;
}
int playAgain();



int getUserChoice() {
    int choice = 0;
    do {
        printf("1 for Rock \n2 for Paper \n3 for Scissors\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
    } while (choice < 1 || choice > 3);
    return choice;
}

void checkWinner(int userChoice, int computerChoice) {
    if (userChoice == computerChoice) {
        printf("It's a tie!\n");
    } else if ((userChoice == 1 && computerChoice == 3) || 
               (userChoice == 2 && computerChoice == 1) || 
               (userChoice == 3 && computerChoice == 2)) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }
}
int main() {
    srand(time(NULL));
    printf("Let's play *** ROCK, PAPER, SCISSORS ***\n");

    do {
        int userChoice = getUserChoice();
        int computerChoice = getComputerChoice();

        switch (userChoice) {
            case 1:
                printf("You chose Rock\n");
                break;
            case 2:
                printf("You chose Paper\n");
                break;
            case 3:
                printf("You chose Scissors\n");
                break;
        }

        switch (computerChoice) {
            case 1:
                printf("Computer chose Rock\n");
                break;
            case 2:
                printf("Computer chose Paper\n");
                break;
            case 3:
                printf("Computer chose Scissors\n");
                break;
        }

        checkWinner(userChoice, computerChoice);
    } while (playAgain());

    return 0;
    
}   