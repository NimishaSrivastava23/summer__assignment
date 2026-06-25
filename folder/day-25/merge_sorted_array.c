#include <stdio.h>

int main() {
    int a[50], b[50], c[100];
    int n1, n2, i, j, k;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter elements of first sorted array: ");
    for(i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter elements of second sorted array: ");
    for(i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    i = 0;
    j = 0;
    k = 0;

    while(i < n1 && j < n2) {
        if(a[i] < b[j]) {
            c[k] = a[i];             //c stores the merged element of array1 and array2........c me smallest element store karenge phle compare karke
            i++;
        } else {
            c[k] = b[j];
            j++;
        }
        k++;
    }

    while(i < n1) {
        c[k] = a[i];
        i++;
        k++;
    }

    while(j < n2) {
        c[k] = b[j];
        j++;
        k++;
    }

    printf("Merged Array: ");
    for(i = 0; i < k; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}
