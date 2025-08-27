////
// Created by bulga on 20.08.2025.
//

#ifndef SPIEL_H
#define SPIEL_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Mögliche Spielzüge
typedef enum {
    SCHERE,
    STEIN,
    PAPIER
} Zug;

// Hilfsfunktion: Zug zu String
static const char* zugZuString(Zug zug) {
    switch (zug) {
        case SCHERE: return "Schere";
        case STEIN:  return "Stein";
        case PAPIER: return "Papier";
        default: return "";
    }
}

// Funktion: Zug des Computers
static Zug zugVomComputer() {
    int zufall = rand() % 3;
    return (Zug)zufall;
}

// Funktion: Zug des Spielers
static Zug zugVomSpieler() {
    int wahl;
    printf("\nWähle deinen Zug:\n1 - Schere\n2 - Stein\n3 - Papier\nDeine Wahl: ");
    scanf("%d", &wahl);

    while (wahl < 1 || wahl > 3) {
        printf("Ungültige Eingabe. Bitte 1, 2 oder 3 wählen: ");
        scanf("%d", &wahl);
    }

    return (Zug)(wahl - 1);
}

// Funktion: Gewinner bestimmen
static void werGewinnt(Zug spieler, Zug computer) {
    printf("Du: %s\nComputer: %s\n", zugZuString(spieler), zugZuString(computer));

    if (spieler == computer) {
        printf("Unentschieden!\n");
    } else if ((spieler == SCHERE && computer == PAPIER) ||
               (spieler == STEIN && computer == SCHERE) ||
               (spieler == PAPIER && computer == STEIN)) {
        printf("Du gewinnst!\n");
               } else {
                   printf("Computer gewinnt!\n");
               }
}

// Funktion: Spiel starten
static void spielStarten() {
    srand((unsigned int)time(NULL));
    char weiterspielen = 'j';

    while (weiterspielen == 'j' || weiterspielen == 'J') {
        Zug spieler = zugVomSpieler();
        Zug computer = zugVomComputer();
        werGewinnt(spieler, computer);

        printf("Möchtest du noch einmal spielen? (j/n): ");
        scanf(" %c", &weiterspielen);
    }
}

#endif