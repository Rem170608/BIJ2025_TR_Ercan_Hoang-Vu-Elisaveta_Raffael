//
// Created by bulga on 21.08.2025.
//

#ifndef BMI_H
#define BMI_H

#include <stdio.h>

// BMI berechnen
static inline double bmirechnen(double gewicht, double groesse) {
    if (groesse <= 0) return 0.0; // Schutz gegen Division durch 0
    return gewicht / (groesse * groesse);
}

// Gewicht abfragen
static inline double frageGewicht() {
    double gewicht;
    printf("Gib dein Gewicht in kg ein: ");
    scanf("%lf", &gewicht);
    return gewicht;
}

// Groesse abfragen
static inline double frageGroesse() {
    double groesse;
    printf("Gib deine Groesse in Metern ein (z.B. 1.80): ");
    scanf("%lf", &groesse);
    return groesse;
}

// Auswertung anzeigen
static inline void auswertung(double bmi) {
    printf("Dein BMI ist: %.2lf\n", bmi);

    if (bmi < 18.5)
        printf("=> Untergewicht\n");
    else if (bmi < 25)
        printf("=> Normalgewicht\n");
    else if (bmi < 30)
        printf("=> Uebergewicht\n");
    else
        printf("=> Adipositas\n");
}

// Ganze BMI-Runde
static inline void bmiRunde() {
    double gewicht = frageGewicht();
    double groesse = frageGroesse();
    double result = bmirechnen(gewicht, groesse);
    auswertung(result);
}

#endif