#include <stdio.h>
int main() {
    char str[200];
    int freq[26] = {0};
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            if (freq[ch - 'a'] == 1) {
                printf("First repeating lowercase character: %c\n", ch);
                return 0;
            }
            freq[ch - 'a']++;
        }
    }
    printf("No repeating lowercase alphabet found.\n");
    return 0;
}
