#include <stdio.h>
int main() {
    int arr[100], n, index, value;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the index to insert (0 to %d): ", n);
    scanf("%d", &index);
    printf("Enter the value to insert: ");
    scanf("%d", &value);
    if (index < 0 || index > n) {
        printf("Invalid index!\n");
    } else {
        for (int i = n; i > index; i--) {
            arr[i] = arr[i - 1];
        }
        arr[index] = value;
        n++;
        printf("Array after insertion: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}