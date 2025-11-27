#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *fp;
    char filename[100];
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;
    int c;
    printf("Enter filename: ");
    scanf("%s", filename);
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }
    while ((c = fgetc(fp)) != EOF) {
        characters++;
        if (c == '\n')
            lines++;
        if (!isspace(c) && inWord == 0) {
            inWord = 1;
            words++;
        } 
        else if (isspace(c)) {
            inWord = 0;
        }
    }
    fclose(fp);
    printf("\n--- File Statistics ---\n");
    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);
    return 0;
}