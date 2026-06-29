#include <stdio.h>

#define MAX 100

struct Employee {
    int id;
    char name[50];
    float salary;
};

struct Employee emp[MAX];
int count = 0;

// Add Employee
void addEmployee() {
    printf("\nEnter Employee ID: ");
    scanf("%d", &emp[count].id);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", emp[count].name);

    printf("Enter Salary: ");
    scanf("%f", &emp[count].salary);

    count++;
    printf("\nEmployee added successfully!\n");
}

// Display Employees
void displayEmployees() {
    if (count == 0) {
        printf("\nNo employee records found!\n");
        return;
    }

    printf("\n----- Employee Records -----\n");

    for (int i = 0; i < count; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("ID     : %d\n", emp[i].id);
        printf("Name   : %s\n", emp[i].name);
        printf("Salary : %.2f\n", emp[i].salary);
    }
}

// Search Employee
void searchEmployee() {
    int id, found = 0;

    printf("\nEnter Employee ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (emp[i].id == id) {
            printf("\nEmployee Found!\n");
            printf("ID     : %d\n", emp[i].id);
            printf("Name   : %s\n", emp[i].name);
            printf("Salary : %.2f\n", emp[i].salary);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Employee not found!\n");
}

// Update Employee
void updateEmployee() {
    int id, found = 0;

    printf("\nEnter Employee ID to update: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (emp[i].id == id) {
            printf("Enter New Name: ");
            scanf(" %[^\n]", emp[i].name);

            printf("Enter New Salary: ");
            scanf("%f", &emp[i].salary);

            printf("Employee record updated successfully!\n");
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Employee not found!\n");
}

// Delete Employee
void deleteEmployee() {
    int id, found = 0;

    printf("\nEnter Employee ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (emp[i].id == id) {

            for (int j = i; j < count - 1; j++) {
                emp[j] = emp[j + 1];
            }

            count--;
            found = 1;
            printf("Employee record deleted successfully!\n");
            break;
        }
    }

    if (!found)
        printf("Employee not found!\n");
}

// Main Function
int main() {
    int choice;

    while (1) {
        printf("\n========== Employee Management System ==========\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Employee\n");
        printf("5. Delete Employee\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addEmployee();
                break;
            case 2:
                displayEmployees();
                break;
            case 3:
                searchEmployee();
                break;
            case 4:
                updateEmployee();
                break;
            case 5:
                deleteEmployee();
                break;
            case 6:
                printf("\nThank you! Exiting the program...\n");
                return 0;
            default:
                printf("\nInvalid choice! Please enter a valid option.\n");
        }
    }

    return 0;
}
