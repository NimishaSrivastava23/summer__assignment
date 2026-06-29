#include <stdio.h>

#define MAX 100

struct Book {
    int bookId;
    char title[50];
    char author[50];
    int quantity;
};

struct Book book[MAX];
int count = 0;

// Add Book
void addBook() {
    printf("\nEnter Book ID: ");
    scanf("%d", &book[count].bookId);

    printf("Enter Book Title: ");
    scanf(" %[^\n]", book[count].title);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", book[count].author);

    printf("Enter Quantity: ");
    scanf("%d", &book[count].quantity);

    count++;
    printf("\nBook added successfully!\n");
}

// Display Books
void displayBooks() {
    if (count == 0) {
        printf("\nNo books available!\n");
        return;
    }

    printf("\n------ Library Books ------\n");

    for (int i = 0; i < count; i++) {
        printf("\nBook %d\n", i + 1);
        printf("Book ID  : %d\n", book[i].bookId);
        printf("Title    : %s\n", book[i].title);
        printf("Author   : %s\n", book[i].author);
        printf("Quantity : %d\n", book[i].quantity);
    }
}

// Search Book
void searchBook() {
    int id, found = 0;

    printf("\nEnter Book ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (book[i].bookId == id) {
            printf("\nBook Found!\n");
            printf("Book ID  : %d\n", book[i].bookId);
            printf("Title    : %s\n", book[i].title);
            printf("Author   : %s\n", book[i].author);
            printf("Quantity : %d\n", book[i].quantity);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Book not found!\n");
}

// Update Book
void updateBook() {
    int id, found = 0;

    printf("\nEnter Book ID to update: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (book[i].bookId == id) {

            printf("Enter New Title: ");
            scanf(" %[^\n]", book[i].title);

            printf("Enter New Author: ");
            scanf(" %[^\n]", book[i].author);

            printf("Enter New Quantity: ");
            scanf("%d", &book[i].quantity);

            printf("Book updated successfully!\n");
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Book not found!\n");
}

// Delete Book
void deleteBook() {
    int id, found = 0;

    printf("\nEnter Book ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (book[i].bookId == id) {

            for (int j = i; j < count - 1; j++) {
                book[j] = book[j + 1];
            }

            count--;
            found = 1;
            printf("Book deleted successfully!\n");
            break;
        }
    }

    if (!found)
        printf("Book not found!\n");
}

// Main Function
int main() {
    int choice;

    while (1) {
        printf("\n====== Library Management System ======\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Update Book\n");
        printf("5. Delete Book\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                addBook();
                break;

            case 2:
                displayBooks();
                break;

            case 3:
                searchBook();
                break;

            case 4:
                updateBook();
                break;

            case 5:
                deleteBook();
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
