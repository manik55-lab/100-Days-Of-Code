#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *in, *out;
    char inFile[100], outFile[100];
    int ch;
    printf("Enter input filename: ");
    scanf("%s", inFile);
    printf("Enter output filename: ");
    scanf("%s", outFile);
    in = fopen(inFile, "r");
    if (in == NULL) {
        printf("Error: Cannot open %s\n", inFile);
        return 1;
    }
    out = fopen(outFile, "w");
    if (out == NULL) {
        printf("Error: Cannot open %s\n", outFile);
        fclose(in);
        return 1;
    }
    while ((ch = fgetc(in)) != EOF) {
        if (ch >= 'a' && ch <= 'z')
            ch = ch - 32;
        fputc(ch, out);
    }
    printf("File converted successfully.\n");
    fclose(in);
    fclose(out);
    return 0;
}