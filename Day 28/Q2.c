#include <stdio.h>

struct Bank {
    int accNo;
    char name[50];
    float balance;
};

int main() {
    struct Bank b;
    float amount;

    printf("Enter Account Number: ");
    scanf("%d", &b.accNo);

    printf("Enter Name: ");
    scanf(" %[^\n]", b.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &b.balance);

    printf("Enter Deposit Amount: ");
    scanf("%f", &amount);
    b.balance += amount;

    printf("Enter Withdraw Amount: ");
    scanf("%f", &amount);

    if (amount <= b.balance)
        b.balance -= amount;
    else
        printf("Insufficient Balance\n");

    printf("\nAccount Number : %d\n", b.accNo);
    printf("Name           : %s\n", b.name);
    printf("Balance        : %.2f\n", b.balance);

    return 0;
}