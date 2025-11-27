#include <stdio.h>
int main() {
    int n, i;
    double sum = 0.0;
    int numerator = 1;
    int denominator = 1;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        sum += (double)numerator / denominator;
        numerator += 2;
        denominator += 2;
    }
    printf("Approximate sum: %.1lf\n", sum);
    return 0;
}