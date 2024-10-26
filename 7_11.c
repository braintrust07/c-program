#include <stdio.h>

float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main() {
    float a,b;
    char op;
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op); // Note the space before %c to ignore any whitespace
    printf("Enter first number: ");
    scanf("%f", &a);
    printf("Enter second number: ");
    scanf("%f", &b);

    switch (op) {
        case '+':
            printf("Result: %.2f\n", add(a,b));
            break;
        case '-':
            printf("Result: %.2f\n", subtract(a,b));
            break;
        case '*':
            printf("Result: %.2f\n", multiply(a,b));
            break;
        case '/':
            if (b != 0)
                printf("Result: %.2f\n", divide(a,b));
            else
                printf("Error: Division by zero is undefined.\n");
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
