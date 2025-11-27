#include <stdio.h>
int main() {
    FILE *fp;
    char filename[100];
    int ch;
    printf("Enter filename: ");
    scanf("%s", filename);
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: File does not exist.\n");
        return 1;
    }
    printf("\n--- File Content ---\n");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    fclose(fp);
    return 0;
}