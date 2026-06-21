#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    scanf("%99s", str);

    printf("Uppercase String: ");

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            printf("%c", str[i] - 32);
        else
            printf("%c", str[i]);
    }

    return 0;
}
