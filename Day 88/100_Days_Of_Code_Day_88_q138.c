#include <stdio.h>

enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int main() {
    enum TrafficLight t;
    const char *names[] = {"RED", "YELLOW", "GREEN"};

    for (t = RED; t <= GREEN; t++) {
        printf("%s=%d\n", names[t], t);
    }

    return 0;
}