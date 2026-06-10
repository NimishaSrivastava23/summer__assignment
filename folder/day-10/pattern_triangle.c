#include <stdio.h>

int main() {
    int rows=5, i, j, k;

   // printf("Please Enter the Number of Rows: ");          in this we take rows=5
   // scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
      
        for (k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}   
