#include <stdio.h>
int main() {
    int a, b, temp;
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);
    if (a <= 0 || b <= 0) {
        printf("Please enter positive integers only.\n");
        return 0;
    }
    int x = a, y = b;
    while (y != 0) {
        temp = y;
        y = x % y;
        x = temp;
    }
    printf("HCF (GCD) of %d and %d is %d\n", a, b, x);
    return 0;
}