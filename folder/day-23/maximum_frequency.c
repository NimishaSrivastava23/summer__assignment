#include <stdio.h>

int main() {
    char str[100], temp;
    int i, j;
    int count = 1, maxCount = 1;
    char maxChar;

    printf("Enter a string: ");
    scanf("%s", str);

    // Sort the string
    for (i = 0; str[i] != '\0'; i++) {
        for (j = i + 1; str[j] != '\0'; j++) {
            if (str[i] > str[j]) {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    maxChar = str[0];

    // Count consecutive characters
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == str[i + 1]) {
            count++;
        } else {
            if (count > maxCount) {
                maxCount = count;
                maxChar = str[i];
            }
            count = 1;
        }
    }

    printf("Maximum occurring character: %c\n", maxChar);
    printf("Frequency: %d\n", maxCount);

    return 0;
}
