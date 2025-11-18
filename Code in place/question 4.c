#include <stdio.h>

void printChar(char *p) {
    printf("Character: %c\n", *p);
}

int main() {
    char ch = 'X';
    printChar(&ch);

    return 0;
}