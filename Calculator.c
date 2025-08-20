#include <stdio.h>
#include "./rechner.h"


#define MAX 1000

int main() {
    int numbers[MAX];
    int count = 0;
    char op;

    printf("Willkommen beim Ganzzahlen-Rechner!\n");
    printf("Welche Operation moechten Sie ausfuehren?\n");
    printf(" + Addition\n");
    printf(" - Subtraktion\n");
    printf(" * Multiplikation\n");
    printf(" / Division\n");
    printf(" ^ Exponenten\n");
    printf(" r Wurzeln\n");
    printf(" ! Fakultaet\n");
    printf("Ihre Wahl: ");
    scanf(" %c", &op);

    printf("Geben Sie die Zahlen ein (0 beendet die Eingabe):\n");
    while (1) {
        int num;
        scanf("%d", &num);
        if (num == 0) break;
        numbers[count++] = num;
    }

    if (count == 0) {
        printf("Keine Zahlen eingegeben!\n");
        return 0;
    }

    int result = 0;
    switch (op) {
        case '+': result = add(numbers, count); break;
        case '-': result = sub(numbers, count); break;
        case '*': result = mul(numbers, count); break;
        case '/': result = divi(numbers, count); break;
        case '^': result = power(numbers, count); break;
        case 'r': result = wurzel(numbers, count); break;
        case '!': fakultaet(numbers, count); return 0;
        default:
            printf("Ungueltige Auswahl!\n");
            return 0;
    }

    printf("Ergebnis: %d\n", result);
    return 0;
}
