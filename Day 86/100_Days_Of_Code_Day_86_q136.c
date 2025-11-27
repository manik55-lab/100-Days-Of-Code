#include <stdio.h>

enum Menu {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main() {
    int choice;
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("\nMenu:\n");
    printf("1. ADD\n");
    printf("2. SUBTRACT\n");
    printf("3. MULTIPLY\n");

    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    enum Menu m = choice;

    switch (m) {
        case ADD:
            printf("Result = %d\n", a + b);
            break;

        case SUBTRACT:
            printf("Result = %d\n", a - b);
            break;

        case MULTIPLY:
            printf("Result = %d\n", a * b);
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}