#include <stdio.h>

int main() {
    int originalNum, num, lastDigit, sum = 0;
    long long fact;
    printf("Enter any number to check: ");
    scanf("%d", &num);
    originalNum = num;
    while (num > 0) {
        lastDigit = num % 10;
        fact = 1;
        for (int i = 1; i <= lastDigit; i++) {
            fact = fact * i;
        }
        sum = sum + fact;
        num = num / 10;
    }
    if (sum == originalNum) {
        printf("%d is a Strong Number.\n", originalNum);
    } else {
        printf("%d is not a Strong Number.\n", originalNum);
    }

    return 0;
}
