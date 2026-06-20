#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    int matrix[10][10];

    printf("Enter matrix elements:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

   for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
        if(i == j) {
            sum += matrix[i][j];
        }
    }
}
    }

    printf("Sum of diagonal elements = %d\n", sum);

    return 0;
}
