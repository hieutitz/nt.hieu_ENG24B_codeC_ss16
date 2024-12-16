#include <stdio.h>

int main() {
    char name[] = "trung hieu";
    char *ptr = name;

    printf("Gia tri cua bien: %s\n", ptr);
    printf("Dia chi cua bien: %p\n", (void*)ptr);

    return 0;
}

