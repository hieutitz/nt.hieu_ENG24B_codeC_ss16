#include <stdio.h>

void addElement(int *arr, int *size, int value, int position) {
    for (int i = *size; i > position; i--) {
        *(arr + i) = *(arr + i - 1);
    }
    *(arr + position) = value;
    (*size)++;
}

int main() {
    int array[100] = {1, 2, 4, 5, 6};
    int size = 5;
    int value = 7;
    int position = 2;

    addElement(array, &size, value, position);

    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

