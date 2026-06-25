#include <stdio.h>

int main() {
    float basic, hra, da, grossSalary;

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    hra = basic * 0.20;  // 20% HRA
    da = basic * 0.10;   // 10% DA

    grossSalary = basic + hra + da;

    printf("\nSalary Details\n");
    printf("Basic Salary : %.2f\n", basic);
    printf("HRA          : %.2f\n", hra);
    printf("DA           : %.2f\n", da);
    printf("Gross Salary : %.2f\n", grossSalary);

    return 0;
}