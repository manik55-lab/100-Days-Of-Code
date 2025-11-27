#include <stdio.h>
#include <string.h>
int main() {
    char str[300];
    char longest[100];
    int maxLen = 0, currLen = 0;
    int start = 0, end = 0;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; ; i++) {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            currLen++;
        }
        else {
            if (currLen > maxLen) {
                maxLen = currLen;
                end = i;
                start = i - currLen;
            }
            currLen = 0;
        }
        if (str[i] == '\0') break;
    }
    int j = 0;
    for (int i = start; i < end; i++) {
        longest[j++] = str[i];
    }
    longest[j] = '\0';
    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);
    return 0;
}