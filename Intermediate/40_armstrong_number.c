#include <stdio.h>
#include <math.h>

// Program to check if a number is an Armstrong number
int main() {
    int num, original, rem, n = 0;
    float result = 0.0;

    printf("Enter an integer: ");
    scanf("%d", &num);
    original = num;

    for (int temp = num; temp != 0; temp /= 10, ++n);

    for (int temp = num; temp != 0; temp /= 10) {
        rem = temp % 10;
        result += pow(rem, n);
    }

    if ((int)result == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);

    return 0;
}