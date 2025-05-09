#include <stdio.h>
#include <stdlib.h>

// Program to write and read a file
int main() {
    FILE *fptr;
    char ch;

    fptr = fopen("file.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fprintf(fptr, "Hello, this is a test file.\nWelcome to C programming.");
    fclose(fptr);

    fptr = fopen("file.txt", "r");
    if (fptr == NULL) {
        printf("Error reading file.\n");
        return 1;
    }

    printf("Contents of file:\n");
    while ((ch = fgetc(fptr)) != EOF)
        putchar(ch);

    fclose(fptr);
    return 0;
}