#include <stdio.h>

int main() {
    int num1, num2, temp;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("\nBefore swapping:\n");
    printf("First number (num1) = %d\n", num1);
    printf("Second number (num2) = %d\n", num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("\nAfter swapping:\n");
    printf("First number (num1) = %d\n", num1);
    printf("Second number (num2) = %d\n", num2);
    return 0;
}