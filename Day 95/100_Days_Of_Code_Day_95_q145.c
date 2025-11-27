#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student findTopper(struct Student s[], int n);

int main() {
    struct Student s[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll No: ");
        scanf("%d", &s[i].roll_no);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    struct Student topper = findTopper(s, 5);

    printf("\n--- Top Student ---\n");
    printf("Name: %s\n", topper.name);
    printf("Roll No: %d\n", topper.roll_no);
    printf("Marks: %.2f\n", topper.marks);

    return 0;
}

struct Student findTopper(struct Student s[], int n) {
    int i, topIndex = 0;

    for (i = 1; i < n; i++) {
        if (s[i].marks > s[topIndex].marks) {
            topIndex = i;
        }
    }

    return s[topIndex];
}