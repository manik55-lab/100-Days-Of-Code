#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *fp;
    char filename[100];
    int sum = 0, count = 0;
    int num;
    printf("Enter filename: ");
    scanf("%s", filename);
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Cannot open file.\n");
        return 1;
    }
    while (fscanf(fp, " %d", &num) == 1) {
        sum += num;
        count++;
    }
    fclose(fp);
    if (count == 0) {
        printf("No integers found in the file.\n");
        return 0;
    }
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", (float)sum / count);
    return 0;
}