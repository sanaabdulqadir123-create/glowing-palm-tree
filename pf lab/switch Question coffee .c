#include <stdio.h>

int main() {
    int choice;
    float amount;

    printf("Welcome to the Coffee Machine!\n");
    printf("1. Espresso ($1.50)\n");
    2. Latte ($2.50)\n";
    printf("3. Cappuccino ($3.00)\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("You chose Espresso. Please pay $1.50.\n");
            printf("Enter amount: ");
            scanf("%f", &amount);
            if (amount >= 1.50) {
                printf("Enjoy your Espresso!\n");
                if (amount > 1.50) {
                    printf("Here's your change: $%.2f\n", amount - 1.50);
                }
            } else {
                printf("Insufficient amount. Please try again.\n");
            }
            break;
        case