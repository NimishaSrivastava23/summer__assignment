#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp[100];
    int n = 0, choice, i, id, found;

    do {
        printf("\n===== EMPLOYEE MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Enter Employee ID: ");
            scanf("%d", &emp[n].id);

            printf("Enter Employee Name: ");
            scanf("%s", emp[n].name);

            printf("Enter Salary: ");
            scanf("%f", &emp[n].salary);

            n++;

            printf("Employee Added Successfully!\n");
            break;

        case 2:
            if (n == 0) {
                printf("No Employee Records Found!\n");
            } else {
                printf("\nID\tName\tSalary\n");

                for (i = 0; i < n; i++) {
                    printf("%d\t%s\t%.2f\n",
                           emp[i].id,
                           emp[i].name,
                           emp[i].salary);
                }
            }
            break;

        case 3:
            if (n == 0) {
                printf("No Employee Records Found!\n");
                break;
            }

            printf("Enter Employee ID to Search: ");
            scanf("%d", &id);

            found = 0;

            for (i = 0; i < n; i++) {
                if (emp[i].id == id) {
                    printf("\nEmployee Found\n");
                    printf("ID     : %d\n", emp[i].id);
                    printf("Name   : %s\n", emp[i].name);
                    printf("Salary : %.2f\n", emp[i].salary);

                    found = 1;
                    break;
                }
            }

            if (found == 0) {
                printf("Employee Not Found!\n");
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
