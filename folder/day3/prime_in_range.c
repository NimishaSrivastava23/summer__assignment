#include <stdio.h>

int main() {
    int low, high, i, j, flag, temp;

    
    printf("Enter lower bound and upper bound: ");
    scanf("%d %d", &low, &high);

    
    if (low > high) {
        temp = low;
        low = high;
        high = temp;
    }

    printf("Prime numbers between %d and %d are: \n", low, high);


    for (i = low; i <= high; i++) {
        
        if (i <= 1) {
            continue;
        }

        flag = 1; 

        
        for (j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                flag = 0;
                break;   
            }
        }

    
        if (flag == 1) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
