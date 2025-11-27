#include <stdio.h>
#include <string.h>
int main() {
    char str1[200], str2[200];
    int freq[256] = {0};
    int i;
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';
    if (strlen(str1) != strlen(str2)) {
        printf("Not anagrams.\n");
        return 0;
    }
    for (i = 0; str1[i] != '\0'; i++) {
        freq[(unsigned char)str1[i]]++;
    }
    for (i = 0; str2[i] != '\0'; i++) {
        freq[(unsigned char)str2[i]]--;
    }
    for (i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("Not anagrams.\n");
            return 0;
        }
    }
    printf("The strings are anagrams!\n");
    return 0;
}