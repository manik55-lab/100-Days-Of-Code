#include <stdio.h>
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers between 0 and %d (one missing): ", n, n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int total = n * (n + 1) / 2;
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    printf("Missing number: %d\n", total - sum);
    return 0;
}