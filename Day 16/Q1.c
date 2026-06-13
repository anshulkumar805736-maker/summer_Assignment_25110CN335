#include <stdio.h>

int main() {
    int arr[] = {1, 2, 4, 5};
    int n = 5;
    int sum = n * (n + 1) / 2;
    int arrSum = 0;

    for (int i = 0; i < n - 1; i++) {
        arrSum += arr[i];
    }

    printf("Missing Number = %d", sum - arrSum);

    return 0;
}