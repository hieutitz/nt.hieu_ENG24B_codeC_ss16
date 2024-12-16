#include <stdio.h>

void sum(int *a, int *b, int *result) {
    *result = *a + *b;
}

int main() {
    int x = 6, y = 1, result = 0;

    sum(&x, &y, &result);

    printf("Tong cua %d va %d la: %d\n", x, y, result);

    return 0;
}

