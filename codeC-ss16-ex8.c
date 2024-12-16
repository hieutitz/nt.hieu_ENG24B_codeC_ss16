#include <stdio.h>
#include <string.h>

void reverseString(char *input, char *reverse) {
    int length = strlen(input);
    for (int i = 0; i < length; i++) {
        *(reverse + i) = *(input + length - i - 1);
    }
    *(reverse + length) = '\0';
}

int main() {
    char inputString[100] = "trung hieu", reverseStr[100];

    reverseString(inputString, reverseStr);

    printf("Chuoi ban dau: %s\n", inputString);
    printf("Chuoi dao nguoc: %s\n", reverseStr);

    return 0;
}

