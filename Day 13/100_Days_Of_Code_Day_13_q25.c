#include <stdio.h>
int main() {
    char op;
    double num1, num2;
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);
    if (op == '+') {
        printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
    }
    else if (op == '-') {
        printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
    }
    else if (op == '*') {
        printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
    }
    else if (op == '/') {
        if (num2 != 0)
            printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
        else
            printf("Error: Division by zero is not allowed.\n");
    }
    else if (op == '%') {
        if ((int)num2 != 0)
            printf("%d %% %d = %d\n", (int)num1, (int)num2, (int)num1 % (int)num2);
        else
            printf("Error: Division by zero is not allowed.\n");
    }
    else {
        printf("Invalid operator! Please enter +, -, *, /, or %%.\n");
    }
    return 0;
}