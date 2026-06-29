#include <stdio.h>

#define MAX 100

int arr[MAX], n = 0;

// Create Array
void createArray() {
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array created successfully!\n");
}

// Display Array
void displayArray() {
    if (n == 0) {
        printf("\nArray is empty!\n");
        return;
    }

    printf("\nArray Elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Search Element
void searchElement() {
    int key, found = 0;

    if (n == 0) {
        printf("\nArray is empty!\n");
        return;
    }

    printf("\nEnter element to search: ");
    scanf("%d", &key);

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Element not found!\n");
}

// Find Maximum Element
void findMaximum() {
    if (n == 0) {
        printf("\nArray is empty!\n");
        return;
    }

    int max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }

    printf("Maximum Element = %d\n", max);
}

// Find Minimum Element
void findMinimum() {
    if (n == 0) {
        printf("\nArray is empty!\n");
        return;
    }

    int min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < min)
            min = arr[i];
    }

    printf("Minimum Element = %d\n", min);
}

int main() {
    int choice;

    while (1) {
        printf("\n====== MENU DRIVEN ARRAY OPERATIONS ======\n");
        printf("1. Create Array\n");
        printf("2. Display Array\n");
        printf("3. Search Element\n");
        printf("4. Find Maximum Element\n");
        printf("5. Find Minimum Element\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createArray();
                break;

            case 2:
                displayArray();
                break;

            case 3:
                searchElement();
                break;

            case 4:
                findMaximum();
                break;

            case 5:
                findMinimum();
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
