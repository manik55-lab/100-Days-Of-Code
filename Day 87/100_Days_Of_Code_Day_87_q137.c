#include <stdio.h>
#include <string.h>

enum Role {
    ADMIN,
    USER,
    GUEST
};

int main() {
    char input[20];
    enum Role r;

    printf("Enter role (ADMIN / USER / GUEST): ");
    scanf("%s", input);

    // Convert string to enum value
    if (strcmp(input, "ADMIN") == 0)
        r = ADMIN;
    else if (strcmp(input, "USER") == 0)
        r = USER;
    else if (strcmp(input, "GUEST") == 0)
        r = GUEST;
    else {
        printf("Invalid role entered.\n");
        return 0;
    }

    switch (r) {
        case ADMIN:
            printf("Welcome, Admin! \n");
            break;

        case USER:
            printf("Hello User! \n");
            break;

        case GUEST:
            printf("Welcome Guest! \n");
            break;
    }

    return 0;
}