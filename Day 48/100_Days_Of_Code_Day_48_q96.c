#include <stdio.h>
#include <string.h>
void reverse(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
int main() {
    char str[300];
    int start = 0, i;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    for (i = 0; i <= len; i++) {
        if (str[i] == ' ' || str[i] == '\0' || str[i] == '\n') {
            reverse(str, start, i - 1);
            start = i + 1;
        }
    }
    printf("Output: %s", str);
    return 0;
}