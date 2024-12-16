#include <stdio.h>

void updateElement(int *arr, int newValue, int index) {
    *(arr + index) = newValue;
}

int main() {
    int array[] = {75, 63, 28, 57, 3999};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Mang truoc khi cap nhat: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    updateElement(array, 100, 2);

    printf("Mang sau khi cap nhat: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

