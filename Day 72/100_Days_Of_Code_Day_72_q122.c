#include <stdio.h>
#include <errno.h>
int main() {
    char filename[260];
    char line[1000];
    FILE *fp;
    printf("Enter filename to read (e.g. info.txt): ");
    if (fgets(filename, sizeof(filename), stdin) == NULL) return 0;
    size_t i = 0;
    while (filename[i] != '\0') {
        if (filename[i] == '\n') { filename[i] = '\0'; break; }
        i++;
    }
    fp = fopen(filename, "r");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }
    printf("File contents:\n");
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }
    fclose(fp);
    return 0;
}