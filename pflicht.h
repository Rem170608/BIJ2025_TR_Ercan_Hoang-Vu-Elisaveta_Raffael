//
// Created by bulga on 20.08.2025.
//

#ifndef MATHEFUNKTIONEN_H
#define MATHEFUNKTIONEN_H

#include <math.h>  // Für sqrt und pow

// Grundrechenarten
double addd(int *numbers, int n);
double sub(int *numbers, int n);
double mul(int *numbers, int n);
double divi(int *numbers, int n);

// Neue Funktionen
double exponent(double basis, double exponent);   // Potenz
double wurzel(double zahl);                        // Quadratwurzel
unsigned long long fakultaet(int n);              // Fakultät

#endif