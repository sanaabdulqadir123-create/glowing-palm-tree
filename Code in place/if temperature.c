  #include <stdio.h>

int main() {
    float temperature;
    
    printf("Enter temperature: ");
    scanf("%f", &temperature);
    
    if (temperature > 30) {
        printf("Weather is Hot\n");
    }
    
    return 0;
}