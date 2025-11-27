#include <stdio.h>
int main() {
    float c, f;
    printf("\nEnter the Temperature in Celsius: ");
    scanf("%f", &c);
    f= (1.8 * c) + 32;
    printf("\nTemperature in Fahrenheit: %.2f\n", f);
    return 0;
}
