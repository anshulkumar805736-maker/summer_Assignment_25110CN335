#include <stdio.h>

int main() {
    int r, c, i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int A[r][c];

    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &A[i][j]);

    printf("Transpose Matrix:\n");
    for(i = 0; i < c; i++) {
        for(j = 0; j < r; j++)
            printf("%d ", A[j][i]);
        printf("\n");
    }

    return 0;
}