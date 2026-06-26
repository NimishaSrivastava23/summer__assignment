#include <stdio.h>

int main() {
    int answer, score = 0;

    printf("===== QUIZ APPLICATION =====\n");

    // Question 1
    printf("\n1. Which language is used to write C programs?\n");
    printf("1. Python\n2. C\n3. Java\n4. HTML\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);

    if (answer == 2)
        score++;

    // Question 2
    printf("\n2. Which symbol is used to end a statement in C?\n");
    printf("1. :\n2. .\n3. ;\n4. ,\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);

    if (answer == 3)
        score++;

    // Question 3
    printf("\n3. Which function is used to display output in C?\n");
    printf("1. scanf()\n2. printf()\n3. gets()\n4. putchar()\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);

    if (answer == 2)
        score++;

    // Question 4
    printf("\n4. Which loop executes at least once?\n");
    printf("1. for\n2. while\n3. do-while\n4. None\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);

    if (answer == 3)
        score++;

    // Question 5
    printf("\n5. Which header file is required for printf()?\n");
    printf("1. string.h\n2. stdio.h\n3. math.h\n4. conio.h\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);

    if (answer == 2)
        score++;

    // Display Result
    printf("\n===== RESULT =====\n");
    printf("Your Score = %d out of 5\n", score);

    if (score == 5)
        printf("Excellent! You got all answers correct.\n");
    else if (score >= 3)
        printf("Good Job!\n");
    else
        printf("Keep Practicing!\n");

    return 0;
}
