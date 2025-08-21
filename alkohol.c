//
// Created by bulga on 21.08.2025.
//

#include "./alkohol.h"

int main() {
    char nochmal;
    int gewicht, alkohol, geschlecht, promille100;

    do {
        alkohol_menue();

        printf("Korpergewicht (kg): ");
        scanf("%d", &gewicht);

        printf("Getrunkener Alkohol (Gramm): ");
        scanf("%d", &alkohol);

        printf("Geschlecht? (1 = Mann, 2 = Frau): ");
        scanf("%d", &geschlecht);

        promille100 = promille_berechnen(alkohol, gewicht, geschlecht == 1);

        promille_ausgabe(promille100);

        printf("\nNochmal berechnen? (j/n): ");
        scanf(" %c", &nochmal);

    } while(nochmal == 'j' || nochmal == 'J');

    printf("Programm beendet.\n");
    return 0;
}