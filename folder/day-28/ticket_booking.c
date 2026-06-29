#include <stdio.h>

#define MAX 100

struct Ticket {
    int ticketId;
    char name[50];
    char destination[50];
    int seats;
};

struct Ticket ticket[MAX];
int count = 0;

// Book Ticket
void bookTicket() {
    printf("\nEnter Ticket ID: ");
    scanf("%d", &ticket[count].ticketId);

    printf("Enter Passenger Name: ");
    scanf(" %[^\n]", ticket[count].name);

    printf("Enter Destination: ");
    scanf(" %[^\n]", ticket[count].destination);

    printf("Enter Number of Seats: ");
    scanf("%d", &ticket[count].seats);

    count++;

    printf("\nTicket booked successfully!\n");
}

// Display All Bookings
void displayTickets() {
    if (count == 0) {
        printf("\nNo ticket bookings found!\n");
        return;
    }

    printf("\n------ Ticket Bookings ------\n");

    for (int i = 0; i < count; i++) {
        printf("\nBooking %d\n", i + 1);
        printf("Ticket ID   : %d\n", ticket[i].ticketId);
        printf("Name        : %s\n", ticket[i].name);
        printf("Destination : %s\n", ticket[i].destination);
        printf("Seats       : %d\n", ticket[i].seats);
    }
}

// Search Ticket
void searchTicket() {
    int id, found = 0;

    printf("\nEnter Ticket ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (ticket[i].ticketId == id) {
            printf("\nTicket Found!\n");
            printf("Ticket ID   : %d\n", ticket[i].ticketId);
            printf("Name        : %s\n", ticket[i].name);
            printf("Destination : %s\n", ticket[i].destination);
            printf("Seats       : %d\n", ticket[i].seats);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Ticket not found!\n");
}

// Cancel Ticket
void cancelTicket() {
    int id, found = 0;

    printf("\nEnter Ticket ID to cancel: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (ticket[i].ticketId == id) {

            for (int j = i; j < count - 1; j++) {
                ticket[j] = ticket[j + 1];
            }

            count--;
            found = 1;
            printf("Ticket cancelled successfully!\n");
            break;
        }
    }

    if (!found)
        printf("Ticket not found!\n");
}

int main() {
    int choice;

    while (1) {
        printf("\n====== Ticket Booking System ======\n");
        printf("1. Book Ticket\n");
        printf("2. Display All Bookings\n");
        printf("3. Search Ticket\n");
        printf("4. Cancel Ticket\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                bookTicket();
                break;

            case 2:
                displayTickets();
                break;

            case 3:
                searchTicket();
                break;

            case 4:
                cancelTicket();
                break;

            case 5:
                printf("\nThank you! Exiting Program...\n");
                return 0;

            default:
                printf("\nInvalid choice! Please try again.\n");
        }
    }

    return 0;
}
