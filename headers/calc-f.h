#include <stdio.h>

void add(int a, int b) {
    printf("Result: %d\n", a + b);
}

void subtract(int a, int b) {
    printf("Result: %.2f\n", a - b);
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
void exponentiate(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    printf("Result: %d\n", result);
}

void root(int a) {
    if (a < 0) {
        printf("Error: Cannot calculate root of a negative number.\n");
        return;
    }
    int res = 0;
    while (res * res <= a) {
        res++;
    }
    res--;
    printf("Result: %d\n", res);
}

unsigned long long fakultaet(int n) {
    if (n < 0) return 0; 
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}
