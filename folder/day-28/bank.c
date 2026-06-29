#include <stdio.h>

#define MAX 100

struct Bank {
    int accNo;
    char name[50];
    float balance;
};

struct Bank account[MAX];
int count = 0;

// Create Account
void createAccount() {
    printf("\nEnter Account Number: ");
    scanf("%d", &account[count].accNo);

    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", account[count].name);

    printf("Enter Initial Balance: ");
    scanf("%f", &account[count].balance);

    count++;

    printf("\nAccount created successfully!\n");
}

// Display Accounts
void displayAccounts() {
    if (count == 0) {
        printf("\nNo accounts found!\n");
        return;
    }

    printf("\n------ Bank Accounts ------\n");

    for (int i = 0; i < count; i++) {
        printf("\nAccount %d\n", i + 1);
        printf("Account Number : %d\n", account[i].accNo);
        printf("Name           : %s\n", account[i].name);
        printf("Balance        : %.2f\n", account[i].balance);
    }
}

// Search Account
void searchAccount() {
    int accNo, found = 0;

    printf("\nEnter Account Number to search: ");
    scanf("%d", &accNo);

    for (int i = 0; i < count; i++) {
        if (account[i].accNo == accNo) {
            printf("\nAccount Found!\n");
            printf("Account Number : %d\n", account[i].accNo);
            printf("Name           : %s\n", account[i].name);
            printf("Balance        : %.2f\n", account[i].balance);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Account not found!\n");
}

// Deposit Money
void depositMoney() {
    int accNo, found = 0;
    float amount;

    printf("\nEnter Account Number: ");
    scanf("%d", &accNo);

    for (int i = 0; i < count; i++) {
        if (account[i].accNo == accNo) {

            printf("Enter Deposit Amount: ");
            scanf("%f", &amount);

            account[i].balance += amount;

            printf("Amount deposited successfully!\n");
            printf("New Balance: %.2f\n", account[i].balance);

            found = 1;
            break;
        }
    }

    if (!found)
        printf("Account not found!\n");
}

// Withdraw Money
void withdrawMoney() {
    int accNo, found = 0;
    float amount;

    printf("\nEnter Account Number: ");
    scanf("%d", &accNo);

    for (int i = 0; i < count; i++) {
        if (account[i].accNo == accNo) {

            printf("Enter Withdrawal Amount: ");
            scanf("%f", &amount);

            if (amount <= account[i].balance) {
                account[i].balance -= amount;
                printf("Withdrawal successful!\n");
                printf("Remaining Balance: %.2f\n", account[i].balance);
            } else {
                printf("Insufficient Balance!\n");
            }

            found = 1;
            break;
        }
    }

    if (!found)
        printf("Account not found!\n");
}

int main() {
    int choice;

    while (1) {
        printf("\n====== Bank Account Management System ======\n");
        printf("1. Create Account\n");
        printf("2. Display All Accounts\n");
        printf("3. Search Account\n");
        printf("4. Deposit Money\n");
        printf("5. Withdraw Money\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createAccount();
                break;

            case 2:
                displayAccounts();
                break;

            case 3:
                searchAccount();
                break;

            case 4:
                depositMoney();
                break;

            case 5:
                withdrawMoney();
                break;

            case 6:
                printf("\nThank you! Exiting Program...\n");
                return 0;

            default:
                printf("\nInvalid choice! Please try again.\n");
        }
    }

    return 0;
}
