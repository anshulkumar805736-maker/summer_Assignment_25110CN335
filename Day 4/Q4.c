#include <stdio.h>
#include <math.h>

int main() {
    int start, end, num, temp, remainder, digits;
    double sum;
    printf("Enter the starting and ending limits of the range: ");
    scanf("%d %d", &start, &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);
    if (start > end) {
        temp = start;
        start = end;
        end = temp;
    }
    for (num = start; num <= end; num++) {
        temp = num;
        digits = 0;
        sum = 0.0;
        while (temp != 0) {
            temp /= 10;
            digits++;
        }

        temp = num;
        while (temp != 0) {
            remainder = temp % 10;
            sum += pow(remainder, digits);
            temp /= 10;
        }
        if ((int)sum == num) {
            printf("%d ", num);
        }
    }

    printf("\n");
    return 0;
}
