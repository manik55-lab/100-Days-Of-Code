#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, d, r1, r2;
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);
    d = b*b - 4*a*c;
    if (a == 0) {
        printf("Not a quadratic equation (a cannot be 0).\n");
    }
    else if (d > 0) {
        r1 = (-b + sqrt(d)) / (2*a);
        r2 = (-b - sqrt(d)) / (2*a);
        printf("Roots are real and distinct.\n");
        printf("Root1 = %.2f, Root2 = %.2f\n", r1, r2);
    }
    else if (d == 0) {
        r1 = r2 = -b / (2*a);
        printf("Roots are real and equal.\n");
        printf("Root1 = Root2 = %.2f\n", r1);
    }
    else {
        float realPart = -b / (2*a);
        float imaginaryPart = sqrt(-d) / (2*a);
        printf("Roots are imaginary (complex).\n");
        printf("Root1 = %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("Root2 = %.2f - %.2fi\n", realPart, imaginaryPart);
    }
    return 0;
}