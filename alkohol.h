//
// Created by bulga on 21.08.2025.
//

#ifndef ALKOHOL_H
#define ALKOHOL_H

#include <stdio.h>

// Promille berechnen nach Widmark
static inline int promille_berechnen(int alkohol_gramm, int gewicht, int ist_mann) {
    // Reduktionsfaktor r = 0.7 (Mann), 0.6 (Frau)
    int faktor = ist_mann ? 70 : 60; // wir rechnen mit 100-fachem Wert, um int zu bleiben
    int promille = (alkohol_gramm * 100) / (gewicht * faktor);
    return promille; // entspricht echten Promille *100
}

// Ausgabe der Promille als "x.xx"
static inline void promille_ausgabe(int promille100) {
    printf("Dein Promillewert: %d.%02d ‰\n", promille100 / 100, promille100 % 100);

    if (promille100 < 30) {
        printf("Kein oder kaum Einfluss.\n");
    } else if (promille100 < 80) {
        printf("Leichte Beeintrachtigung.\n");
    } else if (promille100 < 200) {
        printf("Deutliche Fahruntuchtigkeit!\n");
    } else {
        printf("Lebensgefährlicher Zustand!\n");
    }
}

// Menü anzeigen
static inline void alkohol_menue() {
    printf("\n--- Life Science: Alkohol-Promillerechner ---\n");
    printf("Bitte gib dein Gewicht und die getrunkene Alkoholmenge an.\n");
    printf("Hinweis: Ergebnis ist eine Näherung!\n");
}

#endif