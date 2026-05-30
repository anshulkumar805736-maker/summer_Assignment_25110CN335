#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, remainder, sum = 0;
    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    num = abs(num);
    while (num > 0) {
        remainder = num % 10;  
        sum += remainder;     
        num = num / 10;     
    }
    printf("Sum of the digits = %d\n", sum);

    return 0;
}
