#include <stdio.h>

int main() {
    int wakeHour, wakeMinute;
    int sleepHours;

    printf("Wann wachst du auf? (Stunde Minute)\n");
    if (scanf("%d %d", &wakeHour, &wakeMinute) != 2) {
        printf("Fehler bei der Eingabe!\n");
        return 1;
    }

    printf("Wie viel willst du schlafen (in Stunden)?\n");
    if (scanf("%d", &sleepHours) != 1) {
        printf("Fehler bei der Eingabe!\n");
        return 1;
    }

    int sleepHour = wakeHour - sleepHours;
    int sleepMinute = wakeMinute;

    if (sleepHour < 0) {
        sleepHour += 24;
    }

    printf("\nUm %02d:%02d solltest du einschlafen,", sleepHour, sleepMinute);
    printf(" um %d Stunden zu schlafen.\n", sleepHours);

    return 0;
}
