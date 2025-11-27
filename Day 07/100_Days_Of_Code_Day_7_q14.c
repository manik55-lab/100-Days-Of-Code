#include <stdio.h>
int main() {
    char c;
    int v;
    printf("Enter an alphabet: ");
    scanf("%c", &c);
    v = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    if (v==1)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
    return 0;
}
