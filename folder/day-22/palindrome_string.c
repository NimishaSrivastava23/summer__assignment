#include <stdio.h>

int main() {
    char str[100];
    int len = 0, i, isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    // Find length of string
    while (str[len] != '\0') {
        len++;
    }

    // Check palindrome
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
