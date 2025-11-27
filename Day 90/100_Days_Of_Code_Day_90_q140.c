#include <stdio.h>
#include <string.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person p;
    char input[20];

    printf("Enter name: ");
    scanf("%s", p.name);

    printf("Enter gender (MALE / FEMALE / OTHER): ");
    scanf("%s", input);

    if (strcmp(input, "MALE") == 0)
        p.gender = MALE;
    else if (strcmp(input, "FEMALE") == 0)
        p.gender = FEMALE;
    else if (strcmp(input, "OTHER") == 0)
        p.gender = OTHER;
    else {
        printf("Invalid gender input.\n");
        return 0;
    }

    // Print result
    printf("\nName: %s\n", p.name);

    switch (p.gender) {
        case MALE:
            printf("Gender: MALE\n");
            break;
        case FEMALE:
            printf("Gender: FEMALE\n");
            break;
        case OTHER:
            printf("Gender: OTHER\n");
            break;
    }

    return 0;
}