#include <stdio.h>

#define MAX 100

struct Contact {
    char name[50];
    char phone[15];
    char email[50];
};

struct Contact contact[MAX];
int count = 0;

// Add Contact
void addContact() {
    printf("\nEnter Name: ");
    scanf(" %[^\n]", contact[count].name);

    printf("Enter Phone Number: ");
    scanf("%s", contact[count].phone);

    printf("Enter Email: ");
    scanf("%s", contact[count].email);

    count++;

    printf("\nContact added successfully!\n");
}

// Display Contacts
void displayContacts() {
    if (count == 0) {
        printf("\nNo contacts found!\n");
        return;
    }

    printf("\n------ Contact List ------\n");

    for (int i = 0; i < count; i++) {
        printf("\nContact %d\n", i + 1);
        printf("Name  : %s\n", contact[i].name);
        printf("Phone : %s\n", contact[i].phone);
        printf("Email : %s\n", contact[i].email);
    }
}

// Search Contact
void searchContact() {
    char phone[15];
    int found = 0;

    printf("\nEnter Phone Number to search: ");
    scanf("%s", phone);

    for (int i = 0; i < count; i++) {
        if (strcmp(contact[i].phone, phone) == 0) {
            printf("\nContact Found!\n");
            printf("Name  : %s\n", contact[i].name);
            printf("Phone : %s\n", contact[i].phone);
            printf("Email : %s\n", contact[i].email);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Contact not found!\n");
}

// Update Contact
void updateContact() {
    char phone[15];
    int found = 0;

    printf("\nEnter Phone Number to update: ");
    scanf("%s", phone);

    for (int i = 0; i < count; i++) {
        if (strcmp(contact[i].phone, phone) == 0) {

            printf("Enter New Name: ");
            scanf(" %[^\n]", contact[i].name);

            printf("Enter New Email: ");
            scanf("%s", contact[i].email);

            printf("Contact updated successfully!\n");
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Contact not found!\n");
}

// Delete Contact
void deleteContact() {
    char phone[15];
    int found = 0;

    printf("\nEnter Phone Number to delete: ");
    scanf("%s", phone);

    for (int i = 0; i < count; i++) {
        if (strcmp(contact[i].phone, phone) == 0) {

            for (int j = i; j < count - 1; j++) {
                contact[j] = contact[j + 1];
            }

            count--;
            found = 1;
            printf("Contact deleted successfully!\n");
            break;
        }
    }

    if (!found)
        printf("Contact not found!\n");
}

int main() {
    int choice;

    while (1) {
        printf("\n====== Contact Management System ======\n");
        printf("1. Add Contact\n");
        printf("2. Display All Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Update Contact\n");
        printf("5. Delete Contact\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addContact();
                break;

            case 2:
                displayContacts();
                break;

            case 3:
                searchContact();
                break;

            case 4:
                updateContact();
                break;

            case 5:
                deleteContact();
                break;

            case 6:
                printf("\nExiting Program...\n");
                return 0;

            default:
                printf("\nInvalid choice! Please try again.\n");
        }
    }

    return 0;
}
