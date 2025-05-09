#include <stdio.h>

// Program to make a simple calculator using functions
float add(float a, float b) { return a + b; }
float subtract(float a, float b) { return a - b; }
float multiply(float a, float b) { return a * b; }
float divide(float a, float b) { return b != 0 ? a / b : 0; }

int main() {
    char op;
    float a, b;

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter two operands: ");
    scanf("%f %f", &a, &b);

    switch (op) {
        case '+': printf("Result: %.2f\n", add(a, b)); break;
        case '-': printf("Result: %.2f\n", subtract(a, b)); break;
        case '*': printf("Result: %.2f\n", multiply(a, b)); break;
        case '/': printf("Result: %.2f\n", divide(a, b)); break;
        default: printf("Invalid operator\n");
    }

    return 0;
}