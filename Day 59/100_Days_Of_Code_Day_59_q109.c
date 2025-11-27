#include <stdio.h>
int main() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter k: ");
    scanf("%d", &k);
    if (k > n || k <= 0) {
        printf("Invalid k\n");
        return 0;
    }
    int windowSum = 0;
    for (int i = 0; i < k; i++)
        windowSum += arr[i];
    int maxSum = windowSum;
    for (int i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k];
        if (windowSum > maxSum)
            maxSum = windowSum;
    }
    printf("Maximum subarray sum of size %d = %d\n", k, maxSum);
    return 0;
}