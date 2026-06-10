#include <stdio.h>

int main() {
    int i, j, k;

    for (i = 1; i <= 5; i++) {

        
        for (j = 1; j <= 5 - i; j++) {
            printf(" ");
        }

        for (j = 1; j <= i; j++) {
            printf("%d", j);      //for increasing number
        }

      
        for (k = i - 1; k >= 1; k--) {
            printf("%d", k);         // for decreasing numbers
        }

        printf("\n");
    }

    return 0;
}
