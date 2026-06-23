#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int i, j;
    char temp;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Check lengths first
    if (strlen(str1) != strlen(str2)) {
        printf("Strings are not anagrams.\n");
        return 0;
    }

    // Sort first string
    for (i = 0; str1[i] != '\0'; i++) {
        for (j = i + 1; str1[j] != '\0'; j++) {
            if (str1[i] > str1[j]) {
                temp = str1[i];
                str1[i] = str1[j];
                str1[j] = temp;
            }
        }
    }

    // Sort second string
    for (i = 0; str2[i] != '\0'; i++) {
        for (j = i + 1; str2[j] != '\0'; j++) {
            if (str2[i] > str2[j]) {
                temp = str2[i];
                str2[i] = str2[j];
                str2[j] = temp;
            }
        }
    }

    // Compare sorted strings
    for (i = 0; str1[i] != '\0'; i++) {
        if (str1[i] != str2[i]) {
            printf("Strings are not anagrams.\n");
            return 0;
        }
    }

    printf("Strings are anagrams.\n");

    return 0;
}
