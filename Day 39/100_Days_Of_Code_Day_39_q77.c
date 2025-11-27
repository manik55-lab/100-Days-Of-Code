#include <stdio.h>
int main() {
    int n;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);
    int matrix[10][10];
    int diagonal[10];
    int distinct = 1;
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        diagonal[i] = matrix[i][i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (diagonal[i] == diagonal[j]) {
                distinct = 0;
                break;
            }
        }
        if (!distinct)
            break;
    }
    if (distinct)
        printf("\nAll diagonal elements are distinct.\n");
    else
        printf("\nDiagonal elements are not distinct.\n");
    return 0;
}