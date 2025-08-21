//
// Created by bulga on 21.08.2025.
//

#ifndef fläche_H
#define fläche_H

#include <stdio.h>

// Kreisfläche (π ~ 3.14 als Näherung)
static inline int flaeche_kreis(int r) {
    return (int)(3.14 * r * r);
}

// Quadratfläche
static inline int flaeche_quadrat(int a) {
    return a * a;
}

// Rechteckfläche
static inline int flaeche_rechteck(int a, int b) {
    return a * b;
}

// Dreiecksfläche
static inline int flaeche_dreieck(int grundseite, int hoehe) {
    return (grundseite * hoehe) / 2;
}

// Trapezfläche
static inline int flaeche_trapez(int a, int b, int h) {
    return ((a + b) * h) / 2;
}

// Menü anzeigen
static inline void menue_anzeigen() {
    printf("\n--- Geometrie Rechner ---\n");
    printf("1) Kreis\n");
    printf("2) Quadrat\n");
    printf("3) Rechteck\n");
    printf("4) Dreieck\n");
    printf("5) Trapez\n");
    printf("Wähle eine Figur (1-5): ");
}

#endif