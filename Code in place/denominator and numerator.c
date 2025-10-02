#include <stdio.h>

int main() {
    float numerator, denominator, result;

    printf("Enter numerator: ");
    scanf("%f", &numerator);

    printf("Enter denominator: ");
    scanf("%f", &denominator);

    if (denominator == 0) {
        printf("Error: Division by zero is not allowed.\n");
    } else {
        result = numerator / denominator;
        printf("Result: %.2f\n", result);
    }

    return 0;
}