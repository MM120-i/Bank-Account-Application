#include <stdio.h>
#include <windows.h>
#include <time.h>

const int pin = 1234;
int option, enteredPin, count = 0, amount = 1, continueTransaction = 1;
float balance = 5000;

int checkPIN(int enteredPin);
void withdraw(float *balance);
void deposit(float *balance);

int main(){

    system("color 3F");

    time_t now;
    time(&now);
    printf("\n");
    printf("\t\t\t\t\t           %s", ctime(&now));
    printf("\n\t\t\t====================* Welcome! * ====================");

    while (pin != enteredPin){

        printf("\nPlease enter your pin: ");
        scanf("%d", &enteredPin);
        checkPIN(enteredPin);
    }

    while (continueTransaction != 0){

        printf("\n\t\t\t====================* Available Transactions * ====================");
        printf("\n\n\t\t1. Widthdrawl");
        printf("\n\t\t2. Deposit");
        printf("\n\t\t3. Check Balance");
        printf("\n\n\tPlease select the option: ");
        scanf("%d", &option);

        switch (option){
            case 1:

                withdraw(&balance);
                break;

            case 2:

                deposit(&balance);
                break;

            case 3:

                printf("\n\t\tYou balance is $%0.2f", balance);
                break;

            default:

                Beep(610, 500);
                printf("\n\t\tInvalid Option. Please select options 1, 2, or 3");
            break;
        }

        printf("\n\t\tDo you wish to perform another transaction? 1[Yes], 0[No]");
        scanf("%d", &continueTransaction);
    }

    return 0;
}

int checkPIN(int enteredPin){

    if (enteredPin != pin){

        Beep(610, 500);
        printf("Invalid pin!");
    }
    count++;

    if (count == 3 && pin != enteredPin){

        exit(0);
    }

}
void withdraw(float *balance) {

    int amount;

    while (1) {

        printf("\n\t\tEnter the amount: ");
        scanf("%d", &amount);

        if (amount % 500 != 0) {
            
            printf("\n\tThe amount should be a multiple of 500.");
        } else {

            break;
        }
    }

    if (*balance < amount) {

        printf("\n\tInsufficient Balance!");
    } else {

        *balance -= amount;
        printf("\n\tYou have withdrawn $%d. Your new balance is $%0.2f", amount, *balance);
    }

    printf("\n\t\t====================* Thank you for banking! Have a good day! * ====================\n");
}

void deposit(float *balance){
    
    printf("\n\t\t Please enter the amount: ");
    scanf("%d", &amount);
    balance += amount;
    printf("\n\t\tYou have deposited $%d. Your new balance is $%0.2f", amount, balance);
    printf("\n\t\t\t====================* Thank you for banking! Have a good day! * ====================");
    amount = 1;
}
