#include <stdio.h>
#include <string.h>

int main() {
    int score = 0;
    char answer[50];

    printf("Quiz Application\n\n");

    printf("1. What is the capital of India? ");
    scanf(" %[^\n]", answer);

    if (strcmp(answer, "New Delhi") == 0)
        score++;

    printf("2. How many days are there in a week? ");
    scanf("%s", answer);

    if (strcmp(answer, "7") == 0)
        score++;

    printf("3. What is 5 + 5? ");
    scanf("%s", answer);

    if (strcmp(answer, "10") == 0)
        score++;

    printf("\nQuiz Completed!\n");
    printf("Your Score = %d/3\n", score);

    return 0;
}