#include <stdio.h>

int main() {
    float dataused, bill = 0;
    printf("Enter data used in GB: ");
    scanf("%f", &dataused);

    if (dataused <= 100) {
        bill = dataused * 2;
    } else if (dataused <= 200) {
        bill = 100 * 2 + (dataused - 100) * 1.5;
    } else if (dataused <= 400) {
        bill = 100 * 2 + 100 * 1.5 + (dataused - 200) * 1;
    } else {
        bill = 100 * 2 + 100 * 1.5 + 200 * 1 + (dataused - 400) * 0.5;
    }

    // Add 10% service tax
    bill += bill * 0.1;

    printf("Total bill: Rs %.2f\n", bill);
    return 0;
}