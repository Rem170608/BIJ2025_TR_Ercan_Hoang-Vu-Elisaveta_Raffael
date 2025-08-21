//
// Created by bulga on 21.08.2025.
//
#include <stdio.h>

int main (){
int grösse, gewicht;
printf ("was ist deine Grosse?");
scanf ("%d", &grösse);
printf ("was ist dein Gewicht?");
scanf ("%d", &gewicht);

printf("ur bmi is %d", gewicht/grösse^2);
/*
#include <stdio.h>

int main() {
    int wakeHour, wakeMinute;
    float sleepHours;

    printf("Wann wachst du auf? (Stunde Minute)\n");
    if (scanf("%d %d", &wakeHour, &wakeMinute) != 2) {
        printf("Fehler bei der Eingabe!\n");
        return 1;
    }

    printf("Wie viel willst du schlafen (z. B. 8.5 Stunden)?\n");
    if (scanf("%f", &sleepHours) != 1) {
        printf("Fehler bei der Eingabe!\n");
        return 1;
    }


    int totalSleepMinutes = (int)(sleepHours * 60);

    int wakeTotalMinutes = wakeHour * 60 + wakeMinute;

    int sleepTotalMinutes = wakeTotalMinutes - totalSleepMinutes;
    if (sleepTotalMinutes < 0) {
        sleepTotalMinutes += 24 * 60;
    }

    int sleepHour = sleepTotalMinutes / 60;
    int sleepMinute = sleepTotalMinutes % 60;

    printf("\nUm %02d:%02d solltest du einschlafen,", sleepHour, sleepMinute);
    printf(" um %.2f Stunden zu schlafen.\n", sleepHours);

    return 0; */
/*
    wenn (eineaktie = stark sinkt) {

        printf("WAKE UP");
    } do (kaufdieaktie);

    switch (life) {

        case working: do (dont send any notifications);

            case eating: do (show the prices) while (eineaktie = stark sinkt)

    }
*/

}