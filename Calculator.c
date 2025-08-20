#include <stdio.h>
#include "./heraders/calc-f.h"

int main() {
    int a, b;
    char op;
    printf("Version \x1b[31m1.5\x1b[0m\n");
    printf("Welcome to the Calcinator 3000\n");
    printf("\x1b[4mSupported Operations\x1b[0m:\n");
    printf("\x1b[31m+ = Addition\x1b[0m\n");
    printf("\x1b[33m- = Subtraction\x1b[0m\n");
    printf("\x1b[32m* = Multiplication\x1b[0m\n");
    printf("\x1b[34m/ = Division\x1b[0m\n");
    printf("Enter calculation:\n");
    if (scanf("%d %c %d", &a, &op, &b) != 3) {
        printf("Invalid input. Please use the format: number operator number\n");
        return 1;
    }
    switch (op) {
        case '+':
            add(a, b);
            break;
        case '-':
            subtract(a, b);
            break;
        case '*':
            multiply(a, b);
            break;
        case '/':
            divide(a, b);
            break;
        default:
            printf("Unsupported operation: %c\n", op);
    }
    return 0;
}
