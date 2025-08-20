//
// Created by bulga on 20.08.2025.
//

#ifndef RECHNER_H
#define RECHNER_H

#include <stdio.h>
#include <math.h>

// Addition
static inline double add(int *numbers, int n) {
    double result = 0;
    for (int i = 0; i < n; i++) result += numbers[i];
    return result;
}

// Subtraktion
static inline double sub(int *numbers, int n) {
    double result = numbers[0];
    for (int i = 1; i < n; i++) result -= numbers[i];
    return result;
}

// Multiplikation
static inline double mul(int *numbers, int n) {
    double result = 1;
    for (int i = 0; i < n; i++) result *= numbers[i];
    return result;
}

// Division
static inline double divi(int *numbers, int n) {
    double result = numbers[0];
    for (int i = 1; i < n; i++) {
        if (numbers[i] == 0) {
            printf("Fehler: Division durch 0!\n");
            return 0;
        }
        result /= numbers[i];
    }
    return result;
}

// Potenzen
static inline double power(int *numbers, int n) {
    double result = numbers[0];
    for (int i = 1; i < n; i++) {
        result = pow(result, numbers[i]);
    }
    return result;
}

// Wurzeln
static inline double wurzel(int *numbers, int n) {
    double result = numbers[0];
    for (int i = 1; i < n; i++) {
        if (numbers[i] <= 0) {
            printf("Fehler: Wurzelexponent muss positiv sein!\n");
            return 0;
        }
        result = pow(result, 1.0 / numbers[i]);
    }
    return result;
}

// Fakultät (Helferfunktion)
static inline long long fakultaet_einzeln(int x) {
    if (x < 0) {
        printf("Fehler: Fakultät von negativer Zahl nicht definiert!\n");
        return 0;
    }
    long long res = 1;
    for (int i = 1; i <= x; i++) res *= i;
    return res;
}

// Fakultät (für mehrere Zahlen)
static inline double fakultaet(int *numbers, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d! = %lld\n", numbers[i], fakultaet_einzeln(numbers[i]));
    }
    return 0;
}

#endif