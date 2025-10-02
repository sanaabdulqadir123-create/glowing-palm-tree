#include <stdio.h>

// Function to convert Celsius to Fahrenheit
float celsiusToFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

// Function to provide weather recommendations
void weatherRecommendation(float celsius) {
    if (celsius >= 30) {
        printf("It's hot! Stay hydrated and wear light clothes.\n");
    } else if (celsius >= 20 && celsius <= 29) {
        printf("Nice weather! Perfect for outdoor activities.\n");
    } else if (celsius >= 10 && celsius <= 19) {
        printf("Cool weather. Wear a light jacket.\n");
    } else if (celsius >= 0 && celsius <= 9) {
        printf("Cold! Wear warm clothes.\n");
    } else {
        printf("Freezing! Stay indoors and bundle up.\n");
    }
}

int main() {
    float celsius;

    // Input temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Convert Celsius to Fahrenheit
    float fahrenheit = celsiusToFahrenheit(celsius);

    // Display temperature in Fahrenheit and weather recommendation
    printf("%.2f°C is equivalent to %.2f°F\n", celsius, fahrenheit);
    weatherRecommendation(celsius);

    return 0;
}