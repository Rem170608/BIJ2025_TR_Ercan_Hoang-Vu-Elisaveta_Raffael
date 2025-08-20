#include <stdio.h>

void add(double a, double b) {
    printf("Result: %.2f\n", a + b);
}

void subtract(int a, int b) {
    printf("Result: %d\n", a - b);
}

void multiply(int a, int b) {
    printf("Result: %d\n", a * b);
}

void divide(int a, int b) {
    if (b != 0) {
        printf("Result: %d\n", a / b);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}
