//
// Created by bulga on 21.08.2025.
//

#include "./fläche.h"

int main() {
    int wahl;
    char nochmal;

    do {
        menue_anzeigen();
        scanf("%d", &wahl);

        int a, b, h, r, ergebnis;

        switch(wahl) {
            case 1:
                printf("Radius: ");
                scanf("%d", &r);
                ergebnis = flaeche_kreis(r);
                printf("Fläche des Kreises: %d\n", ergebnis);
                break;
            case 2:
                printf("Seitenlänge: ");
                scanf("%d", &a);
                ergebnis = flaeche_quadrat(a);
                printf("Fläche des Quadrats: %d\n", ergebnis);
                break;
            case 3:
                printf("Länge: ");
                scanf("%d", &a);
                printf("Breite: ");
                scanf("%d", &b);
                ergebnis = flaeche_rechteck(a, b);
                printf("Fläche des Rechtecks: %d\n", ergebnis);
                break;
            case 4:
                printf("Grundseite: ");
                scanf("%d", &a);
                printf("Höhe: ");
                scanf("%d", &h);
                ergebnis = flaeche_dreieck(a, h);
                printf("Fläche des Dreiecks: %d\n", ergebnis);
                break;
            case 5:
                printf("Seite a: ");
                scanf("%d", &a);
                printf("Seite b: ");
                scanf("%d", &b);
                printf("Höhe: ");
                scanf("%d", &h);
                ergebnis = flaeche_trapez(a, b, h);
                printf("Fläche des Trapezes: %d\n", ergebnis);
                break;
            default:
                printf("Ungültige Eingabe!\n");
                break;
        }

        printf("\nMöchtest du nochmal spielen? (j/n): ");
        scanf(" %c", &nochmal);

    } while(nochmal == 'j' || nochmal == 'J');

    printf("Programm beendet.\n");
    return 0;
}