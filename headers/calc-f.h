#include <stdio.h>
#include <math.h>

double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) { return b != 0 ? a / b : 0; }
double exponentiate(double base, double exp) { return pow(base, exp); }
double root(double a) { return a < 0 ? -1 : sqrt(a); }

unsigned long long fakultaet(int n) {
    if (n < 0) return 0;
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) result *= i;
    return result;
}
