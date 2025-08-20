#include <stdio.h>
#include "./headers/calc-f.h"




int main() {
    int a = 0, b = 0;
    char op = 0;
    char input[100];
    printf("Version \x1b[31m2.1.5\x1b[0m\n");
    printf("Welcome to the Calcinator 3000\n");
    printf("\x1b[4mSupported Operations\x1b[0m:\n");
    printf("\x1b[31m+ = Addition\x1b[0m\n");
    printf("\x1b[33m- = Subtraction\x1b[0m\n");
    printf("\x1b[32m* = Multiplication\x1b[0m\n");
    printf("\x1b[34m/ = Division\x1b[0m\n");
    printf("\x1b[35m^ = Exponentiation\x1b[0m\n");
    printf("\x1b[36mr = Square Root\x1b[0m\n");
    printf("\x1b[38m! = Factorial\x1b[0m\n");
    printf("Enter calculation:\n");
    fgets(input, sizeof(input), stdin);

// removed stray character
    if (sscanf(input, "%d %c %d", &a, &op, &b) == 3) {

    } else if (sscanf(input, "%d%c", &a, &op) == 2 && op == 'r') {
        b = 0;

    } else if (sscanf(input, "%c%d", &op, &a) == 2 && op == 'r') {
        b = 0;
        // e.g. r4
        } else if (sscanf(input, "%d%c", &a, &op) == 2 && op == '!') {
            // Fakultät: e.g. 5!
            printf("Factorial of %d is %llu\n", a, fakultaet(a));
            return 0;
    } else {
        printf("Invalid input. Please use formats: number operator number, r<number>, <number>r\n");
        return 1;
    }

    switch (op) {
        case '+':
            add(a, b);
            break;
        case '-':
            subtract(a, b);
            break;
        case '*':
            multiply(a, b);
            break;
        case '/':
            divide(a, b);
            break;
        case '^':
            exponentiate(a, b);
            break;
        case 'r':
            root(a);
            break;
        default:
            printf("Unsupported operation: %c\n", op);
    }
    return 0;
}
