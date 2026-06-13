#include <stdio.h>

int main() {
    int arr[] = {2, 3, 4, 2, 3, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxCount = 0, maxElement;

    for (int i = 0; i < n; i++) {
        int count = 1;

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > maxCount) {
            maxCount = count;
            maxElement = arr[i];
        }
    }

    printf("Maximum Frequency Element = %d\n", maxElement);
    printf("Frequency = %d\n", maxCount);

    return 0;
}