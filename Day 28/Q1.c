#include <stdio.h>

struct Library {
    int bookId;
    char title[50];
    int issued;
};

int main() {
    struct Library book;

    printf("Enter Book ID: ");
    scanf("%d", &book.bookId);

    printf("Enter Book Title: ");
    scanf(" %[^\n]", book.title);

    book.issued = 0;

    printf("\nBook Details\n");
    printf("Book ID : %d\n", book.bookId);
    printf("Title   : %s\n", book.title);
    printf("Status  : %s\n", book.issued ? "Issued" : "Available");

    printf("\nIssuing Book...\n");
    book.issued = 1;
    printf("Status  : %s\n", book.issued ? "Issued" : "Available");

    return 0;
}