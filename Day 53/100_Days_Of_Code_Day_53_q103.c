#include <stdio.h>
int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int total = 0;
    for (int i = 0; i < n; i++)
        total += arr[i];
    int left = 0;
    for (int i = 0; i < n; i++) {
        int right = total - left - arr[i];
        if (left == right) {
            printf("Pivot index = %d\n", i);
            return 0;
        }
        left += arr[i];
    }
    printf("Pivot index = -1\n");
    return 0;
}