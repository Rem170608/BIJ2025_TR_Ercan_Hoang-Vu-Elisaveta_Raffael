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

    for (int i = 0; expr[i] != '\0'; i++) {
        if (expr[i] == '/') {

            int j = i + 1;
            while (expr[j] == ' ' || expr[j] == '\t') j++;

            if (expr[j] == '0') {
                printf("Fehler: Division durch 0 an Position %d\n", i);
                return 1;
            }
        }
    }

    for (int i = 0; expr[i] != '\0'; i++) {
        char c = expr[i];
        if (!(isdigit(c) || c == '.' || c == '+' || c == '-' ||
              c == '*' || c == '/' || c == '(' || c == ')' ||
              c == ' ' || c == '\t')) {
            printf("Fehler: Buchstabe '%c' auf %d\n", c, i);
            return 1;
              }
    }
    double result = eval(expr);
    printf("Ergebnis: %lf\n", result);

    return 0;
}
