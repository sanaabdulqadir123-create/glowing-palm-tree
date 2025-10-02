#include <stdio.h>

int main() {
    char choice;

    printf("Are you sure to delete [Y/y]/[N/n]? ");
    scanf(" %c", &choice);

    switch (choice) {
        case 'Y':
        case 'y':
            printf("Deleted successfully\n");
            break;
        case 'N':
        case 'n':
            printf("Delete cancelled\n");
            break;
        default:
            printf("choose the right option\n");
            break;
    }

    return 0;
}