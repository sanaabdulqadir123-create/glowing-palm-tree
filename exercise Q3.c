#include <stdio.h>

int main() {
    float cost;

    printf("Enter the cost of shopping: ");
    scanf("%f", &cost);

    float discount = 0;

    if (cost <= 1999) {
        discount = 0.50; // 50% discount
    } else if (cost <= 4000) {
        discount = 0.20; // 20% discount
    } else if (cost <= 6000) {
        discount = 0.30; // 30% discount
    } else {
        discount = 0.50; // 50% discount
    }

    float savedAmount = cost * discount;
    float amountAfterDiscount = cost - savedAmount;

    printf("Actual amount: %.2f\n", cost);
    printf("Saved amount: %.2f\n", savedAmount);
    printf("Amount after discount: