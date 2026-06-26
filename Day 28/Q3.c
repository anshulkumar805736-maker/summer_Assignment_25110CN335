#include <stdio.h>

struct Ticket {
    char passenger[50];
    int seats;
};

int main() {
    struct Ticket t;

    printf("Enter Passenger Name: ");
    scanf(" %[^\n]", t.passenger);

    printf("Enter Number of Seats: ");
    scanf("%d", &t.seats);

    printf("\nTicket Booked Successfully\n");
    printf("Passenger Name : %s\n", t.passenger);
    printf("Seats Booked   : %d\n", t.seats);

    return 0;
}