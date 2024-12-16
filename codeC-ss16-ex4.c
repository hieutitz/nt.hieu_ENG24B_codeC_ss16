#include <stdio.h>

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int array[] = {75, 63, 28, 57, 3999};
    int size = sizeof(array) / sizeof(array[0]);

    printArray(array, size);

    return 0;
}

