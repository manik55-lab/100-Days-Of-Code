#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() {
    char name[200];
    char surname[100];
    int len, i = 0, j = 0;
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);
    len = strlen(name);
    if (name[len - 1] == '\n') {
        name[len - 1] = '\0';
        len--;
    }
    for (i = len - 1; i >= 0; i--) {
        if (name[i] == ' ') {
            break;
        }
    }
    strcpy(surname, &name[i + 1]);
    int start = 0;
    while (name[start] == ' ')
        start++;
    printf("%c. ", toupper(name[start]));
    for (j = start; j < i; j++) {
        if (name[j] == ' ' && name[j + 1] != ' ') {
            printf("%c. ", toupper(name[j + 1]));
        }
    }
    printf("%s\n", surname);
    return 0;
}