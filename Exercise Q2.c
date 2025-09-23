#include <stdio.h>

int main() {
    unsigned char num;   // 8-bit variable
    printf("Enter an 8-bit number (0-255): ");
    scanf("%hhu", &num);

    printf("Original number: %u\n", num);

    // Clear 4th and 7th bits directly
    num = num & ~( (1 << 3) | (1 << 6) );

    printf("Modified number: %u\n", num);

    return 0;
}