#include <stdio.h>
int main() {
    char str[200];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            str[i] = ch - 32;
        }
        else if (ch >= 'A' && ch <= 'Z') {
            str[i] = ch + 32;
        }
    }
    printf("Toggled case string: %s", str);
    return 0;
}