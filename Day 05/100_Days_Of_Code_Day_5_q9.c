#include <stdio.h>
#include <math.h>

int main() {
    float p, r, t;
    float si, ci;
    printf("Enter the principal amount: ");
    scanf("%f", &p);
    printf("Enter the annual interest rate (as a percentage): ");
    scanf("%f", &r);
    printf("Enter the time period (in years): ");
    scanf("%f", &t);
    si = (p * r * t) / 100;
    ci = p * pow((1 + r / 100), t) - p;
    printf("\nSimple Interest: %.2f\n", si);
    printf("Compound Interest: %.2f\n", ci);
    return 0;
}