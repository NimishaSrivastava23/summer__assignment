#include <stdio.h>
#include <string.h>

#define MAX 100

struct Student {
    int roll;
    char name[50];
    float marks;
};

struct Student s[MAX];
int count = 0;

// Function to add student
void addStudent() {
    printf("\nEnter Roll Number: ");
    scanf("%d", &s[count].roll);

    printf("Enter Name: ");
    scanf(" %[^\n]", s[count].name);

    printf("Enter Marks: ");
    scanf("%f", &s[count].marks);

    count++;
    printf("Student record added successfully!\n");
}

// Function to display all students
void displayStudents() {
    if (count == 0) {
        printf("\nNo records found!\n");
        return;
    }

    printf("\n--- Student Records ---\n");
    for (int i = 0; i < count; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number : %d\n", s[i].roll);
        printf("Name        : %s\n", s[i].name);
        printf("Marks       : %.2f\n", s[i].marks);
    }
}

// Function to search student
void searchStudent() {
    int roll, found = 0;

    printf("\nEnter Roll Number to search: ");
    scanf("%d", &roll);

    for (int i = 0; i < count; i++) {
        if (s[i].roll == roll) {
            printf("\nRecord Found\n");
            printf("Roll Number : %d\n", s[i].roll);
            printf("Name        : %s\n", s[i].name);
            printf("Marks       : %.2f\n", s[i].marks);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Student not found!\n");
}

// Function to update student
void updateStudent() {
    int roll, found = 0;

    printf("\nEnter Roll Number to update: ");
    scanf("%d", &roll);

    for (int i = 0; i < count; i++) {
        if (s[i].roll == roll) {
            printf("Enter New Name: ");
            scanf(" %[^\n]", s[i].name);

            printf("Enter New Marks: ");
            scanf("%f", &s[i].marks);

            printf("Record updated successfully!\n");
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Student not found!\n");
}

// Function to delete student
void deleteStudent() {
    int roll, found = 0;

    printf("\nEnter Roll Number to delete: ");
    scanf("%d", &roll);

    for (int i = 0; i < count; i++) {
        if (s[i].roll == roll) {
            for (int j = i; j < count - 1; j++) {
                s[j] = s[j + 1];
            }
            count--;
            found = 1;
            printf("Record deleted successfully!\n");
            break;
        }
    }

    if (!found)
        printf("Student not found!\n");
}

// Main function
int main() {
    int choice;

    while (1) {
        printf("\n========== Student Record Management System ==========\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                updateStudent();
                break;
            case 5:
                deleteStudent();
                break;
            case 6:
                printf("Exiting program...\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
