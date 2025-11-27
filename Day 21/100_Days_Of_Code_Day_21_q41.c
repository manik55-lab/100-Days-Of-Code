#include <stdio.h>
#include <math.h>
int main() {
    int num, firstDigit, lastDigit, digits, newNum, middlePart;
    printf("Enter a positive number: ");
    scanf("%d", &num);
    if (num < 10) {
        printf("Number has only one digit, swapping not required: %d\n", num);
        return 0;
    }
    int original = num;
    lastDigit = num % 10;
    digits = (int)log10(num) + 1;
    firstDigit = num / (int)pow(10, digits - 1);
    middlePart = num % (int)pow(10, digits - 1);
    middlePart /= 10; // remove last digit
    newNum = lastDigit * (int)pow(10, digits - 1) + middlePart * 10 + firstDigit;
    printf("Number after swapping first and last digits: %d\n", newNum);
    return 0;
}