#include <stdio.h>
int main() {
    FILE *fp;
    char filename[100];
    char text[200];
    printf("Enter filename: ");
    scanf("%s", filename);
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }
    printf("Enter text to append: ");
    getchar(); 
    fgets(text, sizeof(text), stdin);
    fputs(text, fp);
    printf("Text appended successfully.\n");
    fclose(fp);
    return 0;
}