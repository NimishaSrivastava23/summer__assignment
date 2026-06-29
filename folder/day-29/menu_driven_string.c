#include <stdio.h>
#include <string.h>
#include <ctype.h>

char str[100];

// Enter String
void enterString() {
    printf("\nEnter a string: ");
    scanf(" %[^\n]", str);
}

// Display String Length
void stringLength() {
    if (strlen(str) == 0) {
        printf("\nNo string entered!\n");
        return;
    }

    printf("Length of string = %d\n", strlen(str));
}

// Reverse String
void reverseString() {
    if (strlen(str) == 0) {
        printf("\nNo string entered!\n");
        return;
    }

    char rev[100];
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        rev[i] = str[len - 1 - i];
    }
    rev[len] = '\0';

    printf("Reversed String = %s\n", rev);
}

// Convert to Uppercase
void upperCase() {
    if (strlen(str) == 0) {
        printf("\nNo string entered!\n");
        return;
    }

    char temp[100];
    strcpy(temp, str);

    for (int i = 0; temp[i] != '\0'; i++) {
        temp[i] = toupper(temp[i]);
    }

    printf("Uppercase String = %s\n", temp);
}

// Convert to Lowercase
void lowerCase() {
    if (strlen(str) == 0) {
        printf("\nNo string entered!\n");
        return;
    }

    char temp[100];
    strcpy(temp, str);

    for (int i = 0; temp[i] != '\0'; i++) {
        temp[i] = tolower(temp[i]);
    }

    printf("Lowercase String = %s\n", temp);
}

int main() {
    int choice;

    while (1) {
        printf("\n====== MENU DRIVEN STRING OPERATIONS ======\n");
        printf("1. Enter String\n");
        printf("2. Find String Length\n");
        printf("3. Reverse String\n");
        printf("4. Convert to Uppercase\n");
        printf("5. Convert to Lowercase\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                enterString();
                break;

            case 2:
                stringLength();
                break;

            case 3:
                reverseString();
                break;

            case 4:
                upperCase();
                break;

            case 5:
                lowerCase();
                break;

            case 6:
                printf("\nExiting Program...\n");
                return 0;

            default:
                printf("\nInvalid Choice! Please try again.\n");
        }
    }

    return 0;
}
