#include <stdio.h>

int main() {
    int num, originalNum, remainder, digits = 0;
    long long result = 0;

    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    originalNum = num;
    while (originalNum != 0) {
        originalNum /= 10;
        digits++;
    }
    originalNum = num;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        long long power = 1;
        for (int i = 0; i < digits; i++) {
            power *= remainder;
        }

        result += power;
        originalNum /= 10;
    }
    if ((int)result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
