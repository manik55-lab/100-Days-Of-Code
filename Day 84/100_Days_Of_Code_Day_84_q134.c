#include <stdio.h>
#include <string.h>

enum ABC {
    A,
    B,
    C
};

int main() {
    char input[20];
    enum ABC s;

    printf("Enter Status (SUCCESS / FAILURE / TIMEOUT): ");
    scanf("%s", input);

    if (strcmp(input, "SUCCESS") == 0)
        s = A;
    else if (strcmp(input, "FAILURE") == 0)
        s = B;
    else if (strcmp(input, "TIMEOUT") == 0)
        s = C;
    else {
        printf("Invalid status entered.\n");
        return 0;
    }

    switch (s) {
        case A:
            printf("Operation completed successfully.\n");
            break;

        case B:
            printf("Operation failed.\n");
            break;

        case C:
            printf("Operation timed out.\n");
            break;
    }

    return 0;
}