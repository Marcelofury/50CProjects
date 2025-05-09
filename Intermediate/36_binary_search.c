#include <stdio.h>

// Program to perform binary search in a sorted array
int main() {
    int a[100], n, x, low, high, mid;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers in ascending order:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &x);

    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (a[mid] == x) {
            printf("Element %d found at index %d\n", x, mid);
            return 0;
        } else if (a[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    printf("Element not found.\n");
    return 0;
}