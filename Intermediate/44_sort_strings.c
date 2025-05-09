#include <stdio.h>
#include <string.h>

// Program to sort strings in lexicographical order
int main() {
    char str[10][50], temp[50];
    int n;

    printf("Enter number of strings (max 10): ");
    scanf("%d", &n);

    printf("Enter %d strings:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%s", str[i]);

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(str[i], str[j]) > 0) {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }

    printf("Sorted strings:\n");
    for (int i = 0; i < n; i++)
        printf("%s\n", str[i]);

    return 0;
}