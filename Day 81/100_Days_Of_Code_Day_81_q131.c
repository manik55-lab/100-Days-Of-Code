#include <stdio.h>
enum Day {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};
int main() {
    enum Day d;
    for (d = SUNDAY; d <= SATURDAY; d++) {
        printf("%d -> ", d);
        switch (d) {
            case SUNDAY:    printf("SUNDAY"); break;
            case MONDAY:    printf("MONDAY"); break;
            case TUESDAY:   printf("TUESDAY"); break;
            case WEDNESDAY: printf("WEDNESDAY"); break;
            case THURSDAY:  printf("THURSDAY"); break;
            case FRIDAY:    printf("FRIDAY"); break;
            case SATURDAY:  printf("SATURDAY"); break;
        }
        printf("\n");
    }
    return 0;
}
