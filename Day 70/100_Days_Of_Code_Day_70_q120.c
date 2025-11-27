#include <stdio.h>
#include <ctype.h>
int main() {
    char s[1000];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    int newWord = 1;
    for (int i = 0; s[i] != '\0'; i++) {
        if (isspace((unsigned char)s[i])) {
            newWord = 1;
        } else {
            if (newWord) {
                s[i] = toupper((unsigned char)s[i]);
                newWord = 0;
            } else {
                s[i] = tolower((unsigned char)s[i]);
            }
        }
    }
    printf("Title case: %s", s);
    return 0;
}