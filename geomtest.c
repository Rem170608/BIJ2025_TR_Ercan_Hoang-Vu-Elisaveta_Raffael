
#include <stdio.h>
#include "./headers/geom.h"

void berechne_flaeche() {
    int auswahl;
    printf("Wahlen Sie die Flache, die Sie berechnen mochten:\n");
    printf("1. Kreis\n");
    printf("2. Quadrat\n");
    printf("3. Rechteck\n");
    printf("4. Dreieck\n");
    printf("5. Trapez\n");
    printf("Ihre Auswahl: ");
    scanf("%d", &auswahl);

    double result;
    if (auswahl == 1) {
        double radius;
        printf("Geben Sie den Radius des Kreises ein: ");
        scanf("%lf", &radius);
        result = flaeche_kreis(radius);
    } else if (auswahl == 2) {
        double seite;
        printf("Geben Sie die Seitenlange des Quadrats ein: ");
        scanf("%lf", &seite);
        result = flaeche_quadrat(seite);
    } else if (auswahl == 3) {
        double breite, hoehe;
        printf("Geben Sie die Breite und Hohe des Rechtecks ein: ");
        scanf("%lf %lf", &breite, &hoehe);
        result = flaeche_rechteck(breite, hoehe);
    } else if (auswahl == 4) {
        double grundseite, hoehe;
        printf("Geben Sie die Grundseite und Hohe des Dreiecks ein: ");
        scanf("%lf %lf", &grundseite, &hoehe);
        result = flaeche_dreieck(grundseite, hoehe);
    } else if (auswahl == 5) {
        double grundseite1, grundseite2, hoehe;
        printf("Geben Sie die beiden Grundseiten und die Hohe des Trapezes ein: ");
        scanf("%lf %lf %lf", &grundseite1, &grundseite2, &hoehe);
        result = flaeche_trapez(grundseite1, grundseite2, hoehe);
    } else {
        printf("Ungultige Auswahl.\n");
        return;
    }

    printf("Das Ergebnis der Flache betragt: %.2f\n", result);
}

void berechne_volumen() {
    int auswahl;
    printf("Wahlen Sie das Volumen, das Sie berechnen mochten:\n");
    printf("1. Kugel\n");
    printf("2. Wurfel\n");
    printf("3. Quader\n");
    printf("4. Zylinder\n");
    printf("5. Kegel\n");
    printf("Ihre Auswahl: ");
    scanf("%d", &auswahl);

    double result;
    if (auswahl == 1) {
        double radius;
        printf("Geben Sie den Radius der Kugel ein: ");
        scanf("%lf", &radius);
        result = volumen_kugel(radius);
    } else if (auswahl == 2) {
        double seite;
        printf("Geben Sie die Seitenlange des Wurfels ein: ");
        scanf("%lf", &seite);
        result = volumen_wuerfel(seite);
    } else if (auswahl == 3) {
        double breite, hoehe, tiefe;
        printf("Geben Sie die Breite, Hohe und Tiefe des Quaders ein: ");
        scanf("%lf %lf %lf", &breite, &hoehe, &tiefe);
        result = volumen_quader(breite, hoehe, tiefe);
    } else if (auswahl == 4) {
        double radius, hoehe;
        printf("Geben Sie den Radius und die Hohe des Zylinders ein: ");
        scanf("%lf %lf", &radius, &hoehe);
        result = volumen_zylinder(radius, hoehe);
    } else if (auswahl == 5) {
        double radius, hoehe;
        printf("Geben Sie den Radius und die Hohe des Kegels ein: ");
        scanf("%lf %lf", &radius, &hoehe);
        result = volumen_kegel(radius, hoehe);
    } else {
        printf("Ungultige Auswahl.\n");
        return;
    }

    printf("Das Ergebnis des Volumens betragt: %.2f\n", result);
}

int main() {
    int auswahl;

    printf("Was mochten Sie berechnen?\n");
    printf("1. Flache\n");
    printf("2. Volumen\n");
    printf("Ihre Auswahl: ");
    scanf("%d", &auswahl);

    if (auswahl == 1) {
        berechne_flaeche();
    } else if (auswahl == 2) {
        berechne_volumen();
    } else {
        printf("Ungultige Auswahl.\n");
    }

    return 0;
}
