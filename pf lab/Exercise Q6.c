#include <stdio.h>

int main() {
    float calories, fat_grams;

    // Input validation for calories and fat grams
    printf("Enter the number of calories and fat grams in the food: ");
    scanf("%f %f", &calories, &fat_grams);

    if (calories <= 0 || fat_grams < 0 || (fat_grams * 9) > calories) {
        printf("Error: Invalid input for calories or fat grams.\n");
    } else {
        // Calculate percentage of calories from fat
        float calories_from_fat = fat_grams * 9;
        float percentage = (calories_from_fat / calories) * 100;

        printf("Percentage of calories from fat: %.2f%%\n", percentage);

        // Check if food is low in fat
        if (percentage < 30) {
            printf("The food is low in fat.\n");
        }
    }

    return 0;
}