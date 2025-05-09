#include <stdio.h>

// Program to find the transpose of a matrix
int main() {
    int a[10][10], transpose[10][10], r, c;

    printf("Enter number of rows and columns: ");
    scanf("%d%d", &r, &c);

    printf("Enter elements of matrix:\n");
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
            scanf("%d", &a[i][j]);

    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
            transpose[j][i] = a[i][j];

    printf("Transpose of the matrix:\n");
    for (int i = 0; i < c; ++i) {
        for (int j = 0; j < r; ++j)
            printf("%d ", transpose[i][j]);
        printf("\n");
    }
    return 0;
}