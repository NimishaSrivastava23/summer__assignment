#include <stdio.h>

int main() {
    int choice;
    float balance = 10000.0, deposit, withdraw;

    while (1) {
        printf("\n===== ATM SIMULATION =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Your current balance is: %.2f\n", balance);
            break;

        case 2:
            printf("Enter amount to deposit: ");
            scanf("%f", &deposit);

            if (deposit > 0) {
                balance = balance + deposit;
                printf("Amount deposited successfully.\n");
                printf("Updated Balance: %.2f\n", balance);
            } else {
                printf("Invalid deposit amount!\n");
            }
            break;

        case 3:
            printf("Enter amount to withdraw: ");
            scanf("%f", &withdraw);

            if (withdraw <= 0) {
                printf("Invalid withdrawal amount!\n");
            }
            else if (withdraw > balance) {
                printf("Insufficient Balance!\n");
            }
            else {
                balance = balance - withdraw;
                printf("Please collect your cash.\n");
                printf("Remaining Balance: %.2f\n", balance);
            }
            break;

        case 4:
            printf("Thank you for using the ATM!\n");
            return 0;

        default:
            printf("Invalid Choice! Please try again.\n");
        }
    }

    return 0;
}
