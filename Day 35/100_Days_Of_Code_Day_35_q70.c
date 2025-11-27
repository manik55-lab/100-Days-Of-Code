#include <stdio.h>
int main() {
    int n, k, i;
    int arr[100], rotated[100];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter k (number of positions to rotate): ");
    scanf("%d", &k);
    k = k % n;
    for (i = 0; i < n; i++) {
        rotated[(i + k) % n] = arr[i];
    }
    printf("Array after rotating right by %d positions:\n", k);
    for (i = 0; i < n; i++) {
        printf("%d ", rotated[i]);
    }
    printf("\n");
    return 0;
}