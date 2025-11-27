#include <stdio.h>
#include <ctype.h>
int main() {
    char name[200];
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);
    int i = 0;
    while (name[i] == ' ') 
        i++;
    if (name[i] != '\0') {
        printf("%c", toupper(name[i]));
    }
    for (; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i+1] != ' ' && name[i+1] != '\0') {
            printf("%c", toupper(name[i+1]));
        }
    }
    printf("\n");
    return 0;
}
