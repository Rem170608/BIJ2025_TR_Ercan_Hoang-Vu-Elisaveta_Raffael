//
// Created by bulga on 20.08.2025.
//

#include "mathefunktionen.h"

// Addition
double addd(int *numbers, int n) {
    double sum = 0;
    for(int i = 0; i < n; i++)
        sum += numbers[i];
    return sum;
}

// Subtraktion
double sub(int *numbers, int n) {
    if(n == 0) return 0;
    double result = numbers[0];
    for(int i = 1; i < n; i++)
        result -= numbers[i];
    return result;
}

// Multiplikation
double mul(int *numbers, int n) {
    double result = 1;
    for(int i = 0; i < n; i++)
        result *= numbers[i];
    return result;
}

// Division
double divi(int *numbers, int n) {
    if(n == 0) return 0;
    double result = numbers[0];
    for(int i = 1; i < n; i++) {
        if(numbers[i] == 0)
            return 0; // Fehler: Division durch 0
        result /= numbers[i];
    }
    return result;
}

// Exponentiation
double exponent(double basis, double exp) {
    return pow(basis, exp);
}

// Quadratwurzel
double wurzel(double zahl) {
    if(zahl < 0) {
        printf("Fehler: Wurzel aus negativer Zahl!\n");
        return 0;
    }
    return sqrt(zahl);
}

// Fakultät (nur für nicht-negative ganze Zahlen)
unsigned long long fakultaet(int n) {
    if(n < 0) {
        printf("Fehler: Fakultät einer negativen Zahl!\n");
        return 0;
    }
    unsigned long long result = 1;
    for(int i = 2; i <= n; i++)
        result *= i;
    return result;
}