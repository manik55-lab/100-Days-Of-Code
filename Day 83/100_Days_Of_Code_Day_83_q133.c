#include <stdio.h>
#include <string.h>

enum Month {
    JANUARY,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

int main() {
    char input[20];
    enum Month m;

    printf("Enter month name: ");
    scanf("%s", input);

    if (strcmp(input, "January") == 0 || strcmp(input, "JANUARY") == 0)
        m = JANUARY;
    else if (strcmp(input, "February") == 0 || strcmp(input, "FEBRUARY") == 0)
        m = FEBRUARY;
    else if (strcmp(input, "March") == 0 || strcmp(input, "MARCH") == 0)
        m = MARCH;
    else if (strcmp(input, "April") == 0 || strcmp(input, "APRIL") == 0)
        m = APRIL;
    else if (strcmp(input, "May") == 0 || strcmp(input, "MAY") == 0)
        m = MAY;
    else if (strcmp(input, "June") == 0 || strcmp(input, "JUNE") == 0)
        m = JUNE;
    else if (strcmp(input, "July") == 0 || strcmp(input, "JULY") == 0)
        m = JULY;
    else if (strcmp(input, "August") == 0 || strcmp(input, "AUGUST") == 0)
        m = AUGUST;
    else if (strcmp(input, "September") == 0 || strcmp(input, "SEPTEMBER") == 0)
        m = SEPTEMBER;
    else if (strcmp(input, "October") == 0 || strcmp(input, "OCTOBER") == 0)
        m = OCTOBER;
    else if (strcmp(input, "November") == 0 || strcmp(input, "NOVEMBER") == 0)
        m = NOVEMBER;
    else if (strcmp(input, "December") == 0 || strcmp(input, "DECEMBER") == 0)
        m = DECEMBER;
    else {
        printf("Invalid month name\n");
        return 0;
    }

    switch (m) {
        case JANUARY:
            printf("January has 31 days\n");
            break;
        case FEBRUARY:
            printf("February has 28 or 29 days\n");
            break;
        case MARCH:
            printf("March has 31 days\n");
            break;
        case APRIL:
            printf("April has 30 days\n");
            break;
        case MAY:
            printf("May has 31 days\n");
            break;
        case JUNE:
            printf("June has 30 days\n");
            break;
        case JULY:
            printf("July has 31 days\n");
            break;
        case AUGUST:
            printf("August has 31 days\n");
            break;
        case SEPTEMBER:
            printf("September has 30 days\n");
            break;
        case OCTOBER:
            printf("October has 31 days\n");
            break;
        case NOVEMBER:
            printf("November has 30 days\n");
            break;
        case DECEMBER:
            printf("December has 31 days\n");
            break;
    }

    return 0;
}