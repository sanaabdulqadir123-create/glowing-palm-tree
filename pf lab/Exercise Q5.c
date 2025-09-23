#include <stdio.h>

int checkDivisibilityBy7(int num) {
    while (num > 9) { // Continue until we get a number with one or two digits
        int lastDigit = num % 10;
        int remainingNum = num / 10;
        num = remainingNum - lastDigit * 2;
    }
    // Using ternary operator to check divisibility by 7
    return (num == 0 || num == 7 || num == -7) ? 1 : 0;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (checkDivisibilityBy7(number)) {
        printf("%d is divisible by 7.\n", number);
    } else {
        printf("%d is not divisible by 7.\n", number);
    }
    
    return 0;
}