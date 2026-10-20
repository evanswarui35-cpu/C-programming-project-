
#include <stdio.h>

float convertToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5.0f / 9.0f;
}

int main() {
    float fahrenheit, celsius;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = convertToCelsius(fahrenheit);

    printf("Temperature in Celsius: %.2f C\n", celsius);

    return 0;
}
