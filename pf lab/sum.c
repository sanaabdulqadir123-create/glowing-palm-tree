#include <stdio.h>

int main() {
    double sum = 1.0; // Starting with 1
    int i = 4; // Starting denominator

    while (i <= 400) {
        sum += 1.0 / i;
        i += 4; // Increment denominator by 4
    }

    printf("The sum of the series is: %f\n", sum);
    return 0;
}