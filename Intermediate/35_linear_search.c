#include <stdio.h>

// Program to perform linear search in an array
int main() {
    int a[100], n, x, i, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &x);

    for (i = 0; i < n; i++) {
        if (a[i] == x) {
            printf("Element %d found at index %d\n", x, i);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Element not found.\n");

    return 0;
}