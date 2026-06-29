#include <stdio.h>

#define MAX 100

struct Product {
    int productId;
    char name[50];
    int quantity;
    float price;
};

struct Product product[MAX];
int count = 0;

// Add Product
void addProduct() {
    printf("\nEnter Product ID: ");
    scanf("%d", &product[count].productId);

    printf("Enter Product Name: ");
    scanf(" %[^\n]", product[count].name);

    printf("Enter Quantity: ");
    scanf("%d", &product[count].quantity);

    printf("Enter Price: ");
    scanf("%f", &product[count].price);

    count++;
    printf("\nProduct added successfully!\n");
}

// Display Products
void displayProducts() {
    if (count == 0) {
        printf("\nNo products available!\n");
        return;
    }

    printf("\n------ Inventory ------\n");

    for (int i = 0; i < count; i++) {
        printf("\nProduct %d\n", i + 1);
        printf("Product ID : %d\n", product[i].productId);
        printf("Name       : %s\n", product[i].name);
        printf("Quantity   : %d\n", product[i].quantity);
        printf("Price      : %.2f\n", product[i].price);
    }
}

// Search Product
void searchProduct() {
    int id, found = 0;

    printf("\nEnter Product ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (product[i].productId == id) {
            printf("\nProduct Found!\n");
            printf("Product ID : %d\n", product[i].productId);
            printf("Name       : %s\n", product[i].name);
            printf("Quantity   : %d\n", product[i].quantity);
            printf("Price      : %.2f\n", product[i].price);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Product not found!\n");
}

// Update Product
void updateProduct() {
    int id, found = 0;

    printf("\nEnter Product ID to update: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (product[i].productId == id) {

            printf("Enter New Product Name: ");
            scanf(" %[^\n]", product[i].name);

            printf("Enter New Quantity: ");
            scanf("%d", &product[i].quantity);

            printf("Enter New Price: ");
            scanf("%f", &product[i].price);

            printf("Product updated successfully!\n");
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Product not found!\n");
}

// Delete Product
void deleteProduct() {
    int id, found = 0;

    printf("\nEnter Product ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (product[i].productId == id) {

            for (int j = i; j < count - 1; j++) {
                product[j] = product[j + 1];
            }

            count--;
            found = 1;
            printf("Product deleted successfully!\n");
            break;
        }
    }

    if (!found)
        printf("Product not found!\n");
}

// Main Function
int main() {
    int choice;

    while (1) {
        printf("\n====== INVENTORY MANAGEMENT SYSTEM ======\n");
        printf("1. Add Product\n");
        printf("2. Display Products\n");
        printf("3. Search Product\n");
        printf("4. Update Product\n");
        printf("5. Delete Product\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addProduct();
                break;

            case 2:
                displayProducts();
                break;

            case 3:
                searchProduct();
                break;

            case 4:
                updateProduct();
                break;

            case 5:
                deleteProduct();
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
