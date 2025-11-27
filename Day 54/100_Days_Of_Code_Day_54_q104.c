#include <stdio.h>
#include <math.h>
int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    long long total = (long long)n * (n + 1) / 2;
    long long x2 = total;
    long long x = sqrt(x2);
    if (x * x == x2)
        printf("Pivot integer = %lld\n", x);
    else
        printf("-1\n");
    return 0;
}