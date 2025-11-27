#include <stdio.h>
int main() {
    int n, key, low, high, mid, index = -1;
    printf("Enter number of elements in the sorted array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements in ascending order:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &key);
    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            index = mid;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    printf("%d\n", index);
    return 0;
}