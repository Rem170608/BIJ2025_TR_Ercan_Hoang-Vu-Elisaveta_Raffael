//
// Created by bulga on 21.08.2025.
//
#include "./bmi.h"

int main() {
    char nochmal;
    int gewicht, groesse, bmi;

    do {
        life_menue();

        printf("Gewicht (kg): ");
        scanf("%d", &gewicht);

        printf("Grosse (cm): ");
        scanf("%d", &groesse);

        bmi = bmi_berechnen(gewicht, groesse);

        printf("Dein BMI ist: %d\n", bmi);
        bmi_kategorie(bmi);

        printf("\nNochmal berechnen? (j/n): ");
        scanf(" %c", &nochmal);

    } while(nochmal == 'j' || nochmal == 'J');

    printf("Programm beendet.\n");
    return 0;
}