#include <stdio.h>

int main() {
    int r, c, i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int A[r][c], B[r][c], Diff[r][c];

    printf("Enter first matrix:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &A[i][j]);

    printf("Enter second matrix:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &B[i][j]);

    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            Diff[i][j] = A[i][j] - B[i][j];

    printf("Difference Matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++)
            printf("%d ", Diff[i][j]);
        printf("\n");
    }

    return 0;
}