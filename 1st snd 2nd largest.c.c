#include <stdio.h>

int main() {
    int arr[10] = {25, 47, 12, 89, 56, 73, 19, 90, 34, 62};
    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < 10; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Largest number = %d\n", max);
    printf("Smallest number = %d\n", min);

    return 0;
}

