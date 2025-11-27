#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    float marks;
};
int main() {
    FILE *fp;
    struct Student s;
    int n, i;
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    printf("Enter number of students: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("\n--- Enter details for Student %d ---\n", i + 1);
        printf("Enter name: ");
        scanf("%s", s.name);
        printf("Enter roll number: ");
        scanf("%d", &s.roll);
        printf("Enter marks: ");
        scanf("%f", &s.marks);
        fprintf(fp, "%s %d %.2f\n", s.name, s.roll, s.marks);
    }
    fclose(fp);
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    printf("\n--- Student Records in File ---\n");
    while (fscanf(fp, "%s %d %f", s.name, &s.roll, &s.marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %.2f\n", s.name, s.roll, s.marks);
    }
    fclose(fp);
    return 0;
}