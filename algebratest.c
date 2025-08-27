#include <stdio.h>
#include "./headers/algebra.h"

#define MAX_LEN 100

int main() {
    char expr[MAX_LEN];

    printf("Geben Sie den mathematischen Ausdruck ein: ");
    fgets(expr, MAX_LEN, stdin);  // Liest eine ganze Zeile ein (inkl. Leerzeichen und Operatoren)

    // Entferne evtl. das '\n' am Ende
    int i = 0;
    while (expr[i] != '\0') {
        if (expr[i] == '\n') {
            expr[i] = '\0';
            break;
        }
        i++;
    }

    double result = eval(expr);
    printf("Ergebnis: %lf\n", result);

    return 0;
}
