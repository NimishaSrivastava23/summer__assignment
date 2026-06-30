#include <stdio.h>

struct Book {
    int id;
    char title[50];
    char author[50];
};

int main() {
    struct Book b[100];
    int n = 0, choice, i, id, found;

    do {
        printf("\n===== MINI LIBRARY SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Enter Book ID: ");
            scanf("%d", &b[n].id);

            printf("Enter Book Title: ");
            scanf("%s", b[n].title);

            printf("Enter Author Name: ");
            scanf("%s", b[n].author);

            n++;
            printf("Book Added Successfully!\n");
            break;

        case 2:
            if (n == 0) {
                printf("No Books Available!\n");
            } else {
                printf("\nBook ID\tTitle\tAuthor\n");
                for (i = 0; i < n; i++) {
                    printf("%d\t%s\t%s\n",
                           b[i].id,
                           b[i].title,
                           b[i].author);
                }
            }
            break;

        case 3:
            printf("Enter Book ID to Search: ");
            scanf("%d", &id);

            found = 0;

            for (i = 0; i < n; i++) {
                if (b[i].id == id) {
                    printf("\nBook Found\n");
                    printf("Book ID : %d\n", b[i].id);
                    printf("Title   : %s\n", b[i].title);
                    printf("Author  : %s\n", b[i].author);
                    found = 1;
                    break;
                }
            }

            if (found == 0) {
                printf("Book Not Found!\n");
            }
            break;

        case 4:
            printf("Exiting Program...\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while (choice != 4);

    return 0;
}
