#include <stdio.h>

int main() {
    // Loop through numbers from 1 to 20
    for (int num = 1; num <= 20; num++) {
        // Check if the number is odd
        if (num % 2 != 0) {
            printf("%d\n", num);
        }
    }
    return 0;
}