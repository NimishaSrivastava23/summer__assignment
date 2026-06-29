#include <stdio.h>

#define MAX 100

struct Salary {
    int empId;
    char name[50];
    float basicSalary;
    float bonus;
    float deduction;
    float netSalary;
};

struct Salary emp[MAX];
int count = 0;

// Add Salary Record
void addSalary() {
    printf("\nEnter Employee ID: ");
    scanf("%d", &emp[count].empId);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", emp[count].name);

    printf("Enter Basic Salary: ");
    scanf("%f", &emp[count].basicSalary);

    printf("Enter Bonus: ");
    scanf("%f", &emp[count].bonus);

    printf("Enter Deduction: ");
    scanf("%f", &emp[count].deduction);

    emp[count].netSalary = emp[count].basicSalary +
                           emp[count].bonus -
                           emp[count].deduction;

    count++;

    printf("\nSalary record added successfully!\n");
}

// Display Records
void displaySalary() {
    if (count == 0) {
        printf("\nNo records found!\n");
        return;
    }

    printf("\n------ Salary Records ------\n");

    for (int i = 0; i < count; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("Employee ID : %d\n", emp[i].empId);
        printf("Name        : %s\n", emp[i].name);
        printf("Basic Salary: %.2f\n", emp[i].basicSalary);
        printf("Bonus       : %.2f\n", emp[i].bonus);
        printf("Deduction   : %.2f\n", emp[i].deduction);
        printf("Net Salary  : %.2f\n", emp[i].netSalary);
    }
}

// Search Record
void searchSalary() {
    int id, found = 0;

    printf("\nEnter Employee ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (emp[i].empId == id) {
            printf("\nRecord Found!\n");
            printf("Employee ID : %d\n", emp[i].empId);
            printf("Name        : %s\n", emp[i].name);
            printf("Net Salary  : %.2f\n", emp[i].netSalary);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Record not found!\n");
}

// Update Record
void updateSalary() {
    int id, found = 0;

    printf("\nEnter Employee ID to update: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (emp[i].empId == id) {

            printf("Enter New Basic Salary: ");
            scanf("%f", &emp[i].basicSalary);

            printf("Enter New Bonus: ");
            scanf("%f", &emp[i].bonus);

            printf("Enter New Deduction: ");
            scanf("%f", &emp[i].deduction);

            emp[i].netSalary = emp[i].basicSalary +
                               emp[i].bonus -
                               emp[i].deduction;

            printf("Salary updated successfully!\n");
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Employee not found!\n");
}

// Delete Record
void deleteSalary() {
    int id, found = 0;

    printf("\nEnter Employee ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (emp[i].empId == id) {

            for (int j = i; j < count - 1; j++) {
                emp[j] = emp[j + 1];
            }

            count--;
            found = 1;
            printf("Record deleted successfully!\n");
            break;
        }
    }

    if (!found)
        printf("Employee not found!\n");
}

int main() {
    int choice;

    while (1) {

        printf("\n====== Salary Management System ======\n");
        printf("1. Add Salary Record\n");
        printf("2. Display All Records\n");
        printf("3. Search Record\n");
        printf("4. Update Record\n");
        printf("5. Delete Record\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                addSalary();
                break;

            case 2:
                displaySalary();
                break;

            case 3:
                searchSalary();
                break;

            case 4:
                updateSalary();
                break;

            case 5:
                deleteSalary();
                break;

            case 6:
                printf("\nExiting Program...\n");
                return 0;

            default:
                printf("\nInvalid Choice!\n");
        }
    }

    return 0;
}
