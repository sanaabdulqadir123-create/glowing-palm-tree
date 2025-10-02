#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9.0/5.0) + 32;
    printf("%.2f Celsius is %.2f Fahrenheit\n", celsius, fahrenheit);

    // Observations for specific inputs:
    // - For input 100 Celsius: 100 C = 212 F (boiling point of water)
    // - For input 0 Celsius: 0 C = 32 F (freezing point of water)
    // - For input -40 Celsius: -40 C = -40 F (interesting coincidence where C = F)

    return 0;
}