#include <stdio.h>
int main() {
    int num, remainder, product = 1;
    int hasOdd = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    int original = num;
    if (num < 0) {
        num = -num;
    }
    while (num != 0) {
        remainder = num % 10;
        if (remainder % 2 != 0) {
            product *= remainder;
            hasOdd = 1;
        }
        num /= 10;
    }
    if (hasOdd) {
        printf("Product of odd digits of %d is %d\n", original, product);
    } else {
        printf("No odd digits found in %d\n", original);
    }
    return 0;
}