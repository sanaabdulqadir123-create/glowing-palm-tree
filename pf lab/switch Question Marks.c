##include <stdio.h>

int main() {
    float ntsMarks, fscMarks;
    int choice;

    printf("Enter your NTS marks: ");
    scanf("%f", &ntsMarks);
    printf("Enter your F.Sc marks: ");
    scanf("%f", &fscMarks);

    printf("Which university would you like to apply for?\n");
    printf("1. University A (NTS > 70 && F.Sc > 80)\n");
    printf("2. University B (NTS > 60 && F.Sc > 70)\n");
    printf("3. University C (NTS > 50 && F.Sc > 60)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            if (ntsMarks > 70 && fscMarks > 80) {
                printf("You are eligible for University A.\n");
            } else {
                printf("You are not eligible for University A.\n");
            }
            break;
        case 2:
            if (ntsMarks > 60 && fscMarks > 70) {
                printf("You are eligible for University B.\n");
            } else {
                printf("You are not eligible for University B.\n");
            }
            break;
        case 3:
            if (ntsMarks > 50 && fscMarks > 60) {
                printf("You are eligible for University C.\n");
            } else {
                printf("You are not eligible for University C.\n");
            }
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}