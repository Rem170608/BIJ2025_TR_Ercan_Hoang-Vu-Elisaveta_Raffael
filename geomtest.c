
#include <stdio.h>
#include "./headers/geom.h"

// Leert den Eingabepuffer
void eingabe_puffer_leeren() {
    while (getchar() != '\n');
}

// Liest ein einzelnes double sicher ein
int lese_double(const char* aufforderung, double* wert) {
    printf("%s", aufforderung);
    if (scanf("%lf", wert) != 1) {
        printf("Ungultige Eingabe. Bitte geben Sie eine Zahl ein.\n");
        eingabe_puffer_leeren();
        return 0;
    }
    return 1;
}

// Liest zwei double-Werte sicher ein
int lese_zwei_doubles(const char* aufforderung, double* a, double* b) {
    printf("%s", aufforderung);
    if (scanf("%lf %lf", a, b) != 2) {
        printf("Ungultige Eingabe. Bitte geben Sie zwei Zahlen ein.\n");
        eingabe_puffer_leeren();
        return 0;
    }
    return 1;
}

// Liest drei double-Werte sicher ein
int lese_drei_doubles(const char* aufforderung, double* a, double* b, double* c) {
    printf("%s", aufforderung);
    if (scanf("%lf %lf %lf", a, b, c) != 3) {
        printf("Ungultige Eingabe. Bitte geben Sie drei Zahlen ein.\n");
        eingabe_puffer_leeren();
        return 0;
    }
    return 1;
}



void berechne_flaeche()
{
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
        if (!lese_double("Geben Sie den Radius des Kreises ein in cm.: ", &radius)) {
            return;
        }
        result = flaeche_kreis(radius);

    } else if (auswahl == 2) {
        double seite;
        if (!lese_double("Geben Sie die Seitenlange des Quadrats ein in cm.: ", &seite)) {
            return;
        }
        result = flaeche_quadrat(seite);

    } else if (auswahl == 3) {
        double breite, hoehe;
        printf("Geben Sie die Breite und Hohe des Rechtecks ein in cm.: ");
        if (scanf("%lf %lf", &breite, &hoehe) != 2) {
            printf("Ungultige Eingabe. Bitte geben Sie zwei Zahlen ein.\n");
            eingabe_puffer_leeren();
            return;
        }
        result = flaeche_rechteck(breite, hoehe);

    } else if (auswahl == 4) {
        double grundseite, hoehe;
        printf("Geben Sie die Grundseite und Hohe des Dreiecks ein in cm.: ");
        if (scanf("%lf %lf", &grundseite, &hoehe) != 2) {
            printf("Ungultige Eingabe. Bitte geben Sie zwei Zahlen ein.\n");
            eingabe_puffer_leeren();
            return;
        }
        result = flaeche_dreieck(grundseite, hoehe);

    } else if (auswahl == 5) {
        double grundseite1, grundseite2, hoehe;
        printf("Geben Sie die beiden Grundseiten und die Hohe des Trapezes ein in cm.: ");
        if (scanf("%lf %lf %lf", &grundseite1, &grundseite2, &hoehe) != 3) {
            printf("Ungultige Eingabe. Bitte geben Sie drei Zahlen ein.\n");
            eingabe_puffer_leeren();
            return;
        }
        result = flaeche_trapez(grundseite1, grundseite2, hoehe);

    } else {
        printf("Ungultige Auswahl.\n");
        return;
    }

    printf("Das Ergebnis der Flache betragt in cm.: %.2f\n", result);
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
        if (!lese_double("Geben Sie den Radius der Kugel ein in cm.: ", &radius)) {
            return;
        }
        result = volumen_kugel(radius);

    } else if (auswahl == 2) {
        double seite;
        if (!lese_double("Geben Sie die Seitenlange des Wurfels ein in cm.: ", &seite)) {
            return;
        }
        result = volumen_wuerfel(seite);

    } else if (auswahl == 3) {
        double breite, hoehe, tiefe;
        if (!lese_drei_doubles("Geben Sie die Breite, Hohe und Tiefe des Quaders ein in cm.: ",
                               &breite, &hoehe, &tiefe)) {
            return;
                               }
        result = volumen_quader(breite, hoehe, tiefe);

    } else if (auswahl == 4) {
        double radius, hoehe;
        if (!lese_zwei_doubles("Geben Sie den Radius und die Hohe des Zylinders ein in cm.: ",
                               &radius, &hoehe)) {
            return;
                               }
        result = volumen_zylinder(radius, hoehe);

    } else if (auswahl == 5) {
        double radius, hoehe;
        if (!lese_zwei_doubles("Geben Sie den Radius und die Hohe des Kegels ein in cm.: ",
                               &radius, &hoehe)) {
            return;
                               }
        result = volumen_kegel(radius, hoehe);

    } else {
        printf("Ungultige Auswahl.\n");
        return;
    }

    printf("Das Ergebnis des Volumens betragt in cm.: %.2f\n", result);
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
