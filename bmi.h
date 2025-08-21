//
// Created by bulga on 21.08.2025.
//

#ifndef bmi_H
#define bmi_H

#include <stdio.h>

// BMI berechnen (Gewicht in kg, Größe in cm)
static inline int bmi_berechnen(int gewicht, int groesse_cm) {
    int groesse_m = groesse_cm;
    // wir rechnen in cm, also groesse_m^2 in (cm^2)
    // BMI-Formel: gewicht / (größe_in_m^2)
    // Da wir cm haben: groesse_cm^2 / 10000, darum:
    int bmi = (gewicht * 10000) / (groesse_cm * groesse_cm);
    return bmi;
}

// BMI-Kategorie bestimmen
static inline void bmi_kategorie(int bmi) {
    if (bmi < 18) {
        printf("Untergewicht\n");
    } else if (bmi < 25) {
        printf("Normalgewicht\n");
    } else if (bmi < 30) {
        printf("Übergewicht\n");
    } else {
        printf("Adipositas\n");
    }
}

// Menü anzeigen
static inline void life_menue() {
    printf("\n--- Life Science ---\n");
    printf("BMI Rechner\n");
    printf("Bitte Gewicht (kg) und Grosse (cm) eingeben.\n");
}

#endif