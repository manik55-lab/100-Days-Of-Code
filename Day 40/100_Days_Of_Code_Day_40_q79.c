#include <stdio.h>
int main() {
    int n;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);
    int matrix[10][10];
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\nDiagonal Traversal of the Matrix:\n");
    for (int k = 0; k < n; k++) {
        int i = k, j = 0;
        while (i >= 0 && j < n) {
            printf("%d ", matrix[i][j]);
            i--;
            j++;
        }
        printf("\n");
    }
    for (int k = 1; k < n; k++) {
        int i = n - 1, j = k;
        while (i >= 0 && j < n) {
            printf("%d ", matrix[i][j]);
            i--;
            j++;
        }
        printf("\n");
    }
    return 0;
}