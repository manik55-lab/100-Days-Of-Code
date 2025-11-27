#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a, const void *b) {
    return (*(int*)a) - (*(int*)b);
}
int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int *arr = malloc(n * sizeof(int));
    printf("Enter %d integers (one element repeated): ", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    qsort(arr, n, sizeof(int), cmp);
    int repeated = -1;
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i-1]) { repeated = arr[i]; break; }
    }
    if (repeated == -1) printf("No repeated element found\n");
    else printf("Repeated element: %d\n", repeated);
    free(arr);
    return 0;
}
