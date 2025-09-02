#include <stdio.h>

int main() {
    int arr[15] = {4, 7, 2, 4, 9, 1, 7, 3, 6, 2, 5, 8, 9, 0, 6};
    int i, j;

    printf("Duplicate numbers:\n");

    for (i = 0; i < 15; i++) {
        for (j = i + 1; j < 15; j++) {
            if (arr[i] == arr[j]) {
                printf("%d\n", arr[i]);
                break;  // Just print once for each duplicate
            }
        }
    }

    return 0;
}

