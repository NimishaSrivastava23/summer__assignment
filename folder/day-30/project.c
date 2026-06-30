#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

struct Student s[100];
int n = 0;

// Function to add student
void addStudent() {
    printf("\nEnter Roll Number: ");
    scanf("%d", &s[n].roll);

    printf("Enter Name: ");
    scanf("%s", s[n].name);

    printf("Enter Marks: ");
    scanf("%f", &s[n].marks);

    n++;
    printf("Student Added Successfully!\n");
}

// Function to display students
void displayStudents() {
    int i;

    if (n == 0) {
        printf("\nNo Records Found!\n");
        return;
    }

    printf("\nRoll\tName\tMarks\n");
    printf("-----------------------------\n");

    for (i = 0; i < n; i++) {
        printf("%d\t%s\t%.2f\n",
               s[i].roll,
               s[i].name,
               s[i].marks);
    }
}

// Function to search student
void searchStudent() {
    int roll, i, found = 0;

    printf("\nEnter Roll Number to Search: ");
    scanf("%d", &roll);

    for (i = 0; i < n; i++) {
        if (s[i].roll == roll) {
            printf("\nStudent Found\n");
            printf("Roll  : %d\n", s[i].roll);
            printf("Name  : %s\n", s[i].name);
            printf("Marks : %.2f\n", s[i].marks);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Student Not Found!\n");
}

// Function to delete student
void deleteStudent() {
    int roll, i, j, found = 0;

    printf("\nEnter Roll Number to Delete: ");
    scanf("%d", &roll);

    for (i = 0; i < n; i++) {
        if (s[i].roll == roll) {
            for (j = i; j < n - 1; j++) {
                s[j] = s[j + 1];
            }
            n--;
            found = 1;
            printf("Student Deleted Successfully!\n");
            break;
        }
    }

    if (!found)
        printf("Student Not Found!\n");
}

int main() {
    int choice;

    do {
        printf("\n===== STUDENT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");

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
                deleteStudent();
                break;

            case 5:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while (choice != 5);

    return 0;
}
