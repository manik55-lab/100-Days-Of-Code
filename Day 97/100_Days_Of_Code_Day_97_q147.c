#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e[3], temp;
    FILE *fp;
    int i;

    fp = fopen("employees.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter details of 3 employees:\n");
    for (i = 0; i < 3; i++) {
        printf("\nEmployee %d\n", i + 1);

        printf("Name: ");
        scanf("%s", e[i].name);

        printf("ID: ");
        scanf("%d", &e[i].id);

        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }

    fwrite(e, sizeof(struct Employee), 3, fp);
    fclose(fp);

    fp = fopen("employees.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\n\n--- Employee Records from File ---\n");

    for (i = 0; i < 3; i++) {
        fread(&temp, sizeof(struct Employee), 1, fp);

        printf("\nEmployee %d\n", i + 1);
        printf("Name: %s\n", temp.name);
        printf("ID: %d\n", temp.id);
        printf("Salary: %.2f\n", temp.salary);
    }

    fclose(fp);
    return 0;
}