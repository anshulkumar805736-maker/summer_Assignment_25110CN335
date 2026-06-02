#include <stdio.h>
double calculate_power(double base, int exponent) {
    double result = 1.0;
    int abs_exponent = exponent < 0 ? -exponent : exponent;
    for (int i = 0; i < abs_exponent; i++) {
        result *= base;
    }
    if (exponent < 0) {
        return 1.0 / result;
    }

    return result;
}

int main() {
    double x;
    int n;
    printf("Enter base (x): ");
    scanf("%lf", &x);
    printf("Enter exponent (n): ");
    scanf("%d", &n);
    if (x == 0 && n <= 0) {
        printf("Error: Undefined mathematical operation.\n");
        return 1;
    }
    double result = calculate_power(x, n);
    printf("%.2f raised to the power of %d is: %.6f\n", x, n, result);

    return 0;
}
