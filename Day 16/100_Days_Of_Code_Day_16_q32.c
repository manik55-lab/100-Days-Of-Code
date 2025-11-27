#include <stdio.h>
int main() {
    int num, rev = 0, r, o;
    printf("Enter a number: ");
    scanf("%d", &num);
    o = num;
    while (num != 0) {
        r = num % 10;
        rev = rev * 10 + r;
        num /= 10;
    }
    if (o == rev) {
        printf("%d is a palindrome.\n", o);
    } else {
        printf("%d is not a palindrome.\n", o);
    }
    return 0;
}