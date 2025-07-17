#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/*
// 19. break & continue


int main() {

    // break = Break out of a loop

    // so easy

    return 0;
}

// 20. nested loops


int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
            printf("%2d × %2d = %2d  ", i, j, i * j);
        }
        printf("\n");
    }

    return 0;
}
*/

// 21. random numbers

/*
int main() {
    srand(time(NULL));

    printf("10 random numbers between 1 and 100:\n");

    for (int i = 0; i < 10; i++) {
        int randomNumber = rand() % 100 + 1;
        printf("%d ", randomNumber);
    }

    printf("\n");

    return 0;
}
*/
/*

// 22. number guessing game

int main() {
    int secretNumber, guess, attempts = 0;

    srand(time(NULL));

    secretNumber = rand() % 100 + 1;

    printf(" Welcome to the Number Guessing Game!\n");
    printf(" I'm thinking of a number between 1 and 100.\n");
    printf(" Can you guess what it is?\n\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < secretNumber) {
            printf(" Too low! Try again.\n");
        } else if (guess > secretNumber) {
            printf(" Too high! Try again.\n");
        } else {
            printf("\n Congratulations! You guessed it in %d attempts!\n", attempts);
        }
    } while (guess != secretNumber);

    return 0;
}


// 23.rock paper scissors

int getComputerChoice() {
    return rand() % 3 + 1; // 1: Rock, 2: Paper, 3: Scissors
}

void printChoice(int choice) {
    switch (choice) {
        case 1: printf("Rock"); break;
        case 2: printf("Paper"); break;
        case 3: printf("Scissors"); break;
    }
}

int main() {

    int playerChoice, computerChoice;
    char playAgain;

    srand(time(NULL));

    printf(" Welcome to Rock-Paper-Scissors!\n");

    do {
        printf("\nChoose:\n");
        printf("1. Rock\n2. Paper\n3. Scissors\n");
        printf("Enter your choice (1-3): ");
        scanf("%d", &playerChoice);

        if (playerChoice < 1 || playerChoice > 3) {
            printf(" Invalid choice. Please enter 1, 2, or 3.\n");
            continue;
        }

        computerChoice = getComputerChoice();

        printf(" You chose: ");
        printChoice(playerChoice);
        printf("\n Computer chose: ");
        printChoice(computerChoice);
        printf("\n");

        if (playerChoice == computerChoice) {
            printf(" It's a tie!\n");
        } else if (
            (playerChoice == 1 && computerChoice == 3) ||
            (playerChoice == 2 && computerChoice == 1) ||
            (playerChoice == 3 && computerChoice == 2)
        ) {
            printf(" You win!\n");
        } else {
            printf(" You lose!\n");
        }

        printf("\n Play again? (y/n): ");
        scanf(" %c", &playAgain);

    } while (playAgain == 'y' || playAgain == 'Y');

    printf(" Thanks for playing!\n");
    return 0;
}
*/


// 24.banking program

#include <stdio.h>

double balance = 1000.0;

void showMenu() {
    printf("\n===== 🏦 Simple Banking System =====\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");
    printf("====================================\n");
}

void checkBalance() {
    printf(" Current Balance: $%.2f\n", balance);
}

void deposit() {
    double amount;
    printf("Enter amount to deposit: $");
    scanf("%lf", &amount);
    if (amount > 0) {
        balance += amount;
        printf("✅ $%.2f deposited successfully.\n", amount);
    } else {
        printf("❌ Invalid deposit amount.\n");
    }
}

void withdraw() {
    double amount;
    printf("Enter amount to withdraw: $");
    scanf("%lf", &amount);
    if (amount > balance) {
        printf(" Insufficient funds!\n");
    } else if (amount <= 0) {
        printf(" Invalid withdrawal amount.\n");
    } else {
        balance -= amount;
        printf(" $%.2f withdrawn successfully.\n", amount);
    }
}

int main() {
    int choice;

    printf(" Welcome to the Simple Banking System!\n");

    do {
        showMenu();
        printf("Please select an option (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                checkBalance();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                printf(" Thank you for using our banking system!\n");
                break;
            default:
                printf(" Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
