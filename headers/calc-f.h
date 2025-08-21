#include <stdio.h>


int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divide(int a, int b) { return b != 0 ? a / b : 0; }
int exponentiate(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) result *= base;
    return result;
}
int root(int a) {
    if (a < 0) return -1;
    int res = 0;
    while (res * res <= a) res++;
    return res - 1;
}
unsigned long long fakultaet(int n) {
    if (n < 0) return 0;
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) result *= i;
    return result;
}
