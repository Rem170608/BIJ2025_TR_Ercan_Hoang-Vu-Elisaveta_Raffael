#include <stdio.h>
#include <unistd.h>
#include "./headers/calc-f.h"
#include "./headers/animations.h"

#define MAXTOK 128

int main() {
    double numbers[MAXTOK];
    char ops[MAXTOK];
    int ncount = 0, opcount = 0;

    char input[256];
    printf("Version \x1b[36m2.4.0\x1b[0m\n");
    printf("Welcome to\n");
    ASCII_1();
    printf("\tby Raffael\n");
    printf("\x1b[4mSupported Operations\x1b[0m:\n");
    printf("\x1b[31m+ = Addition\x1b[0m\n");
    printf("\x1b[33m- = Subtraction\x1b[0m\n");
    printf("\x1b[32m* = Multiplication\x1b[0m\n");
    printf("\x1b[34m/ = Division\x1b[0m\n");
    printf("\x1b[35m^ = Exponentiation\x1b[0m\n");
    printf("\x1b[36mr = Square Root\x1b[0m\n");
    printf("\x1b[38m! = Factorial\x1b[0m\n");
    printf("Enter calculation (e.g. 2+3*4-5/2):\n");

    fgets(input, sizeof(input), stdin);
    //progressbar();

    char *p = input;
    double num;
    while (*p) {
        while (*p == ' ' || *p == '\t') p++;
        if (sscanf(p, "%lf", &num) == 1) {
            while (*p && ((*p >= '0' && *p <= '9') || *p == '.')) p++;

            if (*p == '!') {
                printf("Factorial of %.0f is %llu\n", num, fakultaet((int)num));
                return 0;
            }
            if (*p == 'r') {
                double res = root(num);
                if (res == -1) printf("Error: negative root\n");
                else printf("Root of %.2f is %.2f\n", num, res);
                return 0;
            }

            numbers[ncount++] = num;
        }
        while (*p == ' ' || *p == '\t') p++;
        if (*p == '+' || *p == '-' || *p == '*' || *p == '/' || *p == '^') {
            ops[opcount++] = *p;
            p++;
        } else if (*p) {
            p++;
        }
    }

    for (int i = 0; i < opcount; i++) {
        if (ops[i] == '*' || ops[i] == '/' || ops[i] == '^') {
            double a = numbers[i], b = numbers[i+1], res;
            if (ops[i] == '*') res = multiply(a,b);
            else if (ops[i] == '/') res = divide(a,b);
            else res = exponentiate(a,b);
            numbers[i] = res;
            for (int j = i; j < opcount-1; j++) {
                numbers[j+1] = numbers[j+2];
                ops[j] = ops[j+1];
            }
            ncount--; opcount--; i--;
        }
    }

    double result = numbers[0];
    for (int i = 0; i < opcount; i++) {
        if (ops[i] == '+') result = add(result, numbers[i+1]);
        else result = subtract(result, numbers[i+1]);
    }

    printf("Final Result: %.2f\n", result);
    return 0;
}
