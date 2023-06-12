#include <stdio.h>

void print_diagsums(int *a, int size) {
    int sum_main = 0;
    int sum_secondary = 0;

    for (int i = 0; i < size; i++) {
        sum_main += a[i * size + i];
        sum_secondary += a[i * size + (size - 1 - i)];
    }

    printf("Sum of the main diagonal: %d\n", sum_main);
    printf("Sum of the secondary diagonal: %d\n", sum_secondary);
}
