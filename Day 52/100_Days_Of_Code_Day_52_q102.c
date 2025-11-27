#include <stdio.h>
int main() {
    int n, x;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("-1\n");
        return 0;
    }
    int arr[n];
    printf("Enter %d sorted elements (ascending): ", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("-1\n");
            return 0;
        }
    }
    printf("Enter x: ");
    if (scanf("%d", &x) != 1) {
        printf("-1\n");
        return 0;
    }
    int low = 0, high = n - 1, ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] >= x) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    printf("%d\n", ans);
    return 0;
}